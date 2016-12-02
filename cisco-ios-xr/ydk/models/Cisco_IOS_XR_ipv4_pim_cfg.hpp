#ifndef _CISCO_IOS_XR_IPV4_PIM_CFG_
#define _CISCO_IOS_XR_IPV4_PIM_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

#include "Cisco_IOS_XR_ipv4_autorp_datatypes.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_pim_cfg {

class Pim : public Entity
{
    public:
        Pim();
        ~Pim();

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
                Value vrf_name; //type: string


            class Ipv6 : public Entity
            {
                public:
                    Ipv6();
                    ~Ipv6();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value embedded_rp_disable; //type: empty
                    Value neighbor_check_on_receive; //type: empty
                    Value old_register_checksum; //type: empty
                    Value neighbor_filter; //type: string
                    Value spt_threshold_infinity; //type: string
                    Value log_neighbor_changes; //type: empty
                    Value register_source; //type: string
                    Value accept_register; //type: string
                    Value suppress_rpf_prunes; //type: empty
                    Value assert_disable; //type: empty
                    Value ssm_allow_override; //type: empty
                    Value multipath; //type: PimMultipathEnum
                    Value rp_static_deny; //type: string
                    Value suppress_data_registers; //type: empty
                    Value neighbor_check_on_send; //type: empty


                class EmbeddedRpAddresses : public Entity
                {
                    public:
                        EmbeddedRpAddresses();
                        ~EmbeddedRpAddresses();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class EmbeddedRpAddress : public Entity
                    {
                        public:
                            EmbeddedRpAddress();
                            ~EmbeddedRpAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value rp_address; //type: string
                            Value access_list_name; //type: string




                    }; // Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress> > embedded_rp_address;


                }; // Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses


                class SparseModeRpAddresses : public Entity
                {
                    public:
                        SparseModeRpAddresses();
                        ~SparseModeRpAddresses();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class SparseModeRpAddress : public Entity
                    {
                        public:
                            SparseModeRpAddress();
                            ~SparseModeRpAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value rp_address; //type: string
                            Value access_list_name; //type: string
                            Value auto_rp_override; //type: boolean




                    }; // Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses::SparseModeRpAddress> > sparse_mode_rp_address;


                }; // Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses


                class InheritableDefaults : public Entity
                {
                    public:
                        InheritableDefaults();
                        ~InheritableDefaults();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value convergency; //type: uint32
                        Value hello_interval; //type: uint32
                        Value propagation_delay; //type: uint32
                        Value dr_priority; //type: uint32
                        Value join_prune_mtu; //type: uint32
                        Value jp_interval; //type: uint32
                        Value override_interval; //type: uint32




                }; // Pim::Vrfs::Vrf::Ipv6::InheritableDefaults


                class Rpf : public Entity
                {
                    public:
                        Rpf();
                        ~Rpf();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value route_policy; //type: string




                }; // Pim::Vrfs::Vrf::Ipv6::Rpf


                class SgExpiryTimer : public Entity
                {
                    public:
                        SgExpiryTimer();
                        ~SgExpiryTimer();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interval; //type: uint32
                        Value access_list_name; //type: string




                }; // Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer


                class RpfVectorEnable : public Entity
                {
                    public:
                        RpfVectorEnable();
                        ~RpfVectorEnable();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value enable; //type: empty
                        Value allow_ebgp; //type: boolean
                        Value disable_ibgp; //type: boolean




                }; // Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable


                class Nsf : public Entity
                {
                    public:
                        Nsf();
                        ~Nsf();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value lifetime; //type: uint32




                }; // Pim::Vrfs::Vrf::Ipv6::Nsf


                class Maximum : public Entity
                {
                    public:
                        Maximum();
                        ~Maximum();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value gloabal_high_priority_packet_queue; //type: uint32
                        Value gloabal_low_priority_packet_queue; //type: uint32


                    class GroupMappingsAutoRp : public Entity
                    {
                        public:
                            GroupMappingsAutoRp();
                            ~GroupMappingsAutoRp();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value maximum_group_ranges_auto_rp; //type: uint32
                            Value threshold_group_ranges_auto_rp; //type: uint32




                    }; // Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp


                    class BsrGlobalGroupMappings : public Entity
                    {
                        public:
                            BsrGlobalGroupMappings();
                            ~BsrGlobalGroupMappings();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value bsr_maximum_global_group_mappings; //type: uint32
                            Value warning_threshold; //type: uint32




                    }; // Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGlobalGroupMappings


                    class GlobalRoutes : public Entity
                    {
                        public:
                            GlobalRoutes();
                            ~GlobalRoutes();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value maximum_routes; //type: uint32
                            Value warning_threshold; //type: uint32




                    }; // Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRoutes


                    class BsrGroupMappings : public Entity
                    {
                        public:
                            BsrGroupMappings();
                            ~BsrGroupMappings();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value bsr_maximum_group_ranges; //type: uint32
                            Value warning_threshold; //type: uint32




                    }; // Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings


                    class GlobalGroupMappingsAutoRp : public Entity
                    {
                        public:
                            GlobalGroupMappingsAutoRp();
                            ~GlobalGroupMappingsAutoRp();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value maximum_global_group_ranges_auto_rp; //type: uint32
                            Value threshold_global_group_ranges_auto_rp; //type: uint32




                    }; // Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalGroupMappingsAutoRp


                    class RegisterStates : public Entity
                    {
                        public:
                            RegisterStates();
                            ~RegisterStates();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value maximum_register_states; //type: uint32
                            Value warning_threshold; //type: uint32




                    }; // Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates


                    class RouteInterfaces : public Entity
                    {
                        public:
                            RouteInterfaces();
                            ~RouteInterfaces();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value maximum_route_interfaces; //type: uint32
                            Value warning_threshold; //type: uint32




                    }; // Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces


                    class BsrGlobalCandidateRpCache : public Entity
                    {
                        public:
                            BsrGlobalCandidateRpCache();
                            ~BsrGlobalCandidateRpCache();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value bsr_maximum_global_candidate_rp_cache; //type: uint32
                            Value warning_threshold; //type: uint32




                    }; // Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGlobalCandidateRpCache


                    class BsrCandidateRpCache : public Entity
                    {
                        public:
                            BsrCandidateRpCache();
                            ~BsrCandidateRpCache();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value bsr_maximum_candidate_rp_cache; //type: uint32
                            Value warning_threshold; //type: uint32




                    }; // Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache


                    class GlobalRegisterStates : public Entity
                    {
                        public:
                            GlobalRegisterStates();
                            ~GlobalRegisterStates();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value maximum_register_states; //type: uint32
                            Value warning_threshold; //type: uint32




                    }; // Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRegisterStates


                    class GlobalRouteInterfaces : public Entity
                    {
                        public:
                            GlobalRouteInterfaces();
                            ~GlobalRouteInterfaces();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value maximum_route_interfaces; //type: uint32
                            Value warning_threshold; //type: uint32




                    }; // Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRouteInterfaces


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
                            Value maximum_routes; //type: uint32
                            Value warning_threshold; //type: uint32




                    }; // Pim::Vrfs::Vrf::Ipv6::Maximum::Routes


                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Maximum::BsrCandidateRpCache> bsr_candidate_rp_cache;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGlobalCandidateRpCache> bsr_global_candidate_rp_cache; // presence node
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGlobalGroupMappings> bsr_global_group_mappings; // presence node
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Maximum::BsrGroupMappings> bsr_group_mappings;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalGroupMappingsAutoRp> global_group_mappings_auto_rp;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRegisterStates> global_register_states;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRouteInterfaces> global_route_interfaces;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Maximum::GlobalRoutes> global_routes;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Maximum::GroupMappingsAutoRp> group_mappings_auto_rp;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Maximum::RegisterStates> register_states;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Maximum::RouteInterfaces> route_interfaces;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Maximum::Routes> routes;


                }; // Pim::Vrfs::Vrf::Ipv6::Maximum


                class Ssm : public Entity
                {
                    public:
                        Ssm();
                        ~Ssm();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value disable; //type: boolean
                        Value range; //type: string




                }; // Pim::Vrfs::Vrf::Ipv6::Ssm


                class BidirRpAddresses : public Entity
                {
                    public:
                        BidirRpAddresses();
                        ~BidirRpAddresses();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class BidirRpAddress : public Entity
                    {
                        public:
                            BidirRpAddress();
                            ~BidirRpAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value rp_address; //type: string
                            Value access_list_name; //type: string
                            Value auto_rp_override; //type: boolean




                    }; // Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses::BidirRpAddress> > bidir_rp_address;


                }; // Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses


                class Bsr : public Entity
                {
                    public:
                        Bsr();
                        ~Bsr();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class CandidateRps : public Entity
                    {
                        public:
                            CandidateRps();
                            ~CandidateRps();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class CandidateRp : public Entity
                        {
                            public:
                                CandidateRp();
                                ~CandidateRp();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value address; //type: string


                            class Sm : public Entity
                            {
                                public:
                                    Sm();
                                    ~Sm();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value access_list_name; //type: string
                                    Value priority; //type: uint32
                                    Value protocol_mode; //type: uint32
                                    Value interval; //type: uint32




                            }; // Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::Sm


                            class Bidir : public Entity
                            {
                                public:
                                    Bidir();
                                    ~Bidir();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value access_list_name; //type: string
                                    Value priority; //type: uint32
                                    Value protocol_mode; //type: uint32
                                    Value interval; //type: uint32




                            }; // Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::Bidir


                                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::Bidir> bidir;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp::Sm> sm;


                        }; // Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps::CandidateRp> > candidate_rp;


                    }; // Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps


                    class CandidateBsr : public Entity
                    {
                        public:
                            CandidateBsr();
                            ~CandidateBsr();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value address; //type: string
                            Value prefix_length; //type: int32
                            Value priority; //type: uint32




                    }; // Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr


                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateBsr> candidate_bsr; // presence node
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Bsr::CandidateRps> candidate_rps;


                }; // Pim::Vrfs::Vrf::Ipv6::Bsr


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
                            Value interface_name; //type: string
                            Value neighbor_filter; //type: string
                            Value bsr_border; //type: boolean
                            Value enable; //type: empty
                            Value interface_enable; //type: boolean
                            Value hello_interval; //type: uint32
                            Value propagation_delay; //type: uint32
                            Value dr_priority; //type: uint32
                            Value join_prune_mtu; //type: uint32
                            Value jp_interval; //type: uint32
                            Value override_interval; //type: uint32


                        class RedirectBundle : public Entity
                        {
                            public:
                                RedirectBundle();
                                ~RedirectBundle();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bundle_name; //type: string
                                Value interface_bandwidth; //type: uint32
                                Value threshold_bandwidth; //type: uint32




                        }; // Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::RedirectBundle


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
                                Value enable; //type: boolean




                        }; // Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd


                        class Oor : public Entity
                        {
                            public:
                                Oor();
                                ~Oor();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value maximum; //type: uint32
                                Value warning_threshold; //type: uint32
                                Value access_list_name; //type: string




                        }; // Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Oor


                            std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Bfd> bfd;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::Oor> oor;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface::RedirectBundle> redirect_bundle; // presence node


                    }; // Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Interfaces::Interface> > interface;


                }; // Pim::Vrfs::Vrf::Ipv6::Interfaces


                class AllowRp : public Entity
                {
                    public:
                        AllowRp();
                        ~AllowRp();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value rp_list_name; //type: string
                        Value group_list_name; //type: string




                }; // Pim::Vrfs::Vrf::Ipv6::AllowRp


                class Convergence : public Entity
                {
                    public:
                        Convergence();
                        ~Convergence();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value rpf_conflict_join_delay; //type: uint32
                        Value link_down_prune_delay; //type: uint32




                }; // Pim::Vrfs::Vrf::Ipv6::Convergence


                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::AllowRp> allow_rp; // presence node
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::BidirRpAddresses> bidir_rp_addresses;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Bsr> bsr;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Convergence> convergence;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::EmbeddedRpAddresses> embedded_rp_addresses;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::InheritableDefaults> inheritable_defaults;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Interfaces> interfaces;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Maximum> maximum;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Nsf> nsf;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Rpf> rpf;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::RpfVectorEnable> rpf_vector_enable; // presence node
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::SgExpiryTimer> sg_expiry_timer;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::SparseModeRpAddresses> sparse_mode_rp_addresses;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6::Ssm> ssm;
                    class PimMultipathEnum;


            }; // Pim::Vrfs::Vrf::Ipv6


            class Ipv4 : public Entity
            {
                public:
                    Ipv4();
                    ~Ipv4();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value auto_rp_disable; //type: empty
                    Value neighbor_check_on_receive; //type: empty
                    Value old_register_checksum; //type: empty
                    Value neighbor_filter; //type: string
                    Value spt_threshold_infinity; //type: string
                    Value log_neighbor_changes; //type: empty
                    Value register_source; //type: string
                    Value accept_register; //type: string
                    Value suppress_rpf_prunes; //type: empty
                    Value assert_disable; //type: empty
                    Value ssm_allow_override; //type: empty
                    Value multipath; //type: PimMultipathEnum
                    Value rp_static_deny; //type: string
                    Value suppress_data_registers; //type: empty
                    Value neighbor_check_on_send; //type: empty


                class CsMulticastOnlyFrrs : public Entity
                {
                    public:
                        CsMulticastOnlyFrrs();
                        ~CsMulticastOnlyFrrs();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class CsMulticastOnlyFrr : public Entity
                    {
                        public:
                            CsMulticastOnlyFrr();
                            ~CsMulticastOnlyFrr();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source; //type: string
                            Value primary; //type: string
                            Value backup; //type: string
                            Value prefix_length; //type: int32




                    }; // Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr> > cs_multicast_only_frr;


                }; // Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs


                class MulticastOnlyFrr : public Entity
                {
                    public:
                        MulticastOnlyFrr();
                        ~MulticastOnlyFrr();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value non_revertive_multicast_only_frr; //type: empty
                        Value flow_multicast_only_frr; //type: string
                        Value enable; //type: empty
                        Value rib_multicast_only_frr; //type: string




                }; // Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr


                class RpfRedirect : public Entity
                {
                    public:
                        RpfRedirect();
                        ~RpfRedirect();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value route_policy; //type: string




                }; // Pim::Vrfs::Vrf::Ipv4::RpfRedirect


                class Paths : public Entity
                {
                    public:
                        Paths();
                        ~Paths();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Path : public Entity
                    {
                        public:
                            Path();
                            ~Path();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value prefix_length; //type: int32
                            ValueList rpf_proxy_address; //type: list of  string




                    }; // Pim::Vrfs::Vrf::Ipv4::Paths::Path


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Paths::Path> > path;


                }; // Pim::Vrfs::Vrf::Ipv4::Paths


                class CjMulticastOnlyFrrs : public Entity
                {
                    public:
                        CjMulticastOnlyFrrs();
                        ~CjMulticastOnlyFrrs();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class CjMulticastOnlyFrr : public Entity
                    {
                        public:
                            CjMulticastOnlyFrr();
                            ~CjMulticastOnlyFrr();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source; //type: string
                            Value primary; //type: string
                            Value backup; //type: string
                            Value prefix_length; //type: int32




                    }; // Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr> > cj_multicast_only_frr;


                }; // Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs


                class AutoRp : public Entity
                {
                    public:
                        AutoRp();
                        ~AutoRp();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;




                }; // Pim::Vrfs::Vrf::Ipv4::AutoRp


                class AutoRpMappingAgent : public Entity
                {
                    public:
                        AutoRpMappingAgent();
                        ~AutoRpMappingAgent();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Parameters : public Entity
                    {
                        public:
                            Parameters();
                            ~Parameters();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value interface_name; //type: string
                            Value ttl; //type: uint32
                            Value announce_period; //type: uint32




                    }; // Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::Parameters


                    class CacheLimit : public Entity
                    {
                        public:
                            CacheLimit();
                            ~CacheLimit();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value maximum_cache_entry; //type: uint32
                            Value threshold_cache_entry; //type: uint32




                    }; // Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::CacheLimit


                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::CacheLimit> cache_limit; // presence node
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent::Parameters> parameters; // presence node


                }; // Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent


                class CandidateRps : public Entity
                {
                    public:
                        CandidateRps();
                        ~CandidateRps();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class CandidateRp : public Entity
                    {
                        public:
                            CandidateRp();
                            ~CandidateRp();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value interface_name; //type: string
                            Value protocol_mode; //type: AutoRpProtocolModeEnum


                        class CandidateRpRange : public Entity
                        {
                            public:
                                CandidateRpRange();
                                ~CandidateRpRange();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value ttl; //type: uint32
                                Value access_list_name; //type: string
                                Value announce_period; //type: uint32




                        }; // Pim::Vrfs::Vrf::Ipv4::CandidateRps::CandidateRp::CandidateRpRange


                            std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::CandidateRps::CandidateRp::CandidateRpRange> candidate_rp_range; // presence node
                            class AutoRpProtocolModeEnum;


                    }; // Pim::Vrfs::Vrf::Ipv4::CandidateRps::CandidateRp


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::CandidateRps::CandidateRp> > candidate_rp;


                }; // Pim::Vrfs::Vrf::Ipv4::CandidateRps


                class Injects : public Entity
                {
                    public:
                        Injects();
                        ~Injects();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Inject : public Entity
                    {
                        public:
                            Inject();
                            ~Inject();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value prefix_length; //type: int32
                            ValueList rpf_proxy_address; //type: list of  string




                    }; // Pim::Vrfs::Vrf::Ipv4::Injects::Inject


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Injects::Inject> > inject;


                }; // Pim::Vrfs::Vrf::Ipv4::Injects


                class SparseModeRpAddresses : public Entity
                {
                    public:
                        SparseModeRpAddresses();
                        ~SparseModeRpAddresses();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class SparseModeRpAddress : public Entity
                    {
                        public:
                            SparseModeRpAddress();
                            ~SparseModeRpAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value rp_address; //type: string
                            Value access_list_name; //type: string
                            Value auto_rp_override; //type: boolean




                    }; // Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses::SparseModeRpAddress> > sparse_mode_rp_address;


                }; // Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses


                class InheritableDefaults : public Entity
                {
                    public:
                        InheritableDefaults();
                        ~InheritableDefaults();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value convergency; //type: uint32
                        Value hello_interval; //type: uint32
                        Value propagation_delay; //type: uint32
                        Value dr_priority; //type: uint32
                        Value join_prune_mtu; //type: uint32
                        Value jp_interval; //type: uint32
                        Value override_interval; //type: uint32




                }; // Pim::Vrfs::Vrf::Ipv4::InheritableDefaults


                class Rpf : public Entity
                {
                    public:
                        Rpf();
                        ~Rpf();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value route_policy; //type: string




                }; // Pim::Vrfs::Vrf::Ipv4::Rpf


                class SgExpiryTimer : public Entity
                {
                    public:
                        SgExpiryTimer();
                        ~SgExpiryTimer();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interval; //type: uint32
                        Value access_list_name; //type: string




                }; // Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer


                class RpfVectorEnable : public Entity
                {
                    public:
                        RpfVectorEnable();
                        ~RpfVectorEnable();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value enable; //type: empty
                        Value allow_ebgp; //type: boolean
                        Value disable_ibgp; //type: boolean




                }; // Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable


                class Nsf : public Entity
                {
                    public:
                        Nsf();
                        ~Nsf();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value lifetime; //type: uint32




                }; // Pim::Vrfs::Vrf::Ipv4::Nsf


                class Maximum : public Entity
                {
                    public:
                        Maximum();
                        ~Maximum();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value gloabal_high_priority_packet_queue; //type: uint32
                        Value gloabal_low_priority_packet_queue; //type: uint32


                    class GroupMappingsAutoRp : public Entity
                    {
                        public:
                            GroupMappingsAutoRp();
                            ~GroupMappingsAutoRp();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value maximum_group_ranges_auto_rp; //type: uint32
                            Value threshold_group_ranges_auto_rp; //type: uint32




                    }; // Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp


                    class BsrGlobalGroupMappings : public Entity
                    {
                        public:
                            BsrGlobalGroupMappings();
                            ~BsrGlobalGroupMappings();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value bsr_maximum_global_group_mappings; //type: uint32
                            Value warning_threshold; //type: uint32




                    }; // Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGlobalGroupMappings


                    class GlobalRoutes : public Entity
                    {
                        public:
                            GlobalRoutes();
                            ~GlobalRoutes();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value maximum_routes; //type: uint32
                            Value warning_threshold; //type: uint32




                    }; // Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRoutes


                    class BsrGroupMappings : public Entity
                    {
                        public:
                            BsrGroupMappings();
                            ~BsrGroupMappings();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value bsr_maximum_group_ranges; //type: uint32
                            Value warning_threshold; //type: uint32




                    }; // Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings


                    class GlobalGroupMappingsAutoRp : public Entity
                    {
                        public:
                            GlobalGroupMappingsAutoRp();
                            ~GlobalGroupMappingsAutoRp();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value maximum_global_group_ranges_auto_rp; //type: uint32
                            Value threshold_global_group_ranges_auto_rp; //type: uint32




                    }; // Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalGroupMappingsAutoRp


                    class RegisterStates : public Entity
                    {
                        public:
                            RegisterStates();
                            ~RegisterStates();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value maximum_register_states; //type: uint32
                            Value warning_threshold; //type: uint32




                    }; // Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates


                    class RouteInterfaces : public Entity
                    {
                        public:
                            RouteInterfaces();
                            ~RouteInterfaces();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value maximum_route_interfaces; //type: uint32
                            Value warning_threshold; //type: uint32




                    }; // Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces


                    class BsrGlobalCandidateRpCache : public Entity
                    {
                        public:
                            BsrGlobalCandidateRpCache();
                            ~BsrGlobalCandidateRpCache();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value bsr_maximum_global_candidate_rp_cache; //type: uint32
                            Value warning_threshold; //type: uint32




                    }; // Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGlobalCandidateRpCache


                    class BsrCandidateRpCache : public Entity
                    {
                        public:
                            BsrCandidateRpCache();
                            ~BsrCandidateRpCache();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value bsr_maximum_candidate_rp_cache; //type: uint32
                            Value warning_threshold; //type: uint32




                    }; // Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache


                    class GlobalRegisterStates : public Entity
                    {
                        public:
                            GlobalRegisterStates();
                            ~GlobalRegisterStates();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value maximum_register_states; //type: uint32
                            Value warning_threshold; //type: uint32




                    }; // Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRegisterStates


                    class GlobalRouteInterfaces : public Entity
                    {
                        public:
                            GlobalRouteInterfaces();
                            ~GlobalRouteInterfaces();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value maximum_route_interfaces; //type: uint32
                            Value warning_threshold; //type: uint32




                    }; // Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRouteInterfaces


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
                            Value maximum_routes; //type: uint32
                            Value warning_threshold; //type: uint32




                    }; // Pim::Vrfs::Vrf::Ipv4::Maximum::Routes


                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Maximum::BsrCandidateRpCache> bsr_candidate_rp_cache;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGlobalCandidateRpCache> bsr_global_candidate_rp_cache; // presence node
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGlobalGroupMappings> bsr_global_group_mappings; // presence node
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Maximum::BsrGroupMappings> bsr_group_mappings;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalGroupMappingsAutoRp> global_group_mappings_auto_rp;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRegisterStates> global_register_states;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRouteInterfaces> global_route_interfaces;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Maximum::GlobalRoutes> global_routes;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Maximum::GroupMappingsAutoRp> group_mappings_auto_rp;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Maximum::RegisterStates> register_states;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Maximum::RouteInterfaces> route_interfaces;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Maximum::Routes> routes;


                }; // Pim::Vrfs::Vrf::Ipv4::Maximum


                class Ssm : public Entity
                {
                    public:
                        Ssm();
                        ~Ssm();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value disable; //type: boolean
                        Value range; //type: string




                }; // Pim::Vrfs::Vrf::Ipv4::Ssm


                class BidirRpAddresses : public Entity
                {
                    public:
                        BidirRpAddresses();
                        ~BidirRpAddresses();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class BidirRpAddress : public Entity
                    {
                        public:
                            BidirRpAddress();
                            ~BidirRpAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value rp_address; //type: string
                            Value access_list_name; //type: string
                            Value auto_rp_override; //type: boolean




                    }; // Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses::BidirRpAddress> > bidir_rp_address;


                }; // Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses


                class Bsr : public Entity
                {
                    public:
                        Bsr();
                        ~Bsr();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class CandidateRps : public Entity
                    {
                        public:
                            CandidateRps();
                            ~CandidateRps();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class CandidateRp : public Entity
                        {
                            public:
                                CandidateRp();
                                ~CandidateRp();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value address; //type: string


                            class Sm : public Entity
                            {
                                public:
                                    Sm();
                                    ~Sm();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value access_list_name; //type: string
                                    Value priority; //type: uint32
                                    Value protocol_mode; //type: uint32
                                    Value interval; //type: uint32




                            }; // Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::Sm


                            class Bidir : public Entity
                            {
                                public:
                                    Bidir();
                                    ~Bidir();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value access_list_name; //type: string
                                    Value priority; //type: uint32
                                    Value protocol_mode; //type: uint32
                                    Value interval; //type: uint32




                            }; // Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::Bidir


                                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::Bidir> bidir;
                                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp::Sm> sm;


                        }; // Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp


                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps::CandidateRp> > candidate_rp;


                    }; // Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps


                    class CandidateBsr : public Entity
                    {
                        public:
                            CandidateBsr();
                            ~CandidateBsr();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value address; //type: string
                            Value prefix_length; //type: int32
                            Value priority; //type: uint32




                    }; // Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr


                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateBsr> candidate_bsr; // presence node
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Bsr::CandidateRps> candidate_rps;


                }; // Pim::Vrfs::Vrf::Ipv4::Bsr


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
                            Value interface_name; //type: string
                            Value neighbor_filter; //type: string
                            Value bsr_border; //type: boolean
                            Value enable; //type: empty
                            Value interface_enable; //type: boolean
                            Value hello_interval; //type: uint32
                            Value propagation_delay; //type: uint32
                            Value dr_priority; //type: uint32
                            Value join_prune_mtu; //type: uint32
                            Value jp_interval; //type: uint32
                            Value override_interval; //type: uint32


                        class RedirectBundle : public Entity
                        {
                            public:
                                RedirectBundle();
                                ~RedirectBundle();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bundle_name; //type: string
                                Value interface_bandwidth; //type: uint32
                                Value threshold_bandwidth; //type: uint32




                        }; // Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::RedirectBundle


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
                                Value enable; //type: boolean




                        }; // Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd


                        class Oor : public Entity
                        {
                            public:
                                Oor();
                                ~Oor();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value maximum; //type: uint32
                                Value warning_threshold; //type: uint32
                                Value access_list_name; //type: string




                        }; // Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Oor


                            std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Bfd> bfd;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::Oor> oor;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface::RedirectBundle> redirect_bundle; // presence node


                    }; // Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Interfaces::Interface> > interface;


                }; // Pim::Vrfs::Vrf::Ipv4::Interfaces


                class AllowRp : public Entity
                {
                    public:
                        AllowRp();
                        ~AllowRp();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value rp_list_name; //type: string
                        Value group_list_name; //type: string




                }; // Pim::Vrfs::Vrf::Ipv4::AllowRp


                class Convergence : public Entity
                {
                    public:
                        Convergence();
                        ~Convergence();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value rpf_conflict_join_delay; //type: uint32
                        Value link_down_prune_delay; //type: uint32




                }; // Pim::Vrfs::Vrf::Ipv4::Convergence


                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::AllowRp> allow_rp; // presence node
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::AutoRp> auto_rp;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::AutoRpMappingAgent> auto_rp_mapping_agent;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::BidirRpAddresses> bidir_rp_addresses;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Bsr> bsr;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::CandidateRps> candidate_rps;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::CjMulticastOnlyFrrs> cj_multicast_only_frrs;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Convergence> convergence;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::CsMulticastOnlyFrrs> cs_multicast_only_frrs;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::InheritableDefaults> inheritable_defaults;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Injects> injects;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Interfaces> interfaces;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Maximum> maximum;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::MulticastOnlyFrr> multicast_only_frr;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Nsf> nsf;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Paths> paths;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Rpf> rpf;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::RpfRedirect> rpf_redirect;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::RpfVectorEnable> rpf_vector_enable; // presence node
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::SgExpiryTimer> sg_expiry_timer;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::SparseModeRpAddresses> sparse_mode_rp_addresses;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4::Ssm> ssm;
                    class PimMultipathEnum;


            }; // Pim::Vrfs::Vrf::Ipv4


                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv4> ipv4;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf::Ipv6> ipv6;


        }; // Pim::Vrfs::Vrf


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs::Vrf> > vrf;


    }; // Pim::Vrfs


    class DefaultContext : public Entity
    {
        public:
            DefaultContext();
            ~DefaultContext();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Ipv6 : public Entity
        {
            public:
                Ipv6();
                ~Ipv6();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value embedded_rp_disable; //type: empty
                Value neighbor_check_on_receive; //type: empty
                Value old_register_checksum; //type: empty
                Value neighbor_filter; //type: string
                Value spt_threshold_infinity; //type: string
                Value log_neighbor_changes; //type: empty
                Value register_source; //type: string
                Value accept_register; //type: string
                Value suppress_rpf_prunes; //type: empty
                Value assert_disable; //type: empty
                Value ssm_allow_override; //type: empty
                Value multipath; //type: PimMultipathEnum
                Value rp_static_deny; //type: string
                Value suppress_data_registers; //type: empty
                Value neighbor_check_on_send; //type: empty


            class EmbeddedRpAddresses : public Entity
            {
                public:
                    EmbeddedRpAddresses();
                    ~EmbeddedRpAddresses();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class EmbeddedRpAddress : public Entity
                {
                    public:
                        EmbeddedRpAddress();
                        ~EmbeddedRpAddress();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value rp_address; //type: string
                        Value access_list_name; //type: string




                }; // Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::EmbeddedRpAddresses::EmbeddedRpAddress> > embedded_rp_address;


            }; // Pim::DefaultContext::Ipv6::EmbeddedRpAddresses


            class SparseModeRpAddresses : public Entity
            {
                public:
                    SparseModeRpAddresses();
                    ~SparseModeRpAddresses();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class SparseModeRpAddress : public Entity
                {
                    public:
                        SparseModeRpAddress();
                        ~SparseModeRpAddress();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value rp_address; //type: string
                        Value access_list_name; //type: string
                        Value auto_rp_override; //type: boolean




                }; // Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::SparseModeRpAddresses::SparseModeRpAddress> > sparse_mode_rp_address;


            }; // Pim::DefaultContext::Ipv6::SparseModeRpAddresses


            class InheritableDefaults : public Entity
            {
                public:
                    InheritableDefaults();
                    ~InheritableDefaults();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value convergency; //type: uint32
                    Value hello_interval; //type: uint32
                    Value propagation_delay; //type: uint32
                    Value dr_priority; //type: uint32
                    Value join_prune_mtu; //type: uint32
                    Value jp_interval; //type: uint32
                    Value override_interval; //type: uint32




            }; // Pim::DefaultContext::Ipv6::InheritableDefaults


            class Rpf : public Entity
            {
                public:
                    Rpf();
                    ~Rpf();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value route_policy; //type: string




            }; // Pim::DefaultContext::Ipv6::Rpf


            class SgExpiryTimer : public Entity
            {
                public:
                    SgExpiryTimer();
                    ~SgExpiryTimer();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interval; //type: uint32
                    Value access_list_name; //type: string




            }; // Pim::DefaultContext::Ipv6::SgExpiryTimer


            class RpfVectorEnable : public Entity
            {
                public:
                    RpfVectorEnable();
                    ~RpfVectorEnable();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value enable; //type: empty
                    Value allow_ebgp; //type: boolean
                    Value disable_ibgp; //type: boolean




            }; // Pim::DefaultContext::Ipv6::RpfVectorEnable


            class Nsf : public Entity
            {
                public:
                    Nsf();
                    ~Nsf();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value lifetime; //type: uint32




            }; // Pim::DefaultContext::Ipv6::Nsf


            class Maximum : public Entity
            {
                public:
                    Maximum();
                    ~Maximum();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value gloabal_high_priority_packet_queue; //type: uint32
                    Value gloabal_low_priority_packet_queue; //type: uint32


                class GroupMappingsAutoRp : public Entity
                {
                    public:
                        GroupMappingsAutoRp();
                        ~GroupMappingsAutoRp();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value maximum_group_ranges_auto_rp; //type: uint32
                        Value threshold_group_ranges_auto_rp; //type: uint32




                }; // Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp


                class BsrGlobalGroupMappings : public Entity
                {
                    public:
                        BsrGlobalGroupMappings();
                        ~BsrGlobalGroupMappings();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value bsr_maximum_global_group_mappings; //type: uint32
                        Value warning_threshold; //type: uint32




                }; // Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings


                class GlobalRoutes : public Entity
                {
                    public:
                        GlobalRoutes();
                        ~GlobalRoutes();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value maximum_routes; //type: uint32
                        Value warning_threshold; //type: uint32




                }; // Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes


                class BsrGroupMappings : public Entity
                {
                    public:
                        BsrGroupMappings();
                        ~BsrGroupMappings();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value bsr_maximum_group_ranges; //type: uint32
                        Value warning_threshold; //type: uint32




                }; // Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings


                class GlobalGroupMappingsAutoRp : public Entity
                {
                    public:
                        GlobalGroupMappingsAutoRp();
                        ~GlobalGroupMappingsAutoRp();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value maximum_global_group_ranges_auto_rp; //type: uint32
                        Value threshold_global_group_ranges_auto_rp; //type: uint32




                }; // Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp


                class RegisterStates : public Entity
                {
                    public:
                        RegisterStates();
                        ~RegisterStates();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value maximum_register_states; //type: uint32
                        Value warning_threshold; //type: uint32




                }; // Pim::DefaultContext::Ipv6::Maximum::RegisterStates


                class RouteInterfaces : public Entity
                {
                    public:
                        RouteInterfaces();
                        ~RouteInterfaces();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value maximum_route_interfaces; //type: uint32
                        Value warning_threshold; //type: uint32




                }; // Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces


                class BsrGlobalCandidateRpCache : public Entity
                {
                    public:
                        BsrGlobalCandidateRpCache();
                        ~BsrGlobalCandidateRpCache();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value bsr_maximum_global_candidate_rp_cache; //type: uint32
                        Value warning_threshold; //type: uint32




                }; // Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache


                class BsrCandidateRpCache : public Entity
                {
                    public:
                        BsrCandidateRpCache();
                        ~BsrCandidateRpCache();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value bsr_maximum_candidate_rp_cache; //type: uint32
                        Value warning_threshold; //type: uint32




                }; // Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache


                class GlobalRegisterStates : public Entity
                {
                    public:
                        GlobalRegisterStates();
                        ~GlobalRegisterStates();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value maximum_register_states; //type: uint32
                        Value warning_threshold; //type: uint32




                }; // Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates


                class GlobalRouteInterfaces : public Entity
                {
                    public:
                        GlobalRouteInterfaces();
                        ~GlobalRouteInterfaces();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value maximum_route_interfaces; //type: uint32
                        Value warning_threshold; //type: uint32




                }; // Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces


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
                        Value maximum_routes; //type: uint32
                        Value warning_threshold; //type: uint32




                }; // Pim::DefaultContext::Ipv6::Maximum::Routes


                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::BsrCandidateRpCache> bsr_candidate_rp_cache;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::BsrGlobalCandidateRpCache> bsr_global_candidate_rp_cache; // presence node
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::BsrGlobalGroupMappings> bsr_global_group_mappings; // presence node
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::BsrGroupMappings> bsr_group_mappings;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::GlobalGroupMappingsAutoRp> global_group_mappings_auto_rp;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::GlobalRegisterStates> global_register_states;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::GlobalRouteInterfaces> global_route_interfaces;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::GlobalRoutes> global_routes;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::GroupMappingsAutoRp> group_mappings_auto_rp;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::RegisterStates> register_states;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::RouteInterfaces> route_interfaces;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum::Routes> routes;


            }; // Pim::DefaultContext::Ipv6::Maximum


            class Ssm : public Entity
            {
                public:
                    Ssm();
                    ~Ssm();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value disable; //type: boolean
                    Value range; //type: string




            }; // Pim::DefaultContext::Ipv6::Ssm


            class BidirRpAddresses : public Entity
            {
                public:
                    BidirRpAddresses();
                    ~BidirRpAddresses();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class BidirRpAddress : public Entity
                {
                    public:
                        BidirRpAddress();
                        ~BidirRpAddress();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value rp_address; //type: string
                        Value access_list_name; //type: string
                        Value auto_rp_override; //type: boolean




                }; // Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::BidirRpAddresses::BidirRpAddress> > bidir_rp_address;


            }; // Pim::DefaultContext::Ipv6::BidirRpAddresses


            class Bsr : public Entity
            {
                public:
                    Bsr();
                    ~Bsr();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class CandidateRps : public Entity
                {
                    public:
                        CandidateRps();
                        ~CandidateRps();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class CandidateRp : public Entity
                    {
                        public:
                            CandidateRp();
                            ~CandidateRp();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value address; //type: string


                        class Sm : public Entity
                        {
                            public:
                                Sm();
                                ~Sm();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value access_list_name; //type: string
                                Value priority; //type: uint32
                                Value protocol_mode; //type: uint32
                                Value interval; //type: uint32




                        }; // Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::Sm


                        class Bidir : public Entity
                        {
                            public:
                                Bidir();
                                ~Bidir();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value access_list_name; //type: string
                                Value priority; //type: uint32
                                Value protocol_mode; //type: uint32
                                Value interval; //type: uint32




                        }; // Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::Bidir


                            std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::Bidir> bidir;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp::Sm> sm;


                    }; // Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Bsr::CandidateRps::CandidateRp> > candidate_rp;


                }; // Pim::DefaultContext::Ipv6::Bsr::CandidateRps


                class CandidateBsr : public Entity
                {
                    public:
                        CandidateBsr();
                        ~CandidateBsr();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value address; //type: string
                        Value prefix_length; //type: int32
                        Value priority; //type: uint32




                }; // Pim::DefaultContext::Ipv6::Bsr::CandidateBsr


                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Bsr::CandidateBsr> candidate_bsr; // presence node
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Bsr::CandidateRps> candidate_rps;


            }; // Pim::DefaultContext::Ipv6::Bsr


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
                        Value interface_name; //type: string
                        Value neighbor_filter; //type: string
                        Value bsr_border; //type: boolean
                        Value enable; //type: empty
                        Value interface_enable; //type: boolean
                        Value hello_interval; //type: uint32
                        Value propagation_delay; //type: uint32
                        Value dr_priority; //type: uint32
                        Value join_prune_mtu; //type: uint32
                        Value jp_interval; //type: uint32
                        Value override_interval; //type: uint32


                    class RedirectBundle : public Entity
                    {
                        public:
                            RedirectBundle();
                            ~RedirectBundle();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value bundle_name; //type: string
                            Value interface_bandwidth; //type: uint32
                            Value threshold_bandwidth; //type: uint32




                    }; // Pim::DefaultContext::Ipv6::Interfaces::Interface::RedirectBundle


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
                            Value enable; //type: boolean




                    }; // Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd


                    class Oor : public Entity
                    {
                        public:
                            Oor();
                            ~Oor();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value maximum; //type: uint32
                            Value warning_threshold; //type: uint32
                            Value access_list_name; //type: string




                    }; // Pim::DefaultContext::Ipv6::Interfaces::Interface::Oor


                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Interfaces::Interface::Bfd> bfd;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Interfaces::Interface::Oor> oor;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Interfaces::Interface::RedirectBundle> redirect_bundle; // presence node


                }; // Pim::DefaultContext::Ipv6::Interfaces::Interface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Interfaces::Interface> > interface;


            }; // Pim::DefaultContext::Ipv6::Interfaces


            class AllowRp : public Entity
            {
                public:
                    AllowRp();
                    ~AllowRp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value rp_list_name; //type: string
                    Value group_list_name; //type: string




            }; // Pim::DefaultContext::Ipv6::AllowRp


            class Convergence : public Entity
            {
                public:
                    Convergence();
                    ~Convergence();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value rpf_conflict_join_delay; //type: uint32
                    Value link_down_prune_delay; //type: uint32




            }; // Pim::DefaultContext::Ipv6::Convergence


                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::AllowRp> allow_rp; // presence node
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::BidirRpAddresses> bidir_rp_addresses;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Bsr> bsr;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Convergence> convergence;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::EmbeddedRpAddresses> embedded_rp_addresses;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::InheritableDefaults> inheritable_defaults;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Interfaces> interfaces;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Maximum> maximum;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Nsf> nsf;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Rpf> rpf;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::RpfVectorEnable> rpf_vector_enable; // presence node
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::SgExpiryTimer> sg_expiry_timer;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::SparseModeRpAddresses> sparse_mode_rp_addresses;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6::Ssm> ssm;
                class PimMultipathEnum;


        }; // Pim::DefaultContext::Ipv6


        class Ipv4 : public Entity
        {
            public:
                Ipv4();
                ~Ipv4();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value auto_rp_disable; //type: empty
                Value neighbor_check_on_receive; //type: empty
                Value old_register_checksum; //type: empty
                Value neighbor_filter; //type: string
                Value spt_threshold_infinity; //type: string
                Value log_neighbor_changes; //type: empty
                Value register_source; //type: string
                Value accept_register; //type: string
                Value suppress_rpf_prunes; //type: empty
                Value assert_disable; //type: empty
                Value ssm_allow_override; //type: empty
                Value multipath; //type: PimMultipathEnum
                Value rp_static_deny; //type: string
                Value suppress_data_registers; //type: empty
                Value neighbor_check_on_send; //type: empty


            class CsMulticastOnlyFrrs : public Entity
            {
                public:
                    CsMulticastOnlyFrrs();
                    ~CsMulticastOnlyFrrs();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class CsMulticastOnlyFrr : public Entity
                {
                    public:
                        CsMulticastOnlyFrr();
                        ~CsMulticastOnlyFrr();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value source; //type: string
                        Value primary; //type: string
                        Value backup; //type: string
                        Value prefix_length; //type: int32




                }; // Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs::CsMulticastOnlyFrr> > cs_multicast_only_frr;


            }; // Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs


            class MulticastOnlyFrr : public Entity
            {
                public:
                    MulticastOnlyFrr();
                    ~MulticastOnlyFrr();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value non_revertive_multicast_only_frr; //type: empty
                    Value flow_multicast_only_frr; //type: string
                    Value enable; //type: empty
                    Value rib_multicast_only_frr; //type: string




            }; // Pim::DefaultContext::Ipv4::MulticastOnlyFrr


            class RpfRedirect : public Entity
            {
                public:
                    RpfRedirect();
                    ~RpfRedirect();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value route_policy; //type: string




            }; // Pim::DefaultContext::Ipv4::RpfRedirect


            class Paths : public Entity
            {
                public:
                    Paths();
                    ~Paths();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Path : public Entity
                {
                    public:
                        Path();
                        ~Path();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value source_address; //type: string
                        Value prefix_length; //type: int32
                        ValueList rpf_proxy_address; //type: list of  string




                }; // Pim::DefaultContext::Ipv4::Paths::Path


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Paths::Path> > path;


            }; // Pim::DefaultContext::Ipv4::Paths


            class CjMulticastOnlyFrrs : public Entity
            {
                public:
                    CjMulticastOnlyFrrs();
                    ~CjMulticastOnlyFrrs();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class CjMulticastOnlyFrr : public Entity
                {
                    public:
                        CjMulticastOnlyFrr();
                        ~CjMulticastOnlyFrr();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value source; //type: string
                        Value primary; //type: string
                        Value backup; //type: string
                        Value prefix_length; //type: int32




                }; // Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs::CjMulticastOnlyFrr> > cj_multicast_only_frr;


            }; // Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs


            class AutoRp : public Entity
            {
                public:
                    AutoRp();
                    ~AutoRp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;




            }; // Pim::DefaultContext::Ipv4::AutoRp


            class AutoRpMappingAgent : public Entity
            {
                public:
                    AutoRpMappingAgent();
                    ~AutoRpMappingAgent();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Parameters : public Entity
                {
                    public:
                        Parameters();
                        ~Parameters();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_name; //type: string
                        Value ttl; //type: uint32
                        Value announce_period; //type: uint32




                }; // Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters


                class CacheLimit : public Entity
                {
                    public:
                        CacheLimit();
                        ~CacheLimit();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value maximum_cache_entry; //type: uint32
                        Value threshold_cache_entry; //type: uint32




                }; // Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit


                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::AutoRpMappingAgent::CacheLimit> cache_limit; // presence node
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::AutoRpMappingAgent::Parameters> parameters; // presence node


            }; // Pim::DefaultContext::Ipv4::AutoRpMappingAgent


            class CandidateRps : public Entity
            {
                public:
                    CandidateRps();
                    ~CandidateRps();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class CandidateRp : public Entity
                {
                    public:
                        CandidateRp();
                        ~CandidateRp();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_name; //type: string
                        Value protocol_mode; //type: AutoRpProtocolModeEnum


                    class CandidateRpRange : public Entity
                    {
                        public:
                            CandidateRpRange();
                            ~CandidateRpRange();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value ttl; //type: uint32
                            Value access_list_name; //type: string
                            Value announce_period; //type: uint32




                    }; // Pim::DefaultContext::Ipv4::CandidateRps::CandidateRp::CandidateRpRange


                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::CandidateRps::CandidateRp::CandidateRpRange> candidate_rp_range; // presence node
                        class AutoRpProtocolModeEnum;


                }; // Pim::DefaultContext::Ipv4::CandidateRps::CandidateRp


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::CandidateRps::CandidateRp> > candidate_rp;


            }; // Pim::DefaultContext::Ipv4::CandidateRps


            class Injects : public Entity
            {
                public:
                    Injects();
                    ~Injects();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Inject : public Entity
                {
                    public:
                        Inject();
                        ~Inject();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value source_address; //type: string
                        Value prefix_length; //type: int32
                        ValueList rpf_proxy_address; //type: list of  string




                }; // Pim::DefaultContext::Ipv4::Injects::Inject


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Injects::Inject> > inject;


            }; // Pim::DefaultContext::Ipv4::Injects


            class SparseModeRpAddresses : public Entity
            {
                public:
                    SparseModeRpAddresses();
                    ~SparseModeRpAddresses();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class SparseModeRpAddress : public Entity
                {
                    public:
                        SparseModeRpAddress();
                        ~SparseModeRpAddress();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value rp_address; //type: string
                        Value access_list_name; //type: string
                        Value auto_rp_override; //type: boolean




                }; // Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::SparseModeRpAddresses::SparseModeRpAddress> > sparse_mode_rp_address;


            }; // Pim::DefaultContext::Ipv4::SparseModeRpAddresses


            class InheritableDefaults : public Entity
            {
                public:
                    InheritableDefaults();
                    ~InheritableDefaults();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value convergency; //type: uint32
                    Value hello_interval; //type: uint32
                    Value propagation_delay; //type: uint32
                    Value dr_priority; //type: uint32
                    Value join_prune_mtu; //type: uint32
                    Value jp_interval; //type: uint32
                    Value override_interval; //type: uint32




            }; // Pim::DefaultContext::Ipv4::InheritableDefaults


            class Rpf : public Entity
            {
                public:
                    Rpf();
                    ~Rpf();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value route_policy; //type: string




            }; // Pim::DefaultContext::Ipv4::Rpf


            class SgExpiryTimer : public Entity
            {
                public:
                    SgExpiryTimer();
                    ~SgExpiryTimer();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interval; //type: uint32
                    Value access_list_name; //type: string




            }; // Pim::DefaultContext::Ipv4::SgExpiryTimer


            class RpfVectorEnable : public Entity
            {
                public:
                    RpfVectorEnable();
                    ~RpfVectorEnable();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value enable; //type: empty
                    Value allow_ebgp; //type: boolean
                    Value disable_ibgp; //type: boolean




            }; // Pim::DefaultContext::Ipv4::RpfVectorEnable


            class Nsf : public Entity
            {
                public:
                    Nsf();
                    ~Nsf();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value lifetime; //type: uint32




            }; // Pim::DefaultContext::Ipv4::Nsf


            class Maximum : public Entity
            {
                public:
                    Maximum();
                    ~Maximum();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value gloabal_high_priority_packet_queue; //type: uint32
                    Value gloabal_low_priority_packet_queue; //type: uint32


                class GroupMappingsAutoRp : public Entity
                {
                    public:
                        GroupMappingsAutoRp();
                        ~GroupMappingsAutoRp();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value maximum_group_ranges_auto_rp; //type: uint32
                        Value threshold_group_ranges_auto_rp; //type: uint32




                }; // Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp


                class BsrGlobalGroupMappings : public Entity
                {
                    public:
                        BsrGlobalGroupMappings();
                        ~BsrGlobalGroupMappings();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value bsr_maximum_global_group_mappings; //type: uint32
                        Value warning_threshold; //type: uint32




                }; // Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings


                class GlobalRoutes : public Entity
                {
                    public:
                        GlobalRoutes();
                        ~GlobalRoutes();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value maximum_routes; //type: uint32
                        Value warning_threshold; //type: uint32




                }; // Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes


                class BsrGroupMappings : public Entity
                {
                    public:
                        BsrGroupMappings();
                        ~BsrGroupMappings();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value bsr_maximum_group_ranges; //type: uint32
                        Value warning_threshold; //type: uint32




                }; // Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings


                class GlobalGroupMappingsAutoRp : public Entity
                {
                    public:
                        GlobalGroupMappingsAutoRp();
                        ~GlobalGroupMappingsAutoRp();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value maximum_global_group_ranges_auto_rp; //type: uint32
                        Value threshold_global_group_ranges_auto_rp; //type: uint32




                }; // Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp


                class RegisterStates : public Entity
                {
                    public:
                        RegisterStates();
                        ~RegisterStates();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value maximum_register_states; //type: uint32
                        Value warning_threshold; //type: uint32




                }; // Pim::DefaultContext::Ipv4::Maximum::RegisterStates


                class RouteInterfaces : public Entity
                {
                    public:
                        RouteInterfaces();
                        ~RouteInterfaces();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value maximum_route_interfaces; //type: uint32
                        Value warning_threshold; //type: uint32




                }; // Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces


                class BsrGlobalCandidateRpCache : public Entity
                {
                    public:
                        BsrGlobalCandidateRpCache();
                        ~BsrGlobalCandidateRpCache();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value bsr_maximum_global_candidate_rp_cache; //type: uint32
                        Value warning_threshold; //type: uint32




                }; // Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache


                class BsrCandidateRpCache : public Entity
                {
                    public:
                        BsrCandidateRpCache();
                        ~BsrCandidateRpCache();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value bsr_maximum_candidate_rp_cache; //type: uint32
                        Value warning_threshold; //type: uint32




                }; // Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache


                class GlobalRegisterStates : public Entity
                {
                    public:
                        GlobalRegisterStates();
                        ~GlobalRegisterStates();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value maximum_register_states; //type: uint32
                        Value warning_threshold; //type: uint32




                }; // Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates


                class GlobalRouteInterfaces : public Entity
                {
                    public:
                        GlobalRouteInterfaces();
                        ~GlobalRouteInterfaces();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value maximum_route_interfaces; //type: uint32
                        Value warning_threshold; //type: uint32




                }; // Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces


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
                        Value maximum_routes; //type: uint32
                        Value warning_threshold; //type: uint32




                }; // Pim::DefaultContext::Ipv4::Maximum::Routes


                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::BsrCandidateRpCache> bsr_candidate_rp_cache;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::BsrGlobalCandidateRpCache> bsr_global_candidate_rp_cache; // presence node
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::BsrGlobalGroupMappings> bsr_global_group_mappings; // presence node
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::BsrGroupMappings> bsr_group_mappings;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::GlobalGroupMappingsAutoRp> global_group_mappings_auto_rp;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::GlobalRegisterStates> global_register_states;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::GlobalRouteInterfaces> global_route_interfaces;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::GlobalRoutes> global_routes;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::GroupMappingsAutoRp> group_mappings_auto_rp;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::RegisterStates> register_states;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::RouteInterfaces> route_interfaces;
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum::Routes> routes;


            }; // Pim::DefaultContext::Ipv4::Maximum


            class Ssm : public Entity
            {
                public:
                    Ssm();
                    ~Ssm();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value disable; //type: boolean
                    Value range; //type: string




            }; // Pim::DefaultContext::Ipv4::Ssm


            class BidirRpAddresses : public Entity
            {
                public:
                    BidirRpAddresses();
                    ~BidirRpAddresses();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class BidirRpAddress : public Entity
                {
                    public:
                        BidirRpAddress();
                        ~BidirRpAddress();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value rp_address; //type: string
                        Value access_list_name; //type: string
                        Value auto_rp_override; //type: boolean




                }; // Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::BidirRpAddresses::BidirRpAddress> > bidir_rp_address;


            }; // Pim::DefaultContext::Ipv4::BidirRpAddresses


            class Bsr : public Entity
            {
                public:
                    Bsr();
                    ~Bsr();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class CandidateRps : public Entity
                {
                    public:
                        CandidateRps();
                        ~CandidateRps();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class CandidateRp : public Entity
                    {
                        public:
                            CandidateRp();
                            ~CandidateRp();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value address; //type: string


                        class Sm : public Entity
                        {
                            public:
                                Sm();
                                ~Sm();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value access_list_name; //type: string
                                Value priority; //type: uint32
                                Value protocol_mode; //type: uint32
                                Value interval; //type: uint32




                        }; // Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::Sm


                        class Bidir : public Entity
                        {
                            public:
                                Bidir();
                                ~Bidir();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value access_list_name; //type: string
                                Value priority; //type: uint32
                                Value protocol_mode; //type: uint32
                                Value interval; //type: uint32




                        }; // Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::Bidir


                            std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::Bidir> bidir;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp::Sm> sm;


                    }; // Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Bsr::CandidateRps::CandidateRp> > candidate_rp;


                }; // Pim::DefaultContext::Ipv4::Bsr::CandidateRps


                class CandidateBsr : public Entity
                {
                    public:
                        CandidateBsr();
                        ~CandidateBsr();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value address; //type: string
                        Value prefix_length; //type: int32
                        Value priority; //type: uint32




                }; // Pim::DefaultContext::Ipv4::Bsr::CandidateBsr


                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Bsr::CandidateBsr> candidate_bsr; // presence node
                    std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Bsr::CandidateRps> candidate_rps;


            }; // Pim::DefaultContext::Ipv4::Bsr


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
                        Value interface_name; //type: string
                        Value neighbor_filter; //type: string
                        Value bsr_border; //type: boolean
                        Value enable; //type: empty
                        Value interface_enable; //type: boolean
                        Value hello_interval; //type: uint32
                        Value propagation_delay; //type: uint32
                        Value dr_priority; //type: uint32
                        Value join_prune_mtu; //type: uint32
                        Value jp_interval; //type: uint32
                        Value override_interval; //type: uint32


                    class RedirectBundle : public Entity
                    {
                        public:
                            RedirectBundle();
                            ~RedirectBundle();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value bundle_name; //type: string
                            Value interface_bandwidth; //type: uint32
                            Value threshold_bandwidth; //type: uint32




                    }; // Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle


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
                            Value enable; //type: boolean




                    }; // Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd


                    class Oor : public Entity
                    {
                        public:
                            Oor();
                            ~Oor();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value maximum; //type: uint32
                            Value warning_threshold; //type: uint32
                            Value access_list_name; //type: string




                    }; // Pim::DefaultContext::Ipv4::Interfaces::Interface::Oor


                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Interfaces::Interface::Bfd> bfd;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Interfaces::Interface::Oor> oor;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Interfaces::Interface::RedirectBundle> redirect_bundle; // presence node


                }; // Pim::DefaultContext::Ipv4::Interfaces::Interface


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Interfaces::Interface> > interface;


            }; // Pim::DefaultContext::Ipv4::Interfaces


            class AllowRp : public Entity
            {
                public:
                    AllowRp();
                    ~AllowRp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value rp_list_name; //type: string
                    Value group_list_name; //type: string




            }; // Pim::DefaultContext::Ipv4::AllowRp


            class Convergence : public Entity
            {
                public:
                    Convergence();
                    ~Convergence();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value rpf_conflict_join_delay; //type: uint32
                    Value link_down_prune_delay; //type: uint32




            }; // Pim::DefaultContext::Ipv4::Convergence


                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::AllowRp> allow_rp; // presence node
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::AutoRp> auto_rp;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::AutoRpMappingAgent> auto_rp_mapping_agent;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::BidirRpAddresses> bidir_rp_addresses;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Bsr> bsr;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::CandidateRps> candidate_rps;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::CjMulticastOnlyFrrs> cj_multicast_only_frrs;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Convergence> convergence;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::CsMulticastOnlyFrrs> cs_multicast_only_frrs;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::InheritableDefaults> inheritable_defaults;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Injects> injects;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Interfaces> interfaces;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Maximum> maximum;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::MulticastOnlyFrr> multicast_only_frr;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Nsf> nsf;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Paths> paths;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Rpf> rpf;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::RpfRedirect> rpf_redirect;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::RpfVectorEnable> rpf_vector_enable; // presence node
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::SgExpiryTimer> sg_expiry_timer;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::SparseModeRpAddresses> sparse_mode_rp_addresses;
                std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4::Ssm> ssm;
                class PimMultipathEnum;


        }; // Pim::DefaultContext::Ipv4


            std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv4> ipv4;
            std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext::Ipv6> ipv6;


    }; // Pim::DefaultContext


        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::DefaultContext> default_context; // presence node
        std::unique_ptr<Cisco_IOS_XR_ipv4_pim_cfg::Pim::Vrfs> vrfs;


}; // Pim


class PimMultipathEnum : public Enum
{
    public:
        static const Enum::Value enable;
        static const Enum::Value interface_hash;
        static const Enum::Value source_hash;
        static const Enum::Value source_next_hop_hash;
        static const Enum::Value source_group_hash;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_PIM_CFG_ */

