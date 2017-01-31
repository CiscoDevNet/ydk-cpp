#ifndef _CISCO_IOS_XR_MPLS_TE_CFG_
#define _CISCO_IOS_XR_MPLS_TE_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_cfg {

class MplsTe : public Entity
{
    public:
        MplsTe();
        ~MplsTe();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


        YLeaf enable_traffic_engineering; //type: empty

    class DiffServTrafficEngineering : public Entity
    {
        public:
            DiffServTrafficEngineering();
            ~DiffServTrafficEngineering();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf bandwidth_constraint_model; //type: BandwidthConstraintEnum
            YLeaf mode_ietf; //type: IetfModeEnum

        class Classes : public Entity
        {
            public:
                Classes();
                ~Classes();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Class_ : public Entity
            {
                public:
                    Class_();
                    ~Class_();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf class_number; //type: uint32
                    YLeaf class_type; //type: uint32
                    YLeaf class_priority; //type: uint32
                    YLeaf unused; //type: boolean



            }; // MplsTe::DiffServTrafficEngineering::Classes::Class_


                std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::DiffServTrafficEngineering::Classes::Class_> > class_;


        }; // MplsTe::DiffServTrafficEngineering::Classes


            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::DiffServTrafficEngineering::Classes> classes;


    }; // MplsTe::DiffServTrafficEngineering


    class NamedTunnels : public Entity
    {
        public:
            NamedTunnels();
            ~NamedTunnels();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf enable; //type: empty

        class Tunnels : public Entity
        {
            public:
                Tunnels();
                ~Tunnels();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Tunnel : public Entity
            {
                public:
                    Tunnel();
                    ~Tunnel();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf tunnel_name; //type: string
                    YLeaf tunnel_type; //type: MplsTeConfigTunnelEnum
                    YLeaf enable; //type: empty

                class TunnelAttributes : public Entity
                {
                    public:
                        TunnelAttributes();
                        ~TunnelAttributes();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf shutdown; //type: empty
                        YLeaf forward_class; //type: uint32
                        YLeaf destination; //type: string
                        YLeaf record_route; //type: empty
                        YLeaf path_selection_metric; //type: MplsTePathSelectionMetricEnum
                        YLeaf soft_preemption; //type: empty
                        YLeaf load_share; //type: uint32

                    class PathSetups : public Entity
                    {
                        public:
                            PathSetups();
                            ~PathSetups();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PathSetup : public Entity
                        {
                            public:
                                PathSetup();
                                ~PathSetup();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf path_setup_name; //type: string
                                YLeaf preference; //type: int32
                                YLeaf enable; //type: empty

                            class PathComputation : public Entity
                            {
                                public:
                                    PathComputation();
                                    ~PathComputation();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf path_computation_method; //type: MplsTePathComputationMethodEnum
                                    YLeaf explicit_path_name; //type: string
                                    YLeaf path_computation_server; //type: string



                            }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation


                                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup::PathComputation> path_computation; // presence node


                        }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup


                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups::PathSetup> > path_setup;


                    }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups


                    class TunnelPathSelection : public Entity
                    {
                        public:
                            TunnelPathSelection();
                            ~TunnelPathSelection();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf tiebreaker; //type: MplsTePathSelectionTiebreakerEnum
                            YLeaf path_selection_hop_limit; //type: uint32
                            YLeaf path_selection_cost_limit; //type: uint32

                        class Invalidation : public Entity
                        {
                            public:
                                Invalidation();
                                ~Invalidation();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf path_invalidation_timeout; //type: uint32
                                YLeaf path_invalidation_action; //type: PathInvalidationActionEnum



                        }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation


                            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection::Invalidation> invalidation; // presence node


                    }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection


                    class AutoBandwidth : public Entity
                    {
                        public:
                            AutoBandwidth();
                            ~AutoBandwidth();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf underflow_enable; //type: boolean
                            YLeaf enabled; //type: boolean
                            YLeaf application_frequency; //type: uint32
                            YLeaf overflow_enable; //type: boolean
                            YLeaf collection_only; //type: empty

                        class Underflow : public Entity
                        {
                            public:
                                Underflow();
                                ~Underflow();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf underflow_threshold_percent; //type: uint32
                                YLeaf underflow_threshold_value; //type: uint32
                                YLeaf underflow_threshold_limit; //type: uint32



                        }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow


                        class Overflow : public Entity
                        {
                            public:
                                Overflow();
                                ~Overflow();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf overflow_threshold_percent; //type: uint32
                                YLeaf overflow_threshold_value; //type: uint32
                                YLeaf overflow_threshold_limit; //type: uint32



                        }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow


                        class BandwidthLimits : public Entity
                        {
                            public:
                                BandwidthLimits();
                                ~BandwidthLimits();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf bandwidth_min_limit; //type: uint32
                                YLeaf bandwidth_max_limit; //type: uint32



                        }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits


                        class AdjustmentThreshold : public Entity
                        {
                            public:
                                AdjustmentThreshold();
                                ~AdjustmentThreshold();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf adjustment_threshold_percent; //type: uint32
                                YLeaf adjustment_threshold_value; //type: uint32



                        }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold


                            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::AdjustmentThreshold> adjustment_threshold; // presence node
                            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::BandwidthLimits> bandwidth_limits; // presence node
                            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Overflow> overflow; // presence node
                            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth::Underflow> underflow; // presence node


                    }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth


                    class Priority : public Entity
                    {
                        public:
                            Priority();
                            ~Priority();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf setup_priority; //type: uint32
                            YLeaf hold_priority; //type: uint32



                    }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority


                    class Logging : public Entity
                    {
                        public:
                            Logging();
                            ~Logging();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf lsp_switch_over_change_message; //type: empty
                            YLeaf all; //type: empty
                            YLeaf record_route_messsage; //type: empty
                            YLeaf bfd_state_message; //type: empty
                            YLeaf bandwidth_change_message; //type: empty
                            YLeaf reoptimize_attempts_message; //type: empty
                            YLeaf reroute_messsage; //type: empty
                            YLeaf state_message; //type: empty
                            YLeaf insufficient_bw_message; //type: empty
                            YLeaf reoptimized_message; //type: empty
                            YLeaf pcalc_failure_message; //type: empty



                    }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging


                    class Bandwidth : public Entity
                    {
                        public:
                            Bandwidth();
                            ~Bandwidth();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf dste_type; //type: MplsTeBandwidthDsteEnum
                            YLeaf class_or_pool_type; //type: uint32
                            YLeaf bandwidth; //type: uint32



                    }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth


                    class Autoroute : public Entity
                    {
                        public:
                            Autoroute();
                            ~Autoroute();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf destination; //type: empty

                        class Metric : public Entity
                        {
                            public:
                                Metric();
                                ~Metric();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf metric_type; //type: MplsTeAutorouteMetricEnum
                                YLeaf absolute_metric; //type: uint32
                                YLeaf relative_metric; //type: int32
                                YLeaf constant_metric; //type: uint32



                        }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Metric


                        class AutorouteAnnounce : public Entity
                        {
                            public:
                                AutorouteAnnounce();
                                ~AutorouteAnnounce();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf enable; //type: empty
                                YLeaf include_ipv6; //type: empty

                            class Metric : public Entity
                            {
                                public:
                                    Metric();
                                    ~Metric();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf metric_type; //type: MplsTeAutorouteMetricEnum
                                    YLeaf absolute_metric; //type: uint32
                                    YLeaf relative_metric; //type: int32
                                    YLeaf constant_metric; //type: uint32



                            }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric


                                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce::Metric> metric;


                        }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce


                        class DestinationXr : public Entity
                        {
                            public:
                                DestinationXr();
                                ~DestinationXr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Destination : public Entity
                            {
                                public:
                                    Destination();
                                    ~Destination();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf destination_address; //type: string



                            }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr::Destination


                                std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr::Destination> > destination;


                        }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr


                            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::AutorouteAnnounce> autoroute_announce;
                            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::DestinationXr> destination_xr;
                            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute::Metric> metric;


                    }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute


                    class NewStyleAffinityAffinityTypes : public Entity
                    {
                        public:
                            NewStyleAffinityAffinityTypes();
                            ~NewStyleAffinityAffinityTypes();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class NewStyleAffinityAffinityType : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityType();
                                ~NewStyleAffinityAffinityType();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum



                        }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType


                        class NewStyleAffinityAffinityTypeAffinity1 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1();
                                ~NewStyleAffinityAffinityTypeAffinity1();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string



                        }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string



                        }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string



                        }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string



                        }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string



                        }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string



                        }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string
                                YLeaf affinity7; //type: string



                        }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string
                                YLeaf affinity7; //type: string
                                YLeaf affinity8; //type: string



                        }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string
                                YLeaf affinity7; //type: string
                                YLeaf affinity8; //type: string
                                YLeaf affinity9; //type: string



                        }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string
                                YLeaf affinity7; //type: string
                                YLeaf affinity8; //type: string
                                YLeaf affinity9; //type: string
                                YLeaf affinity10; //type: string



                        }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10


                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType> > new_style_affinity_affinity_type;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1> > new_style_affinity_affinity_type_affinity1;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2> > new_style_affinity_affinity_type_affinity1_affinity2;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10;


                    }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes


                    class FastReroute : public Entity
                    {
                        public:
                            FastReroute();
                            ~FastReroute();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf bandwidth_protection; //type: uint32
                            YLeaf node_protection; //type: uint32



                    }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute


                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::AutoBandwidth> auto_bandwidth;
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Autoroute> autoroute;
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Bandwidth> bandwidth; // presence node
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::FastReroute> fast_reroute; // presence node
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Logging> logging;
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::NewStyleAffinityAffinityTypes> new_style_affinity_affinity_types;
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::PathSetups> path_setups;
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::Priority> priority; // presence node
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes::TunnelPathSelection> tunnel_path_selection;


                }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes


                class TunnelId : public Entity
                {
                    public:
                        TunnelId();
                        ~TunnelId();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf tunnel_id_type; //type: MplsTeTunnelIdEnum
                        YLeaf tunnel_id; //type: uint32



                }; // MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId


                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelAttributes> tunnel_attributes;
                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel::TunnelId> tunnel_id; // presence node


            }; // MplsTe::NamedTunnels::Tunnels::Tunnel


                std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels::Tunnel> > tunnel;


        }; // MplsTe::NamedTunnels::Tunnels


            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels::Tunnels> tunnels;


    }; // MplsTe::NamedTunnels


    class GmplsUni : public Entity
    {
        public:
            GmplsUni();
            ~GmplsUni();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



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



            class PathOptionTimers : public Entity
            {
                public:
                    PathOptionTimers();
                    ~PathOptionTimers();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Holddown : public Entity
                {
                    public:
                        Holddown();
                        ~Holddown();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf minimum; //type: uint32
                        YLeaf maximum; //type: uint32



                }; // MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown


                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Timers::PathOptionTimers::Holddown> holddown;


            }; // MplsTe::GmplsUni::Timers::PathOptionTimers


                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Timers::PathOptionTimers> path_option_timers;


        }; // MplsTe::GmplsUni::Timers


        class Controllers : public Entity
        {
            public:
                Controllers();
                ~Controllers();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Controller : public Entity
            {
                public:
                    Controller();
                    ~Controller();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf controller_name; //type: string
                    YLeaf enable; //type: empty

                class Announce : public Entity
                {
                    public:
                        Announce();
                        ~Announce();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf srl_gs; //type: empty



                }; // MplsTe::GmplsUni::Controllers::Controller::Announce


                class ControllerLogging : public Entity
                {
                    public:
                        ControllerLogging();
                        ~ControllerLogging();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf discovered_srlg_change_logging; //type: empty



                }; // MplsTe::GmplsUni::Controllers::Controller::ControllerLogging


                class GmplsUnitunnelHead : public Entity
                {
                    public:
                        GmplsUnitunnelHead();
                        ~GmplsUnitunnelHead();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf tunnel_id; //type: uint32
                        YLeaf enable; //type: empty
                        YLeaf destination; //type: string
                        YLeaf record_route; //type: empty
                        YLeaf signalled_name; //type: string

                    class PathOptions : public Entity
                    {
                        public:
                            PathOptions();
                            ~PathOptions();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class PathOption : public Entity
                        {
                            public:
                                PathOption();
                                ~PathOption();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf preference_level; //type: uint32
                                YLeaf path_type; //type: MplsTePathOptionEnum
                                YLeaf path_id; //type: uint32
                                YLeaf path_name; //type: string
                                YLeaf xro_type; //type: empty
                                YLeaf xro_attribute_set_name; //type: string
                                YLeaf lockdown; //type: MplsTePathOptionPropertyEnum
                                YLeaf verbatim; //type: MplsTePathOptionPropertyEnum
                                YLeaf signaled_label; //type: MplsTeSignaledLabelEnum
                                YLeaf dwdm_channel; //type: uint32



                        }; // MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption


                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions::PathOption> > path_option;


                    }; // MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions


                    class Recording : public Entity
                    {
                        public:
                            Recording();
                            ~Recording();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf srlg; //type: empty



                    }; // MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording


                    class Logging : public Entity
                    {
                        public:
                            Logging();
                            ~Logging();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf state_message; //type: empty



                    }; // MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging


                    class Priority : public Entity
                    {
                        public:
                            Priority();
                            ~Priority();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf setup_priority; //type: uint32
                            YLeaf hold_priority; //type: uint32



                    }; // MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority


                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Logging> logging;
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::PathOptions> path_options;
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Priority> priority; // presence node
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead::Recording> recording;


                }; // MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead


                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::Announce> announce;
                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::ControllerLogging> controller_logging;
                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller::GmplsUnitunnelHead> gmpls_unitunnel_head;


            }; // MplsTe::GmplsUni::Controllers::Controller


                std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers::Controller> > controller;


        }; // MplsTe::GmplsUni::Controllers


            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Controllers> controllers;
            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni::Timers> timers;


    }; // MplsTe::GmplsUni


    class GlobalAttributes : public Entity
    {
        public:
            GlobalAttributes();
            ~GlobalAttributes();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf log_nsr_status; //type: empty
            YLeaf log_issu_status; //type: empty
            YLeaf reoptimize_link_up; //type: empty
            YLeaf reoptimize_delay_cleanup_timer; //type: uint32
            YLeaf disable_reoptimize_affinity_failure; //type: empty
            YLeaf maximum_tunnels; //type: uint32
            YLeaf link_holddown_timer; //type: uint32
            YLeaf fault_oam; //type: empty
            YLeaf enable_unequal_load_balancing; //type: empty
            YLeaf log_tail; //type: empty
            YLeaf reoptimize_delay_after_frr_timer; //type: uint32
            YLeaf auto_bandwidth_collect_frequency; //type: uint32
            YLeaf reopt_delay_path_protect_switchover_timer; //type: uint32
            YLeaf log_all; //type: empty
            YLeaf loose_path_retry_period; //type: uint32
            YLeaf reoptimize_load_balancing; //type: empty
            YLeaf log_head; //type: empty
            YLeaf path_selection_ignore_overload; //type: empty
            YLeaf graceful_preemption_on_bandwidth_reduction; //type: empty
            YLeaf advertise_explicit_nulls; //type: empty
            YLeaf reoptimize_delay_install_timer; //type: uint32
            YLeaf reoptimize_delay_after_affinity_failure_timer; //type: uint32
            YLeaf log_frr_protection; //type: MplsTeLogFrrProtectionEnum
            YLeaf reoptimize_timer_frequency; //type: uint32
            YLeaf log_mid; //type: empty
            YLeaf log_preemption; //type: empty

        class AutoTunnel : public Entity
        {
            public:
                AutoTunnel();
                ~AutoTunnel();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Pcc : public Entity
            {
                public:
                    Pcc();
                    ~Pcc();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class TunnelRange : public Entity
                {
                    public:
                        TunnelRange();
                        ~TunnelRange();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf min_tunnel_id; //type: uint32
                        YLeaf max_tunnel_id; //type: uint32



                }; // MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange


                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Pcc::TunnelRange> tunnel_range;


            }; // MplsTe::GlobalAttributes::AutoTunnel::Pcc


            class P2PAutoTunnel : public Entity
            {
                public:
                    P2PAutoTunnel();
                    ~P2PAutoTunnel();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class TunnelRange : public Entity
                {
                    public:
                        TunnelRange();
                        ~TunnelRange();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf min_tunnel_id; //type: uint32
                        YLeaf max_tunnel_id; //type: uint32



                }; // MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange


                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel::TunnelRange> tunnel_range;


            }; // MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel


            class Backup : public Entity
            {
                public:
                    Backup();
                    ~Backup();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf affinity_ignore; //type: empty

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



                    class Removal : public Entity
                    {
                        public:
                            Removal();
                            ~Removal();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf unused; //type: uint32



                    }; // MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal


                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers::Removal> removal;


                }; // MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers


                class TunnelRange : public Entity
                {
                    public:
                        TunnelRange();
                        ~TunnelRange();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf min_tunnel_id; //type: uint32
                        YLeaf max_tunnel_id; //type: uint32



                }; // MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange


                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Backup::Timers> timers;
                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Backup::TunnelRange> tunnel_range;


            }; // MplsTe::GlobalAttributes::AutoTunnel::Backup


            class Mesh : public Entity
            {
                public:
                    Mesh();
                    ~Mesh();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class MeshGroups : public Entity
                {
                    public:
                        MeshGroups();
                        ~MeshGroups();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class MeshGroup : public Entity
                    {
                        public:
                            MeshGroup();
                            ~MeshGroup();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf mesh_group_id; //type: uint32
                            YLeaf destination_list; //type: string
                            YLeaf disable; //type: empty
                            YLeaf attribute_set; //type: string
                            YLeaf create; //type: empty
                            YLeaf one_hop; //type: empty



                    }; // MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup


                        std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups::MeshGroup> > mesh_group;


                }; // MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups


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



                    class Removal : public Entity
                    {
                        public:
                            Removal();
                            ~Removal();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf unused; //type: uint32



                    }; // MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal


                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers::Removal> removal;


                }; // MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers


                class TunnelRange : public Entity
                {
                    public:
                        TunnelRange();
                        ~TunnelRange();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf min_tunnel_id; //type: uint32
                        YLeaf max_tunnel_id; //type: uint32



                }; // MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange


                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Mesh::MeshGroups> mesh_groups;
                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Mesh::Timers> timers;
                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Mesh::TunnelRange> tunnel_range;


            }; // MplsTe::GlobalAttributes::AutoTunnel::Mesh


            class P2MpAutoTunnel : public Entity
            {
                public:
                    P2MpAutoTunnel();
                    ~P2MpAutoTunnel();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class TunnelRange : public Entity
                {
                    public:
                        TunnelRange();
                        ~TunnelRange();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf min_tunnel_id; //type: uint32
                        YLeaf max_tunnel_id; //type: uint32



                }; // MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange


                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel::TunnelRange> tunnel_range;


            }; // MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel


                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Backup> backup;
                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Mesh> mesh;
                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::P2MpAutoTunnel> p2mp_auto_tunnel;
                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::P2PAutoTunnel> p2p_auto_tunnel;
                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel::Pcc> pcc;


        }; // MplsTe::GlobalAttributes::AutoTunnel


        class HardwareOutOfResource : public Entity
        {
            public:
                HardwareOutOfResource();
                ~HardwareOutOfResource();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class OorRedState : public Entity
            {
                public:
                    OorRedState();
                    ~OorRedState();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf oor_node_protection_disable; //type: empty
                    YLeaf oor_available_bandwidth_percentage; //type: uint32
                    YLeaf oor_accept_lsp_min_bandwidth; //type: int32
                    YLeaf oor_accept_reopt_lsp; //type: empty
                    YLeaf oor_metric_te_penalty; //type: int32



            }; // MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState


            class OorYellowState : public Entity
            {
                public:
                    OorYellowState();
                    ~OorYellowState();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf oor_node_protection_disable; //type: empty
                    YLeaf oor_available_bandwidth_percentage; //type: uint32
                    YLeaf oor_accept_lsp_min_bandwidth; //type: int32
                    YLeaf oor_accept_reopt_lsp; //type: empty
                    YLeaf oor_metric_te_penalty; //type: int32



            }; // MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState


            class OorGreenState : public Entity
            {
                public:
                    OorGreenState();
                    ~OorGreenState();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf oor_recovery_duration; //type: uint32
                    YLeaf oor_node_protection_disable; //type: empty
                    YLeaf oor_available_bandwidth_percentage; //type: uint32
                    YLeaf oor_accept_lsp_min_bandwidth; //type: int32
                    YLeaf oor_accept_reopt_lsp; //type: empty
                    YLeaf oor_metric_te_penalty; //type: int32



            }; // MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState


                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::HardwareOutOfResource::OorGreenState> oor_green_state;
                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::HardwareOutOfResource::OorRedState> oor_red_state;
                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::HardwareOutOfResource::OorYellowState> oor_yellow_state;


        }; // MplsTe::GlobalAttributes::HardwareOutOfResource


        class SecondaryRouterIds : public Entity
        {
            public:
                SecondaryRouterIds();
                ~SecondaryRouterIds();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class SecondaryRouterId : public Entity
            {
                public:
                    SecondaryRouterId();
                    ~SecondaryRouterId();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf secondary_router_id_value; //type: string



            }; // MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId


                std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::SecondaryRouterIds::SecondaryRouterId> > secondary_router_id;


        }; // MplsTe::GlobalAttributes::SecondaryRouterIds


        class Srlg : public Entity
        {
            public:
                Srlg();
                ~Srlg();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf default_admin_weight; //type: int32
                YLeaf enable; //type: empty

            class Names : public Entity
            {
                public:
                    Names();
                    ~Names();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Name : public Entity
                {
                    public:
                        Name();
                        ~Name();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf srlg_name; //type: string
                        YLeaf admin_weight; //type: int32

                    class StaticSrlgMembers : public Entity
                    {
                        public:
                            StaticSrlgMembers();
                            ~StaticSrlgMembers();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class StaticSrlgMember : public Entity
                        {
                            public:
                                StaticSrlgMember();
                                ~StaticSrlgMember();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf from_address; //type: string
                                YLeaf to_address; //type: string



                        }; // MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember


                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers::StaticSrlgMember> > static_srlg_member;


                    }; // MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers


                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Srlg::Names::Name::StaticSrlgMembers> static_srlg_members;


                }; // MplsTe::GlobalAttributes::Srlg::Names::Name


                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Srlg::Names::Name> > name;


            }; // MplsTe::GlobalAttributes::Srlg::Names


            class Values : public Entity
            {
                public:
                    Values();
                    ~Values();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Value_ : public Entity
                {
                    public:
                        Value_();
                        ~Value_();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf srlg_number; //type: uint32
                        YLeaf admin_weight; //type: int32

                    class Ipv4AddressMaps : public Entity
                    {
                        public:
                            Ipv4AddressMaps();
                            ~Ipv4AddressMaps();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Ipv4AddressMap : public Entity
                        {
                            public:
                                Ipv4AddressMap();
                                ~Ipv4AddressMap();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf outgoing_ipv4_address; //type: string
                                YLeaf remote_ipv4_address; //type: string



                        }; // MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps::Ipv4AddressMap


                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps::Ipv4AddressMap> > ipv4_address_map;


                    }; // MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps


                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Srlg::Values::Value_::Ipv4AddressMaps> ipv4_address_maps;


                }; // MplsTe::GlobalAttributes::Srlg::Values::Value_


                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Srlg::Values::Value_> > value_;


            }; // MplsTe::GlobalAttributes::Srlg::Values


                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Srlg::Names> names;
                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Srlg::Values> values;


        }; // MplsTe::GlobalAttributes::Srlg


        class Queues : public Entity
        {
            public:
                Queues();
                ~Queues();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Queue : public Entity
            {
                public:
                    Queue();
                    ~Queue();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf role; //type: RoutePriorityRoleEnum
                    YLeaf value_; //type: uint32



            }; // MplsTe::GlobalAttributes::Queues::Queue


                std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Queues::Queue> > queue;


        }; // MplsTe::GlobalAttributes::Queues


        class Mib : public Entity
        {
            public:
                Mib();
                ~Mib();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf midpoint_lsp_stats_collection_disable; //type: empty



        }; // MplsTe::GlobalAttributes::Mib


        class AttributeSet : public Entity
        {
            public:
                AttributeSet();
                ~AttributeSet();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class PathOptionAttributes : public Entity
            {
                public:
                    PathOptionAttributes();
                    ~PathOptionAttributes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class PathOptionAttribute : public Entity
                {
                    public:
                        PathOptionAttribute();
                        ~PathOptionAttribute();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf attribute_set_name; //type: string
                        YLeaf enable; //type: empty

                    class BfdReversePath : public Entity
                    {
                        public:
                            BfdReversePath();
                            ~BfdReversePath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf bfd_reverse_path_type; //type: BfdReversePathEnum
                            YLeaf binding_label; //type: uint32



                    }; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath


                    class AttPathOptionPathSelection : public Entity
                    {
                        public:
                            AttPathOptionPathSelection();
                            ~AttPathOptionPathSelection();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf path_selection_exclude_list; //type: string
                            YLeaf enable; //type: empty
                            YLeaf path_selection_cost_limit; //type: uint32

                        class Invalidation : public Entity
                        {
                            public:
                                Invalidation();
                                ~Invalidation();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf path_invalidation_timeout; //type: uint32
                                YLeaf path_invalidation_action; //type: PathInvalidationActionEnum



                        }; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation


                            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection::Invalidation> invalidation; // presence node


                    }; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection


                    class Pce : public Entity
                    {
                        public:
                            Pce();
                            ~Pce();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf enable; //type: empty

                        class Bidirectional : public Entity
                        {
                            public:
                                Bidirectional();
                                ~Bidirectional();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf bd_source_address; //type: string
                                YLeaf bd_group_id; //type: uint32



                        }; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional


                        class DisjointPath : public Entity
                        {
                            public:
                                DisjointPath();
                                ~DisjointPath();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf dp_source_address; //type: string
                                YLeaf dp_type; //type: uint32
                                YLeaf dp_group_id; //type: uint32



                        }; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath


                            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::Bidirectional> bidirectional; // presence node
                            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce::DisjointPath> disjoint_path; // presence node


                    }; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce


                    class AffinityMask : public Entity
                    {
                        public:
                            AffinityMask();
                            ~AffinityMask();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf affinity; //type: string
                            YLeaf mask; //type: string



                    }; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask


                    class Bandwidth : public Entity
                    {
                        public:
                            Bandwidth();
                            ~Bandwidth();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf dste_type; //type: MplsTeBandwidthDsteEnum
                            YLeaf class_or_pool_type; //type: uint32
                            YLeaf bandwidth; //type: uint32



                    }; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth


                    class NewStyleAffinityAffinityTypes : public Entity
                    {
                        public:
                            NewStyleAffinityAffinityTypes();
                            ~NewStyleAffinityAffinityTypes();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class NewStyleAffinityAffinityType : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityType();
                                ~NewStyleAffinityAffinityType();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum



                        }; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType


                        class NewStyleAffinityAffinityTypeAffinity1 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1();
                                ~NewStyleAffinityAffinityTypeAffinity1();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string
                                YLeaf affinity7; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string
                                YLeaf affinity7; //type: string
                                YLeaf affinity8; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string
                                YLeaf affinity7; //type: string
                                YLeaf affinity8; //type: string
                                YLeaf affinity9; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string
                                YLeaf affinity7; //type: string
                                YLeaf affinity8; //type: string
                                YLeaf affinity9; //type: string
                                YLeaf affinity10; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10


                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType> > new_style_affinity_affinity_type;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1> > new_style_affinity_affinity_type_affinity1;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2> > new_style_affinity_affinity_type_affinity1_affinity2;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10;


                    }; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes


                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AffinityMask> affinity_mask; // presence node
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::AttPathOptionPathSelection> att_path_option_path_selection;
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Bandwidth> bandwidth; // presence node
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::BfdReversePath> bfd_reverse_path; // presence node
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::NewStyleAffinityAffinityTypes> new_style_affinity_affinity_types;
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute::Pce> pce;


                }; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute


                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes::PathOptionAttribute> > path_option_attribute;


            }; // MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes


            class P2MpteAttributes : public Entity
            {
                public:
                    P2MpteAttributes();
                    ~P2MpteAttributes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class P2MpteAttribute : public Entity
                {
                    public:
                        P2MpteAttribute();
                        ~P2MpteAttribute();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf attribute_set_name; //type: string
                        YLeaf interface_bandwidth; //type: uint32
                        YLeaf enable; //type: empty
                        YLeaf record_route; //type: empty

                    class Priority : public Entity
                    {
                        public:
                            Priority();
                            ~Priority();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf setup_priority; //type: uint32
                            YLeaf hold_priority; //type: uint32



                    }; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Priority


                    class AffinityMask : public Entity
                    {
                        public:
                            AffinityMask();
                            ~AffinityMask();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf affinity; //type: string
                            YLeaf mask; //type: string



                    }; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::AffinityMask


                    class Bandwidth : public Entity
                    {
                        public:
                            Bandwidth();
                            ~Bandwidth();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf dste_type; //type: MplsTeBandwidthDsteEnum
                            YLeaf class_or_pool_type; //type: uint32
                            YLeaf bandwidth; //type: uint32



                    }; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Bandwidth


                    class PathSelection : public Entity
                    {
                        public:
                            PathSelection();
                            ~PathSelection();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf enable; //type: empty



                    }; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection


                    class NewStyleAffinityAffinityTypes : public Entity
                    {
                        public:
                            NewStyleAffinityAffinityTypes();
                            ~NewStyleAffinityAffinityTypes();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class NewStyleAffinityAffinityType : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityType();
                                ~NewStyleAffinityAffinityType();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum



                        }; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType


                        class NewStyleAffinityAffinityTypeAffinity1 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1();
                                ~NewStyleAffinityAffinityTypeAffinity1();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string
                                YLeaf affinity7; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string
                                YLeaf affinity7; //type: string
                                YLeaf affinity8; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string
                                YLeaf affinity7; //type: string
                                YLeaf affinity8; //type: string
                                YLeaf affinity9; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string
                                YLeaf affinity7; //type: string
                                YLeaf affinity8; //type: string
                                YLeaf affinity9; //type: string
                                YLeaf affinity10; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10


                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType> > new_style_affinity_affinity_type;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1> > new_style_affinity_affinity_type_affinity1;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2> > new_style_affinity_affinity_type_affinity1_affinity2;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10;


                    }; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes


                    class FastReroute : public Entity
                    {
                        public:
                            FastReroute();
                            ~FastReroute();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf bandwidth_protection; //type: uint32
                            YLeaf node_protection; //type: uint32



                    }; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::FastReroute


                    class Logging : public Entity
                    {
                        public:
                            Logging();
                            ~Logging();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf insufficient_bw_message; //type: empty
                            YLeaf reoptimized_message; //type: empty
                            YLeaf bandwidth_change_message; //type: empty
                            YLeaf all; //type: empty
                            YLeaf pcalc_failure_message; //type: empty
                            YLeaf state_message; //type: empty
                            YLeaf reoptimize_attempts_message; //type: empty
                            YLeaf sub_lsp_state_message; //type: empty
                            YLeaf reroute_messsage; //type: empty



                    }; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging


                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::AffinityMask> affinity_mask; // presence node
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Bandwidth> bandwidth; // presence node
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::FastReroute> fast_reroute; // presence node
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Logging> logging;
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::NewStyleAffinityAffinityTypes> new_style_affinity_affinity_types;
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::PathSelection> path_selection;
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute::Priority> priority; // presence node


                }; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute


                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes::P2MpteAttribute> > p2mpte_attribute;


            }; // MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes


            class P2PTeAttributes : public Entity
            {
                public:
                    P2PTeAttributes();
                    ~P2PTeAttributes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class P2PTeAttribute : public Entity
                {
                    public:
                        P2PTeAttribute();
                        ~P2PTeAttribute();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf attribute_set_name; //type: string
                        YLeaf enable; //type: empty

                    class PathSelection : public Entity
                    {
                        public:
                            PathSelection();
                            ~PathSelection();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf path_selection_metric; //type: MplsTePathSelectionMetricEnum
                            YLeaf path_selection_segment_routing_adjacency_protection; //type: MplsTePathSelectionSegmentRoutingAdjacencyProtectionEnum
                            YLeaf enable; //type: empty

                        class SegmentRoutingPrepend : public Entity
                        {
                            public:
                                SegmentRoutingPrepend();
                                ~SegmentRoutingPrepend();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf enable; //type: empty

                            class Indexes : public Entity
                            {
                                public:
                                    Indexes();
                                    ~Indexes();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Index_ : public Entity
                                {
                                    public:
                                        Index_();
                                        ~Index_();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf index_number; //type: uint32
                                        YLeaf prepend_type; //type: SrPrependEnum
                                        YLeaf mpls_label; //type: int32



                                }; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index_


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes::Index_> > index_;


                            }; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes


                                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend::Indexes> indexes;


                        }; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend


                        class Invalidation : public Entity
                        {
                            public:
                                Invalidation();
                                ~Invalidation();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf invalidation_timer; //type: uint32
                                YLeaf invalidation_timer_expire_type; //type: MplsTePathSelectionInvalidationTimerExpireEnum



                        }; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation


                            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::Invalidation> invalidation;
                            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection::SegmentRoutingPrepend> segment_routing_prepend;


                    }; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection


                    class Pce : public Entity
                    {
                        public:
                            Pce();
                            ~Pce();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf enable; //type: empty

                        class Bidirectional : public Entity
                        {
                            public:
                                Bidirectional();
                                ~Bidirectional();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf bd_source_address; //type: string
                                YLeaf bd_group_id; //type: uint32



                        }; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Bidirectional


                        class DisjointPath : public Entity
                        {
                            public:
                                DisjointPath();
                                ~DisjointPath();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf dp_source_address; //type: string
                                YLeaf dp_type; //type: uint32
                                YLeaf dp_group_id; //type: uint32



                        }; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::DisjointPath


                            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::Bidirectional> bidirectional; // presence node
                            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce::DisjointPath> disjoint_path; // presence node


                    }; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce


                    class AffinityMask : public Entity
                    {
                        public:
                            AffinityMask();
                            ~AffinityMask();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf affinity; //type: string
                            YLeaf mask; //type: string



                    }; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::AffinityMask


                    class Logging : public Entity
                    {
                        public:
                            Logging();
                            ~Logging();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf lsp_switch_over_change_message; //type: empty
                            YLeaf all; //type: empty
                            YLeaf record_route_messsage; //type: empty
                            YLeaf bfd_state_message; //type: empty
                            YLeaf bandwidth_change_message; //type: empty
                            YLeaf reoptimize_attempts_message; //type: empty
                            YLeaf reroute_messsage; //type: empty
                            YLeaf state_message; //type: empty
                            YLeaf insufficient_bw_message; //type: empty
                            YLeaf reoptimized_message; //type: empty
                            YLeaf pcalc_failure_message; //type: empty



                    }; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging


                    class NewStyleAffinityAffinityTypes : public Entity
                    {
                        public:
                            NewStyleAffinityAffinityTypes();
                            ~NewStyleAffinityAffinityTypes();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class NewStyleAffinityAffinityType : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityType();
                                ~NewStyleAffinityAffinityType();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum



                        }; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType


                        class NewStyleAffinityAffinityTypeAffinity1 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1();
                                ~NewStyleAffinityAffinityTypeAffinity1();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string
                                YLeaf affinity7; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string
                                YLeaf affinity7; //type: string
                                YLeaf affinity8; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string
                                YLeaf affinity7; //type: string
                                YLeaf affinity8; //type: string
                                YLeaf affinity9; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string
                                YLeaf affinity7; //type: string
                                YLeaf affinity8; //type: string
                                YLeaf affinity9; //type: string
                                YLeaf affinity10; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10


                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType> > new_style_affinity_affinity_type;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1> > new_style_affinity_affinity_type_affinity1;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2> > new_style_affinity_affinity_type_affinity1_affinity2;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10;


                    }; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes


                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::AffinityMask> affinity_mask; // presence node
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Logging> logging;
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::NewStyleAffinityAffinityTypes> new_style_affinity_affinity_types;
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::PathSelection> path_selection;
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute::Pce> pce;


                }; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute


                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes::P2PTeAttribute> > p2p_te_attribute;


            }; // MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes


            class AutoBackupAttributes : public Entity
            {
                public:
                    AutoBackupAttributes();
                    ~AutoBackupAttributes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class AutoBackupAttribute : public Entity
                {
                    public:
                        AutoBackupAttribute();
                        ~AutoBackupAttribute();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf attribute_set_name; //type: string
                        YLeaf enable; //type: empty
                        YLeaf record_route; //type: empty

                    class SignalledName : public Entity
                    {
                        public:
                            SignalledName();
                            ~SignalledName();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf name; //type: string
                            YLeaf source_type; //type: MplsTeSigNameOptionEnum
                            YLeaf protected_interface_type; //type: MplsTeSigNameOptionEnum
                            YLeaf mp_address; //type: boolean



                    }; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName


                    class AutoBackupLogging : public Entity
                    {
                        public:
                            AutoBackupLogging();
                            ~AutoBackupLogging();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf bandwidth_change_message; //type: empty
                            YLeaf reoptimize_attempts_message; //type: empty
                            YLeaf state_message; //type: empty
                            YLeaf reoptimized_message; //type: empty



                    }; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging


                    class Priority : public Entity
                    {
                        public:
                            Priority();
                            ~Priority();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf setup_priority; //type: uint32
                            YLeaf hold_priority; //type: uint32



                    }; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority


                    class AffinityMask : public Entity
                    {
                        public:
                            AffinityMask();
                            ~AffinityMask();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf affinity; //type: string
                            YLeaf mask; //type: string



                    }; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask


                    class PathSelection : public Entity
                    {
                        public:
                            PathSelection();
                            ~PathSelection();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf enable; //type: empty



                    }; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection


                    class PolicyClasses : public Entity
                    {
                        public:
                            PolicyClasses();
                            ~PolicyClasses();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeafList policy_class; //type: list of  uint32



                    }; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses


                    class NewStyleAffinityAffinityTypes : public Entity
                    {
                        public:
                            NewStyleAffinityAffinityTypes();
                            ~NewStyleAffinityAffinityTypes();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class NewStyleAffinityAffinityType : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityType();
                                ~NewStyleAffinityAffinityType();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum



                        }; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType


                        class NewStyleAffinityAffinityTypeAffinity1 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1();
                                ~NewStyleAffinityAffinityTypeAffinity1();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string
                                YLeaf affinity7; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string
                                YLeaf affinity7; //type: string
                                YLeaf affinity8; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string
                                YLeaf affinity7; //type: string
                                YLeaf affinity8; //type: string
                                YLeaf affinity9; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string
                                YLeaf affinity7; //type: string
                                YLeaf affinity8; //type: string
                                YLeaf affinity9; //type: string
                                YLeaf affinity10; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10


                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType> > new_style_affinity_affinity_type;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1> > new_style_affinity_affinity_type_affinity1;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2> > new_style_affinity_affinity_type_affinity1_affinity2;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10;


                    }; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes


                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AffinityMask> affinity_mask; // presence node
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::AutoBackupLogging> auto_backup_logging;
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::NewStyleAffinityAffinityTypes> new_style_affinity_affinity_types;
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PathSelection> path_selection;
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::PolicyClasses> policy_classes;
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::Priority> priority; // presence node
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute::SignalledName> signalled_name;


                }; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute


                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes::AutoBackupAttribute> > auto_backup_attribute;


            }; // MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes


            class OtnPpAttributes : public Entity
            {
                public:
                    OtnPpAttributes();
                    ~OtnPpAttributes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class OtnPpAttribute : public Entity
                {
                    public:
                        OtnPpAttribute();
                        ~OtnPpAttribute();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf attribute_set_name; //type: string
                        YLeaf aps_protection_mode; //type: MplsTeOtnApsProtectionModeEnum
                        YLeaf aps_restoration_style; //type: MplsTeOtnApsRestorationStyleEnum
                        YLeaf aps_protection_type; //type: MplsTeOtnApsProtectionEnum
                        YLeaf enable; //type: empty

                    class RevertScheduleNames : public Entity
                    {
                        public:
                            RevertScheduleNames();
                            ~RevertScheduleNames();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class RevertScheduleName : public Entity
                        {
                            public:
                                RevertScheduleName();
                                ~RevertScheduleName();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf schedule_name; //type: string
                                YLeaf revert_schedule_max_tries; //type: uint32
                                YLeaf sch_name_enable; //type: empty
                                YLeaf revert_schedule_frequency; //type: uint32

                            class ScheduleDuration : public Entity
                            {
                                public:
                                    ScheduleDuration();
                                    ~ScheduleDuration();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf hour; //type: uint32
                                    YLeaf minutes; //type: uint32



                            }; // MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration


                            class ScheduleDate : public Entity
                            {
                                public:
                                    ScheduleDate();
                                    ~ScheduleDate();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf hour; //type: uint32
                                    YLeaf minutes; //type: uint32
                                    YLeaf month; //type: uint32
                                    YLeaf day; //type: uint32
                                    YLeaf year; //type: uint32



                            }; // MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate


                                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDate> schedule_date; // presence node
                                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName::ScheduleDuration> schedule_duration; // presence node


                        }; // MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName


                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames::RevertScheduleName> > revert_schedule_name;


                    }; // MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames


                    class SubNetworkConnectionMode : public Entity
                    {
                        public:
                            SubNetworkConnectionMode();
                            ~SubNetworkConnectionMode();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf connection_mode; //type: MplsTeOtnSncModeEnum
                            YLeaf connection_monitoring_mode; //type: uint32



                    }; // MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode


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


                            YLeaf aps_wait_to_restore; //type: uint32
                            YLeaf aps_hold_off; //type: uint32



                    }; // MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers


                    class PathSelection : public Entity
                    {
                        public:
                            PathSelection();
                            ~PathSelection();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf enable; //type: empty



                    }; // MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection


                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::PathSelection> path_selection;
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::RevertScheduleNames> revert_schedule_names;
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::SubNetworkConnectionMode> sub_network_connection_mode;
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute::Timers> timers;


                }; // MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute


                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes::OtnPpAttribute> > otn_pp_attribute;


            }; // MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes


            class AutoMeshAttributes : public Entity
            {
                public:
                    AutoMeshAttributes();
                    ~AutoMeshAttributes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class AutoMeshAttribute : public Entity
                {
                    public:
                        AutoMeshAttribute();
                        ~AutoMeshAttribute();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf attribute_set_name; //type: string
                        YLeaf autoroute_announce; //type: empty
                        YLeaf interface_bandwidth; //type: uint32
                        YLeaf forward_class; //type: uint32
                        YLeaf enable; //type: empty
                        YLeaf record_route; //type: empty
                        YLeaf collection_only; //type: empty
                        YLeaf soft_preemption; //type: empty
                        YLeaf load_share; //type: uint32

                    class AutoMeshLogging : public Entity
                    {
                        public:
                            AutoMeshLogging();
                            ~AutoMeshLogging();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf bandwidth_change_message; //type: empty
                            YLeaf reoptimize_attempts_message; //type: empty
                            YLeaf reroute_messsage; //type: empty
                            YLeaf state_message; //type: empty
                            YLeaf insufficient_bw_message; //type: empty
                            YLeaf reoptimized_message; //type: empty
                            YLeaf pcalc_failure_message; //type: empty



                    }; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging


                    class Priority : public Entity
                    {
                        public:
                            Priority();
                            ~Priority();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf setup_priority; //type: uint32
                            YLeaf hold_priority; //type: uint32



                    }; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority


                    class AffinityMask : public Entity
                    {
                        public:
                            AffinityMask();
                            ~AffinityMask();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf affinity; //type: string
                            YLeaf mask; //type: string



                    }; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask


                    class Bandwidth : public Entity
                    {
                        public:
                            Bandwidth();
                            ~Bandwidth();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf dste_type; //type: MplsTeBandwidthDsteEnum
                            YLeaf class_or_pool_type; //type: uint32
                            YLeaf bandwidth; //type: uint32



                    }; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth


                    class PathSelection : public Entity
                    {
                        public:
                            PathSelection();
                            ~PathSelection();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf enable; //type: empty



                    }; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection


                    class PolicyClasses : public Entity
                    {
                        public:
                            PolicyClasses();
                            ~PolicyClasses();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeafList policy_class; //type: list of  uint32



                    }; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses


                    class NewStyleAffinityAffinityTypes : public Entity
                    {
                        public:
                            NewStyleAffinityAffinityTypes();
                            ~NewStyleAffinityAffinityTypes();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class NewStyleAffinityAffinityType : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityType();
                                ~NewStyleAffinityAffinityType();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum



                        }; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType


                        class NewStyleAffinityAffinityTypeAffinity1 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1();
                                ~NewStyleAffinityAffinityTypeAffinity1();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string
                                YLeaf affinity7; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string
                                YLeaf affinity7; //type: string
                                YLeaf affinity8; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string
                                YLeaf affinity7; //type: string
                                YLeaf affinity8; //type: string
                                YLeaf affinity9; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9


                        class NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10 : public Entity
                        {
                            public:
                                NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();
                                ~NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf affinity_type; //type: MplsTeTunnelAffinityEnum
                                YLeaf affinity1; //type: string
                                YLeaf affinity2; //type: string
                                YLeaf affinity3; //type: string
                                YLeaf affinity4; //type: string
                                YLeaf affinity5; //type: string
                                YLeaf affinity6; //type: string
                                YLeaf affinity7; //type: string
                                YLeaf affinity8; //type: string
                                YLeaf affinity9; //type: string
                                YLeaf affinity10; //type: string



                        }; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10


                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityType> > new_style_affinity_affinity_type;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1> > new_style_affinity_affinity_type_affinity1;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2> > new_style_affinity_affinity_type_affinity1_affinity2;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes::NewStyleAffinityAffinityTypeAffinity1Affinity2Affinity3Affinity4Affinity5Affinity6Affinity7Affinity8Affinity9Affinity10> > new_style_affinity_affinity_type_affinity1_affinity2_affinity3_affinity4_affinity5_affinity6_affinity7_affinity8_affinity9_affinity10;


                    }; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes


                    class FastReroute : public Entity
                    {
                        public:
                            FastReroute();
                            ~FastReroute();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf bandwidth_protection; //type: uint32
                            YLeaf node_protection; //type: uint32



                    }; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute


                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AffinityMask> affinity_mask; // presence node
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::AutoMeshLogging> auto_mesh_logging;
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Bandwidth> bandwidth; // presence node
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::FastReroute> fast_reroute; // presence node
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::NewStyleAffinityAffinityTypes> new_style_affinity_affinity_types;
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PathSelection> path_selection;
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::PolicyClasses> policy_classes;
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute::Priority> priority; // presence node


                }; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute


                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes::AutoMeshAttribute> > auto_mesh_attribute;


            }; // MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes


            class XroAttributes : public Entity
            {
                public:
                    XroAttributes();
                    ~XroAttributes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class XroAttribute : public Entity
                {
                    public:
                        XroAttribute();
                        ~XroAttribute();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf attribute_set_name; //type: string
                        YLeaf enable; //type: empty

                    class PathDiversity : public Entity
                    {
                        public:
                            PathDiversity();
                            ~PathDiversity();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Srlgs : public Entity
                        {
                            public:
                                Srlgs();
                                ~Srlgs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Srlg : public Entity
                            {
                                public:
                                    Srlg();
                                    ~Srlg();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf srlg; //type: uint32
                                    YLeaf conformance; //type: MplsTePathDiversityConformanceEnum



                            }; // MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg


                                std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs::Srlg> > srlg;


                        }; // MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs


                        class Lsp : public Entity
                        {
                            public:
                                Lsp();
                                ~Lsp();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;



                            class Fecs : public Entity
                            {
                                public:
                                    Fecs();
                                    ~Fecs();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;



                                class Fec : public Entity
                                {
                                    public:
                                        Fec();
                                        ~Fec();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;


                                        YLeaf source; //type: string
                                        YLeaf destination; //type: string
                                        YLeaf tunnel_id; //type: uint32
                                        YLeaf extended_tunnel_id; //type: string
                                        YLeaf lsp_id; //type: uint32
                                        YLeaf conformance; //type: MplsTePathDiversityConformanceEnum



                                }; // MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec


                                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs::Fec> > fec;


                            }; // MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs


                                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp::Fecs> fecs;


                        }; // MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp


                            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Lsp> lsp;
                            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity::Srlgs> srlgs;


                    }; // MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity


                    class PathSelection : public Entity
                    {
                        public:
                            PathSelection();
                            ~PathSelection();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf enable; //type: empty



                    }; // MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection


                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathDiversity> path_diversity;
                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute::PathSelection> path_selection;


                }; // MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute


                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::XroAttributes::XroAttribute> > xro_attribute;


            }; // MplsTe::GlobalAttributes::AttributeSet::XroAttributes


                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoBackupAttributes> auto_backup_attributes;
                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::AutoMeshAttributes> auto_mesh_attributes;
                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::OtnPpAttributes> otn_pp_attributes;
                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2MpteAttributes> p2mpte_attributes;
                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::P2PTeAttributes> p2p_te_attributes;
                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::PathOptionAttributes> path_option_attributes;
                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet::XroAttributes> xro_attributes;


        }; // MplsTe::GlobalAttributes::AttributeSet


        class BfdOverLsp : public Entity
        {
            public:
                BfdOverLsp();
                ~BfdOverLsp();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Tail : public Entity
            {
                public:
                    Tail();
                    ~Tail();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf multiplier; //type: uint32
                    YLeaf minimum_interval; //type: uint32



            }; // MplsTe::GlobalAttributes::BfdOverLsp::Tail


            class Head : public Entity
            {
                public:
                    Head();
                    ~Head();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf reopt_timeout; //type: uint32
                    YLeaf down_action; //type: MplsTeBfdSessionDownActionEnum



            }; // MplsTe::GlobalAttributes::BfdOverLsp::Head


                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::BfdOverLsp::Head> head;
                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::BfdOverLsp::Tail> tail;


        }; // MplsTe::GlobalAttributes::BfdOverLsp


        class PceAttributes : public Entity
        {
            public:
                PceAttributes();
                ~PceAttributes();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf request_timeout; //type: uint32
                YLeaf reoptimize_period; //type: uint32
                YLeaf address; //type: string
                YLeaf deadtimer; //type: uint32
                YLeaf keepalive; //type: uint32
                YLeaf keepalive_tolerance; //type: uint32
                YLeaf peer_source_addr; //type: string
                YLeaf speaker_entity_id; //type: string
                YLeaf segment_routing; //type: empty
                YLeaf password; //type: string
                YLeaf keychain; //type: string
                YLeaf precedence; //type: uint32

            class PceStateful : public Entity
            {
                public:
                    PceStateful();
                    ~PceStateful();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf fast_repair; //type: empty
                    YLeaf instantiation; //type: empty
                    YLeaf cisco_extension; //type: empty
                    YLeaf delegation; //type: empty
                    YLeaf report; //type: empty
                    YLeaf enable; //type: empty

                class StatefulTimers : public Entity
                {
                    public:
                        StatefulTimers();
                        ~StatefulTimers();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf redelegation_timeout; //type: uint32
                        YLeaf state_timeout; //type: uint32



                }; // MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers


                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PceAttributes::PceStateful::StatefulTimers> stateful_timers;


            }; // MplsTe::GlobalAttributes::PceAttributes::PceStateful


            class Timer : public Entity
            {
                public:
                    Timer();
                    ~Timer();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;





            }; // MplsTe::GlobalAttributes::PceAttributes::Timer


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


                        YLeaf pce_peer_address; //type: string
                        YLeaf enable; //type: empty
                        YLeaf password; //type: string
                        YLeaf keychain; //type: string
                        YLeaf precedence; //type: uint32



                }; // MplsTe::GlobalAttributes::PceAttributes::Peers::Peer


                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PceAttributes::Peers::Peer> > peer;


            }; // MplsTe::GlobalAttributes::PceAttributes::Peers


            class Logging : public Entity
            {
                public:
                    Logging();
                    ~Logging();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Events : public Entity
                {
                    public:
                        Events();
                        ~Events();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf peer_status; //type: empty



                }; // MplsTe::GlobalAttributes::PceAttributes::Logging::Events


                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PceAttributes::Logging::Events> events;


            }; // MplsTe::GlobalAttributes::PceAttributes::Logging


                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PceAttributes::Logging> logging;
                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PceAttributes::PceStateful> pce_stateful;
                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PceAttributes::Peers> peers;
                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PceAttributes::Timer> timer;


        }; // MplsTe::GlobalAttributes::PceAttributes


        class SoftPreemption : public Entity
        {
            public:
                SoftPreemption();
                ~SoftPreemption();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf timeout; //type: uint32
                YLeaf frr_rewrite; //type: empty
                YLeaf enable; //type: boolean



        }; // MplsTe::GlobalAttributes::SoftPreemption


        class FastReroute : public Entity
        {
            public:
                FastReroute();
                ~FastReroute();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



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


                    YLeaf hold_backup; //type: uint32
                    YLeaf promotion; //type: uint32



            }; // MplsTe::GlobalAttributes::FastReroute::Timers


                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::FastReroute::Timers> timers;


        }; // MplsTe::GlobalAttributes::FastReroute


        class PathSelection : public Entity
        {
            public:
                PathSelection();
                ~PathSelection();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf cost_limit; //type: uint32
                YLeaf tiebreaker; //type: MplsTePathSelectionTiebreakerEnum
                YLeaf metric; //type: MplsTePathSelectionMetricEnum
                YLeaf loose_domain_match; //type: boolean

            class LooseMetrics : public Entity
            {
                public:
                    LooseMetrics();
                    ~LooseMetrics();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class LooseMetric : public Entity
                {
                    public:
                        LooseMetric();
                        ~LooseMetric();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf class_type; //type: uint32
                        YLeaf metric_type; //type: MplsTePathSelectionMetricEnum



                }; // MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric


                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PathSelection::LooseMetrics::LooseMetric> > loose_metric;


            }; // MplsTe::GlobalAttributes::PathSelection::LooseMetrics


            class Invalidation : public Entity
            {
                public:
                    Invalidation();
                    ~Invalidation();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf path_invalidation_timeout; //type: uint32
                    YLeaf path_invalidation_action; //type: PathInvalidationActionEnum



            }; // MplsTe::GlobalAttributes::PathSelection::Invalidation


            class IgnoreOverloadRole : public Entity
            {
                public:
                    IgnoreOverloadRole();
                    ~IgnoreOverloadRole();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf head; //type: boolean
                    YLeaf mid; //type: boolean
                    YLeaf tail; //type: boolean



            }; // MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole


            class LooseAffinities : public Entity
            {
                public:
                    LooseAffinities();
                    ~LooseAffinities();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class LooseAffinity : public Entity
                {
                    public:
                        LooseAffinity();
                        ~LooseAffinity();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf class_type; //type: uint32
                        YLeaf affinity; //type: string
                        YLeaf mask; //type: string



                }; // MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity


                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PathSelection::LooseAffinities::LooseAffinity> > loose_affinity;


            }; // MplsTe::GlobalAttributes::PathSelection::LooseAffinities


                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PathSelection::IgnoreOverloadRole> ignore_overload_role;
                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PathSelection::Invalidation> invalidation;
                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PathSelection::LooseAffinities> loose_affinities;
                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PathSelection::LooseMetrics> loose_metrics;


        }; // MplsTe::GlobalAttributes::PathSelection


        class AffinityMappings : public Entity
        {
            public:
                AffinityMappings();
                ~AffinityMappings();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class AffinityMapping : public Entity
            {
                public:
                    AffinityMapping();
                    ~AffinityMapping();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf affinity_name; //type: string
                    YLeaf value_type; //type: MplsTeAffinityValueEnum
                    YLeaf value_; //type: string



            }; // MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping


                std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AffinityMappings::AffinityMapping> > affinity_mapping;


        }; // MplsTe::GlobalAttributes::AffinityMappings


            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AffinityMappings> affinity_mappings;
            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AttributeSet> attribute_set;
            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::AutoTunnel> auto_tunnel;
            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::BfdOverLsp> bfd_over_lsp;
            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::FastReroute> fast_reroute;
            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::HardwareOutOfResource> hardware_out_of_resource;
            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Mib> mib;
            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PathSelection> path_selection;
            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::PceAttributes> pce_attributes;
            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Queues> queues;
            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::SecondaryRouterIds> secondary_router_ids;
            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::SoftPreemption> soft_preemption;
            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes::Srlg> srlg;


    }; // MplsTe::GlobalAttributes


    class TransportProfile : public Entity
    {
        public:
            TransportProfile();
            ~TransportProfile();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf global_id; //type: uint32
            YLeaf node_id; //type: string

        class Fault : public Entity
        {
            public:
                Fault();
                ~Fault();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf wait_to_restore_interval; //type: uint32
                YLeaf refresh_interval; //type: uint32

            class ProtectionTrigger : public Entity
            {
                public:
                    ProtectionTrigger();
                    ~ProtectionTrigger();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf ais; //type: empty

                class Ldi : public Entity
                {
                    public:
                        Ldi();
                        ~Ldi();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf disable; //type: empty



                }; // MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi


                class Lkr : public Entity
                {
                    public:
                        Lkr();
                        ~Lkr();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf disable; //type: empty



                }; // MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr


                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Fault::ProtectionTrigger::Ldi> ldi;
                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Fault::ProtectionTrigger::Lkr> lkr;


            }; // MplsTe::TransportProfile::Fault::ProtectionTrigger


                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Fault::ProtectionTrigger> protection_trigger;


        }; // MplsTe::TransportProfile::Fault


        class Alarm : public Entity
        {
            public:
                Alarm();
                ~Alarm();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf soak_time; //type: uint32
                YLeaf enable_alarm; //type: empty

            class SuppressEvent : public Entity
            {
                public:
                    SuppressEvent();
                    ~SuppressEvent();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf disable; //type: empty



            }; // MplsTe::TransportProfile::Alarm::SuppressEvent


                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Alarm::SuppressEvent> suppress_event;


        }; // MplsTe::TransportProfile::Alarm


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


                YLeaf detection_multiplier_standby; //type: uint32
                YLeaf detection_multiplier; //type: uint32

            class MinIntervalStandby : public Entity
            {
                public:
                    MinIntervalStandby();
                    ~MinIntervalStandby();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf interval_standby_ms; //type: uint32
                    YLeaf interval_standby_us; //type: uint32



            }; // MplsTe::TransportProfile::Bfd::MinIntervalStandby


            class MinInterval : public Entity
            {
                public:
                    MinInterval();
                    ~MinInterval();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf interval_ms; //type: uint32
                    YLeaf interval_us; //type: uint32



            }; // MplsTe::TransportProfile::Bfd::MinInterval


                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Bfd::MinInterval> min_interval;
                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Bfd::MinIntervalStandby> min_interval_standby;


        }; // MplsTe::TransportProfile::Bfd


        class Midpoints : public Entity
        {
            public:
                Midpoints();
                ~Midpoints();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class Midpoint : public Entity
            {
                public:
                    Midpoint();
                    ~Midpoint();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf midpoint_name; //type: string
                    YLeaf tunnel_name; //type: string
                    YLeaf lsp_protect; //type: empty
                    YLeaf lsp_id; //type: uint32

                class Source : public Entity
                {
                    public:
                        Source();
                        ~Source();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf node_id; //type: string
                        YLeaf tunnel_id; //type: uint32
                        YLeaf global_id; //type: uint32



                }; // MplsTe::TransportProfile::Midpoints::Midpoint::Source


                class Destination : public Entity
                {
                    public:
                        Destination();
                        ~Destination();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf node_id; //type: string
                        YLeaf tunnel_id; //type: uint32
                        YLeaf global_id; //type: uint32



                }; // MplsTe::TransportProfile::Midpoints::Midpoint::Destination


                class ForwardLsp : public Entity
                {
                    public:
                        ForwardLsp();
                        ~ForwardLsp();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf forward_bandwidth; //type: uint32

                    class ForwardIoMap : public Entity
                    {
                        public:
                            ForwardIoMap();
                            ~ForwardIoMap();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf in_label; //type: uint32
                            YLeaf out_label; //type: uint32
                            YLeaf out_link; //type: uint32



                    }; // MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap


                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp::ForwardIoMap> forward_io_map; // presence node


                }; // MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp


                class ReverseLsp : public Entity
                {
                    public:
                        ReverseLsp();
                        ~ReverseLsp();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf reverse_bandwidth; //type: uint32

                    class ReverseIoMap : public Entity
                    {
                        public:
                            ReverseIoMap();
                            ~ReverseIoMap();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf in_label; //type: uint32
                            YLeaf out_label; //type: uint32
                            YLeaf out_link; //type: uint32



                    }; // MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap


                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp::ReverseIoMap> reverse_io_map; // presence node


                }; // MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp


                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Midpoints::Midpoint::Destination> destination; // presence node
                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Midpoints::Midpoint::ForwardLsp> forward_lsp;
                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Midpoints::Midpoint::ReverseLsp> reverse_lsp;
                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Midpoints::Midpoint::Source> source; // presence node


            }; // MplsTe::TransportProfile::Midpoints::Midpoint


                std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Midpoints::Midpoint> > midpoint;


        }; // MplsTe::TransportProfile::Midpoints


            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Alarm> alarm;
            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Bfd> bfd;
            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Fault> fault;
            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile::Midpoints> midpoints;


    }; // MplsTe::TransportProfile


    class Interfaces : public Entity
    {
        public:
            Interfaces();
            ~Interfaces();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Interface : public Entity
        {
            public:
                Interface();
                ~Interface();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf interface_name; //type: string

            class TransportProfileLink : public Entity
            {
                public:
                    TransportProfileLink();
                    ~TransportProfileLink();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Links : public Entity
                {
                    public:
                        Links();
                        ~Links();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Link : public Entity
                    {
                        public:
                            Link();
                            ~Link();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf link_id; //type: uint32
                            YLeaf next_hop_type; //type: LinkNextHopEnum
                            YLeaf next_hop_address; //type: string



                    }; // MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link


                        std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::TransportProfileLink::Links::Link> > link;


                }; // MplsTe::Interfaces::Interface::TransportProfileLink::Links


                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::TransportProfileLink::Links> links;


            }; // MplsTe::Interfaces::Interface::TransportProfileLink


            class Lcac : public Entity
            {
                public:
                    Lcac();
                    ~Lcac();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf bfd; //type: empty
                    YLeaf fault_oam_lockout; //type: empty
                    YLeaf attribute_flags; //type: string
                    YLeaf enable; //type: empty
                    YLeaf admin_weight; //type: int32

                class Switchings : public Entity
                {
                    public:
                        Switchings();
                        ~Switchings();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Switching : public Entity
                    {
                        public:
                            Switching();
                            ~Switching();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf switching_id; //type: one of uint32, enumeration
                            YLeaf encoding; //type: MplsTeSwitchingEncodingEnum
                            YLeaf capability; //type: MplsTeSwitchingCapEnum



                    }; // MplsTe::Interfaces::Interface::Lcac::Switchings::Switching


                        std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::Switchings::Switching> > switching;


                }; // MplsTe::Interfaces::Interface::Lcac::Switchings


                class FloodArea : public Entity
                {
                    public:
                        FloodArea();
                        ~FloodArea();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf igp_type; //type: MplsLcacFloodingIgpEnum
                        YLeaf process_name; //type: string
                        YLeaf area_id; //type: int32



                }; // MplsTe::Interfaces::Interface::Lcac::FloodArea


                class AttributeNameXr : public Entity
                {
                    public:
                        AttributeNameXr();
                        ~AttributeNameXr();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeafList attribute_name; //type: list of  string



                }; // MplsTe::Interfaces::Interface::Lcac::AttributeNameXr


                class AttributeNames : public Entity
                {
                    public:
                        AttributeNames();
                        ~AttributeNames();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class AttributeName : public Entity
                    {
                        public:
                            AttributeName();
                            ~AttributeName();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf affinity_index; //type: uint32
                            YLeafList value_; //type: list of  string



                    }; // MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName


                        std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::AttributeNames::AttributeName> > attribute_name;


                }; // MplsTe::Interfaces::Interface::Lcac::AttributeNames


                class Srlgs : public Entity
                {
                    public:
                        Srlgs();
                        ~Srlgs();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Srlg : public Entity
                    {
                        public:
                            Srlg();
                            ~Srlg();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf srlg_number; //type: uint32



                    }; // MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg


                        std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::Srlgs::Srlg> > srlg;


                }; // MplsTe::Interfaces::Interface::Lcac::Srlgs


                class UpThresholds : public Entity
                {
                    public:
                        UpThresholds();
                        ~UpThresholds();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeafList up_threshold; //type: list of  uint32



                }; // MplsTe::Interfaces::Interface::Lcac::UpThresholds


                class DownThresholds : public Entity
                {
                    public:
                        DownThresholds();
                        ~DownThresholds();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeafList down_threshold; //type: list of  uint32



                }; // MplsTe::Interfaces::Interface::Lcac::DownThresholds


                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::AttributeNameXr> attribute_name_xr;
                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::AttributeNames> attribute_names;
                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::DownThresholds> down_thresholds;
                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::FloodArea> flood_area;
                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::Srlgs> srlgs;
                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::Switchings> switchings;
                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac::UpThresholds> up_thresholds;


            }; // MplsTe::Interfaces::Interface::Lcac


            class GlobalAttributes : public Entity
            {
                public:
                    GlobalAttributes();
                    ~GlobalAttributes();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class BackupTunnels : public Entity
                {
                    public:
                        BackupTunnels();
                        ~BackupTunnels();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class BackupTunnel : public Entity
                    {
                        public:
                            BackupTunnel();
                            ~BackupTunnel();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf tunnel_name; //type: string



                    }; // MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel


                        std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels::BackupTunnel> > backup_tunnel;


                }; // MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels


                class AutoTunnel : public Entity
                {
                    public:
                        AutoTunnel();
                        ~AutoTunnel();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Backup : public Entity
                    {
                        public:
                            Backup();
                            ~Backup();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf enable; //type: empty
                            YLeaf attribute_set; //type: string
                            YLeaf next_hop_only; //type: empty

                        class Exclude : public Entity
                        {
                            public:
                                Exclude();
                                ~Exclude();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf srlg_mode; //type: MplsTesrlgExcludeEnum



                        }; // MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude


                            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup::Exclude> exclude;


                    }; // MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup


                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel::Backup> backup;


                }; // MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel


                class BackupPaths : public Entity
                {
                    public:
                        BackupPaths();
                        ~BackupPaths();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class BackupPath : public Entity
                    {
                        public:
                            BackupPath();
                            ~BackupPath();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf tunnel_number; //type: uint32



                    }; // MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath


                        std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths::BackupPath> > backup_path;


                }; // MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths


                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::GlobalAttributes::AutoTunnel> auto_tunnel;
                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::GlobalAttributes::BackupPaths> backup_paths;
                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::GlobalAttributes::BackupTunnels> backup_tunnels;


            }; // MplsTe::Interfaces::Interface::GlobalAttributes


                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::GlobalAttributes> global_attributes;
                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::Lcac> lcac;
                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface::TransportProfileLink> transport_profile_link;


        }; // MplsTe::Interfaces::Interface


            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces::Interface> > interface;


    }; // MplsTe::Interfaces


    class GmplsNni : public Entity
    {
        public:
            GmplsNni();
            ~GmplsNni();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf path_selection_metric; //type: MplsTePathSelectionMetricEnum
            YLeaf enable_gmpls_nni; //type: empty

        class TopologyInstances : public Entity
        {
            public:
                TopologyInstances();
                ~TopologyInstances();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class TopologyInstance : public Entity
            {
                public:
                    TopologyInstance();
                    ~TopologyInstance();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf ospf_area_type; //type: OspfAreaModeEnum
                    YLeaf igp_instance_name; //type: string
                    YLeaf igp_type; //type: MplsTeIgpProtocolEnum

                class OspfInt : public Entity
                {
                    public:
                        OspfInt();
                        ~OspfInt();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf igp_area; //type: int32

                    class Controllers : public Entity
                    {
                        public:
                            Controllers();
                            ~Controllers();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Controller : public Entity
                        {
                            public:
                                Controller();
                                ~Controller();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf controller_name; //type: string
                                YLeaf admin_weight; //type: uint32
                                YLeaf enable; //type: empty
                                YLeaf delay; //type: uint32

                            class TtiMode : public Entity
                            {
                                public:
                                    TtiMode();
                                    ~TtiMode();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf tti_mode_type; //type: GmplsttiModeEnum
                                    YLeaf tcmid; //type: uint32



                            }; // MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode


                                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller::TtiMode> tti_mode;


                        }; // MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller


                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers::Controller> > controller;


                    }; // MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers


                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt::Controllers> controllers;


                }; // MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt


                class OspfipAddr : public Entity
                {
                    public:
                        OspfipAddr();
                        ~OspfipAddr();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf address; //type: string

                    class Controllers : public Entity
                    {
                        public:
                            Controllers();
                            ~Controllers();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;



                        class Controller : public Entity
                        {
                            public:
                                Controller();
                                ~Controller();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                                YLeaf controller_name; //type: string
                                YLeaf admin_weight; //type: uint32
                                YLeaf enable; //type: empty
                                YLeaf delay; //type: uint32

                            class TtiMode : public Entity
                            {
                                public:
                                    TtiMode();
                                    ~TtiMode();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;


                                    YLeaf tti_mode_type; //type: GmplsttiModeEnum
                                    YLeaf tcmid; //type: uint32



                            }; // MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode


                                std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller::TtiMode> tti_mode;


                        }; // MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller


                            std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers::Controller> > controller;


                    }; // MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers


                        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr::Controllers> controllers;


                }; // MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr


                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfInt> > ospf_int;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances::TopologyInstance::OspfipAddr> > ospfip_addr;


            }; // MplsTe::GmplsNni::TopologyInstances::TopologyInstance


                std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances::TopologyInstance> > topology_instance;


        }; // MplsTe::GmplsNni::TopologyInstances


        class TunnelHeads : public Entity
        {
            public:
                TunnelHeads();
                ~TunnelHeads();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;



            class TunnelHead : public Entity
            {
                public:
                    TunnelHead();
                    ~TunnelHead();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf tunnel_id; //type: uint32
                    YLeaf enable; //type: empty
                    YLeaf restore_lsp_shutdown; //type: empty
                    YLeaf destination; //type: string
                    YLeaf current_lsp_shutdown; //type: empty
                    YLeaf path_selection_metric; //type: MplsTePathSelectionMetricEnum
                    YLeaf payload; //type: OtnPayloadEnum
                    YLeaf standby_lsp_shutdown; //type: empty
                    YLeaf shutdown; //type: empty
                    YLeaf path_protection_attribute_set_profile; //type: string
                    YLeaf record_route; //type: empty
                    YLeaf signalled_name; //type: string

                class SignalledBandwidth : public Entity
                {
                    public:
                        SignalledBandwidth();
                        ~SignalledBandwidth();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf signalled_bandwidth_type; //type: OtnSignaledBandwidthEnum
                        YLeaf bitrate; //type: int32
                        YLeaf od_uflex_framing_type; //type: OtnSignaledBandwidthFlexFramingEnum



                }; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth


                class ProtectionSwitching : public Entity
                {
                    public:
                        ProtectionSwitching();
                        ~ProtectionSwitching();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf lockout; //type: OtnProtectionSwitchLockoutEnum



                }; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching


                class Logging : public Entity
                {
                    public:
                        Logging();
                        ~Logging();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf active_lsp_message; //type: empty
                        YLeaf homepath_state_message; //type: empty
                        YLeaf signalling_state_message; //type: empty
                        YLeaf path_change_message; //type: empty
                        YLeaf static_cross_connect_message; //type: empty
                        YLeaf tunnel_state_message; //type: empty
                        YLeaf insufficient_bw_message; //type: empty



                }; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging


                class PathOptions : public Entity
                {
                    public:
                        PathOptions();
                        ~PathOptions();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class PathOption : public Entity
                    {
                        public:
                            PathOption();
                            ~PathOption();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf preference_level; //type: uint32
                            YLeaf path_type; //type: MplsTePathOptionEnum
                            YLeaf path_id; //type: uint32
                            YLeaf path_name; //type: string
                            YLeaf protected_by_preference_level; //type: uint32
                            YLeaf restore_by_preference_level; //type: uint32
                            YLeaf xro_type; //type: empty
                            YLeaf xro_attribute_set_name; //type: string
                            YLeaf lockdown; //type: MplsTePathOptionPropertyEnum



                    }; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption


                        std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions::PathOption> > path_option;


                }; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions


                class StaticUni : public Entity
                {
                    public:
                        StaticUni();
                        ~StaticUni();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf ingress_controller_name; //type: string
                        YLeaf egress_controller_if_index; //type: int32



                }; // MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni


                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead::Logging> logging;
                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead::PathOptions> path_options;
                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead::ProtectionSwitching> protection_switching;
                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead::SignalledBandwidth> signalled_bandwidth;
                    std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead::StaticUni> static_uni;


            }; // MplsTe::GmplsNni::TunnelHeads::TunnelHead


                std::vector<std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads::TunnelHead> > tunnel_head;


        }; // MplsTe::GmplsNni::TunnelHeads


            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TopologyInstances> topology_instances;
            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni::TunnelHeads> tunnel_heads;


    }; // MplsTe::GmplsNni


    class Lcac : public Entity
    {
        public:
            Lcac();
            ~Lcac();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


            YLeaf bandwidth_hold_timer; //type: uint32
            YLeaf delay_preempt_bundle_capacity_timer; //type: uint32
            YLeaf periodic_flooding_timer; //type: uint32

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


                YLeaf interval; //type: uint32
                YLeaf detection_multiplier; //type: uint32



        }; // MplsTe::Lcac::Bfd


        class FloodingThreshold : public Entity
        {
            public:
                FloodingThreshold();
                ~FloodingThreshold();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf up_stream; //type: uint32
                YLeaf down_stream; //type: uint32



        }; // MplsTe::Lcac::FloodingThreshold


            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Lcac::Bfd> bfd;
            std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Lcac::FloodingThreshold> flooding_threshold;


    }; // MplsTe::Lcac


        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::DiffServTrafficEngineering> diff_serv_traffic_engineering;
        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GlobalAttributes> global_attributes;
        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsNni> gmpls_nni;
        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::GmplsUni> gmpls_uni;
        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Interfaces> interfaces;
        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::Lcac> lcac;
        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::NamedTunnels> named_tunnels;
        std::unique_ptr<Cisco_IOS_XR_mpls_te_cfg::MplsTe::TransportProfile> transport_profile;


}; // MplsTe


class MplsTeBackupBandwidthClassEnum : public Enum
{
    public:
        static const Enum::YLeaf class0;
        static const Enum::YLeaf class1;
        static const Enum::YLeaf any_class;

};

class SrPrependEnum : public Enum
{
    public:
        static const Enum::YLeaf none_type;
        static const Enum::YLeaf next_label;
        static const Enum::YLeaf bgp_n_hop;

};

class MplsTePathComputationMethodEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf dynamic;
        static const Enum::YLeaf pce;
        static const Enum::YLeaf explicit_;

};

class MplsTeSwitchingCapEnum : public Enum
{
    public:
        static const Enum::YLeaf psc1;
        static const Enum::YLeaf lsc;
        static const Enum::YLeaf fsc;

};

class MplsTeBfdSessionDownActionEnum : public Enum
{
    public:
        static const Enum::YLeaf re_setup;

};

class RoutePriorityRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf route_priority_role_head_back_up;
        static const Enum::YLeaf route_priority_role_head_primary;
        static const Enum::YLeaf route_priority_role_middle;

};

class MplsTebfdSessionEnum : public Enum
{
    public:
        static const Enum::YLeaf regular_bfd;
        static const Enum::YLeaf sbfd;
        static const Enum::YLeaf redundant_sbfd;

};

class MplsTeLogFrrProtectionEnum : public Enum
{
    public:
        static const Enum::YLeaf frr_active_primary;
        static const Enum::YLeaf backup;
        static const Enum::YLeaf frr_ready_primary;
        static const Enum::YLeaf primary;
        static const Enum::YLeaf all;

};

class MplsTeTunnelAffinityEnum : public Enum
{
    public:
        static const Enum::YLeaf include;
        static const Enum::YLeaf include_strict;
        static const Enum::YLeaf exclude;
        static const Enum::YLeaf exclude_all;
        static const Enum::YLeaf ignore;

};

class IetfModeEnum : public Enum
{
    public:
        static const Enum::YLeaf standard;

};

class MplsTePathOptionPropertyEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf lockdown;
        static const Enum::YLeaf verbatim;
        static const Enum::YLeaf pce;
        static const Enum::YLeaf segment_routing;

};

class GmplsttiModeEnum : public Enum
{
    public:
        static const Enum::YLeaf sm;
        static const Enum::YLeaf pm;
        static const Enum::YLeaf tcm;

};

class MplsTePathSelectionInvalidationTimerExpireEnum : public Enum
{
    public:
        static const Enum::YLeaf tunnel_action_tear;
        static const Enum::YLeaf tunnel_action_drop;

};

class MplsTeOtnApsProtectionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1plus1_unidir_no_aps;
        static const Enum::YLeaf Y_1plus1_unidir_aps;
        static const Enum::YLeaf Y_1plus1_bdir_aps;

};

class MplsTeSwitchingEncodingEnum : public Enum
{
    public:
        static const Enum::YLeaf packet;
        static const Enum::YLeaf ethernet;
        static const Enum::YLeaf sondet_sdh;

};

class MplsTeSigNameOptionEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf address;
        static const Enum::YLeaf name;

};

class OtnProtectionSwitchLockoutEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf working;

};

class MplsTeTunnelIdEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf explicit_;

};

class MplsTeAffinityValueEnum : public Enum
{
    public:
        static const Enum::YLeaf hex_value;
        static const Enum::YLeaf bit_position;

};

class MplsTeOtnSncModeEnum : public Enum
{
    public:
        static const Enum::YLeaf snc_n;
        static const Enum::YLeaf snc_i;
        static const Enum::YLeaf snc_s;

};

class OtnPayloadEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf bmp;
        static const Enum::YLeaf gfp_f;
        static const Enum::YLeaf gmp;
        static const Enum::YLeaf gfp_f_ext;

};

class OspfAreaModeEnum : public Enum
{
    public:
        static const Enum::YLeaf ospf_int;
        static const Enum::YLeaf ospfip_addr;

};

class MplsTeIgpProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf isis;
        static const Enum::YLeaf ospf;

};

class MplsTePathSelectionTiebreakerEnum : public Enum
{
    public:
        static const Enum::YLeaf min_fill;
        static const Enum::YLeaf max_fill;
        static const Enum::YLeaf random;

};

class MplsTePathOptionEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf dynamic;
        static const Enum::YLeaf explicit_name;
        static const Enum::YLeaf explicit_number;
        static const Enum::YLeaf no_ero;
        static const Enum::YLeaf sr;

};

class PathInvalidationActionEnum : public Enum
{
    public:
        static const Enum::YLeaf tear;
        static const Enum::YLeaf drop;

};

class OtnSignaledBandwidthEnum : public Enum
{
    public:
        static const Enum::YLeaf odu1;
        static const Enum::YLeaf odu2;
        static const Enum::YLeaf odu3;
        static const Enum::YLeaf odu4;
        static const Enum::YLeaf odu0;
        static const Enum::YLeaf odu2e;
        static const Enum::YLeaf od_uflex_cbr;
        static const Enum::YLeaf od_uflex_gfp_resize;
        static const Enum::YLeaf od_uflex_gfp_not_resize;
        static const Enum::YLeaf odu1e;
        static const Enum::YLeaf odu1f;
        static const Enum::YLeaf odu2f;
        static const Enum::YLeaf odu3e1;
        static const Enum::YLeaf odu3e2;

};

class MplsTeAutorouteMetricEnum : public Enum
{
    public:
        static const Enum::YLeaf relative;
        static const Enum::YLeaf absolute;
        static const Enum::YLeaf constant;

};

class BindingSegmentIdEnum : public Enum
{
    public:
        static const Enum::YLeaf any_label;
        static const Enum::YLeaf specified_label;

};

class MplsTesrlgExcludeEnum : public Enum
{
    public:
        static const Enum::YLeaf mandatory;
        static const Enum::YLeaf preferred;
        static const Enum::YLeaf weighted;

};

class MplsTeSignaledLabelEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf dwdm;

};

class BandwidthConstraintEnum : public Enum
{
    public:
        static const Enum::YLeaf bandwidth_constraint_maximum_allocation_model;

};

class MplsTeSwitchingEncodeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf packet;
        static const Enum::YLeaf ethernet;
        static const Enum::YLeaf sondet_sdh;

};

class MplsTePathSelectionMetricEnum : public Enum
{
    public:
        static const Enum::YLeaf igp;
        static const Enum::YLeaf te;
        static const Enum::YLeaf delay;

};

class MplsTePathOptionProtectionEnum : public Enum
{
    public:
        static const Enum::YLeaf active;
        static const Enum::YLeaf protecting;

};

class OtnSignaledBandwidthFlexFramingEnum : public Enum
{
    public:
        static const Enum::YLeaf cbr;
        static const Enum::YLeaf framed_gfp_fixed;
        static const Enum::YLeaf framed_gfp_resize;

};

class MplsTeBandwidthLimitEnum : public Enum
{
    public:
        static const Enum::YLeaf unlimited;
        static const Enum::YLeaf limited;

};

class MplsTePathSelectionSegmentRoutingAdjacencyProtectionEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf adj_unprotected;
        static const Enum::YLeaf adj_protected;

};

class LinkNextHopEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf ipv4_address;

};

class MplsLcacFloodingIgpEnum : public Enum
{
    public:
        static const Enum::YLeaf ospf;

};

class BfdReversePathEnum : public Enum
{
    public:
        static const Enum::YLeaf bfd_reverse_path_binding_label;

};

class MplsTeOtnApsRestorationStyleEnum : public Enum
{
    public:
        static const Enum::YLeaf keep_failed_lsp;
        static const Enum::YLeaf delete_failed_lsp;

};

class MplsTeBandwidthDsteEnum : public Enum
{
    public:
        static const Enum::YLeaf standard_dste;
        static const Enum::YLeaf pre_standard_dste;

};

class MplsTePathDiversityConformanceEnum : public Enum
{
    public:
        static const Enum::YLeaf strict;
        static const Enum::YLeaf best_effort;

};

class MplsTeBackupBandwidthPoolEnum : public Enum
{
    public:
        static const Enum::YLeaf any_pool;
        static const Enum::YLeaf global_pool;
        static const Enum::YLeaf sub_pool;

};

class MplsTeOtnApsProtectionModeEnum : public Enum
{
    public:
        static const Enum::YLeaf revertive;
        static const Enum::YLeaf non_revertive;

};

class MplsTeSwitchingIndexEnum : public Enum
{
    public:
        static const Enum::YLeaf link;

};

class MplsTeConfigTunnelEnum : public Enum
{
    public:
        static const Enum::YLeaf p2p;
        static const Enum::YLeaf p2mp;

};


}
}

#endif /* _CISCO_IOS_XR_MPLS_TE_CFG_ */

