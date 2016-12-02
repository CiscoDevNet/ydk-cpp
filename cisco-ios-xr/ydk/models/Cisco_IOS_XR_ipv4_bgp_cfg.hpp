#ifndef _CISCO_IOS_XR_IPV4_BGP_CFG_
#define _CISCO_IOS_XR_IPV4_BGP_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

#include "Cisco_IOS_XR_ipv4_bgp_datatypes.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_cfg {

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
        std::unique_ptr<Entity> clone_ptr() override;


    class Instance : public Entity
    {
        public:
            Instance();
            ~Instance();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value instance_name; //type: string


        class InstanceAs : public Entity
        {
            public:
                InstanceAs();
                ~InstanceAs();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value as; //type: uint32


            class FourByteAs : public Entity
            {
                public:
                    FourByteAs();
                    ~FourByteAs();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value as; //type: uint32
                    Value bgp_running; //type: empty


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
                            Value vrf_name; //type: string


                        class VrfGlobal : public Entity
                        {
                            public:
                                VrfGlobal();
                                ~VrfGlobal();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value exists; //type: empty
                                Value router_id; //type: string
                                Value disable_enforce_first_as; //type: empty
                                Value best_path_cost_community; //type: empty
                                Value best_path_aigp_ignore; //type: empty
                                Value best_path_as_path_length; //type: empty
                                Value igp_redist_internal; //type: empty
                                Value multi_path_as_path_ignore_onwards; //type: empty
                                Value disable_fast_external_fallover; //type: empty
                                Value default_metric; //type: uint32
                                Value default_info_originate; //type: empty
                                Value best_path_confederation_paths; //type: empty
                                Value best_path_as_multipath_relax; //type: empty
                                Value disable_auto_soft_reset; //type: empty
                                Value disable_msg_log; //type: empty
                                Value disable_neighbor_logging; //type: empty
                                Value best_path_med_always; //type: empty
                                Value best_path_router_id; //type: empty
                                Value best_path_med_missing; //type: empty
                                Value local_preference; //type: uint32


                            class RouteDistinguisher : public Entity
                            {
                                public:
                                    RouteDistinguisher();
                                    ~RouteDistinguisher();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value type; //type: BgpRouteDistinguisherEnum
                                    Value as_xx; //type: uint32
                                    Value as; //type: uint32
                                    Value as_index; //type: uint32
                                    Value address; //type: string
                                    Value address_index; //type: uint32


                                    class BgpRouteDistinguisherEnum;


                            }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher


                            class LabelMode : public Entity
                            {
                                public:
                                    LabelMode();
                                    ~LabelMode();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value label_allocation_mode; //type: string
                                    Value route_policy_name; //type: string




                            }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::LabelMode


                            class VrfGlobalAfs : public Entity
                            {
                                public:
                                    VrfGlobalAfs();
                                    ~VrfGlobalAfs();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class VrfGlobalAf : public Entity
                                {
                                    public:
                                        VrfGlobalAf();
                                        ~VrfGlobalAf();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value af_name; //type: BgpAddressFamilyEnum
                                        Value rt_download; //type: empty
                                        Value allow_vpn_default_originate; //type: boolean
                                        Value dynamic_med_interval; //type: uint32
                                        Value enable; //type: empty
                                        Value table_policy; //type: string
                                        Value attribute_download; //type: empty
                                        Value best_external; //type: boolean
                                        Value additional_paths_receive; //type: BgpafAdditionalPathsCfgEnum
                                        Value permanent_network; //type: string
                                        Value next_hop_resolution_prefix_length_minimum; //type: uint32
                                        Value reset_weight_on_import; //type: boolean
                                        Value additional_paths_send; //type: BgpafAdditionalPathsCfgEnum
                                        Value disable_as_path_loop_check; //type: empty


                                    class Mvpn : public Entity
                                    {
                                        public:
                                            Mvpn();
                                            ~Mvpn();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value single_forwarder_selection; //type: BgpMvpnSfsSelectEnum


                                            class BgpMvpnSfsSelectEnum;


                                    }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn


                                    class Ebgp : public Entity
                                    {
                                        public:
                                            Ebgp();
                                            ~Ebgp();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value paths_value; //type: uint32
                                            Value unequal_cost; //type: boolean
                                            Value selective; //type: boolean
                                            Value order_by_igp_metric; //type: boolean




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp


                                    class Eibgp : public Entity
                                    {
                                        public:
                                            Eibgp();
                                            ~Eibgp();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value paths_value; //type: uint32
                                            Value unequal_cost; //type: boolean
                                            Value selective; //type: boolean
                                            Value order_by_igp_metric; //type: boolean




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp


                                    class Ibgp : public Entity
                                    {
                                        public:
                                            Ibgp();
                                            ~Ibgp();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value paths_value; //type: uint32
                                            Value unequal_cost; //type: boolean
                                            Value selective; //type: boolean
                                            Value order_by_igp_metric; //type: boolean




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp


                                    class AggregateAddresses : public Entity
                                    {
                                        public:
                                            AggregateAddresses();
                                            ~AggregateAddresses();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class AggregateAddress : public Entity
                                        {
                                            public:
                                                AggregateAddress();
                                                ~AggregateAddress();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value aggregate_addr; //type: string
                                                Value aggregate_prefix; //type: uint16
                                                Value generate_set_info; //type: boolean
                                                Value generate_confederation_set_info; //type: boolean
                                                Value summary_only; //type: boolean
                                                Value route_policy_name; //type: string




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses::AggregateAddress> > aggregate_address;


                                    }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses


                                    class Dampening : public Entity
                                    {
                                        public:
                                            Dampening();
                                            ~Dampening();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value half_life; //type: uint32
                                            Value reuse_threshold; //type: uint32
                                            Value suppress_threshold; //type: uint32
                                            Value suppress_time; //type: uint32
                                            Value route_policy_name; //type: string




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening


                                    class RipRoutes : public Entity
                                    {
                                        public:
                                            RipRoutes();
                                            ~RipRoutes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value default_metric; //type: uint32
                                            Value route_policy_name; //type: string
                                            Value not_used; //type: uint32




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes


                                    class LispRoutes : public Entity
                                    {
                                        public:
                                            LispRoutes();
                                            ~LispRoutes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value default_metric; //type: uint32
                                            Value route_policy_name; //type: string




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes


                                    class StaticRoutes : public Entity
                                    {
                                        public:
                                            StaticRoutes();
                                            ~StaticRoutes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value default_metric; //type: uint32
                                            Value route_policy_name; //type: string
                                            Value not_used; //type: uint32




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes


                                    class Distance : public Entity
                                    {
                                        public:
                                            Distance();
                                            ~Distance();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value external_routes; //type: uint32
                                            Value internal_routes; //type: uint32
                                            Value local_routes; //type: uint32




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance


                                    class LabelMode : public Entity
                                    {
                                        public:
                                            LabelMode();
                                            ~LabelMode();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value label_allocation_mode; //type: string
                                            Value route_policy_name; //type: string




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode


                                    class EigrpRoutes : public Entity
                                    {
                                        public:
                                            EigrpRoutes();
                                            ~EigrpRoutes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class EigrpRoute : public Entity
                                        {
                                            public:
                                                EigrpRoute();
                                                ~EigrpRoute();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value instance_name; //type: string
                                                Value default_metric; //type: uint32
                                                Value route_policy_name; //type: string
                                                Value redist_type; //type: string




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes::EigrpRoute> > eigrp_route;


                                    }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes


                                    class SourcedNetworks : public Entity
                                    {
                                        public:
                                            SourcedNetworks();
                                            ~SourcedNetworks();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class SourcedNetwork : public Entity
                                        {
                                            public:
                                                SourcedNetwork();
                                                ~SourcedNetwork();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value network_addr; //type: string
                                                Value network_prefix; //type: uint16
                                                Value backdoor; //type: boolean
                                                Value route_policy_name; //type: string




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks::SourcedNetwork> > sourced_network;


                                    }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks


                                    class ConnectedRoutes : public Entity
                                    {
                                        public:
                                            ConnectedRoutes();
                                            ~ConnectedRoutes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value default_metric; //type: uint32
                                            Value route_policy_name; //type: string
                                            Value not_used; //type: uint32




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes


                                    class AllocateLabel : public Entity
                                    {
                                        public:
                                            AllocateLabel();
                                            ~AllocateLabel();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value all; //type: boolean
                                            Value route_policy_name; //type: string




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel


                                    class AdditionalPathsSelection : public Entity
                                    {
                                        public:
                                            AdditionalPathsSelection();
                                            ~AdditionalPathsSelection();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value selection; //type: BgpafAdditionalPathsCfgEnum
                                            Value route_policy_name; //type: string


                                            class BgpafAdditionalPathsCfgEnum;


                                    }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection


                                    class OspfRoutes : public Entity
                                    {
                                        public:
                                            OspfRoutes();
                                            ~OspfRoutes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;


                                        class OspfRoute : public Entity
                                        {
                                            public:
                                                OspfRoute();
                                                ~OspfRoute();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value instance_name; //type: string
                                                Value default_metric; //type: uint32
                                                Value route_policy_name; //type: string
                                                Value redist_type; //type: string




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes::OspfRoute> > ospf_route;


                                    }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes


                                    class MobileRoutes : public Entity
                                    {
                                        public:
                                            MobileRoutes();
                                            ~MobileRoutes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value default_metric; //type: uint32
                                            Value route_policy_name; //type: string
                                            Value not_used; //type: uint32




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes


                                    class SubscriberRoutes : public Entity
                                    {
                                        public:
                                            SubscriberRoutes();
                                            ~SubscriberRoutes();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value default_metric; //type: uint32
                                            Value route_policy_name; //type: string
                                            Value not_used; //type: uint32




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AdditionalPathsSelection> additional_paths_selection;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AggregateAddresses> aggregate_addresses;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::AllocateLabel> allocate_label;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::ConnectedRoutes> connected_routes; // presence node
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Dampening> dampening; // presence node
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Distance> distance;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ebgp> ebgp; // presence node
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Eibgp> eibgp; // presence node
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::EigrpRoutes> eigrp_routes;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Ibgp> ibgp; // presence node
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LabelMode> label_mode;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::LispRoutes> lisp_routes; // presence node
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::MobileRoutes> mobile_routes; // presence node
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::Mvpn> mvpn;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::OspfRoutes> ospf_routes;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::RipRoutes> rip_routes; // presence node
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SourcedNetworks> sourced_networks;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::StaticRoutes> static_routes; // presence node
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf::SubscriberRoutes> subscriber_routes; // presence node
                                        class BgpAddressFamilyEnum;
                                        class BgpafAdditionalPathsCfgEnum;
                                        class BgpafAdditionalPathsCfgEnum;


                                }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs::VrfGlobalAf> > vrf_global_af;


                            }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs


                            class MplsActivatedInterfaces : public Entity
                            {
                                public:
                                    MplsActivatedInterfaces();
                                    ~MplsActivatedInterfaces();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class MplsActivatedInterface : public Entity
                                {
                                    public:
                                        MplsActivatedInterface();
                                        ~MplsActivatedInterface();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value interface_name; //type: string




                                }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces::MplsActivatedInterface> > mpls_activated_interface;


                            }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces


                            class GlobalTimers : public Entity
                            {
                                public:
                                    GlobalTimers();
                                    ~GlobalTimers();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value keepalive; //type: uint32
                                    Value hold_time; //type: uint32
                                    Value min_accept_hold_time; //type: uint32




                            }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers


                            class Bfd : public Entity
                            {
                                public:
                                    Bfd();
                                    ~Bfd();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value detection_multiplier; //type: uint32
                                    Value interval; //type: uint32




                            }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd


                            class SendSocketBufferSizes : public Entity
                            {
                                public:
                                    SendSocketBufferSizes();
                                    ~SendSocketBufferSizes();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value socket_send_size; //type: uint32
                                    Value bgp_send_size; //type: uint32




                            }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes


                            class ReceiveSocketBufferSizes : public Entity
                            {
                                public:
                                    ReceiveSocketBufferSizes();
                                    ~ReceiveSocketBufferSizes();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value socket_receive_size; //type: uint32
                                    Value bgp_receive_size; //type: uint32




                            }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes


                                std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::Bfd> bfd;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::GlobalTimers> global_timers;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::LabelMode> label_mode;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::MplsActivatedInterfaces> mpls_activated_interfaces;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::ReceiveSocketBufferSizes> receive_socket_buffer_sizes;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::RouteDistinguisher> route_distinguisher;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::SendSocketBufferSizes> send_socket_buffer_sizes;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal::VrfGlobalAfs> vrf_global_afs;


                        }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal


                        class VrfNeighbors : public Entity
                        {
                            public:
                                VrfNeighbors();
                                ~VrfNeighbors();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class VrfNeighbor : public Entity
                            {
                                public:
                                    VrfNeighbor();
                                    ~VrfNeighbor();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value neighbor_address; //type: string
                                    Value internal_vpn_client_ibgpce; //type: boolean
                                    Value session_group_add_member; //type: string
                                    Value egress_peer_engineering; //type: boolean
                                    Value neighbor_graceful_restart_stalepath_time; //type: uint32
                                    Value shutdown; //type: boolean
                                    Value description; //type: string
                                    Value neighbor_group_add_member; //type: string
                                    Value ebgp_recv_dmz; //type: boolean
                                    Value neighbor_graceful_restart; //type: boolean
                                    Value enforce_first_as; //type: boolean
                                    Value session_open_mode; //type: BgpTcpModeEnum
                                    Value ebgp_send_dmz_enable_modes; //type: BgpEbgpSendDmzEnableModeEnum
                                    Value suppress_all_capabilities; //type: boolean
                                    Value additional_paths_send_capability; //type: BgpNbrCapAdditionalPathsCfgEnum
                                    Value propagate_dmz_link_bandwidth; //type: boolean
                                    Value bfd_enable_modes; //type: BgpBfdEnableModeEnum
                                    Value ttl_security; //type: boolean
                                    Value neighbor_graceful_restart_time; //type: uint32
                                    Value bfd_multiplier; //type: uint32
                                    Value bfd_minimum_interval; //type: uint32
                                    Value additional_paths_receive_capability; //type: BgpNbrCapAdditionalPathsCfgEnum
                                    Value ignore_connected_check_ebgp; //type: boolean
                                    Value suppress_four_byte_as_capability; //type: boolean
                                    Value update_source_interface; //type: string


                                class VrfNeighborAfs : public Entity
                                {
                                    public:
                                        VrfNeighborAfs();
                                        ~VrfNeighborAfs();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class VrfNeighborAf : public Entity
                                    {
                                        public:
                                            VrfNeighborAf();
                                            ~VrfNeighborAf();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value af_name; //type: BgpAddressFamilyEnum
                                            Value neighbor_af_long_lived_graceful_restart_capable; //type: boolean
                                            Value send_ext_community_ebgp; //type: boolean
                                            Value accept_route_legacy_rt; //type: boolean
                                            Value send_community_ebgp; //type: boolean
                                            Value next_hop_unchanged; //type: boolean
                                            Value flowspec_validation; //type: BgpFlowspecValidationCfgEnum
                                            Value encapsulation_type; //type: BgpAfEncapsulationEnum
                                            Value as_override; //type: boolean
                                            Value multipath; //type: empty
                                            Value send_community_ebgp_graceful_shutdown; //type: boolean
                                            Value activate; //type: empty
                                            Value prefix_orf_policy; //type: string
                                            Value aigp; //type: BgpAigpCfgEnum
                                            Value aigp_send_med; //type: BgpAigpCfgEnum
                                            Value allow_as_in; //type: uint32
                                            Value advertise_orf; //type: BgpOrfEnum
                                            Value route_reflector_client; //type: boolean
                                            Value next_hop_self; //type: boolean
                                            Value route_policy_in; //type: string
                                            Value default_weight; //type: uint32
                                            Value af_group; //type: string
                                            Value next_hop_unchanged_multipath; //type: boolean
                                            Value accept_own; //type: boolean
                                            Value route_policy_out; //type: string
                                            Value advertise_permanent_network; //type: empty


                                        class AigpCostCommunity : public Entity
                                        {
                                            public:
                                                AigpCostCommunity();
                                                ~AigpCostCommunity();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value enable; //type: boolean
                                                Value cost_community_id; //type: uint32
                                                Value transitive; //type: boolean
                                                Value cost_community_poi_type; //type: BgpAigpCfgPoiEnum


                                                class BgpAigpCfgPoiEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity


                                        class AdvertiseDefImpDisableV6 : public Entity
                                        {
                                            public:
                                                AdvertiseDefImpDisableV6();
                                                ~AdvertiseDefImpDisableV6();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6


                                        class AdvertiseDisable : public Entity
                                        {
                                            public:
                                                AdvertiseDisable();
                                                ~AdvertiseDisable();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable


                                        class MaximumPrefixes : public Entity
                                        {
                                            public:
                                                MaximumPrefixes();
                                                ~MaximumPrefixes();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value prefix_limit; //type: uint32
                                                Value warning_percentage; //type: uint32
                                                Value warning_only; //type: boolean
                                                Value restart_time; //type: uint32
                                                Value discard_extra_paths; //type: boolean




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes


                                        class RemovePrivateAsEntireAsPathInbound : public Entity
                                        {
                                            public:
                                                RemovePrivateAsEntireAsPathInbound();
                                                ~RemovePrivateAsEntireAsPathInbound();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value enable; //type: boolean
                                                Value entire; //type: boolean




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound


                                        class AdvertiseDefImpDisableV4 : public Entity
                                        {
                                            public:
                                                AdvertiseDefImpDisableV4();
                                                ~AdvertiseDefImpDisableV4();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4


                                        class AdvertiseL2Vpnevpn : public Entity
                                        {
                                            public:
                                                AdvertiseL2Vpnevpn();
                                                ~AdvertiseL2Vpnevpn();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2Vpnevpn


                                        class AdvertiseLocalL2Vpnevpn : public Entity
                                        {
                                            public:
                                                AdvertiseLocalL2Vpnevpn();
                                                ~AdvertiseLocalL2Vpnevpn();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2Vpnevpn


                                        class NeighborAfLongLivedGracefulRestartStaleTime : public Entity
                                        {
                                            public:
                                                NeighborAfLongLivedGracefulRestartStaleTime();
                                                ~NeighborAfLongLivedGracefulRestartStaleTime();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value stale_time_send; //type: uint32
                                                Value stale_time_accept; //type: uint32




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime


                                        class SiteOfOrigin : public Entity
                                        {
                                            public:
                                                SiteOfOrigin();
                                                ~SiteOfOrigin();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value type; //type: BgpSiteOfOriginEnum
                                                Value as_xx; //type: uint32
                                                Value as; //type: uint32
                                                Value as_index; //type: uint32
                                                Value address; //type: string
                                                Value address_index; //type: uint32


                                                class BgpSiteOfOriginEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin


                                        class AdvertiseV6 : public Entity
                                        {
                                            public:
                                                AdvertiseV6();
                                                ~AdvertiseV6();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6


                                        class AdvertiseLocalV6 : public Entity
                                        {
                                            public:
                                                AdvertiseLocalV6();
                                                ~AdvertiseLocalV6();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6


                                        class Import : public Entity
                                        {
                                            public:
                                                Import();
                                                ~Import();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value import_stitching; //type: boolean
                                                Value import_reoriginate; //type: boolean
                                                Value import_reoriginate_stitching; //type: boolean




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import


                                        class DefaultOriginate : public Entity
                                        {
                                            public:
                                                DefaultOriginate();
                                                ~DefaultOriginate();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value enable; //type: boolean
                                                Value route_policy_name; //type: string




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate


                                        class SoftReconfiguration : public Entity
                                        {
                                            public:
                                                SoftReconfiguration();
                                                ~SoftReconfiguration();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value inbound_soft; //type: boolean
                                                Value soft_always; //type: boolean




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration


                                        class AdvertiseV4 : public Entity
                                        {
                                            public:
                                                AdvertiseV4();
                                                ~AdvertiseV4();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4


                                        class AdvertiseLocalV4 : public Entity
                                        {
                                            public:
                                                AdvertiseLocalV4();
                                                ~AdvertiseLocalV4();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4


                                        class RemovePrivateAsEntireAsPath : public Entity
                                        {
                                            public:
                                                RemovePrivateAsEntireAsPath();
                                                ~RemovePrivateAsEntireAsPath();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value enable; //type: boolean
                                                Value entire; //type: boolean




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV4> advertise_def_imp_disable_v4;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDefImpDisableV6> advertise_def_imp_disable_v6;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseDisable> advertise_disable;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseL2Vpnevpn> advertise_l2vpnevpn;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalL2Vpnevpn> advertise_local_l2vpnevpn;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV4> advertise_local_v4;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseLocalV6> advertise_local_v6;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV4> advertise_v4;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AdvertiseV6> advertise_v6;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::AigpCostCommunity> aigp_cost_community; // presence node
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::DefaultOriginate> default_originate;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::Import> import;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::MaximumPrefixes> maximum_prefixes; // presence node
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::NeighborAfLongLivedGracefulRestartStaleTime> neighbor_af_long_lived_graceful_restart_stale_time;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPath> remove_private_as_entire_as_path; // presence node
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::RemovePrivateAsEntireAsPathInbound> remove_private_as_entire_as_path_inbound; // presence node
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SiteOfOrigin> site_of_origin;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf::SoftReconfiguration> soft_reconfiguration;
                                            class BgpAddressFamilyEnum;
                                            class BgpOrfEnum;
                                            class BgpAigpCfgEnum;
                                            class BgpAigpCfgEnum;
                                            class BgpAfEncapsulationEnum;
                                            class BgpFlowspecValidationCfgEnum;


                                    }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs::VrfNeighborAf> > vrf_neighbor_af;


                                }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs


                                class LocalAddress : public Entity
                                {
                                    public:
                                        LocalAddress();
                                        ~LocalAddress();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value local_address_disable; //type: boolean
                                        Value local_ip_address; //type: string




                                }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress


                                class BmpActivates : public Entity
                                {
                                    public:
                                        BmpActivates();
                                        ~BmpActivates();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class BmpActivate : public Entity
                                    {
                                        public:
                                            BmpActivate();
                                            ~BmpActivate();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value server_id; //type: uint32




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates::BmpActivate> > bmp_activate;


                                }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates


                                class EbgpMultihop : public Entity
                                {
                                    public:
                                        EbgpMultihop();
                                        ~EbgpMultihop();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value max_hop_count; //type: uint32
                                        Value mpls_deactivation; //type: boolean




                                }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop


                                class RemoteAs : public Entity
                                {
                                    public:
                                        RemoteAs();
                                        ~RemoteAs();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value as_xx; //type: uint32
                                        Value as_yy; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs


                                class LocalAs : public Entity
                                {
                                    public:
                                        LocalAs();
                                        ~LocalAs();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value as_xx; //type: uint32
                                        Value as_yy; //type: uint32
                                        Value no_prepend; //type: empty
                                        Value disable; //type: empty
                                        Value replace_as; //type: empty
                                        Value dual_as; //type: empty




                                }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs


                                class Password : public Entity
                                {
                                    public:
                                        Password();
                                        ~Password();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value password_disable; //type: boolean
                                        Value password; //type: string




                                }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password


                                class AdvertisementInterval : public Entity
                                {
                                    public:
                                        AdvertisementInterval();
                                        ~AdvertisementInterval();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value minimum_interval; //type: uint32
                                        Value minimum_interval_msecs; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval


                                class NeighborClusterId : public Entity
                                {
                                    public:
                                        NeighborClusterId();
                                        ~NeighborClusterId();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value cluster_id_number; //type: uint32
                                        Value cluster_id_address; //type: string




                                }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId


                                class Tcpmss : public Entity
                                {
                                    public:
                                        Tcpmss();
                                        ~Tcpmss();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value tcpmss_disable; //type: boolean
                                        Value mss; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss


                                class Tos : public Entity
                                {
                                    public:
                                        Tos();
                                        ~Tos();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value type; //type: BgpTosEnum
                                        Value value_; //type: one of uint32, enumeration


                                        class BgpTosEnum;
                                        class BgpPrecedenceDscpEnum;


                                }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos


                                class UpdateInFiltering : public Entity
                                {
                                    public:
                                        UpdateInFiltering();
                                        ~UpdateInFiltering();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value enable; //type: empty
                                        Value update_in_filtering_attribute_filter_group; //type: string
                                        Value update_in_filtering_syslog_disable; //type: empty


                                    class UpdateInFilteringMessageBuffers : public Entity
                                    {
                                        public:
                                            UpdateInFilteringMessageBuffers();
                                            ~UpdateInFilteringMessageBuffers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value number_of_buffers; //type: uint32
                                            Value non_circular_buffer; //type: boolean




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers> update_in_filtering_message_buffers; // presence node


                                }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering


                                class MsgLogOut : public Entity
                                {
                                    public:
                                        MsgLogOut();
                                        ~MsgLogOut();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value msg_buf_count; //type: uint32
                                        Value msg_log_disable; //type: boolean
                                        Value msg_log_inherit_disable; //type: boolean




                                }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut


                                class ReceiveBufferSize : public Entity
                                {
                                    public:
                                        ReceiveBufferSize();
                                        ~ReceiveBufferSize();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value socket_receive_size; //type: uint32
                                        Value bgp_receive_size; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize


                                class MsgLogIn : public Entity
                                {
                                    public:
                                        MsgLogIn();
                                        ~MsgLogIn();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value msg_buf_count; //type: uint32
                                        Value msg_log_disable; //type: boolean
                                        Value msg_log_inherit_disable; //type: boolean




                                }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn


                                class SendBufferSize : public Entity
                                {
                                    public:
                                        SendBufferSize();
                                        ~SendBufferSize();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value socket_send_size; //type: uint32
                                        Value bgp_send_size; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize


                                class Timers : public Entity
                                {
                                    public:
                                        Timers();
                                        ~Timers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value keepalive_interval; //type: uint32
                                        Value hold_time; //type: uint32
                                        Value min_accept_hold_time; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers


                                class Keychain : public Entity
                                {
                                    public:
                                        Keychain();
                                        ~Keychain();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value keychain_disable; //type: boolean
                                        Value keychain_name; //type: string




                                }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain


                                class GracefulMaintenance : public Entity
                                {
                                    public:
                                        GracefulMaintenance();
                                        ~GracefulMaintenance();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value enable; //type: empty
                                        Value graceful_maintenance_activate; //type: boolean


                                    class GracefulMaintenanceLocalPreference : public Entity
                                    {
                                        public:
                                            GracefulMaintenanceLocalPreference();
                                            ~GracefulMaintenanceLocalPreference();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value gshut_loc_pref_disable; //type: boolean
                                            Value local_preference; //type: uint32




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference


                                    class GracefulMaintenanceAsPrepends : public Entity
                                    {
                                        public:
                                            GracefulMaintenanceAsPrepends();
                                            ~GracefulMaintenanceAsPrepends();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value gshut_prepends_disable; //type: boolean
                                            Value as_prepends; //type: uint32




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends> graceful_maintenance_as_prepends;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference> graceful_maintenance_local_preference;


                                }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance


                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::AdvertisementInterval> advertisement_interval; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::BmpActivates> bmp_activates;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::EbgpMultihop> ebgp_multihop;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::GracefulMaintenance> graceful_maintenance;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Keychain> keychain;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAddress> local_address;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::LocalAs> local_as;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogIn> msg_log_in;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::MsgLogOut> msg_log_out;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::NeighborClusterId> neighbor_cluster_id;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Password> password;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::ReceiveBufferSize> receive_buffer_size;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::RemoteAs> remote_as;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::SendBufferSize> send_buffer_size;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tcpmss> tcpmss;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Timers> timers;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::Tos> tos;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::UpdateInFiltering> update_in_filtering;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor::VrfNeighborAfs> vrf_neighbor_afs;
                                    class BgpNbrCapAdditionalPathsCfgEnum;
                                    class BgpNbrCapAdditionalPathsCfgEnum;
                                    class BgpBfdEnableModeEnum;
                                    class BgpEbgpSendDmzEnableModeEnum;
                                    class BgpTcpModeEnum;


                            }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors::VrfNeighbor> > vrf_neighbor;


                        }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors


                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfGlobal> vrf_global;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf::VrfNeighbors> vrf_neighbors;


                    }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs::Vrf> > vrf;


                }; // Bgp::Instance::InstanceAs::FourByteAs::Vrfs


                class DefaultVrf : public Entity
                {
                    public:
                        DefaultVrf();
                        ~DefaultVrf();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class BgpEntity : public Entity
                    {
                        public:
                            BgpEntity();
                            ~BgpEntity();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class Neighbors : public Entity
                        {
                            public:
                                Neighbors();
                                ~Neighbors();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class Neighbor : public Entity
                            {
                                public:
                                    Neighbor();
                                    ~Neighbor();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value neighbor_address; //type: string
                                    Value internal_vpn_client_ibgpce; //type: boolean
                                    Value session_group_add_member; //type: string
                                    Value egress_peer_engineering; //type: boolean
                                    Value neighbor_graceful_restart_stalepath_time; //type: uint32
                                    Value shutdown; //type: boolean
                                    Value description; //type: string
                                    Value neighbor_group_add_member; //type: string
                                    Value ebgp_recv_dmz; //type: boolean
                                    Value neighbor_graceful_restart; //type: boolean
                                    Value enforce_first_as; //type: boolean
                                    Value session_open_mode; //type: BgpTcpModeEnum
                                    Value rpki_origin_as_validation_disable; //type: empty
                                    Value ebgp_send_dmz_enable_modes; //type: BgpEbgpSendDmzEnableModeEnum
                                    Value suppress_all_capabilities; //type: boolean
                                    Value rpki_bestpath_origin_as_allow_invalid; //type: empty
                                    Value additional_paths_send_capability; //type: BgpNbrCapAdditionalPathsCfgEnum
                                    Value propagate_dmz_link_bandwidth; //type: boolean
                                    Value bfd_enable_modes; //type: BgpBfdEnableModeEnum
                                    Value ttl_security; //type: boolean
                                    Value neighbor_graceful_restart_time; //type: uint32
                                    Value bfd_multiplier; //type: uint32
                                    Value bfd_minimum_interval; //type: uint32
                                    Value additional_paths_receive_capability; //type: BgpNbrCapAdditionalPathsCfgEnum
                                    Value ignore_connected_check_ebgp; //type: boolean
                                    Value suppress_four_byte_as_capability; //type: boolean
                                    Value update_source_interface; //type: string


                                class NeighborAfs : public Entity
                                {
                                    public:
                                        NeighborAfs();
                                        ~NeighborAfs();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class NeighborAf : public Entity
                                    {
                                        public:
                                            NeighborAf();
                                            ~NeighborAf();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value af_name; //type: BgpAddressFamilyEnum
                                            Value neighbor_af_long_lived_graceful_restart_capable; //type: boolean
                                            Value l2vpn_signalling; //type: BgpSignalEnum
                                            Value send_ext_community_ebgp; //type: boolean
                                            Value accept_route_legacy_rt; //type: boolean
                                            Value send_community_ebgp; //type: boolean
                                            Value send_multicast_attr; //type: BgpSendMcastAttrCfgEnum
                                            Value next_hop_unchanged; //type: boolean
                                            Value rpki_origin_as_validation_disable; //type: empty
                                            Value flowspec_validation; //type: BgpFlowspecValidationCfgEnum
                                            Value encapsulation_type; //type: BgpAfEncapsulationEnum
                                            Value rpki_bestpath_origin_as_allow_invalid; //type: empty
                                            Value as_override; //type: boolean
                                            Value multipath; //type: empty
                                            Value send_community_ebgp_graceful_shutdown; //type: boolean
                                            Value activate; //type: empty
                                            Value prefix_orf_policy; //type: string
                                            Value aigp; //type: BgpAigpCfgEnum
                                            Value aigp_send_med; //type: BgpAigpCfgEnum
                                            Value allow_as_in; //type: uint32
                                            Value advertise_orf; //type: BgpOrfEnum
                                            Value route_reflector_client; //type: boolean
                                            Value next_hop_self; //type: boolean
                                            Value route_policy_in; //type: string
                                            Value default_weight; //type: uint32
                                            Value af_group; //type: string
                                            Value next_hop_unchanged_multipath; //type: boolean
                                            Value accept_own; //type: boolean
                                            Value route_policy_out; //type: string
                                            Value advertise_permanent_network; //type: empty


                                        class AigpCostCommunity : public Entity
                                        {
                                            public:
                                                AigpCostCommunity();
                                                ~AigpCostCommunity();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value enable; //type: boolean
                                                Value cost_community_id; //type: uint32
                                                Value transitive; //type: boolean
                                                Value cost_community_poi_type; //type: BgpAigpCfgPoiEnum


                                                class BgpAigpCfgPoiEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity


                                        class AdvertiseDefImpDisableV6 : public Entity
                                        {
                                            public:
                                                AdvertiseDefImpDisableV6();
                                                ~AdvertiseDefImpDisableV6();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6


                                        class AdvertiseDisable : public Entity
                                        {
                                            public:
                                                AdvertiseDisable();
                                                ~AdvertiseDisable();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable


                                        class MaximumPrefixes : public Entity
                                        {
                                            public:
                                                MaximumPrefixes();
                                                ~MaximumPrefixes();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value prefix_limit; //type: uint32
                                                Value warning_percentage; //type: uint32
                                                Value warning_only; //type: boolean
                                                Value restart_time; //type: uint32
                                                Value discard_extra_paths; //type: boolean




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes


                                        class RemovePrivateAsEntireAsPathInbound : public Entity
                                        {
                                            public:
                                                RemovePrivateAsEntireAsPathInbound();
                                                ~RemovePrivateAsEntireAsPathInbound();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value enable; //type: boolean
                                                Value entire; //type: boolean




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound


                                        class AdvertiseDefImpDisableV4 : public Entity
                                        {
                                            public:
                                                AdvertiseDefImpDisableV4();
                                                ~AdvertiseDefImpDisableV4();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4


                                        class AdvertiseL2Vpnevpn : public Entity
                                        {
                                            public:
                                                AdvertiseL2Vpnevpn();
                                                ~AdvertiseL2Vpnevpn();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2Vpnevpn


                                        class AdvertiseLocalL2Vpnevpn : public Entity
                                        {
                                            public:
                                                AdvertiseLocalL2Vpnevpn();
                                                ~AdvertiseLocalL2Vpnevpn();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2Vpnevpn


                                        class NeighborAfLongLivedGracefulRestartStaleTime : public Entity
                                        {
                                            public:
                                                NeighborAfLongLivedGracefulRestartStaleTime();
                                                ~NeighborAfLongLivedGracefulRestartStaleTime();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value stale_time_send; //type: uint32
                                                Value stale_time_accept; //type: uint32




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime


                                        class AdvertiseV6 : public Entity
                                        {
                                            public:
                                                AdvertiseV6();
                                                ~AdvertiseV6();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6


                                        class AdvertiseLocalV6 : public Entity
                                        {
                                            public:
                                                AdvertiseLocalV6();
                                                ~AdvertiseLocalV6();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6


                                        class Import : public Entity
                                        {
                                            public:
                                                Import();
                                                ~Import();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value import_stitching; //type: boolean
                                                Value import_reoriginate; //type: boolean
                                                Value import_reoriginate_stitching; //type: boolean




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import


                                        class DefaultOriginate : public Entity
                                        {
                                            public:
                                                DefaultOriginate();
                                                ~DefaultOriginate();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value enable; //type: boolean
                                                Value route_policy_name; //type: string




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate


                                        class SoftReconfiguration : public Entity
                                        {
                                            public:
                                                SoftReconfiguration();
                                                ~SoftReconfiguration();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value inbound_soft; //type: boolean
                                                Value soft_always; //type: boolean




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration


                                        class AdvertiseV4 : public Entity
                                        {
                                            public:
                                                AdvertiseV4();
                                                ~AdvertiseV4();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4


                                        class AdvertiseLocalV4 : public Entity
                                        {
                                            public:
                                                AdvertiseLocalV4();
                                                ~AdvertiseLocalV4();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4


                                        class RemovePrivateAsEntireAsPath : public Entity
                                        {
                                            public:
                                                RemovePrivateAsEntireAsPath();
                                                ~RemovePrivateAsEntireAsPath();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value enable; //type: boolean
                                                Value entire; //type: boolean




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV4> advertise_def_imp_disable_v4;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDefImpDisableV6> advertise_def_imp_disable_v6;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseDisable> advertise_disable;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseL2Vpnevpn> advertise_l2vpnevpn;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalL2Vpnevpn> advertise_local_l2vpnevpn;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV4> advertise_local_v4;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseLocalV6> advertise_local_v6;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV4> advertise_v4;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AdvertiseV6> advertise_v6;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::AigpCostCommunity> aigp_cost_community; // presence node
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::DefaultOriginate> default_originate;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::Import> import;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::MaximumPrefixes> maximum_prefixes; // presence node
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::NeighborAfLongLivedGracefulRestartStaleTime> neighbor_af_long_lived_graceful_restart_stale_time;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPath> remove_private_as_entire_as_path; // presence node
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::RemovePrivateAsEntireAsPathInbound> remove_private_as_entire_as_path_inbound; // presence node
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf::SoftReconfiguration> soft_reconfiguration;
                                            class BgpAddressFamilyEnum;
                                            class BgpOrfEnum;
                                            class BgpAigpCfgEnum;
                                            class BgpAigpCfgEnum;
                                            class BgpAfEncapsulationEnum;
                                            class BgpFlowspecValidationCfgEnum;
                                            class BgpSignalEnum;
                                            class BgpSendMcastAttrCfgEnum;


                                    }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs::NeighborAf> > neighbor_af;


                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs


                                class LocalAddress : public Entity
                                {
                                    public:
                                        LocalAddress();
                                        ~LocalAddress();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value local_address_disable; //type: boolean
                                        Value local_ip_address; //type: string




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress


                                class BmpActivates : public Entity
                                {
                                    public:
                                        BmpActivates();
                                        ~BmpActivates();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class BmpActivate : public Entity
                                    {
                                        public:
                                            BmpActivate();
                                            ~BmpActivate();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value server_id; //type: uint32




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivate


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates::BmpActivate> > bmp_activate;


                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates


                                class EbgpMultihop : public Entity
                                {
                                    public:
                                        EbgpMultihop();
                                        ~EbgpMultihop();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value max_hop_count; //type: uint32
                                        Value mpls_deactivation; //type: boolean




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop


                                class RemoteAs : public Entity
                                {
                                    public:
                                        RemoteAs();
                                        ~RemoteAs();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value as_xx; //type: uint32
                                        Value as_yy; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs


                                class LocalAs : public Entity
                                {
                                    public:
                                        LocalAs();
                                        ~LocalAs();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value as_xx; //type: uint32
                                        Value as_yy; //type: uint32
                                        Value no_prepend; //type: empty
                                        Value disable; //type: empty
                                        Value replace_as; //type: empty
                                        Value dual_as; //type: empty




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs


                                class Password : public Entity
                                {
                                    public:
                                        Password();
                                        ~Password();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value password_disable; //type: boolean
                                        Value password; //type: string




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password


                                class AdvertisementInterval : public Entity
                                {
                                    public:
                                        AdvertisementInterval();
                                        ~AdvertisementInterval();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value minimum_interval; //type: uint32
                                        Value minimum_interval_msecs; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval


                                class NeighborClusterId : public Entity
                                {
                                    public:
                                        NeighborClusterId();
                                        ~NeighborClusterId();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value cluster_id_number; //type: uint32
                                        Value cluster_id_address; //type: string




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId


                                class Tcpmss : public Entity
                                {
                                    public:
                                        Tcpmss();
                                        ~Tcpmss();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value tcpmss_disable; //type: boolean
                                        Value mss; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss


                                class Tos : public Entity
                                {
                                    public:
                                        Tos();
                                        ~Tos();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value type; //type: BgpTosEnum
                                        Value value_; //type: one of uint32, enumeration


                                        class BgpTosEnum;
                                        class BgpPrecedenceDscpEnum;


                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos


                                class UpdateInFiltering : public Entity
                                {
                                    public:
                                        UpdateInFiltering();
                                        ~UpdateInFiltering();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value enable; //type: empty
                                        Value update_in_filtering_attribute_filter_group; //type: string
                                        Value update_in_filtering_syslog_disable; //type: empty


                                    class UpdateInFilteringMessageBuffers : public Entity
                                    {
                                        public:
                                            UpdateInFilteringMessageBuffers();
                                            ~UpdateInFilteringMessageBuffers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value number_of_buffers; //type: uint32
                                            Value non_circular_buffer; //type: boolean




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering::UpdateInFilteringMessageBuffers> update_in_filtering_message_buffers; // presence node


                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering


                                class MsgLogOut : public Entity
                                {
                                    public:
                                        MsgLogOut();
                                        ~MsgLogOut();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value msg_buf_count; //type: uint32
                                        Value msg_log_disable; //type: boolean
                                        Value msg_log_inherit_disable; //type: boolean




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut


                                class ReceiveBufferSize : public Entity
                                {
                                    public:
                                        ReceiveBufferSize();
                                        ~ReceiveBufferSize();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value socket_receive_size; //type: uint32
                                        Value bgp_receive_size; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize


                                class MsgLogIn : public Entity
                                {
                                    public:
                                        MsgLogIn();
                                        ~MsgLogIn();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value msg_buf_count; //type: uint32
                                        Value msg_log_disable; //type: boolean
                                        Value msg_log_inherit_disable; //type: boolean




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn


                                class SendBufferSize : public Entity
                                {
                                    public:
                                        SendBufferSize();
                                        ~SendBufferSize();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value socket_send_size; //type: uint32
                                        Value bgp_send_size; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize


                                class Timers : public Entity
                                {
                                    public:
                                        Timers();
                                        ~Timers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value keepalive_interval; //type: uint32
                                        Value hold_time; //type: uint32
                                        Value min_accept_hold_time; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers


                                class Keychain : public Entity
                                {
                                    public:
                                        Keychain();
                                        ~Keychain();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value keychain_disable; //type: boolean
                                        Value keychain_name; //type: string




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain


                                class GracefulMaintenance : public Entity
                                {
                                    public:
                                        GracefulMaintenance();
                                        ~GracefulMaintenance();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value enable; //type: empty
                                        Value graceful_maintenance_activate; //type: boolean


                                    class GracefulMaintenanceLocalPreference : public Entity
                                    {
                                        public:
                                            GracefulMaintenanceLocalPreference();
                                            ~GracefulMaintenanceLocalPreference();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value gshut_loc_pref_disable; //type: boolean
                                            Value local_preference; //type: uint32




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference


                                    class GracefulMaintenanceAsPrepends : public Entity
                                    {
                                        public:
                                            GracefulMaintenanceAsPrepends();
                                            ~GracefulMaintenanceAsPrepends();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value gshut_prepends_disable; //type: boolean
                                            Value as_prepends; //type: uint32




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceAsPrepends> graceful_maintenance_as_prepends;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance::GracefulMaintenanceLocalPreference> graceful_maintenance_local_preference;


                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance


                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::AdvertisementInterval> advertisement_interval; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::BmpActivates> bmp_activates;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::EbgpMultihop> ebgp_multihop;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::GracefulMaintenance> graceful_maintenance;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Keychain> keychain;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAddress> local_address;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::LocalAs> local_as;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogIn> msg_log_in;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::MsgLogOut> msg_log_out;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborAfs> neighbor_afs;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::NeighborClusterId> neighbor_cluster_id;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Password> password;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::ReceiveBufferSize> receive_buffer_size;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::RemoteAs> remote_as;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::SendBufferSize> send_buffer_size;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tcpmss> tcpmss;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Timers> timers;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::Tos> tos;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor::UpdateInFiltering> update_in_filtering;
                                    class BgpNbrCapAdditionalPathsCfgEnum;
                                    class BgpNbrCapAdditionalPathsCfgEnum;
                                    class BgpBfdEnableModeEnum;
                                    class BgpEbgpSendDmzEnableModeEnum;
                                    class BgpTcpModeEnum;


                            }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors::Neighbor> > neighbor;


                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors


                        class NeighborGroups : public Entity
                        {
                            public:
                                NeighborGroups();
                                ~NeighborGroups();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class NeighborGroup : public Entity
                            {
                                public:
                                    NeighborGroup();
                                    ~NeighborGroup();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value neighbor_group_name; //type: string
                                    Value neighbor_group_add_member; //type: string
                                    Value internal_vpn_client_ibgpce; //type: boolean
                                    Value session_group_add_member; //type: string
                                    Value egress_peer_engineering; //type: boolean
                                    Value neighbor_graceful_restart_stalepath_time; //type: uint32
                                    Value shutdown; //type: boolean
                                    Value description; //type: string
                                    Value ebgp_recv_dmz; //type: boolean
                                    Value neighbor_graceful_restart; //type: boolean
                                    Value enforce_first_as; //type: boolean
                                    Value session_open_mode; //type: BgpTcpModeEnum
                                    Value rpki_origin_as_validation_disable; //type: empty
                                    Value ebgp_send_dmz_enable_modes; //type: BgpEbgpSendDmzEnableModeEnum
                                    Value suppress_all_capabilities; //type: boolean
                                    Value rpki_bestpath_origin_as_allow_invalid; //type: empty
                                    Value additional_paths_send_capability; //type: BgpNbrCapAdditionalPathsCfgEnum
                                    Value propagate_dmz_link_bandwidth; //type: boolean
                                    Value bfd_enable_modes; //type: BgpBfdEnableModeEnum
                                    Value ttl_security; //type: boolean
                                    Value neighbor_graceful_restart_time; //type: uint32
                                    Value bfd_multiplier; //type: uint32
                                    Value bfd_minimum_interval; //type: uint32
                                    Value additional_paths_receive_capability; //type: BgpNbrCapAdditionalPathsCfgEnum
                                    Value ignore_connected_check_ebgp; //type: boolean
                                    Value suppress_four_byte_as_capability; //type: boolean
                                    Value update_source_interface; //type: string
                                    Value create; //type: empty


                                class NeighborGroupAfs : public Entity
                                {
                                    public:
                                        NeighborGroupAfs();
                                        ~NeighborGroupAfs();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class NeighborGroupAf : public Entity
                                    {
                                        public:
                                            NeighborGroupAf();
                                            ~NeighborGroupAf();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value af_name; //type: BgpAddressFamilyEnum
                                            Value neighbor_af_long_lived_graceful_restart_capable; //type: boolean
                                            Value l2vpn_signalling; //type: BgpSignalEnum
                                            Value send_ext_community_ebgp; //type: boolean
                                            Value accept_route_legacy_rt; //type: boolean
                                            Value send_community_ebgp; //type: boolean
                                            Value send_multicast_attr; //type: BgpSendMcastAttrCfgEnum
                                            Value next_hop_unchanged; //type: boolean
                                            Value rpki_origin_as_validation_disable; //type: empty
                                            Value flowspec_validation; //type: BgpFlowspecValidationCfgEnum
                                            Value encapsulation_type; //type: BgpAfEncapsulationEnum
                                            Value rpki_bestpath_origin_as_allow_invalid; //type: empty
                                            Value as_override; //type: boolean
                                            Value multipath; //type: empty
                                            Value send_community_ebgp_graceful_shutdown; //type: boolean
                                            Value activate; //type: empty
                                            Value prefix_orf_policy; //type: string
                                            Value aigp; //type: BgpAigpCfgEnum
                                            Value aigp_send_med; //type: BgpAigpCfgEnum
                                            Value allow_as_in; //type: uint32
                                            Value advertise_orf; //type: BgpOrfEnum
                                            Value route_reflector_client; //type: boolean
                                            Value next_hop_self; //type: boolean
                                            Value route_policy_in; //type: string
                                            Value default_weight; //type: uint32
                                            Value af_group; //type: string
                                            Value next_hop_unchanged_multipath; //type: boolean
                                            Value accept_own; //type: boolean
                                            Value route_policy_out; //type: string
                                            Value advertise_permanent_network; //type: empty


                                        class AigpCostCommunity : public Entity
                                        {
                                            public:
                                                AigpCostCommunity();
                                                ~AigpCostCommunity();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value enable; //type: boolean
                                                Value cost_community_id; //type: uint32
                                                Value transitive; //type: boolean
                                                Value cost_community_poi_type; //type: BgpAigpCfgPoiEnum


                                                class BgpAigpCfgPoiEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AigpCostCommunity


                                        class AdvertiseDefImpDisableV6 : public Entity
                                        {
                                            public:
                                                AdvertiseDefImpDisableV6();
                                                ~AdvertiseDefImpDisableV6();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6


                                        class AdvertiseDisable : public Entity
                                        {
                                            public:
                                                AdvertiseDisable();
                                                ~AdvertiseDisable();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable


                                        class MaximumPrefixes : public Entity
                                        {
                                            public:
                                                MaximumPrefixes();
                                                ~MaximumPrefixes();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value prefix_limit; //type: uint32
                                                Value warning_percentage; //type: uint32
                                                Value warning_only; //type: boolean
                                                Value restart_time; //type: uint32
                                                Value discard_extra_paths; //type: boolean




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::MaximumPrefixes


                                        class RemovePrivateAsEntireAsPathInbound : public Entity
                                        {
                                            public:
                                                RemovePrivateAsEntireAsPathInbound();
                                                ~RemovePrivateAsEntireAsPathInbound();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value enable; //type: boolean
                                                Value entire; //type: boolean




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPathInbound


                                        class AdvertiseDefImpDisableV4 : public Entity
                                        {
                                            public:
                                                AdvertiseDefImpDisableV4();
                                                ~AdvertiseDefImpDisableV4();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4


                                        class AdvertiseL2Vpnevpn : public Entity
                                        {
                                            public:
                                                AdvertiseL2Vpnevpn();
                                                ~AdvertiseL2Vpnevpn();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2Vpnevpn


                                        class AdvertiseLocalL2Vpnevpn : public Entity
                                        {
                                            public:
                                                AdvertiseLocalL2Vpnevpn();
                                                ~AdvertiseLocalL2Vpnevpn();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2Vpnevpn


                                        class NeighborAfLongLivedGracefulRestartStaleTime : public Entity
                                        {
                                            public:
                                                NeighborAfLongLivedGracefulRestartStaleTime();
                                                ~NeighborAfLongLivedGracefulRestartStaleTime();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value stale_time_send; //type: uint32
                                                Value stale_time_accept; //type: uint32




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime


                                        class SiteOfOrigin : public Entity
                                        {
                                            public:
                                                SiteOfOrigin();
                                                ~SiteOfOrigin();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value type; //type: BgpSiteOfOriginEnum
                                                Value as_xx; //type: uint32
                                                Value as; //type: uint32
                                                Value as_index; //type: uint32
                                                Value address; //type: string
                                                Value address_index; //type: uint32


                                                class BgpSiteOfOriginEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin


                                        class AdvertiseV6 : public Entity
                                        {
                                            public:
                                                AdvertiseV6();
                                                ~AdvertiseV6();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6


                                        class AdvertiseLocalV6 : public Entity
                                        {
                                            public:
                                                AdvertiseLocalV6();
                                                ~AdvertiseLocalV6();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6


                                        class Import : public Entity
                                        {
                                            public:
                                                Import();
                                                ~Import();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value import_stitching; //type: boolean
                                                Value import_reoriginate; //type: boolean
                                                Value import_reoriginate_stitching; //type: boolean




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import


                                        class DefaultOriginate : public Entity
                                        {
                                            public:
                                                DefaultOriginate();
                                                ~DefaultOriginate();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value enable; //type: boolean
                                                Value route_policy_name; //type: string




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate


                                        class SoftReconfiguration : public Entity
                                        {
                                            public:
                                                SoftReconfiguration();
                                                ~SoftReconfiguration();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value inbound_soft; //type: boolean
                                                Value soft_always; //type: boolean




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration


                                        class AdvertiseV4 : public Entity
                                        {
                                            public:
                                                AdvertiseV4();
                                                ~AdvertiseV4();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4


                                        class AdvertiseLocalV4 : public Entity
                                        {
                                            public:
                                                AdvertiseLocalV4();
                                                ~AdvertiseLocalV4();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4


                                        class RemovePrivateAsEntireAsPath : public Entity
                                        {
                                            public:
                                                RemovePrivateAsEntireAsPath();
                                                ~RemovePrivateAsEntireAsPath();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value enable; //type: boolean
                                                Value entire; //type: boolean




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPath


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV4> advertise_def_imp_disable_v4;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDefImpDisableV6> advertise_def_imp_disable_v6;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseDisable> advertise_disable;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseL2Vpnevpn> advertise_l2vpnevpn;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalL2Vpnevpn> advertise_local_l2vpnevpn;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV4> advertise_local_v4;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseLocalV6> advertise_local_v6;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV4> advertise_v4;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AdvertiseV6> advertise_v6;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::AigpCostCommunity> aigp_cost_community; // presence node
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::DefaultOriginate> default_originate;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::Import> import;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::MaximumPrefixes> maximum_prefixes; // presence node
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::NeighborAfLongLivedGracefulRestartStaleTime> neighbor_af_long_lived_graceful_restart_stale_time;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPath> remove_private_as_entire_as_path; // presence node
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::RemovePrivateAsEntireAsPathInbound> remove_private_as_entire_as_path_inbound; // presence node
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SiteOfOrigin> site_of_origin;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf::SoftReconfiguration> soft_reconfiguration;
                                            class BgpAddressFamilyEnum;
                                            class BgpOrfEnum;
                                            class BgpAigpCfgEnum;
                                            class BgpAigpCfgEnum;
                                            class BgpAfEncapsulationEnum;
                                            class BgpFlowspecValidationCfgEnum;
                                            class BgpSignalEnum;
                                            class BgpSendMcastAttrCfgEnum;


                                    }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs::NeighborGroupAf> > neighbor_group_af;


                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs


                                class LocalAddress : public Entity
                                {
                                    public:
                                        LocalAddress();
                                        ~LocalAddress();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value local_address_disable; //type: boolean
                                        Value local_ip_address; //type: string




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress


                                class BmpActivates : public Entity
                                {
                                    public:
                                        BmpActivates();
                                        ~BmpActivates();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class BmpActivate : public Entity
                                    {
                                        public:
                                            BmpActivate();
                                            ~BmpActivate();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value server_id; //type: uint32




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivate


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates::BmpActivate> > bmp_activate;


                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates


                                class EbgpMultihop : public Entity
                                {
                                    public:
                                        EbgpMultihop();
                                        ~EbgpMultihop();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value max_hop_count; //type: uint32
                                        Value mpls_deactivation; //type: boolean




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop


                                class RemoteAs : public Entity
                                {
                                    public:
                                        RemoteAs();
                                        ~RemoteAs();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value as_xx; //type: uint32
                                        Value as_yy; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs


                                class LocalAs : public Entity
                                {
                                    public:
                                        LocalAs();
                                        ~LocalAs();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value as_xx; //type: uint32
                                        Value as_yy; //type: uint32
                                        Value no_prepend; //type: empty
                                        Value disable; //type: empty
                                        Value replace_as; //type: empty
                                        Value dual_as; //type: empty




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs


                                class Password : public Entity
                                {
                                    public:
                                        Password();
                                        ~Password();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value password_disable; //type: boolean
                                        Value password; //type: string




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password


                                class AdvertisementInterval : public Entity
                                {
                                    public:
                                        AdvertisementInterval();
                                        ~AdvertisementInterval();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value minimum_interval; //type: uint32
                                        Value minimum_interval_msecs; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::AdvertisementInterval


                                class NeighborClusterId : public Entity
                                {
                                    public:
                                        NeighborClusterId();
                                        ~NeighborClusterId();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value cluster_id_number; //type: uint32
                                        Value cluster_id_address; //type: string




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId


                                class Tcpmss : public Entity
                                {
                                    public:
                                        Tcpmss();
                                        ~Tcpmss();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value tcpmss_disable; //type: boolean
                                        Value mss; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss


                                class Tos : public Entity
                                {
                                    public:
                                        Tos();
                                        ~Tos();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value type; //type: BgpTosEnum
                                        Value value_; //type: one of uint32, enumeration


                                        class BgpTosEnum;
                                        class BgpPrecedenceDscpEnum;


                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos


                                class UpdateInFiltering : public Entity
                                {
                                    public:
                                        UpdateInFiltering();
                                        ~UpdateInFiltering();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value enable; //type: empty
                                        Value update_in_filtering_attribute_filter_group; //type: string
                                        Value update_in_filtering_syslog_disable; //type: empty


                                    class UpdateInFilteringMessageBuffers : public Entity
                                    {
                                        public:
                                            UpdateInFilteringMessageBuffers();
                                            ~UpdateInFilteringMessageBuffers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value number_of_buffers; //type: uint32
                                            Value non_circular_buffer; //type: boolean




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers> update_in_filtering_message_buffers; // presence node


                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering


                                class MsgLogOut : public Entity
                                {
                                    public:
                                        MsgLogOut();
                                        ~MsgLogOut();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value msg_buf_count; //type: uint32
                                        Value msg_log_disable; //type: boolean
                                        Value msg_log_inherit_disable; //type: boolean




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut


                                class ReceiveBufferSize : public Entity
                                {
                                    public:
                                        ReceiveBufferSize();
                                        ~ReceiveBufferSize();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value socket_receive_size; //type: uint32
                                        Value bgp_receive_size; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize


                                class MsgLogIn : public Entity
                                {
                                    public:
                                        MsgLogIn();
                                        ~MsgLogIn();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value msg_buf_count; //type: uint32
                                        Value msg_log_disable; //type: boolean
                                        Value msg_log_inherit_disable; //type: boolean




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn


                                class SendBufferSize : public Entity
                                {
                                    public:
                                        SendBufferSize();
                                        ~SendBufferSize();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value socket_send_size; //type: uint32
                                        Value bgp_send_size; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize


                                class Timers : public Entity
                                {
                                    public:
                                        Timers();
                                        ~Timers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value keepalive_interval; //type: uint32
                                        Value hold_time; //type: uint32
                                        Value min_accept_hold_time; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers


                                class Keychain : public Entity
                                {
                                    public:
                                        Keychain();
                                        ~Keychain();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value keychain_disable; //type: boolean
                                        Value keychain_name; //type: string




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain


                                class GracefulMaintenance : public Entity
                                {
                                    public:
                                        GracefulMaintenance();
                                        ~GracefulMaintenance();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value enable; //type: empty
                                        Value graceful_maintenance_activate; //type: boolean


                                    class GracefulMaintenanceLocalPreference : public Entity
                                    {
                                        public:
                                            GracefulMaintenanceLocalPreference();
                                            ~GracefulMaintenanceLocalPreference();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value gshut_loc_pref_disable; //type: boolean
                                            Value local_preference; //type: uint32




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference


                                    class GracefulMaintenanceAsPrepends : public Entity
                                    {
                                        public:
                                            GracefulMaintenanceAsPrepends();
                                            ~GracefulMaintenanceAsPrepends();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value gshut_prepends_disable; //type: boolean
                                            Value as_prepends; //type: uint32




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends> graceful_maintenance_as_prepends;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference> graceful_maintenance_local_preference;


                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance


                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::AdvertisementInterval> advertisement_interval; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::BmpActivates> bmp_activates;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::EbgpMultihop> ebgp_multihop;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::GracefulMaintenance> graceful_maintenance;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Keychain> keychain;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAddress> local_address;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::LocalAs> local_as;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogIn> msg_log_in;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::MsgLogOut> msg_log_out;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborClusterId> neighbor_cluster_id;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::NeighborGroupAfs> neighbor_group_afs;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Password> password;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::ReceiveBufferSize> receive_buffer_size;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::RemoteAs> remote_as;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::SendBufferSize> send_buffer_size;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tcpmss> tcpmss;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Timers> timers;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::Tos> tos;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup::UpdateInFiltering> update_in_filtering;
                                    class BgpNbrCapAdditionalPathsCfgEnum;
                                    class BgpNbrCapAdditionalPathsCfgEnum;
                                    class BgpBfdEnableModeEnum;
                                    class BgpEbgpSendDmzEnableModeEnum;
                                    class BgpTcpModeEnum;


                            }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups::NeighborGroup> > neighbor_group;


                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups


                        class AfGroups : public Entity
                        {
                            public:
                                AfGroups();
                                ~AfGroups();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class AfGroup : public Entity
                            {
                                public:
                                    AfGroup();
                                    ~AfGroup();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value af_group_name; //type: string


                                class AfGroupAfs : public Entity
                                {
                                    public:
                                        AfGroupAfs();
                                        ~AfGroupAfs();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class AfGroupAf : public Entity
                                    {
                                        public:
                                            AfGroupAf();
                                            ~AfGroupAf();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value af_name; //type: BgpAddressFamilyEnum
                                            Value af_group; //type: string
                                            Value create; //type: empty
                                            Value neighbor_af_long_lived_graceful_restart_capable; //type: boolean
                                            Value l2vpn_signalling; //type: BgpSignalEnum
                                            Value send_ext_community_ebgp; //type: boolean
                                            Value accept_route_legacy_rt; //type: boolean
                                            Value send_community_ebgp; //type: boolean
                                            Value send_multicast_attr; //type: BgpSendMcastAttrCfgEnum
                                            Value next_hop_unchanged; //type: boolean
                                            Value rpki_origin_as_validation_disable; //type: empty
                                            Value flowspec_validation; //type: BgpFlowspecValidationCfgEnum
                                            Value encapsulation_type; //type: BgpAfEncapsulationEnum
                                            Value rpki_bestpath_origin_as_allow_invalid; //type: empty
                                            Value as_override; //type: boolean
                                            Value multipath; //type: empty
                                            Value send_community_ebgp_graceful_shutdown; //type: boolean
                                            Value prefix_orf_policy; //type: string
                                            Value aigp; //type: BgpAigpCfgEnum
                                            Value aigp_send_med; //type: BgpAigpCfgEnum
                                            Value allow_as_in; //type: uint32
                                            Value advertise_orf; //type: BgpOrfEnum
                                            Value route_reflector_client; //type: boolean
                                            Value next_hop_self; //type: boolean
                                            Value route_policy_in; //type: string
                                            Value default_weight; //type: uint32
                                            Value next_hop_unchanged_multipath; //type: boolean
                                            Value accept_own; //type: boolean
                                            Value route_policy_out; //type: string
                                            Value advertise_permanent_network; //type: empty


                                        class AigpCostCommunity : public Entity
                                        {
                                            public:
                                                AigpCostCommunity();
                                                ~AigpCostCommunity();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value enable; //type: boolean
                                                Value cost_community_id; //type: uint32
                                                Value transitive; //type: boolean
                                                Value cost_community_poi_type; //type: BgpAigpCfgPoiEnum


                                                class BgpAigpCfgPoiEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AigpCostCommunity


                                        class AdvertiseDefImpDisableV6 : public Entity
                                        {
                                            public:
                                                AdvertiseDefImpDisableV6();
                                                ~AdvertiseDefImpDisableV6();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6


                                        class AdvertiseDisable : public Entity
                                        {
                                            public:
                                                AdvertiseDisable();
                                                ~AdvertiseDisable();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable


                                        class MaximumPrefixes : public Entity
                                        {
                                            public:
                                                MaximumPrefixes();
                                                ~MaximumPrefixes();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value prefix_limit; //type: uint32
                                                Value warning_percentage; //type: uint32
                                                Value warning_only; //type: boolean
                                                Value restart_time; //type: uint32
                                                Value discard_extra_paths; //type: boolean




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::MaximumPrefixes


                                        class RemovePrivateAsEntireAsPathInbound : public Entity
                                        {
                                            public:
                                                RemovePrivateAsEntireAsPathInbound();
                                                ~RemovePrivateAsEntireAsPathInbound();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value enable; //type: boolean
                                                Value entire; //type: boolean




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPathInbound


                                        class AdvertiseDefImpDisableV4 : public Entity
                                        {
                                            public:
                                                AdvertiseDefImpDisableV4();
                                                ~AdvertiseDefImpDisableV4();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4


                                        class AdvertiseL2Vpnevpn : public Entity
                                        {
                                            public:
                                                AdvertiseL2Vpnevpn();
                                                ~AdvertiseL2Vpnevpn();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2Vpnevpn


                                        class AdvertiseLocalL2Vpnevpn : public Entity
                                        {
                                            public:
                                                AdvertiseLocalL2Vpnevpn();
                                                ~AdvertiseLocalL2Vpnevpn();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2Vpnevpn


                                        class NeighborAfLongLivedGracefulRestartStaleTime : public Entity
                                        {
                                            public:
                                                NeighborAfLongLivedGracefulRestartStaleTime();
                                                ~NeighborAfLongLivedGracefulRestartStaleTime();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value stale_time_send; //type: uint32
                                                Value stale_time_accept; //type: uint32




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime


                                        class SiteOfOrigin : public Entity
                                        {
                                            public:
                                                SiteOfOrigin();
                                                ~SiteOfOrigin();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value type; //type: BgpSiteOfOriginEnum
                                                Value as_xx; //type: uint32
                                                Value as; //type: uint32
                                                Value as_index; //type: uint32
                                                Value address; //type: string
                                                Value address_index; //type: uint32


                                                class BgpSiteOfOriginEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin


                                        class AdvertiseV6 : public Entity
                                        {
                                            public:
                                                AdvertiseV6();
                                                ~AdvertiseV6();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6


                                        class AdvertiseLocalV6 : public Entity
                                        {
                                            public:
                                                AdvertiseLocalV6();
                                                ~AdvertiseLocalV6();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6


                                        class Import : public Entity
                                        {
                                            public:
                                                Import();
                                                ~Import();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value import_stitching; //type: boolean
                                                Value import_reoriginate; //type: boolean
                                                Value import_reoriginate_stitching; //type: boolean




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import


                                        class DefaultOriginate : public Entity
                                        {
                                            public:
                                                DefaultOriginate();
                                                ~DefaultOriginate();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value enable; //type: boolean
                                                Value route_policy_name; //type: string




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate


                                        class SoftReconfiguration : public Entity
                                        {
                                            public:
                                                SoftReconfiguration();
                                                ~SoftReconfiguration();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value inbound_soft; //type: boolean
                                                Value soft_always; //type: boolean




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration


                                        class AdvertiseV4 : public Entity
                                        {
                                            public:
                                                AdvertiseV4();
                                                ~AdvertiseV4();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4


                                        class AdvertiseLocalV4 : public Entity
                                        {
                                            public:
                                                AdvertiseLocalV4();
                                                ~AdvertiseLocalV4();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value af_name; //type: BgpAddressFamilyEnum
                                                Value reorg_option; //type: BgpReorgOptEnum
                                                Value rt_type; //type: BgpAdvRtEnum


                                                class BgpAddressFamilyEnum;
                                                class BgpReorgOptEnum;
                                                class BgpAdvRtEnum;


                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4


                                        class RemovePrivateAsEntireAsPath : public Entity
                                        {
                                            public:
                                                RemovePrivateAsEntireAsPath();
                                                ~RemovePrivateAsEntireAsPath();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value enable; //type: boolean
                                                Value entire; //type: boolean




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPath


                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV4> advertise_def_imp_disable_v4;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDefImpDisableV6> advertise_def_imp_disable_v6;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseDisable> advertise_disable;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseL2Vpnevpn> advertise_l2vpnevpn;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalL2Vpnevpn> advertise_local_l2vpnevpn;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV4> advertise_local_v4;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseLocalV6> advertise_local_v6;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV4> advertise_v4;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AdvertiseV6> advertise_v6;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::AigpCostCommunity> aigp_cost_community; // presence node
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::DefaultOriginate> default_originate;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::Import> import;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::MaximumPrefixes> maximum_prefixes; // presence node
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::NeighborAfLongLivedGracefulRestartStaleTime> neighbor_af_long_lived_graceful_restart_stale_time;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPath> remove_private_as_entire_as_path; // presence node
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::RemovePrivateAsEntireAsPathInbound> remove_private_as_entire_as_path_inbound; // presence node
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SiteOfOrigin> site_of_origin;
                                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf::SoftReconfiguration> soft_reconfiguration;
                                            class BgpAddressFamilyEnum;
                                            class BgpOrfEnum;
                                            class BgpAigpCfgEnum;
                                            class BgpAigpCfgEnum;
                                            class BgpAfEncapsulationEnum;
                                            class BgpFlowspecValidationCfgEnum;
                                            class BgpSignalEnum;
                                            class BgpSendMcastAttrCfgEnum;


                                    }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs::AfGroupAf> > af_group_af;


                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs


                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup::AfGroupAfs> af_group_afs;


                            }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups::AfGroup> > af_group;


                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups


                        class SessionGroups : public Entity
                        {
                            public:
                                SessionGroups();
                                ~SessionGroups();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class SessionGroup : public Entity
                            {
                                public:
                                    SessionGroup();
                                    ~SessionGroup();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value session_group_name; //type: string
                                    Value session_group_add_member; //type: string
                                    Value internal_vpn_client_ibgpce; //type: boolean
                                    Value egress_peer_engineering; //type: boolean
                                    Value neighbor_graceful_restart_stalepath_time; //type: uint32
                                    Value shutdown; //type: boolean
                                    Value description; //type: string
                                    Value ebgp_recv_dmz; //type: boolean
                                    Value neighbor_graceful_restart; //type: boolean
                                    Value enforce_first_as; //type: boolean
                                    Value session_open_mode; //type: BgpTcpModeEnum
                                    Value rpki_origin_as_validation_disable; //type: empty
                                    Value ebgp_send_dmz_enable_modes; //type: BgpEbgpSendDmzEnableModeEnum
                                    Value suppress_all_capabilities; //type: boolean
                                    Value rpki_bestpath_origin_as_allow_invalid; //type: empty
                                    Value additional_paths_send_capability; //type: BgpNbrCapAdditionalPathsCfgEnum
                                    Value propagate_dmz_link_bandwidth; //type: boolean
                                    Value bfd_enable_modes; //type: BgpBfdEnableModeEnum
                                    Value ttl_security; //type: boolean
                                    Value neighbor_graceful_restart_time; //type: uint32
                                    Value bfd_multiplier; //type: uint32
                                    Value bfd_minimum_interval; //type: uint32
                                    Value additional_paths_receive_capability; //type: BgpNbrCapAdditionalPathsCfgEnum
                                    Value ignore_connected_check_ebgp; //type: boolean
                                    Value suppress_four_byte_as_capability; //type: boolean
                                    Value update_source_interface; //type: string
                                    Value create; //type: empty


                                class LocalAddress : public Entity
                                {
                                    public:
                                        LocalAddress();
                                        ~LocalAddress();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value local_address_disable; //type: boolean
                                        Value local_ip_address; //type: string




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress


                                class BmpActivates : public Entity
                                {
                                    public:
                                        BmpActivates();
                                        ~BmpActivates();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class BmpActivate : public Entity
                                    {
                                        public:
                                            BmpActivate();
                                            ~BmpActivate();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value server_id; //type: uint32




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates::BmpActivate> > bmp_activate;


                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates


                                class EbgpMultihop : public Entity
                                {
                                    public:
                                        EbgpMultihop();
                                        ~EbgpMultihop();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value max_hop_count; //type: uint32
                                        Value mpls_deactivation; //type: boolean




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop


                                class RemoteAs : public Entity
                                {
                                    public:
                                        RemoteAs();
                                        ~RemoteAs();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value as_xx; //type: uint32
                                        Value as_yy; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs


                                class LocalAs : public Entity
                                {
                                    public:
                                        LocalAs();
                                        ~LocalAs();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value as_xx; //type: uint32
                                        Value as_yy; //type: uint32
                                        Value no_prepend; //type: empty
                                        Value disable; //type: empty
                                        Value replace_as; //type: empty
                                        Value dual_as; //type: empty




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs


                                class Password : public Entity
                                {
                                    public:
                                        Password();
                                        ~Password();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value password_disable; //type: boolean
                                        Value password; //type: string




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password


                                class AdvertisementInterval : public Entity
                                {
                                    public:
                                        AdvertisementInterval();
                                        ~AdvertisementInterval();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value minimum_interval; //type: uint32
                                        Value minimum_interval_msecs; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval


                                class NeighborClusterId : public Entity
                                {
                                    public:
                                        NeighborClusterId();
                                        ~NeighborClusterId();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value cluster_id_number; //type: uint32
                                        Value cluster_id_address; //type: string




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId


                                class Tcpmss : public Entity
                                {
                                    public:
                                        Tcpmss();
                                        ~Tcpmss();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value tcpmss_disable; //type: boolean
                                        Value mss; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss


                                class Tos : public Entity
                                {
                                    public:
                                        Tos();
                                        ~Tos();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value type; //type: BgpTosEnum
                                        Value value_; //type: one of uint32, enumeration


                                        class BgpTosEnum;
                                        class BgpPrecedenceDscpEnum;


                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos


                                class UpdateInFiltering : public Entity
                                {
                                    public:
                                        UpdateInFiltering();
                                        ~UpdateInFiltering();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value enable; //type: empty
                                        Value update_in_filtering_attribute_filter_group; //type: string
                                        Value update_in_filtering_syslog_disable; //type: empty


                                    class UpdateInFilteringMessageBuffers : public Entity
                                    {
                                        public:
                                            UpdateInFilteringMessageBuffers();
                                            ~UpdateInFilteringMessageBuffers();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value number_of_buffers; //type: uint32
                                            Value non_circular_buffer; //type: boolean




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering::UpdateInFilteringMessageBuffers> update_in_filtering_message_buffers; // presence node


                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering


                                class MsgLogOut : public Entity
                                {
                                    public:
                                        MsgLogOut();
                                        ~MsgLogOut();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value msg_buf_count; //type: uint32
                                        Value msg_log_disable; //type: boolean
                                        Value msg_log_inherit_disable; //type: boolean




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut


                                class ReceiveBufferSize : public Entity
                                {
                                    public:
                                        ReceiveBufferSize();
                                        ~ReceiveBufferSize();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value socket_receive_size; //type: uint32
                                        Value bgp_receive_size; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize


                                class MsgLogIn : public Entity
                                {
                                    public:
                                        MsgLogIn();
                                        ~MsgLogIn();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value msg_buf_count; //type: uint32
                                        Value msg_log_disable; //type: boolean
                                        Value msg_log_inherit_disable; //type: boolean




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn


                                class SendBufferSize : public Entity
                                {
                                    public:
                                        SendBufferSize();
                                        ~SendBufferSize();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value socket_send_size; //type: uint32
                                        Value bgp_send_size; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize


                                class Timers : public Entity
                                {
                                    public:
                                        Timers();
                                        ~Timers();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value keepalive_interval; //type: uint32
                                        Value hold_time; //type: uint32
                                        Value min_accept_hold_time; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers


                                class Keychain : public Entity
                                {
                                    public:
                                        Keychain();
                                        ~Keychain();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value keychain_disable; //type: boolean
                                        Value keychain_name; //type: string




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain


                                class GracefulMaintenance : public Entity
                                {
                                    public:
                                        GracefulMaintenance();
                                        ~GracefulMaintenance();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value enable; //type: empty
                                        Value graceful_maintenance_activate; //type: boolean


                                    class GracefulMaintenanceLocalPreference : public Entity
                                    {
                                        public:
                                            GracefulMaintenanceLocalPreference();
                                            ~GracefulMaintenanceLocalPreference();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value gshut_loc_pref_disable; //type: boolean
                                            Value local_preference; //type: uint32




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference


                                    class GracefulMaintenanceAsPrepends : public Entity
                                    {
                                        public:
                                            GracefulMaintenanceAsPrepends();
                                            ~GracefulMaintenanceAsPrepends();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value gshut_prepends_disable; //type: boolean
                                            Value as_prepends; //type: uint32




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceAsPrepends> graceful_maintenance_as_prepends;
                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance::GracefulMaintenanceLocalPreference> graceful_maintenance_local_preference;


                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance


                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::AdvertisementInterval> advertisement_interval; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::BmpActivates> bmp_activates;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::EbgpMultihop> ebgp_multihop;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::GracefulMaintenance> graceful_maintenance;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Keychain> keychain;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAddress> local_address;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::LocalAs> local_as;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogIn> msg_log_in;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::MsgLogOut> msg_log_out;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::NeighborClusterId> neighbor_cluster_id;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Password> password;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::ReceiveBufferSize> receive_buffer_size;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::RemoteAs> remote_as;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::SendBufferSize> send_buffer_size;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tcpmss> tcpmss;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Timers> timers;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::Tos> tos;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup::UpdateInFiltering> update_in_filtering;
                                    class BgpNbrCapAdditionalPathsCfgEnum;
                                    class BgpNbrCapAdditionalPathsCfgEnum;
                                    class BgpBfdEnableModeEnum;
                                    class BgpEbgpSendDmzEnableModeEnum;
                                    class BgpTcpModeEnum;


                            }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups::SessionGroup> > session_group;


                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups


                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::AfGroups> af_groups;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::NeighborGroups> neighbor_groups;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::Neighbors> neighbors;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity::SessionGroups> session_groups;


                    }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity


                    class Global : public Entity
                    {
                        public:
                            Global();
                            ~Global();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value graceful_restart; //type: empty
                            Value update_out_logging; //type: empty
                            Value install_diversion; //type: empty
                            Value next_hop_trigger_delay; //type: uint32
                            Value nsr; //type: boolean
                            Value neighbor_logging_detail; //type: empty
                            Value mvpn; //type: empty
                            Value rpki_origin_as_validation_disable; //type: empty
                            Value rpki_origin_as_validity_signal_ibgp; //type: empty
                            Value global_scan_time; //type: uint32
                            Value rpki_bestpath_use_origin_as_validity; //type: empty
                            Value rpki_origin_as_validation_time; //type: uint32
                            Value rpki_bestpath_origin_as_allow_invalid; //type: empty
                            Value graceful_restart_purge_time; //type: uint32
                            Value enforce_ibgp_out_policy; //type: empty
                            Value update_limit_process; //type: uint32
                            Value graceful_restart_time; //type: uint32
                            Value update_error_handling_basic_ibgp_disable; //type: empty
                            Value read_only; //type: empty
                            Value graceful_restart_stalepath_time; //type: uint32
                            Value update_error_handling_extended_ebgp; //type: empty
                            Value update_error_handling_basic_ebgp_disable; //type: empty
                            Value graceful_reset; //type: empty
                            Value igp_loop_check; //type: empty
                            Value update_error_handling_extended_ibgp; //type: empty
                            Value router_id; //type: string
                            Value disable_enforce_first_as; //type: empty
                            Value best_path_cost_community; //type: empty
                            Value best_path_aigp_ignore; //type: empty
                            Value best_path_as_path_length; //type: empty
                            Value igp_redist_internal; //type: empty
                            Value multi_path_as_path_ignore_onwards; //type: empty
                            Value disable_fast_external_fallover; //type: empty
                            Value default_metric; //type: uint32
                            Value default_info_originate; //type: empty
                            Value best_path_confederation_paths; //type: empty
                            Value best_path_as_multipath_relax; //type: empty
                            Value disable_auto_soft_reset; //type: empty
                            Value disable_msg_log; //type: empty
                            Value disable_neighbor_logging; //type: empty
                            Value best_path_med_always; //type: empty
                            Value best_path_router_id; //type: empty
                            Value best_path_med_missing; //type: empty
                            Value local_preference; //type: uint32


                        class ClusterId : public Entity
                        {
                            public:
                                ClusterId();
                                ~ClusterId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value cluster_id_number; //type: uint32
                                Value cluster_id_address; //type: string




                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId


                        class WriteLimit : public Entity
                        {
                            public:
                                WriteLimit();
                                ~WriteLimit();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value formatted_messages; //type: uint32
                                Value enqueued_messages; //type: uint32
                                Value desynchronize; //type: boolean




                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit


                        class UpdateDelay : public Entity
                        {
                            public:
                                UpdateDelay();
                                ~UpdateDelay();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value delay; //type: uint32
                                Value always; //type: boolean




                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay


                        class AsLeague : public Entity
                        {
                            public:
                                AsLeague();
                                ~AsLeague();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value enable; //type: empty


                            class Peers : public Entity
                            {
                                public:
                                    Peers();
                                    ~Peers();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                class Peer : public Entity
                                {
                                    public:
                                        Peer();
                                        ~Peer();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value as_xx; //type: uint32
                                        Value as_yy; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers::Peer> > peer;


                            }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers


                                std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague::Peers> peers;


                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague


                        class RpkiServers : public Entity
                        {
                            public:
                                RpkiServers();
                                ~RpkiServers();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class RpkiServer : public Entity
                            {
                                public:
                                    RpkiServer();
                                    ~RpkiServer();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value server; //type: string
                                    Value enable; //type: empty
                                    Value shutdown; //type: empty
                                    Value password; //type: string
                                    Value response_time; //type: int32
                                    Value username; //type: string
                                    Value refresh_time; //type: int32
                                    Value purge_time; //type: int32


                                class Transport : public Entity
                                {
                                    public:
                                        Transport();
                                        ~Transport();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value transport; //type: BgpRpkiTransportEnum
                                        Value port; //type: uint16


                                        class BgpRpkiTransportEnum;


                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport


                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer::Transport> transport;


                            }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers::RpkiServer> > rpki_server;


                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers


                        class Limits : public Entity
                        {
                            public:
                                Limits();
                                ~Limits();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value maximum_neighbors; //type: uint32




                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits


                        class ConfederationDomain : public Entity
                        {
                            public:
                                ConfederationDomain();
                                ~ConfederationDomain();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value as_xx; //type: uint32
                                Value as_yy; //type: uint32




                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain


                        class ConfederationPeerAses : public Entity
                        {
                            public:
                                ConfederationPeerAses();
                                ~ConfederationPeerAses();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class ConfederationPeerAs : public Entity
                            {
                                public:
                                    ConfederationPeerAs();
                                    ~ConfederationPeerAs();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value as_xx; //type: uint32
                                    Value as_yy; //type: uint32




                            }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses::ConfederationPeerAs> > confederation_peer_as;


                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses


                        class AttributeFilterGroups : public Entity
                        {
                            public:
                                AttributeFilterGroups();
                                ~AttributeFilterGroups();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class AttributeFilterGroup : public Entity
                            {
                                public:
                                    AttributeFilterGroup();
                                    ~AttributeFilterGroup();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value attribute_filter_group_name; //type: string
                                    Value enable; //type: empty


                                class AttributeFilters : public Entity
                                {
                                    public:
                                        AttributeFilters();
                                        ~AttributeFilters();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class AttributeFilter : public Entity
                                    {
                                        public:
                                            AttributeFilter();
                                            ~AttributeFilter();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value attribute_start; //type: uint32
                                            Value attribute_end; //type: uint32
                                            Value filter_action; //type: BgpUpdateFilterActionEnum


                                            class BgpUpdateFilterActionEnum;


                                    }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters::AttributeFilter> > attribute_filter;


                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters


                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup::AttributeFilters> attribute_filters;


                            }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups::AttributeFilterGroup> > attribute_filter_group;


                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups


                        class GlobalGracefulMaintenanceActivate : public Entity
                        {
                            public:
                                GlobalGracefulMaintenanceActivate();
                                ~GlobalGracefulMaintenanceActivate();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value all_neighbors; //type: boolean
                                Value retain_routes; //type: boolean




                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate


                        class GlobalAfs : public Entity
                        {
                            public:
                                GlobalAfs();
                                ~GlobalAfs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class GlobalAf : public Entity
                            {
                                public:
                                    GlobalAf();
                                    ~GlobalAf();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value af_name; //type: BgpAddressFamilyEnum
                                    Value inter_as_install; //type: empty
                                    Value segmented_mcast; //type: empty
                                    Value disable_default_martian_check; //type: empty
                                    Value next_hop_critical_trigger_delay; //type: uint32
                                    Value next_hop_non_critical_trigger_delay; //type: uint32
                                    Value label_security_rpf; //type: empty
                                    Value label_retain; //type: uint32
                                    Value scan_time; //type: uint32
                                    Value rpki_origin_as_validation_disable; //type: empty
                                    Value rpki_origin_as_validity_signal_ibgp; //type: empty
                                    Value update_limit_sub_group_ebgp; //type: uint32
                                    Value update_limit_address_family; //type: uint32
                                    Value rpki_bestpath_use_origin_as_validity; //type: empty
                                    Value update_limit_sub_group_ibgp; //type: uint32
                                    Value rpki_bestpath_origin_as_allow_invalid; //type: empty
                                    Value disable_client_to_client_rr; //type: empty
                                    Value next_hop_route_policy; //type: string
                                    Value global_table_mcast; //type: empty
                                    Value wait_rib_install; //type: empty
                                    Value dynamic_med_interval; //type: uint32
                                    Value enable; //type: empty
                                    Value table_policy; //type: string
                                    Value attribute_download; //type: empty
                                    Value best_external; //type: boolean
                                    Value additional_paths_receive; //type: BgpafAdditionalPathsCfgEnum
                                    Value permanent_network; //type: string
                                    Value next_hop_resolution_prefix_length_minimum; //type: uint32
                                    Value reset_weight_on_import; //type: boolean
                                    Value additional_paths_send; //type: BgpafAdditionalPathsCfgEnum
                                    Value disable_as_path_loop_check; //type: empty


                                class IsisRoutes : public Entity
                                {
                                    public:
                                        IsisRoutes();
                                        ~IsisRoutes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class IsisRoute : public Entity
                                    {
                                        public:
                                            IsisRoute();
                                            ~IsisRoute();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value instance_name; //type: string
                                            Value default_metric; //type: uint32
                                            Value route_policy_name; //type: string
                                            Value redist_type; //type: string




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes::IsisRoute> > isis_route;


                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes


                                class DomainDistinguisher : public Entity
                                {
                                    public:
                                        DomainDistinguisher();
                                        ~DomainDistinguisher();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value as; //type: uint32
                                        Value router_id; //type: string




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher


                                class VrfAll : public Entity
                                {
                                    public:
                                        VrfAll();
                                        ~VrfAll();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value enable; //type: empty
                                        Value table_policy; //type: string
                                        Value source_rt_import_policy; //type: empty


                                    class LabelMode : public Entity
                                    {
                                        public:
                                            LabelMode();
                                            ~LabelMode();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value label_allocation_mode; //type: string
                                            Value route_policy_name; //type: string




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode


                                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll::LabelMode> label_mode;


                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll


                                class ApplicationRoutes : public Entity
                                {
                                    public:
                                        ApplicationRoutes();
                                        ~ApplicationRoutes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class ApplicationRoute : public Entity
                                    {
                                        public:
                                            ApplicationRoute();
                                            ~ApplicationRoute();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value instance_name; //type: string
                                            Value default_metric; //type: uint32
                                            Value route_policy_name; //type: string
                                            Value not_used; //type: uint32




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes::ApplicationRoute> > application_route;


                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes


                                class DisableClusterClientToClientRrs : public Entity
                                {
                                    public:
                                        DisableClusterClientToClientRrs();
                                        ~DisableClusterClientToClientRrs();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class DisableClusterClientToClientRr : public Entity
                                    {
                                        public:
                                            DisableClusterClientToClientRr();
                                            ~DisableClusterClientToClientRr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value cluster_type; //type: BgpClusterIdEnum


                                        class Number : public Entity
                                        {
                                            public:
                                                Number();
                                                ~Number();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value cluster_id_number; //type: uint32




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number


                                        class Ipv4Address : public Entity
                                        {
                                            public:
                                                Ipv4Address();
                                                ~Ipv4Address();

                                                bool has_data() const override;
                                                bool has_operation() const override;
                                                EntityPath get_entity_path(Entity* parent) const override;
                                                std::string get_segment_path() const override;
                                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                                void set_value(const std::string & value_path, std::string value) override;
                                                std::map<std::string, Entity*> & get_children() override;
                                                Value cluster_id_address; //type: string




                                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address


                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Ipv4Address> > ipv4_address;
                                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr::Number> > number;
                                            class BgpClusterIdEnum;


                                    }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs::DisableClusterClientToClientRr> > disable_cluster_client_to_client_rr;


                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs


                                class LabelDelay : public Entity
                                {
                                    public:
                                        LabelDelay();
                                        ~LabelDelay();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value seconds; //type: uint32
                                        Value milliseconds; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay


                                class Ebgp : public Entity
                                {
                                    public:
                                        Ebgp();
                                        ~Ebgp();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value paths_value; //type: uint32
                                        Value unequal_cost; //type: boolean
                                        Value selective; //type: boolean
                                        Value order_by_igp_metric; //type: boolean




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp


                                class Eibgp : public Entity
                                {
                                    public:
                                        Eibgp();
                                        ~Eibgp();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value paths_value; //type: uint32
                                        Value unequal_cost; //type: boolean
                                        Value selective; //type: boolean
                                        Value order_by_igp_metric; //type: boolean




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp


                                class RetainRt : public Entity
                                {
                                    public:
                                        RetainRt();
                                        ~RetainRt();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value all; //type: boolean
                                        Value route_policy_name; //type: string




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt


                                class Ibgp : public Entity
                                {
                                    public:
                                        Ibgp();
                                        ~Ibgp();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value paths_value; //type: uint32
                                        Value unequal_cost; //type: boolean
                                        Value selective; //type: boolean
                                        Value order_by_igp_metric; //type: boolean




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp


                                class ImportDelay : public Entity
                                {
                                    public:
                                        ImportDelay();
                                        ~ImportDelay();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value seconds; //type: uint32
                                        Value milliseconds; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay


                                class AggregateAddresses : public Entity
                                {
                                    public:
                                        AggregateAddresses();
                                        ~AggregateAddresses();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class AggregateAddress : public Entity
                                    {
                                        public:
                                            AggregateAddress();
                                            ~AggregateAddress();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value aggregate_addr; //type: string
                                            Value aggregate_prefix; //type: uint16
                                            Value generate_set_info; //type: boolean
                                            Value generate_confederation_set_info; //type: boolean
                                            Value summary_only; //type: boolean
                                            Value route_policy_name; //type: string




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses::AggregateAddress> > aggregate_address;


                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses


                                class Dampening : public Entity
                                {
                                    public:
                                        Dampening();
                                        ~Dampening();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value half_life; //type: uint32
                                        Value reuse_threshold; //type: uint32
                                        Value suppress_threshold; //type: uint32
                                        Value suppress_time; //type: uint32
                                        Value route_policy_name; //type: string




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening


                                class RipRoutes : public Entity
                                {
                                    public:
                                        RipRoutes();
                                        ~RipRoutes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value default_metric; //type: uint32
                                        Value route_policy_name; //type: string
                                        Value not_used; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes


                                class LispRoutes : public Entity
                                {
                                    public:
                                        LispRoutes();
                                        ~LispRoutes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value default_metric; //type: uint32
                                        Value route_policy_name; //type: string




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes


                                class StaticRoutes : public Entity
                                {
                                    public:
                                        StaticRoutes();
                                        ~StaticRoutes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value default_metric; //type: uint32
                                        Value route_policy_name; //type: string
                                        Value not_used; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes


                                class Distance : public Entity
                                {
                                    public:
                                        Distance();
                                        ~Distance();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value external_routes; //type: uint32
                                        Value internal_routes; //type: uint32
                                        Value local_routes; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance


                                class LabelMode : public Entity
                                {
                                    public:
                                        LabelMode();
                                        ~LabelMode();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value label_allocation_mode; //type: string
                                        Value route_policy_name; //type: string




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode


                                class EigrpRoutes : public Entity
                                {
                                    public:
                                        EigrpRoutes();
                                        ~EigrpRoutes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class EigrpRoute : public Entity
                                    {
                                        public:
                                            EigrpRoute();
                                            ~EigrpRoute();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value instance_name; //type: string
                                            Value default_metric; //type: uint32
                                            Value route_policy_name; //type: string
                                            Value redist_type; //type: string




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes::EigrpRoute> > eigrp_route;


                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes


                                class SourcedNetworks : public Entity
                                {
                                    public:
                                        SourcedNetworks();
                                        ~SourcedNetworks();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class SourcedNetwork : public Entity
                                    {
                                        public:
                                            SourcedNetwork();
                                            ~SourcedNetwork();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value network_addr; //type: string
                                            Value network_prefix; //type: uint16
                                            Value backdoor; //type: boolean
                                            Value route_policy_name; //type: string




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks::SourcedNetwork> > sourced_network;


                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks


                                class ConnectedRoutes : public Entity
                                {
                                    public:
                                        ConnectedRoutes();
                                        ~ConnectedRoutes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value default_metric; //type: uint32
                                        Value route_policy_name; //type: string
                                        Value not_used; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes


                                class AllocateLabel : public Entity
                                {
                                    public:
                                        AllocateLabel();
                                        ~AllocateLabel();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value all; //type: boolean
                                        Value route_policy_name; //type: string




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel


                                class AdditionalPathsSelection : public Entity
                                {
                                    public:
                                        AdditionalPathsSelection();
                                        ~AdditionalPathsSelection();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value selection; //type: BgpafAdditionalPathsCfgEnum
                                        Value route_policy_name; //type: string


                                        class BgpafAdditionalPathsCfgEnum;


                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection


                                class OspfRoutes : public Entity
                                {
                                    public:
                                        OspfRoutes();
                                        ~OspfRoutes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                    class OspfRoute : public Entity
                                    {
                                        public:
                                            OspfRoute();
                                            ~OspfRoute();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value instance_name; //type: string
                                            Value default_metric; //type: uint32
                                            Value route_policy_name; //type: string
                                            Value redist_type; //type: string




                                    }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute


                                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes::OspfRoute> > ospf_route;


                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes


                                class MobileRoutes : public Entity
                                {
                                    public:
                                        MobileRoutes();
                                        ~MobileRoutes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value default_metric; //type: uint32
                                        Value route_policy_name; //type: string
                                        Value not_used; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes


                                class SubscriberRoutes : public Entity
                                {
                                    public:
                                        SubscriberRoutes();
                                        ~SubscriberRoutes();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value default_metric; //type: uint32
                                        Value route_policy_name; //type: string
                                        Value not_used; //type: uint32




                                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes


                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AdditionalPathsSelection> additional_paths_selection;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AggregateAddresses> aggregate_addresses;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::AllocateLabel> allocate_label;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ApplicationRoutes> application_routes;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ConnectedRoutes> connected_routes; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Dampening> dampening; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DisableClusterClientToClientRrs> disable_cluster_client_to_client_rrs;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Distance> distance;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::DomainDistinguisher> domain_distinguisher; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ebgp> ebgp; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Eibgp> eibgp; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::EigrpRoutes> eigrp_routes;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::Ibgp> ibgp; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::ImportDelay> import_delay; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::IsisRoutes> isis_routes;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelDelay> label_delay; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LabelMode> label_mode;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::LispRoutes> lisp_routes; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::MobileRoutes> mobile_routes; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::OspfRoutes> ospf_routes;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RetainRt> retain_rt;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::RipRoutes> rip_routes; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SourcedNetworks> sourced_networks;
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::StaticRoutes> static_routes; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::SubscriberRoutes> subscriber_routes; // presence node
                                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf::VrfAll> vrf_all;
                                    class BgpAddressFamilyEnum;
                                    class BgpafAdditionalPathsCfgEnum;
                                    class BgpafAdditionalPathsCfgEnum;


                            }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs::GlobalAf> > global_af;


                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs


                        class RpkiStaticRoutes : public Entity
                        {
                            public:
                                RpkiStaticRoutes();
                                ~RpkiStaticRoutes();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class RpkiStaticRoute : public Entity
                            {
                                public:
                                    RpkiStaticRoute();
                                    ~RpkiStaticRoute();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value addrress; //type: string
                                    Value minimum; //type: int32
                                    Value maximum; //type: int32
                                    Value as; //type: int32




                            }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes::RpkiStaticRoute> > rpki_static_route;


                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes


                        class MplsActivatedInterfaces : public Entity
                        {
                            public:
                                MplsActivatedInterfaces();
                                ~MplsActivatedInterfaces();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class MplsActivatedInterface : public Entity
                            {
                                public:
                                    MplsActivatedInterface();
                                    ~MplsActivatedInterface();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value interface_name; //type: string




                            }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface


                                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces::MplsActivatedInterface> > mpls_activated_interface;


                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces


                        class GlobalTimers : public Entity
                        {
                            public:
                                GlobalTimers();
                                ~GlobalTimers();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value keepalive; //type: uint32
                                Value hold_time; //type: uint32
                                Value min_accept_hold_time; //type: uint32




                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers


                        class Bfd : public Entity
                        {
                            public:
                                Bfd();
                                ~Bfd();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value detection_multiplier; //type: uint32
                                Value interval; //type: uint32




                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd


                        class SendSocketBufferSizes : public Entity
                        {
                            public:
                                SendSocketBufferSizes();
                                ~SendSocketBufferSizes();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value socket_send_size; //type: uint32
                                Value bgp_send_size; //type: uint32




                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes


                        class ReceiveSocketBufferSizes : public Entity
                        {
                            public:
                                ReceiveSocketBufferSizes();
                                ~ReceiveSocketBufferSizes();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value socket_receive_size; //type: uint32
                                Value bgp_receive_size; //type: uint32




                        }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes


                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AsLeague> as_league;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::AttributeFilterGroups> attribute_filter_groups;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Bfd> bfd;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ClusterId> cluster_id;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationDomain> confederation_domain;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ConfederationPeerAses> confederation_peer_ases;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalAfs> global_afs;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalGracefulMaintenanceActivate> global_graceful_maintenance_activate;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::GlobalTimers> global_timers;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::Limits> limits;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::MplsActivatedInterfaces> mpls_activated_interfaces;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::ReceiveSocketBufferSizes> receive_socket_buffer_sizes;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiServers> rpki_servers;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::RpkiStaticRoutes> rpki_static_routes;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::SendSocketBufferSizes> send_socket_buffer_sizes;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::UpdateDelay> update_delay;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global::WriteLimit> write_limit;


                    }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global


                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::BgpEntity> bgp_entity;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf::Global> global;


                }; // Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf


                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::DefaultVrf> default_vrf;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs::Vrfs> vrfs;


            }; // Bgp::Instance::InstanceAs::FourByteAs


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs::FourByteAs> > four_byte_as;


        }; // Bgp::Instance::InstanceAs


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance::InstanceAs> > instance_as;


    }; // Bgp::Instance


        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::Bgp::Instance> > instance;


}; // Bgp

class BmpServers : public Entity
{
    public:
        BmpServers();
        ~BmpServers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class BmpServer : public Entity
    {
        public:
            BmpServer();
            ~BmpServer();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value server_id; //type: uint32
            Value create; //type: empty
            Value maximum_buffer_size; //type: uint32
            Value initial_delay; //type: uint32
            Value flapping_delay; //type: uint32
            Value status_report_interval; //type: uint32
            Value description; //type: string
            Value vrf; //type: string
            Value shutdown; //type: boolean
            Value update_source_interface; //type: string


        class InitialRefreshDelay : public Entity
        {
            public:
                InitialRefreshDelay();
                ~InitialRefreshDelay();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value delay; //type: uint32
                Value spread; //type: uint32




        }; // BmpServers::BmpServer::InitialRefreshDelay


        class HostPort : public Entity
        {
            public:
                HostPort();
                ~HostPort();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value host; //type: string
                Value port; //type: uint16




        }; // BmpServers::BmpServer::HostPort


        class Tos : public Entity
        {
            public:
                Tos();
                ~Tos();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value type; //type: BgpTosEnum
                Value value_; //type: one of uint32, enumeration


                class BgpTosEnum;
                class BgpPrecedenceDscpEnum;


        }; // BmpServers::BmpServer::Tos


            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::BmpServers::BmpServer::HostPort> host_port;
            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::BmpServers::BmpServer::InitialRefreshDelay> initial_refresh_delay;
            std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::BmpServers::BmpServer::Tos> tos;


    }; // BmpServers::BmpServer


        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_bgp_cfg::BmpServers::BmpServer> > bmp_server;


}; // BmpServers


class BgpOrfEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value receive;
        static const Enum::Value send;
        static const Enum::Value both;

};

class BgpFlowspecValidationCfgEnum : public Enum
{
    public:
        static const Enum::Value enable;
        static const Enum::Value disable;
        static const Enum::Value redirect_nexhop_disable;

};

class BgpSignalEnum : public Enum
{
    public:
        static const Enum::Value bgp_disable;
        static const Enum::Value ldp_disable;

};

class BgpBfdEnableModeEnum : public Enum
{
    public:
        static const Enum::Value disable;
        static const Enum::Value default_;
        static const Enum::Value strict;

};

class BgpVrfRouteTargetEnum : public Enum
{
    public:
        static const Enum::Value as;
        static const Enum::Value ipv4_address;
        static const Enum::Value four_byte_as;

};

class BgpClusterIdEnum : public Enum
{
    public:
        static const Enum::Value number;
        static const Enum::Value ipv4_address;

};

class BgpEbgpSendDmzEnableModeEnum : public Enum
{
    public:
        static const Enum::Value disable;
        static const Enum::Value default_;
        static const Enum::Value cumulative;

};

class BgpRpkiTransportEnum : public Enum
{
    public:
        static const Enum::Value tcp;
        static const Enum::Value ssh;

};

class BgpSiteOfOriginEnum : public Enum
{
    public:
        static const Enum::Value as;
        static const Enum::Value ipv4_address;
        static const Enum::Value four_byte_as;

};

class BgpAfEncapsulationEnum : public Enum
{
    public:
        static const Enum::Value vx_lan;

};

class BgpRouteDistinguisherEnum : public Enum
{
    public:
        static const Enum::Value auto_;
        static const Enum::Value as;
        static const Enum::Value four_byte_as;
        static const Enum::Value ipv4_address;

};

class BgpMvpnSfsSelectEnum : public Enum
{
    public:
        static const Enum::Value all_paths;
        static const Enum::Value highest_ip_address;

};

class BgpAdvRtEnum : public Enum
{
    public:
        static const Enum::Value bgp_regular_rt;
        static const Enum::Value bgp_stitching_rt;

};

class BgpSendMcastAttrCfgEnum : public Enum
{
    public:
        static const Enum::Value enable;
        static const Enum::Value disable;

};

class BgpTcpModeEnum : public Enum
{
    public:
        static const Enum::Value either;
        static const Enum::Value active_only;
        static const Enum::Value passive_only;

};

class BgpReorgOptEnum : public Enum
{
    public:
        static const Enum::Value bgp_cfg_adv;
        static const Enum::Value bgp_cfg_adv_reorg;
        static const Enum::Value bgp_cfg_adv_disable;
        static const Enum::Value bgp_cfg_adv_local;
        static const Enum::Value bgp_cfg_adv_def_imp_disable;

};

class BgpAigpCfgPoiEnum : public Enum
{
    public:
        static const Enum::Value pre_best_path;
        static const Enum::Value igp_cost;

};

class BgpAigpCfgEnum : public Enum
{
    public:
        static const Enum::Value enable;
        static const Enum::Value disable;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_CFG_ */

