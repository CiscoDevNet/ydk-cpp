#ifndef _CISCO_IOS_XR_SUBSCRIBER_INFRA_TMPLMGR_CFG_
#define _CISCO_IOS_XR_SUBSCRIBER_INFRA_TMPLMGR_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"


namespace ydk {
namespace Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg {

class DynamicTemplate : public Entity
{
    public:
        DynamicTemplate();
        ~DynamicTemplate();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Ppps : public Entity
    {
        public:
            Ppps();
            ~Ppps();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Ppp : public Entity
        {
            public:
                Ppp();
                ~Ppp();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf template_name; //type: string
                YLeaf vrf; //type: string

            class SpanMonitorSessions : public Entity
            {
                public:
                    SpanMonitorSessions();
                    ~SpanMonitorSessions();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class SpanMonitorSession : public Entity
                {
                    public:
                        SpanMonitorSession();
                        ~SpanMonitorSession();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf session_class; //type: SpanSessionClassEnum
                        YLeaf mirror_first; //type: uint32
                        YLeaf mirror_interval; //type: SpanMirrorIntervalEnum
                        YLeaf acl; //type: empty

                    class Attachment : public Entity
                    {
                        public:
                            Attachment();
                            ~Attachment();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf session_name; //type: string
                            YLeaf direction; //type: SpanTrafficDirectionEnum
                            YLeaf port_level_enable; //type: empty



                    }; // DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment


                        std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession::Attachment> attachment; // presence node


                }; // DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession


                    std::vector<std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::SpanMonitorSessions::SpanMonitorSession> > span_monitor_session;


            }; // DynamicTemplate::Ppps::Ppp::SpanMonitorSessions


            class Ipv4PacketFilter : public Entity
            {
                public:
                    Ipv4PacketFilter();
                    ~Ipv4PacketFilter();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Outbound : public Entity
                {
                    public:
                        Outbound();
                        ~Outbound();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf common_acl_name; //type: string
                        YLeaf name; //type: string
                        YLeaf hardware_count; //type: empty
                        YLeaf interface_statistics; //type: empty



                }; // DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound


                class Inbound : public Entity
                {
                    public:
                        Inbound();
                        ~Inbound();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf common_acl_name; //type: string
                        YLeaf name; //type: string
                        YLeaf hardware_count; //type: empty
                        YLeaf interface_statistics; //type: empty



                }; // DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound


                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Inbound> inbound;
                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter::Outbound> outbound; // presence node


            }; // DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter


            class Ipv6PacketFilter : public Entity
            {
                public:
                    Ipv6PacketFilter();
                    ~Ipv6PacketFilter();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Inbound : public Entity
                {
                    public:
                        Inbound();
                        ~Inbound();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf common_acl_name; //type: string
                        YLeaf name; //type: string
                        YLeaf interface_statistics; //type: empty



                }; // DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound


                class Outbound : public Entity
                {
                    public:
                        Outbound();
                        ~Outbound();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf common_acl_name; //type: string
                        YLeaf name; //type: string
                        YLeaf interface_statistics; //type: empty



                }; // DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound


                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Inbound> inbound;
                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter::Outbound> outbound; // presence node


            }; // DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter


            class Igmp : public Entity
            {
                public:
                    Igmp();
                    ~Igmp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



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


                        YLeaf max_groups; //type: uint32
                        YLeaf access_group; //type: string
                        YLeaf multicast; //type: int32
                        YLeaf version; //type: uint32
                        YLeaf query_interval; //type: uint32
                        YLeaf query_max_response_time; //type: uint32
                        YLeaf robustness; //type: uint32

                    class ExplicitTracking : public Entity
                    {
                        public:
                            ExplicitTracking();
                            ~ExplicitTracking();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf enable; //type: boolean
                            YLeaf access_list_name; //type: string



                    }; // DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking


                        std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf::ExplicitTracking> explicit_tracking; // presence node


                }; // DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf


                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Igmp::DefaultVrf> default_vrf;


            }; // DynamicTemplate::Ppps::Ppp::Igmp


            class Ipv4Network : public Entity
            {
                public:
                    Ipv4Network();
                    ~Ipv4Network();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf unnumbered; //type: string
                    YLeaf mtu; //type: uint32
                    YLeaf unreachables; //type: boolean
                    YLeaf rpf; //type: boolean



            }; // DynamicTemplate::Ppps::Ppp::Ipv4Network


            class Ipv6Network : public Entity
            {
                public:
                    Ipv6Network();
                    ~Ipv6Network();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf mtu; //type: uint32
                    YLeaf unreachables; //type: empty
                    YLeaf verify; //type: Ipv6ReachableViaEnum

                class Addresses : public Entity
                {
                    public:
                        Addresses();
                        ~Addresses();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class AutoConfiguration : public Entity
                    {
                        public:
                            AutoConfiguration();
                            ~AutoConfiguration();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf enable; //type: empty



                    }; // DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration


                        std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses::AutoConfiguration> auto_configuration;


                }; // DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses


                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6Network::Addresses> addresses;


            }; // DynamicTemplate::Ppps::Ppp::Ipv6Network


            class Ipv6Neighbor : public Entity
            {
                public:
                    Ipv6Neighbor();
                    ~Ipv6Neighbor();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf ra_hop_limit; //type: Ipv6NdHopLimitEnum
                    YLeaf framed_prefix_pool; //type: string
                    YLeaf managed_config; //type: empty
                    YLeaf other_config; //type: empty
                    YLeaf start_ra_on_ipv6_enable; //type: empty
                    YLeaf nud_enable; //type: empty
                    YLeaf ra_interval; //type: uint32
                    YLeaf ra_lifetime; //type: uint32
                    YLeaf router_preference; //type: Ipv6NdRouterPrefTemplateEnum
                    YLeaf ra_suppress; //type: empty
                    YLeaf ra_unicast; //type: empty
                    YLeaf ra_suppress_mtu; //type: empty
                    YLeaf suppress_cache_learning; //type: empty
                    YLeaf reachable_time; //type: uint32
                    YLeaf ns_interval; //type: uint32

                class FramedPrefix : public Entity
                {
                    public:
                        FramedPrefix();
                        ~FramedPrefix();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf prefix_length; //type: uint8
                        YLeaf prefix; //type: string



                }; // DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix


                class DuplicateAddressDetection : public Entity
                {
                    public:
                        DuplicateAddressDetection();
                        ~DuplicateAddressDetection();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf attempts; //type: uint32



                }; // DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection


                class RaInitial : public Entity
                {
                    public:
                        RaInitial();
                        ~RaInitial();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf count; //type: uint32
                        YLeaf interval; //type: uint32



                }; // DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial


                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::DuplicateAddressDetection> duplicate_address_detection;
                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::FramedPrefix> framed_prefix; // presence node
                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6Neighbor::RaInitial> ra_initial; // presence node


            }; // DynamicTemplate::Ppps::Ppp::Ipv6Neighbor


            class Dhcpv6 : public Entity
            {
                public:
                    Dhcpv6();
                    ~Dhcpv6();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf dns_ipv6address; //type: string
                    YLeaf address_pool; //type: string
                    YLeaf delegated_prefix_pool; //type: string
                    YLeaf class_; //type: string
                    YLeaf stateful_address; //type: string

                class DelegatedPrefix : public Entity
                {
                    public:
                        DelegatedPrefix();
                        ~DelegatedPrefix();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf prefix; //type: string
                        YLeaf prefix_length; //type: uint8



                }; // DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix


                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Dhcpv6::DelegatedPrefix> delegated_prefix; // presence node


            }; // DynamicTemplate::Ppps::Ppp::Dhcpv6


            class Pbr : public Entity
            {
                public:
                    Pbr();
                    ~Pbr();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf service_policy_in; //type: string

                class ServicePolicy : public Entity
                {
                    public:
                        ServicePolicy();
                        ~ServicePolicy();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf input; //type: string



                }; // DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy


                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Pbr::ServicePolicy> service_policy;


            }; // DynamicTemplate::Ppps::Ppp::Pbr


            class Qos : public Entity
            {
                public:
                    Qos();
                    ~Qos();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class ServicePolicy : public Entity
                {
                    public:
                        ServicePolicy();
                        ~ServicePolicy();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Input : public Entity
                    {
                        public:
                            Input();
                            ~Input();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf policy_name; //type: string
                            YLeaf spi_name; //type: string
                            YLeaf merge; //type: boolean
                            YLeaf merge_id; //type: uint32
                            YLeaf account_stats; //type: boolean



                    }; // DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input


                    class Output : public Entity
                    {
                        public:
                            Output();
                            ~Output();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf policy_name; //type: string
                            YLeaf spi_name; //type: string
                            YLeaf merge; //type: boolean
                            YLeaf merge_id; //type: uint32
                            YLeaf account_stats; //type: boolean



                    }; // DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output


                        std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Input> input; // presence node
                        std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy::Output> output; // presence node


                }; // DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy


                class Account : public Entity
                {
                    public:
                        Account();
                        ~Account();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf aal; //type: Qosl2DataLinkEnum
                        YLeaf encapsulation; //type: Qosl2EncapEnum
                        YLeaf atm_cell_tax; //type: empty
                        YLeaf user_defined; //type: int32



                }; // DynamicTemplate::Ppps::Ppp::Qos::Account


                class Output : public Entity
                {
                    public:
                        Output();
                        ~Output();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf minimum_bandwidth; //type: uint32



                }; // DynamicTemplate::Ppps::Ppp::Qos::Output


                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Qos::Account> account;
                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Qos::Output> output;
                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Qos::ServicePolicy> service_policy;


            }; // DynamicTemplate::Ppps::Ppp::Qos


                std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Dhcpv6> dhcpv6;
                std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Igmp> igmp;
                std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv4Network> ipv4_network;
                std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv4PacketFilter> ipv4_packet_filter;
                std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6Neighbor> ipv6_neighbor;
                std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6Network> ipv6_network;
                std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Ipv6PacketFilter> ipv6_packet_filter;
                std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Pbr> pbr;
                std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::Qos> qos;
                std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp::SpanMonitorSessions> span_monitor_sessions;


        }; // DynamicTemplate::Ppps::Ppp


            std::vector<std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps::Ppp> > ppp;


    }; // DynamicTemplate::Ppps


    class IpSubscribers : public Entity
    {
        public:
            IpSubscribers();
            ~IpSubscribers();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class IpSubscriber : public Entity
        {
            public:
                IpSubscriber();
                ~IpSubscriber();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf template_name; //type: string
                YLeaf vrf; //type: string

            class SpanMonitorSessions : public Entity
            {
                public:
                    SpanMonitorSessions();
                    ~SpanMonitorSessions();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class SpanMonitorSession : public Entity
                {
                    public:
                        SpanMonitorSession();
                        ~SpanMonitorSession();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf session_class; //type: SpanSessionClassEnum
                        YLeaf mirror_first; //type: uint32
                        YLeaf mirror_interval; //type: SpanMirrorIntervalEnum
                        YLeaf acl; //type: empty

                    class Attachment : public Entity
                    {
                        public:
                            Attachment();
                            ~Attachment();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf session_name; //type: string
                            YLeaf direction; //type: SpanTrafficDirectionEnum
                            YLeaf port_level_enable; //type: empty



                    }; // DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment


                        std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession::Attachment> attachment; // presence node


                }; // DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession


                    std::vector<std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions::SpanMonitorSession> > span_monitor_session;


            }; // DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions


            class Ipv4PacketFilter : public Entity
            {
                public:
                    Ipv4PacketFilter();
                    ~Ipv4PacketFilter();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Outbound : public Entity
                {
                    public:
                        Outbound();
                        ~Outbound();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf common_acl_name; //type: string
                        YLeaf name; //type: string
                        YLeaf hardware_count; //type: empty
                        YLeaf interface_statistics; //type: empty



                }; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound


                class Inbound : public Entity
                {
                    public:
                        Inbound();
                        ~Inbound();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf common_acl_name; //type: string
                        YLeaf name; //type: string
                        YLeaf hardware_count; //type: empty
                        YLeaf interface_statistics; //type: empty



                }; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound


                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Inbound> inbound;
                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter::Outbound> outbound; // presence node


            }; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter


            class Ipv6PacketFilter : public Entity
            {
                public:
                    Ipv6PacketFilter();
                    ~Ipv6PacketFilter();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Inbound : public Entity
                {
                    public:
                        Inbound();
                        ~Inbound();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf common_acl_name; //type: string
                        YLeaf name; //type: string
                        YLeaf interface_statistics; //type: empty



                }; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound


                class Outbound : public Entity
                {
                    public:
                        Outbound();
                        ~Outbound();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf common_acl_name; //type: string
                        YLeaf name; //type: string
                        YLeaf interface_statistics; //type: empty



                }; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound


                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Inbound> inbound;
                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter::Outbound> outbound; // presence node


            }; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter


            class Ipv4Network : public Entity
            {
                public:
                    Ipv4Network();
                    ~Ipv4Network();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf unnumbered; //type: string
                    YLeaf mtu; //type: uint32
                    YLeaf unreachables; //type: boolean
                    YLeaf rpf; //type: boolean



            }; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network


            class Ipv6Network : public Entity
            {
                public:
                    Ipv6Network();
                    ~Ipv6Network();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf mtu; //type: uint32
                    YLeaf unreachables; //type: empty
                    YLeaf verify; //type: Ipv6ReachableViaEnum

                class Addresses : public Entity
                {
                    public:
                        Addresses();
                        ~Addresses();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class AutoConfiguration : public Entity
                    {
                        public:
                            AutoConfiguration();
                            ~AutoConfiguration();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf enable; //type: empty



                    }; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration


                        std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses::AutoConfiguration> auto_configuration;


                }; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses


                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network::Addresses> addresses;


            }; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network


            class Ipv6Neighbor : public Entity
            {
                public:
                    Ipv6Neighbor();
                    ~Ipv6Neighbor();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf ra_hop_limit; //type: Ipv6NdHopLimitEnum
                    YLeaf framed_prefix_pool; //type: string
                    YLeaf managed_config; //type: empty
                    YLeaf other_config; //type: empty
                    YLeaf start_ra_on_ipv6_enable; //type: empty
                    YLeaf nud_enable; //type: empty
                    YLeaf ra_interval; //type: uint32
                    YLeaf ra_lifetime; //type: uint32
                    YLeaf router_preference; //type: Ipv6NdRouterPrefTemplateEnum
                    YLeaf ra_suppress; //type: empty
                    YLeaf ra_unicast; //type: empty
                    YLeaf ra_suppress_mtu; //type: empty
                    YLeaf suppress_cache_learning; //type: empty
                    YLeaf reachable_time; //type: uint32
                    YLeaf ns_interval; //type: uint32

                class FramedPrefix : public Entity
                {
                    public:
                        FramedPrefix();
                        ~FramedPrefix();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf prefix_length; //type: uint8
                        YLeaf prefix; //type: string



                }; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix


                class DuplicateAddressDetection : public Entity
                {
                    public:
                        DuplicateAddressDetection();
                        ~DuplicateAddressDetection();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf attempts; //type: uint32



                }; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection


                class RaInitial : public Entity
                {
                    public:
                        RaInitial();
                        ~RaInitial();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf count; //type: uint32
                        YLeaf interval; //type: uint32



                }; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial


                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::DuplicateAddressDetection> duplicate_address_detection;
                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::FramedPrefix> framed_prefix; // presence node
                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor::RaInitial> ra_initial; // presence node


            }; // DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor


            class Dhcpv6 : public Entity
            {
                public:
                    Dhcpv6();
                    ~Dhcpv6();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf dns_ipv6address; //type: string
                    YLeaf address_pool; //type: string
                    YLeaf delegated_prefix_pool; //type: string
                    YLeaf class_; //type: string
                    YLeaf stateful_address; //type: string

                class DelegatedPrefix : public Entity
                {
                    public:
                        DelegatedPrefix();
                        ~DelegatedPrefix();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf prefix; //type: string
                        YLeaf prefix_length; //type: uint8



                }; // DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix


                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6::DelegatedPrefix> delegated_prefix; // presence node


            }; // DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6


            class Pbr : public Entity
            {
                public:
                    Pbr();
                    ~Pbr();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf service_policy_in; //type: string

                class ServicePolicy : public Entity
                {
                    public:
                        ServicePolicy();
                        ~ServicePolicy();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf input; //type: string



                }; // DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy


                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Pbr::ServicePolicy> service_policy;


            }; // DynamicTemplate::IpSubscribers::IpSubscriber::Pbr


            class Qos : public Entity
            {
                public:
                    Qos();
                    ~Qos();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class ServicePolicy : public Entity
                {
                    public:
                        ServicePolicy();
                        ~ServicePolicy();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Input : public Entity
                    {
                        public:
                            Input();
                            ~Input();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf policy_name; //type: string
                            YLeaf spi_name; //type: string
                            YLeaf merge; //type: boolean
                            YLeaf merge_id; //type: uint32
                            YLeaf account_stats; //type: boolean



                    }; // DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input


                    class Output : public Entity
                    {
                        public:
                            Output();
                            ~Output();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf policy_name; //type: string
                            YLeaf spi_name; //type: string
                            YLeaf merge; //type: boolean
                            YLeaf merge_id; //type: uint32
                            YLeaf account_stats; //type: boolean



                    }; // DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output


                        std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Input> input; // presence node
                        std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy::Output> output; // presence node


                }; // DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy


                class Account : public Entity
                {
                    public:
                        Account();
                        ~Account();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf aal; //type: Qosl2DataLinkEnum
                        YLeaf encapsulation; //type: Qosl2EncapEnum
                        YLeaf atm_cell_tax; //type: empty
                        YLeaf user_defined; //type: int32



                }; // DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account


                class Output : public Entity
                {
                    public:
                        Output();
                        ~Output();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf minimum_bandwidth; //type: uint32



                }; // DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output


                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Account> account;
                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Qos::Output> output;
                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Qos::ServicePolicy> service_policy;


            }; // DynamicTemplate::IpSubscribers::IpSubscriber::Qos


                std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Dhcpv6> dhcpv6;
                std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4Network> ipv4_network;
                std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv4PacketFilter> ipv4_packet_filter;
                std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Neighbor> ipv6_neighbor;
                std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6Network> ipv6_network;
                std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Ipv6PacketFilter> ipv6_packet_filter;
                std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Pbr> pbr;
                std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::Qos> qos;
                std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber::SpanMonitorSessions> span_monitor_sessions;


        }; // DynamicTemplate::IpSubscribers::IpSubscriber


            std::vector<std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers::IpSubscriber> > ip_subscriber;


    }; // DynamicTemplate::IpSubscribers


    class SubscriberServices : public Entity
    {
        public:
            SubscriberServices();
            ~SubscriberServices();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class SubscriberService : public Entity
        {
            public:
                SubscriberService();
                ~SubscriberService();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf template_name; //type: string
                YLeaf vrf; //type: string

            class SpanMonitorSessions : public Entity
            {
                public:
                    SpanMonitorSessions();
                    ~SpanMonitorSessions();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class SpanMonitorSession : public Entity
                {
                    public:
                        SpanMonitorSession();
                        ~SpanMonitorSession();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf session_class; //type: SpanSessionClassEnum
                        YLeaf mirror_first; //type: uint32
                        YLeaf mirror_interval; //type: SpanMirrorIntervalEnum
                        YLeaf acl; //type: empty

                    class Attachment : public Entity
                    {
                        public:
                            Attachment();
                            ~Attachment();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf session_name; //type: string
                            YLeaf direction; //type: SpanTrafficDirectionEnum
                            YLeaf port_level_enable; //type: empty



                    }; // DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment


                        std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession::Attachment> attachment; // presence node


                }; // DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession


                    std::vector<std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions::SpanMonitorSession> > span_monitor_session;


            }; // DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions


            class Ipv4PacketFilter : public Entity
            {
                public:
                    Ipv4PacketFilter();
                    ~Ipv4PacketFilter();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Outbound : public Entity
                {
                    public:
                        Outbound();
                        ~Outbound();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf common_acl_name; //type: string
                        YLeaf name; //type: string
                        YLeaf hardware_count; //type: empty
                        YLeaf interface_statistics; //type: empty



                }; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound


                class Inbound : public Entity
                {
                    public:
                        Inbound();
                        ~Inbound();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf common_acl_name; //type: string
                        YLeaf name; //type: string
                        YLeaf hardware_count; //type: empty
                        YLeaf interface_statistics; //type: empty



                }; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound


                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Inbound> inbound;
                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter::Outbound> outbound; // presence node


            }; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter


            class Ipv6PacketFilter : public Entity
            {
                public:
                    Ipv6PacketFilter();
                    ~Ipv6PacketFilter();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Inbound : public Entity
                {
                    public:
                        Inbound();
                        ~Inbound();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf common_acl_name; //type: string
                        YLeaf name; //type: string
                        YLeaf interface_statistics; //type: empty



                }; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound


                class Outbound : public Entity
                {
                    public:
                        Outbound();
                        ~Outbound();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf common_acl_name; //type: string
                        YLeaf name; //type: string
                        YLeaf interface_statistics; //type: empty



                }; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound


                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Inbound> inbound;
                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter::Outbound> outbound; // presence node


            }; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter


            class Ipv4Network : public Entity
            {
                public:
                    Ipv4Network();
                    ~Ipv4Network();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf unnumbered; //type: string
                    YLeaf mtu; //type: uint32
                    YLeaf unreachables; //type: boolean
                    YLeaf rpf; //type: boolean



            }; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network


            class Ipv6Network : public Entity
            {
                public:
                    Ipv6Network();
                    ~Ipv6Network();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf mtu; //type: uint32
                    YLeaf unreachables; //type: empty
                    YLeaf verify; //type: Ipv6ReachableViaEnum

                class Addresses : public Entity
                {
                    public:
                        Addresses();
                        ~Addresses();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class AutoConfiguration : public Entity
                    {
                        public:
                            AutoConfiguration();
                            ~AutoConfiguration();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf enable; //type: empty



                    }; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration


                        std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses::AutoConfiguration> auto_configuration;


                }; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses


                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network::Addresses> addresses;


            }; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network


            class Ipv6Neighbor : public Entity
            {
                public:
                    Ipv6Neighbor();
                    ~Ipv6Neighbor();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf ra_hop_limit; //type: Ipv6NdHopLimitEnum
                    YLeaf framed_prefix_pool; //type: string
                    YLeaf managed_config; //type: empty
                    YLeaf other_config; //type: empty
                    YLeaf start_ra_on_ipv6_enable; //type: empty
                    YLeaf nud_enable; //type: empty
                    YLeaf ra_interval; //type: uint32
                    YLeaf ra_lifetime; //type: uint32
                    YLeaf router_preference; //type: Ipv6NdRouterPrefTemplateEnum
                    YLeaf ra_suppress; //type: empty
                    YLeaf ra_unicast; //type: empty
                    YLeaf ra_suppress_mtu; //type: empty
                    YLeaf suppress_cache_learning; //type: empty
                    YLeaf reachable_time; //type: uint32
                    YLeaf ns_interval; //type: uint32

                class FramedPrefix : public Entity
                {
                    public:
                        FramedPrefix();
                        ~FramedPrefix();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf prefix_length; //type: uint8
                        YLeaf prefix; //type: string



                }; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix


                class DuplicateAddressDetection : public Entity
                {
                    public:
                        DuplicateAddressDetection();
                        ~DuplicateAddressDetection();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf attempts; //type: uint32



                }; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection


                class RaInitial : public Entity
                {
                    public:
                        RaInitial();
                        ~RaInitial();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf count; //type: uint32
                        YLeaf interval; //type: uint32



                }; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial


                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::DuplicateAddressDetection> duplicate_address_detection;
                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::FramedPrefix> framed_prefix; // presence node
                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor::RaInitial> ra_initial; // presence node


            }; // DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor


            class Pbr : public Entity
            {
                public:
                    Pbr();
                    ~Pbr();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                    YLeaf service_policy_in; //type: string

                class ServicePolicy : public Entity
                {
                    public:
                        ServicePolicy();
                        ~ServicePolicy();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf input; //type: string



                }; // DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy


                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Pbr::ServicePolicy> service_policy;


            }; // DynamicTemplate::SubscriberServices::SubscriberService::Pbr


            class Qos : public Entity
            {
                public:
                    Qos();
                    ~Qos();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class ServicePolicy : public Entity
                {
                    public:
                        ServicePolicy();
                        ~ServicePolicy();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;



                    class Input : public Entity
                    {
                        public:
                            Input();
                            ~Input();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf policy_name; //type: string
                            YLeaf spi_name; //type: string
                            YLeaf merge; //type: boolean
                            YLeaf merge_id; //type: uint32
                            YLeaf account_stats; //type: boolean



                    }; // DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input


                    class Output : public Entity
                    {
                        public:
                            Output();
                            ~Output();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf policy_name; //type: string
                            YLeaf spi_name; //type: string
                            YLeaf merge; //type: boolean
                            YLeaf merge_id; //type: uint32
                            YLeaf account_stats; //type: boolean



                    }; // DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output


                        std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Input> input; // presence node
                        std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy::Output> output; // presence node


                }; // DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy


                class Account : public Entity
                {
                    public:
                        Account();
                        ~Account();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf aal; //type: Qosl2DataLinkEnum
                        YLeaf encapsulation; //type: Qosl2EncapEnum
                        YLeaf atm_cell_tax; //type: empty
                        YLeaf user_defined; //type: int32



                }; // DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account


                class Output : public Entity
                {
                    public:
                        Output();
                        ~Output();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf minimum_bandwidth; //type: uint32



                }; // DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output


                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Qos::Account> account;
                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Qos::Output> output;
                    std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Qos::ServicePolicy> service_policy;


            }; // DynamicTemplate::SubscriberServices::SubscriberService::Qos


                std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv4Network> ipv4_network;
                std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv4PacketFilter> ipv4_packet_filter;
                std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Neighbor> ipv6_neighbor;
                std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6Network> ipv6_network;
                std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Ipv6PacketFilter> ipv6_packet_filter;
                std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Pbr> pbr;
                std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::Qos> qos;
                std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService::SpanMonitorSessions> span_monitor_sessions;


        }; // DynamicTemplate::SubscriberServices::SubscriberService


            std::vector<std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices::SubscriberService> > subscriber_service;


    }; // DynamicTemplate::SubscriberServices


        std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::IpSubscribers> ip_subscribers;
        std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::Ppps> ppps;
        std::unique_ptr<Cisco_IOS_XR_subscriber_infra_tmplmgr_cfg::DynamicTemplate::SubscriberServices> subscriber_services;


}; // DynamicTemplate



}
}

#endif /* _CISCO_IOS_XR_SUBSCRIBER_INFRA_TMPLMGR_CFG_ */

