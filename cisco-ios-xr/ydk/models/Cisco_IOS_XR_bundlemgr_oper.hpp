#ifndef _CISCO_IOS_XR_BUNDLEMGR_OPER_
#define _CISCO_IOS_XR_BUNDLEMGR_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_bundlemgr_oper {

class LacpBundles : public Entity
{
    public:
        LacpBundles();
        ~LacpBundles();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Bundles : public Entity
    {
        public:
            Bundles();
            ~Bundles();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Bundle : public Entity
        {
            public:
                Bundle();
                ~Bundle();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value bundle_interface; //type: string


            class Data : public Entity
            {
                public:
                    Data();
                    ~Data();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value actor_operational_key; //type: uint16
                    Value partner_system_priority; //type: uint16
                    Value partner_system_mac_address; //type: string
                    Value partner_operational_key; //type: uint16


                class ActorBundleData : public Entity
                {
                    public:
                        ActorBundleData();
                        ~ActorBundleData();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value bundle_interface_name; //type: string
                        Value available_bandwidth; //type: uint32
                        Value effective_bandwidth; //type: uint32
                        Value configured_bandwidth; //type: uint32
                        Value minimum_active_links; //type: uint8
                        Value maximum_active_links; //type: uint8
                        Value maximum_active_links_source; //type: BmWhichSystemEnum
                        Value minimum_bandwidth; //type: uint32
                        Value primary_member; //type: string
                        Value bundle_status; //type: BmBdlStateEnum
                        Value active_member_count; //type: uint16
                        Value standby_member_count; //type: uint16
                        Value configured_member_count; //type: uint16
                        Value mac_source; //type: BmBdlMacSourceEnum
                        Value mac_source_member; //type: string
                        Value inter_chassis; //type: boolean
                        Value is_active; //type: boolean
                        Value lacp_status; //type: BmFeatureStatusEnum
                        Value mlacp_status; //type: BmFeatureStatusEnum
                        Value ipv4bfd_status; //type: BmFeatureStatusEnum
                        Value link_order_status; //type: BmFeatureStatusEnum
                        Value ipv6bfd_status; //type: BmFeatureStatusEnum
                        Value load_balance_hash_type; //type: string
                        Value load_balance_locality_threshold; //type: uint16
                        Value suppression_timer; //type: uint16
                        Value wait_while_timer; //type: uint16
                        Value collector_max_delay; //type: uint16
                        Value cisco_extensions; //type: boolean
                        Value lacp_nonrevertive; //type: boolean
                        Value iccp_group_id; //type: uint32
                        Value active_foreign_member_count; //type: uint16
                        Value configured_foreign_member_count; //type: uint16
                        Value switchover_type; //type: BmdMlacpSwitchoverEnum
                        Value maximize_threshold_value_links; //type: uint32
                        Value maximize_threshold_value_band_width; //type: uint32
                        Value mlacp_mode; //type: BundleMlacpModeEnum
                        Value recovery_delay; //type: uint16
                        Value singleton; //type: boolean


                    class MacAddress : public Entity
                    {
                        public:
                            MacAddress();
                            ~MacAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value address; //type: string




                    }; // LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress


                    class BfdConfig : public Entity
                    {
                        public:
                            BfdConfig();
                            ~BfdConfig();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value bundle_status; //type: BmdBfdBdlStateEnum
                            Value start_timer; //type: uint32
                            Value nbr_unconfig_timer; //type: uint32
                            Value pref_multiplier; //type: uint16
                            Value pref_min_interval; //type: uint32
                            Value pref_echo_min_interval; //type: uint32
                            Value fast_detect; //type: boolean
                            Value mode_info; //type: uint32


                        class DestinationAddress : public Entity
                        {
                            public:
                                DestinationAddress();
                                ~DestinationAddress();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value af; //type: BmAfIdEnum
                                Value ipv4; //type: string
                                Value ipv6; //type: string


                                class BmAfIdEnum;


                        }; // LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig::DestinationAddress> destination_address;
                            class BmdBfdBdlStateEnum;


                    }; // LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Data::ActorBundleData::BfdConfig> > bfd_config;
                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Data::ActorBundleData::MacAddress> mac_address;
                        class BmBdlStateEnum;
                        class BmFeatureStatusEnum;
                        class BmFeatureStatusEnum;
                        class BmFeatureStatusEnum;
                        class BmFeatureStatusEnum;
                        class BmBdlMacSourceEnum;
                        class BmWhichSystemEnum;
                        class BundleMlacpModeEnum;
                        class BmFeatureStatusEnum;
                        class BmdMlacpSwitchoverEnum;


                }; // LacpBundles::Bundles::Bundle::Data::ActorBundleData


                class BundleSystemId : public Entity
                {
                    public:
                        BundleSystemId();
                        ~BundleSystemId();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value system_prio; //type: uint16


                    class SystemMacAddr : public Entity
                    {
                        public:
                            SystemMacAddr();
                            ~SystemMacAddr();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value macaddr; //type: string




                    }; // LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr


                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Data::BundleSystemId::SystemMacAddr> system_mac_addr;


                }; // LacpBundles::Bundles::Bundle::Data::BundleSystemId


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Data::ActorBundleData> actor_bundle_data;
                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Data::BundleSystemId> bundle_system_id;


            }; // LacpBundles::Bundles::Bundle::Data


            class Members : public Entity
            {
                public:
                    Members();
                    ~Members();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Member : public Entity
                {
                    public:
                        Member();
                        ~Member();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value member_interface; //type: string
                        Value bandwidth; //type: uint32
                        Value port_priority; //type: uint16
                        Value port_number; //type: uint16
                        Value underlying_link_id; //type: uint16
                        Value link_order_number; //type: uint16
                        Value interface_name; //type: string
                        Value iccp_node; //type: uint32
                        Value member_type; //type: BmdMemberTypeEnumEnum
                        Value member_name; //type: string


                    class Counters : public Entity
                    {
                        public:
                            Counters();
                            ~Counters();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value lacpd_us_received; //type: uint32
                            Value lacpd_us_transmitted; //type: uint32
                            Value marker_packets_received; //type: uint32
                            Value marker_responses_transmitted; //type: uint32
                            Value illegal_packets_received; //type: uint32
                            Value excess_lacpd_us_received; //type: uint32
                            Value excess_marker_packets_received; //type: uint32
                            Value defaulted; //type: uint32
                            Value expired; //type: uint32
                            Value last_cleared_sec; //type: uint32
                            Value last_cleared_nsec; //type: uint32




                    }; // LacpBundles::Bundles::Bundle::Members::Member::Counters


                    class LinkData : public Entity
                    {
                        public:
                            LinkData();
                            ~LinkData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value interface_handle; //type: string
                            Value actor_system_priority; //type: uint16
                            Value actor_system_mac_address; //type: string
                            Value actor_operational_key; //type: uint16
                            Value partner_system_priority; //type: uint16
                            Value partner_system_mac_address; //type: string
                            Value partner_operational_key; //type: uint16
                            Value selected_aggregator_id; //type: uint32
                            Value attached_aggregator_id; //type: uint32
                            Value actor_port_id; //type: uint16
                            Value actor_port_priority; //type: uint16
                            Value partner_port_id; //type: uint16
                            Value partner_port_priority; //type: uint16
                            Value actor_port_state; //type: uint8
                            Value partner_port_state; //type: uint8




                    }; // LacpBundles::Bundles::Bundle::Members::Member::LinkData


                    class MemberMuxData : public Entity
                    {
                        public:
                            MemberMuxData();
                            ~MemberMuxData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value mux_state; //type: BmMuxstateEnum
                            Value error; //type: uint32
                            Value member_mux_state_reason; //type: BmMbrStateReasonEnum
                            Value member_state; //type: BmdMemberStateEnum
                            Value mux_state_reason; //type: BmMuxreasonEnum


                        class MemberMuxStateReasonData : public Entity
                        {
                            public:
                                MemberMuxStateReasonData();
                                ~MemberMuxStateReasonData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reason_type; //type: BmStateReasonTargetEnum
                                Value severity; //type: BmSeverityEnum


                                class BmStateReasonTargetEnum;
                                class BmSeverityEnum;


                        }; // LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData> member_mux_state_reason_data;
                            class BmMbrStateReasonEnum;
                            class BmdMemberStateEnum;
                            class BmMuxstateEnum;
                            class BmMuxreasonEnum;


                    }; // LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData


                    class MacAddress : public Entity
                    {
                        public:
                            MacAddress();
                            ~MacAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value address; //type: string




                    }; // LacpBundles::Bundles::Bundle::Members::Member::MacAddress


                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Members::Member::Counters> counters;
                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Members::Member::LinkData> link_data;
                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Members::Member::MacAddress> mac_address;
                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Members::Member::MemberMuxData> member_mux_data;
                        class BmdMemberTypeEnumEnum;


                }; // LacpBundles::Bundles::Bundle::Members::Member


                    std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Members::Member> > member;


            }; // LacpBundles::Bundles::Bundle::Members


                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Data> data;
                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle::Members> members;


        }; // LacpBundles::Bundles::Bundle


            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles::Bundle> > bundle;


    }; // LacpBundles::Bundles


        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundles::Bundles> bundles;


}; // LacpBundles

class BundleInformation : public Entity
{
    public:
        BundleInformation();
        ~BundleInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class BfdCounters : public Entity
    {
        public:
            BfdCounters();
            ~BfdCounters();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class BfdCountersBundles : public Entity
        {
            public:
                BfdCountersBundles();
                ~BfdCountersBundles();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class BfdCountersBundle : public Entity
            {
                public:
                    BfdCountersBundle();
                    ~BfdCountersBundle();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value bundle_interface; //type: string


                class BfdCountersBundleDescendant : public Entity
                {
                    public:
                        BfdCountersBundleDescendant();
                        ~BfdCountersBundleDescendant();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class BundleName : public Entity
                    {
                        public:
                            BundleName();
                            ~BundleName();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value item_name; //type: string




                    }; // BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName


                    class BfdCounter : public Entity
                    {
                        public:
                            BfdCounter();
                            ~BfdCounter();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value member_name; //type: string
                            Value last_time_cleared; //type: uint64
                            Value starting; //type: uint32
                            Value up; //type: uint32
                            Value down; //type: uint32
                            Value neighbor_unconfigured; //type: uint32
                            Value start_timeouts; //type: uint32
                            Value neighbor_unconfigured_timeouts; //type: uint32
                            Value time_since_cleared; //type: uint64




                    }; // BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BfdCounter> > bfd_counter;
                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant::BundleName> bundle_name;


                }; // BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant


                class BfdCountersBundleChildrenMembers : public Entity
                {
                    public:
                        BfdCountersBundleChildrenMembers();
                        ~BfdCountersBundleChildrenMembers();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class BfdCountersBundleChildrenMember : public Entity
                    {
                        public:
                            BfdCountersBundleChildrenMember();
                            ~BfdCountersBundleChildrenMember();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value member_interface; //type: string
                            Value member_name; //type: string
                            Value last_time_cleared; //type: uint64
                            Value starting; //type: uint32
                            Value up; //type: uint32
                            Value down; //type: uint32
                            Value neighbor_unconfigured; //type: uint32
                            Value start_timeouts; //type: uint32
                            Value neighbor_unconfigured_timeouts; //type: uint32
                            Value time_since_cleared; //type: uint64




                    }; // BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers::BfdCountersBundleChildrenMember> > bfd_counters_bundle_children_member;


                }; // BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers


                class BfdCountersBundleItem : public Entity
                {
                    public:
                        BfdCountersBundleItem();
                        ~BfdCountersBundleItem();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value item_name; //type: string




                }; // BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleChildrenMembers> bfd_counters_bundle_children_members;
                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleDescendant> bfd_counters_bundle_descendant;
                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle::BfdCountersBundleItem> bfd_counters_bundle_item;


            }; // BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersBundles::BfdCountersBundle> > bfd_counters_bundle;


        }; // BundleInformation::BfdCounters::BfdCountersBundles


        class BfdCountersMembers : public Entity
        {
            public:
                BfdCountersMembers();
                ~BfdCountersMembers();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class BfdCountersMember : public Entity
            {
                public:
                    BfdCountersMember();
                    ~BfdCountersMember();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value member_interface; //type: string


                class BfdCountersMemberItem : public Entity
                {
                    public:
                        BfdCountersMemberItem();
                        ~BfdCountersMemberItem();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value member_name; //type: string
                        Value last_time_cleared; //type: uint64
                        Value starting; //type: uint32
                        Value up; //type: uint32
                        Value down; //type: uint32
                        Value neighbor_unconfigured; //type: uint32
                        Value start_timeouts; //type: uint32
                        Value neighbor_unconfigured_timeouts; //type: uint32
                        Value time_since_cleared; //type: uint64




                }; // BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember::BfdCountersMemberItem> bfd_counters_member_item;


            }; // BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersMembers::BfdCountersMember> > bfd_counters_member;


        }; // BundleInformation::BfdCounters::BfdCountersMembers


            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersBundles> bfd_counters_bundles;
            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters::BfdCountersMembers> bfd_counters_members;


    }; // BundleInformation::BfdCounters


    class ScheduledActions : public Entity
    {
        public:
            ScheduledActions();
            ~ScheduledActions();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class ScheduledActionsBundles : public Entity
        {
            public:
                ScheduledActionsBundles();
                ~ScheduledActionsBundles();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class ScheduledActionsBundle : public Entity
            {
                public:
                    ScheduledActionsBundle();
                    ~ScheduledActionsBundle();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value bundle_interface; //type: string


                class ScheduledActionsBundleItem : public Entity
                {
                    public:
                        ScheduledActionsBundleItem();
                        ~ScheduledActionsBundleItem();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value bundle_name; //type: string


                    class ScheduledAction : public Entity
                    {
                        public:
                            ScheduledAction();
                            ~ScheduledAction();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value mlacp_action; //type: BmdBagMlacpSchActionItemEnum
                            Value time_remaining; //type: uint64
                            Value action_state; //type: BmdSwitchReasonEnum


                            class BmdSwitchReasonEnum;
                            class BmdBagMlacpSchActionItemEnum;


                    }; // BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem::ScheduledAction> > scheduled_action;


                }; // BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle::ScheduledActionsBundleItem> scheduled_actions_bundle_item;


            }; // BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::ScheduledActions::ScheduledActionsBundles::ScheduledActionsBundle> > scheduled_actions_bundle;


        }; // BundleInformation::ScheduledActions::ScheduledActionsBundles


            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::ScheduledActions::ScheduledActionsBundles> scheduled_actions_bundles;


    }; // BundleInformation::ScheduledActions


    class Bundle : public Entity
    {
        public:
            Bundle();
            ~Bundle();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class BundleBundles : public Entity
        {
            public:
                BundleBundles();
                ~BundleBundles();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class BundleBundle : public Entity
            {
                public:
                    BundleBundle();
                    ~BundleBundle();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value bundle_interface; //type: string


                class BundleBundleDescendant : public Entity
                {
                    public:
                        BundleBundleDescendant();
                        ~BundleBundleDescendant();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class BundleData : public Entity
                    {
                        public:
                            BundleData();
                            ~BundleData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value bundle_interface_name; //type: string
                            Value available_bandwidth; //type: uint32
                            Value effective_bandwidth; //type: uint32
                            Value configured_bandwidth; //type: uint32
                            Value minimum_active_links; //type: uint8
                            Value maximum_active_links; //type: uint8
                            Value maximum_active_links_source; //type: BmWhichSystemEnum
                            Value minimum_bandwidth; //type: uint32
                            Value primary_member; //type: string
                            Value bundle_status; //type: BmBdlStateEnum
                            Value active_member_count; //type: uint16
                            Value standby_member_count; //type: uint16
                            Value configured_member_count; //type: uint16
                            Value mac_source; //type: BmBdlMacSourceEnum
                            Value mac_source_member; //type: string
                            Value inter_chassis; //type: boolean
                            Value is_active; //type: boolean
                            Value lacp_status; //type: BmFeatureStatusEnum
                            Value mlacp_status; //type: BmFeatureStatusEnum
                            Value ipv4bfd_status; //type: BmFeatureStatusEnum
                            Value link_order_status; //type: BmFeatureStatusEnum
                            Value ipv6bfd_status; //type: BmFeatureStatusEnum
                            Value load_balance_hash_type; //type: string
                            Value load_balance_locality_threshold; //type: uint16
                            Value suppression_timer; //type: uint16
                            Value wait_while_timer; //type: uint16
                            Value collector_max_delay; //type: uint16
                            Value cisco_extensions; //type: boolean
                            Value lacp_nonrevertive; //type: boolean
                            Value iccp_group_id; //type: uint32
                            Value active_foreign_member_count; //type: uint16
                            Value configured_foreign_member_count; //type: uint16
                            Value switchover_type; //type: BmdMlacpSwitchoverEnum
                            Value maximize_threshold_value_links; //type: uint32
                            Value maximize_threshold_value_band_width; //type: uint32
                            Value mlacp_mode; //type: BundleMlacpModeEnum
                            Value recovery_delay; //type: uint16
                            Value singleton; //type: boolean


                        class MacAddress : public Entity
                        {
                            public:
                                MacAddress();
                                ~MacAddress();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value address; //type: string




                        }; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress


                        class BfdConfig : public Entity
                        {
                            public:
                                BfdConfig();
                                ~BfdConfig();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bundle_status; //type: BmdBfdBdlStateEnum
                                Value start_timer; //type: uint32
                                Value nbr_unconfig_timer; //type: uint32
                                Value pref_multiplier; //type: uint16
                                Value pref_min_interval; //type: uint32
                                Value pref_echo_min_interval; //type: uint32
                                Value fast_detect; //type: boolean
                                Value mode_info; //type: uint32


                            class DestinationAddress : public Entity
                            {
                                public:
                                    DestinationAddress();
                                    ~DestinationAddress();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value af; //type: BmAfIdEnum
                                    Value ipv4; //type: string
                                    Value ipv6; //type: string


                                    class BmAfIdEnum;


                            }; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig::DestinationAddress> destination_address;
                                class BmdBfdBdlStateEnum;


                        }; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig


                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::BfdConfig> > bfd_config;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData::MacAddress> mac_address;
                            class BmBdlStateEnum;
                            class BmFeatureStatusEnum;
                            class BmFeatureStatusEnum;
                            class BmFeatureStatusEnum;
                            class BmFeatureStatusEnum;
                            class BmBdlMacSourceEnum;
                            class BmWhichSystemEnum;
                            class BundleMlacpModeEnum;
                            class BmFeatureStatusEnum;
                            class BmdMlacpSwitchoverEnum;


                    }; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData


                    class MemberData : public Entity
                    {
                        public:
                            MemberData();
                            ~MemberData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value bandwidth; //type: uint32
                            Value port_priority; //type: uint16
                            Value port_number; //type: uint16
                            Value underlying_link_id; //type: uint16
                            Value link_order_number; //type: uint16
                            Value interface_name; //type: string
                            Value iccp_node; //type: uint32
                            Value member_type; //type: BmdMemberTypeEnumEnum
                            Value member_name; //type: string


                        class Counters : public Entity
                        {
                            public:
                                Counters();
                                ~Counters();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value lacpd_us_received; //type: uint32
                                Value lacpd_us_transmitted; //type: uint32
                                Value marker_packets_received; //type: uint32
                                Value marker_responses_transmitted; //type: uint32
                                Value illegal_packets_received; //type: uint32
                                Value excess_lacpd_us_received; //type: uint32
                                Value excess_marker_packets_received; //type: uint32
                                Value defaulted; //type: uint32
                                Value expired; //type: uint32
                                Value last_cleared_sec; //type: uint32
                                Value last_cleared_nsec; //type: uint32




                        }; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters


                        class LinkData : public Entity
                        {
                            public:
                                LinkData();
                                ~LinkData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value interface_handle; //type: string
                                Value actor_system_priority; //type: uint16
                                Value actor_system_mac_address; //type: string
                                Value actor_operational_key; //type: uint16
                                Value partner_system_priority; //type: uint16
                                Value partner_system_mac_address; //type: string
                                Value partner_operational_key; //type: uint16
                                Value selected_aggregator_id; //type: uint32
                                Value attached_aggregator_id; //type: uint32
                                Value actor_port_id; //type: uint16
                                Value actor_port_priority; //type: uint16
                                Value partner_port_id; //type: uint16
                                Value partner_port_priority; //type: uint16
                                Value actor_port_state; //type: uint8
                                Value partner_port_state; //type: uint8




                        }; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData


                        class MemberMuxData : public Entity
                        {
                            public:
                                MemberMuxData();
                                ~MemberMuxData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value mux_state; //type: BmMuxstateEnum
                                Value error; //type: uint32
                                Value member_mux_state_reason; //type: BmMbrStateReasonEnum
                                Value member_state; //type: BmdMemberStateEnum
                                Value mux_state_reason; //type: BmMuxreasonEnum


                            class MemberMuxStateReasonData : public Entity
                            {
                                public:
                                    MemberMuxStateReasonData();
                                    ~MemberMuxStateReasonData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value reason_type; //type: BmStateReasonTargetEnum
                                    Value severity; //type: BmSeverityEnum


                                    class BmStateReasonTargetEnum;
                                    class BmSeverityEnum;


                            }; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData::MemberMuxStateReasonData> member_mux_state_reason_data;
                                class BmMbrStateReasonEnum;
                                class BmdMemberStateEnum;
                                class BmMuxstateEnum;
                                class BmMuxreasonEnum;


                        }; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData


                        class MacAddress : public Entity
                        {
                            public:
                                MacAddress();
                                ~MacAddress();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value address; //type: string




                        }; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::Counters> counters;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::LinkData> link_data;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MacAddress> mac_address;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData::MemberMuxData> member_mux_data;
                            class BmdMemberTypeEnumEnum;


                    }; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData


                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::BundleData> bundle_data;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant::MemberData> > member_data;


                }; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant


                class BundleBundleChildrenMembers : public Entity
                {
                    public:
                        BundleBundleChildrenMembers();
                        ~BundleBundleChildrenMembers();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class BundleBundleChildrenMember : public Entity
                    {
                        public:
                            BundleBundleChildrenMember();
                            ~BundleBundleChildrenMember();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value member_interface; //type: string
                            Value bandwidth; //type: uint32
                            Value port_priority; //type: uint16
                            Value port_number; //type: uint16
                            Value underlying_link_id; //type: uint16
                            Value link_order_number; //type: uint16
                            Value interface_name; //type: string
                            Value iccp_node; //type: uint32
                            Value member_type; //type: BmdMemberTypeEnumEnum
                            Value member_name; //type: string


                        class Counters : public Entity
                        {
                            public:
                                Counters();
                                ~Counters();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value lacpd_us_received; //type: uint32
                                Value lacpd_us_transmitted; //type: uint32
                                Value marker_packets_received; //type: uint32
                                Value marker_responses_transmitted; //type: uint32
                                Value illegal_packets_received; //type: uint32
                                Value excess_lacpd_us_received; //type: uint32
                                Value excess_marker_packets_received; //type: uint32
                                Value defaulted; //type: uint32
                                Value expired; //type: uint32
                                Value last_cleared_sec; //type: uint32
                                Value last_cleared_nsec; //type: uint32




                        }; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters


                        class LinkData : public Entity
                        {
                            public:
                                LinkData();
                                ~LinkData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value interface_handle; //type: string
                                Value actor_system_priority; //type: uint16
                                Value actor_system_mac_address; //type: string
                                Value actor_operational_key; //type: uint16
                                Value partner_system_priority; //type: uint16
                                Value partner_system_mac_address; //type: string
                                Value partner_operational_key; //type: uint16
                                Value selected_aggregator_id; //type: uint32
                                Value attached_aggregator_id; //type: uint32
                                Value actor_port_id; //type: uint16
                                Value actor_port_priority; //type: uint16
                                Value partner_port_id; //type: uint16
                                Value partner_port_priority; //type: uint16
                                Value actor_port_state; //type: uint8
                                Value partner_port_state; //type: uint8




                        }; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData


                        class MemberMuxData : public Entity
                        {
                            public:
                                MemberMuxData();
                                ~MemberMuxData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value mux_state; //type: BmMuxstateEnum
                                Value error; //type: uint32
                                Value member_mux_state_reason; //type: BmMbrStateReasonEnum
                                Value member_state; //type: BmdMemberStateEnum
                                Value mux_state_reason; //type: BmMuxreasonEnum


                            class MemberMuxStateReasonData : public Entity
                            {
                                public:
                                    MemberMuxStateReasonData();
                                    ~MemberMuxStateReasonData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value reason_type; //type: BmStateReasonTargetEnum
                                    Value severity; //type: BmSeverityEnum


                                    class BmStateReasonTargetEnum;
                                    class BmSeverityEnum;


                            }; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData::MemberMuxStateReasonData> member_mux_state_reason_data;
                                class BmMbrStateReasonEnum;
                                class BmdMemberStateEnum;
                                class BmMuxstateEnum;
                                class BmMuxreasonEnum;


                        }; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData


                        class MacAddress : public Entity
                        {
                            public:
                                MacAddress();
                                ~MacAddress();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value address; //type: string




                        }; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::Counters> counters;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::LinkData> link_data;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MacAddress> mac_address;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember::MemberMuxData> member_mux_data;
                            class BmdMemberTypeEnumEnum;


                    }; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers::BundleBundleChildrenMember> > bundle_bundle_children_member;


                }; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers


                class BundleBundleItem : public Entity
                {
                    public:
                        BundleBundleItem();
                        ~BundleBundleItem();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value bundle_interface_name; //type: string
                        Value available_bandwidth; //type: uint32
                        Value effective_bandwidth; //type: uint32
                        Value configured_bandwidth; //type: uint32
                        Value minimum_active_links; //type: uint8
                        Value maximum_active_links; //type: uint8
                        Value maximum_active_links_source; //type: BmWhichSystemEnum
                        Value minimum_bandwidth; //type: uint32
                        Value primary_member; //type: string
                        Value bundle_status; //type: BmBdlStateEnum
                        Value active_member_count; //type: uint16
                        Value standby_member_count; //type: uint16
                        Value configured_member_count; //type: uint16
                        Value mac_source; //type: BmBdlMacSourceEnum
                        Value mac_source_member; //type: string
                        Value inter_chassis; //type: boolean
                        Value is_active; //type: boolean
                        Value lacp_status; //type: BmFeatureStatusEnum
                        Value mlacp_status; //type: BmFeatureStatusEnum
                        Value ipv4bfd_status; //type: BmFeatureStatusEnum
                        Value link_order_status; //type: BmFeatureStatusEnum
                        Value ipv6bfd_status; //type: BmFeatureStatusEnum
                        Value load_balance_hash_type; //type: string
                        Value load_balance_locality_threshold; //type: uint16
                        Value suppression_timer; //type: uint16
                        Value wait_while_timer; //type: uint16
                        Value collector_max_delay; //type: uint16
                        Value cisco_extensions; //type: boolean
                        Value lacp_nonrevertive; //type: boolean
                        Value iccp_group_id; //type: uint32
                        Value active_foreign_member_count; //type: uint16
                        Value configured_foreign_member_count; //type: uint16
                        Value switchover_type; //type: BmdMlacpSwitchoverEnum
                        Value maximize_threshold_value_links; //type: uint32
                        Value maximize_threshold_value_band_width; //type: uint32
                        Value mlacp_mode; //type: BundleMlacpModeEnum
                        Value recovery_delay; //type: uint16
                        Value singleton; //type: boolean


                    class MacAddress : public Entity
                    {
                        public:
                            MacAddress();
                            ~MacAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value address; //type: string




                    }; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress


                    class BfdConfig : public Entity
                    {
                        public:
                            BfdConfig();
                            ~BfdConfig();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value bundle_status; //type: BmdBfdBdlStateEnum
                            Value start_timer; //type: uint32
                            Value nbr_unconfig_timer; //type: uint32
                            Value pref_multiplier; //type: uint16
                            Value pref_min_interval; //type: uint32
                            Value pref_echo_min_interval; //type: uint32
                            Value fast_detect; //type: boolean
                            Value mode_info; //type: uint32


                        class DestinationAddress : public Entity
                        {
                            public:
                                DestinationAddress();
                                ~DestinationAddress();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value af; //type: BmAfIdEnum
                                Value ipv4; //type: string
                                Value ipv6; //type: string


                                class BmAfIdEnum;


                        }; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig::DestinationAddress> destination_address;
                            class BmdBfdBdlStateEnum;


                    }; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::BfdConfig> > bfd_config;
                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem::MacAddress> mac_address;
                        class BmBdlStateEnum;
                        class BmFeatureStatusEnum;
                        class BmFeatureStatusEnum;
                        class BmFeatureStatusEnum;
                        class BmFeatureStatusEnum;
                        class BmBdlMacSourceEnum;
                        class BmWhichSystemEnum;
                        class BundleMlacpModeEnum;
                        class BmFeatureStatusEnum;
                        class BmdMlacpSwitchoverEnum;


                }; // BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleChildrenMembers> bundle_bundle_children_members;
                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleDescendant> bundle_bundle_descendant;
                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle::BundleBundleItem> bundle_bundle_item;


            }; // BundleInformation::Bundle::BundleBundles::BundleBundle


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles::BundleBundle> > bundle_bundle;


        }; // BundleInformation::Bundle::BundleBundles


        class BundleMembers : public Entity
        {
            public:
                BundleMembers();
                ~BundleMembers();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class BundleMember : public Entity
            {
                public:
                    BundleMember();
                    ~BundleMember();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value member_interface; //type: string


                class BundleMemberAncestor : public Entity
                {
                    public:
                        BundleMemberAncestor();
                        ~BundleMemberAncestor();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class BundleData : public Entity
                    {
                        public:
                            BundleData();
                            ~BundleData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value bundle_interface_name; //type: string
                            Value available_bandwidth; //type: uint32
                            Value effective_bandwidth; //type: uint32
                            Value configured_bandwidth; //type: uint32
                            Value minimum_active_links; //type: uint8
                            Value maximum_active_links; //type: uint8
                            Value maximum_active_links_source; //type: BmWhichSystemEnum
                            Value minimum_bandwidth; //type: uint32
                            Value primary_member; //type: string
                            Value bundle_status; //type: BmBdlStateEnum
                            Value active_member_count; //type: uint16
                            Value standby_member_count; //type: uint16
                            Value configured_member_count; //type: uint16
                            Value mac_source; //type: BmBdlMacSourceEnum
                            Value mac_source_member; //type: string
                            Value inter_chassis; //type: boolean
                            Value is_active; //type: boolean
                            Value lacp_status; //type: BmFeatureStatusEnum
                            Value mlacp_status; //type: BmFeatureStatusEnum
                            Value ipv4bfd_status; //type: BmFeatureStatusEnum
                            Value link_order_status; //type: BmFeatureStatusEnum
                            Value ipv6bfd_status; //type: BmFeatureStatusEnum
                            Value load_balance_hash_type; //type: string
                            Value load_balance_locality_threshold; //type: uint16
                            Value suppression_timer; //type: uint16
                            Value wait_while_timer; //type: uint16
                            Value collector_max_delay; //type: uint16
                            Value cisco_extensions; //type: boolean
                            Value lacp_nonrevertive; //type: boolean
                            Value iccp_group_id; //type: uint32
                            Value active_foreign_member_count; //type: uint16
                            Value configured_foreign_member_count; //type: uint16
                            Value switchover_type; //type: BmdMlacpSwitchoverEnum
                            Value maximize_threshold_value_links; //type: uint32
                            Value maximize_threshold_value_band_width; //type: uint32
                            Value mlacp_mode; //type: BundleMlacpModeEnum
                            Value recovery_delay; //type: uint16
                            Value singleton; //type: boolean


                        class MacAddress : public Entity
                        {
                            public:
                                MacAddress();
                                ~MacAddress();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value address; //type: string




                        }; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress


                        class BfdConfig : public Entity
                        {
                            public:
                                BfdConfig();
                                ~BfdConfig();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bundle_status; //type: BmdBfdBdlStateEnum
                                Value start_timer; //type: uint32
                                Value nbr_unconfig_timer; //type: uint32
                                Value pref_multiplier; //type: uint16
                                Value pref_min_interval; //type: uint32
                                Value pref_echo_min_interval; //type: uint32
                                Value fast_detect; //type: boolean
                                Value mode_info; //type: uint32


                            class DestinationAddress : public Entity
                            {
                                public:
                                    DestinationAddress();
                                    ~DestinationAddress();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value af; //type: BmAfIdEnum
                                    Value ipv4; //type: string
                                    Value ipv6; //type: string


                                    class BmAfIdEnum;


                            }; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig::DestinationAddress> destination_address;
                                class BmdBfdBdlStateEnum;


                        }; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig


                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::BfdConfig> > bfd_config;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData::MacAddress> mac_address;
                            class BmBdlStateEnum;
                            class BmFeatureStatusEnum;
                            class BmFeatureStatusEnum;
                            class BmFeatureStatusEnum;
                            class BmFeatureStatusEnum;
                            class BmBdlMacSourceEnum;
                            class BmWhichSystemEnum;
                            class BundleMlacpModeEnum;
                            class BmFeatureStatusEnum;
                            class BmdMlacpSwitchoverEnum;


                    }; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData


                    class MemberData : public Entity
                    {
                        public:
                            MemberData();
                            ~MemberData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value bandwidth; //type: uint32
                            Value port_priority; //type: uint16
                            Value port_number; //type: uint16
                            Value underlying_link_id; //type: uint16
                            Value link_order_number; //type: uint16
                            Value interface_name; //type: string
                            Value iccp_node; //type: uint32
                            Value member_type; //type: BmdMemberTypeEnumEnum
                            Value member_name; //type: string


                        class Counters : public Entity
                        {
                            public:
                                Counters();
                                ~Counters();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value lacpd_us_received; //type: uint32
                                Value lacpd_us_transmitted; //type: uint32
                                Value marker_packets_received; //type: uint32
                                Value marker_responses_transmitted; //type: uint32
                                Value illegal_packets_received; //type: uint32
                                Value excess_lacpd_us_received; //type: uint32
                                Value excess_marker_packets_received; //type: uint32
                                Value defaulted; //type: uint32
                                Value expired; //type: uint32
                                Value last_cleared_sec; //type: uint32
                                Value last_cleared_nsec; //type: uint32




                        }; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters


                        class LinkData : public Entity
                        {
                            public:
                                LinkData();
                                ~LinkData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value interface_handle; //type: string
                                Value actor_system_priority; //type: uint16
                                Value actor_system_mac_address; //type: string
                                Value actor_operational_key; //type: uint16
                                Value partner_system_priority; //type: uint16
                                Value partner_system_mac_address; //type: string
                                Value partner_operational_key; //type: uint16
                                Value selected_aggregator_id; //type: uint32
                                Value attached_aggregator_id; //type: uint32
                                Value actor_port_id; //type: uint16
                                Value actor_port_priority; //type: uint16
                                Value partner_port_id; //type: uint16
                                Value partner_port_priority; //type: uint16
                                Value actor_port_state; //type: uint8
                                Value partner_port_state; //type: uint8




                        }; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData


                        class MemberMuxData : public Entity
                        {
                            public:
                                MemberMuxData();
                                ~MemberMuxData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value mux_state; //type: BmMuxstateEnum
                                Value error; //type: uint32
                                Value member_mux_state_reason; //type: BmMbrStateReasonEnum
                                Value member_state; //type: BmdMemberStateEnum
                                Value mux_state_reason; //type: BmMuxreasonEnum


                            class MemberMuxStateReasonData : public Entity
                            {
                                public:
                                    MemberMuxStateReasonData();
                                    ~MemberMuxStateReasonData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value reason_type; //type: BmStateReasonTargetEnum
                                    Value severity; //type: BmSeverityEnum


                                    class BmStateReasonTargetEnum;
                                    class BmSeverityEnum;


                            }; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData::MemberMuxStateReasonData> member_mux_state_reason_data;
                                class BmMbrStateReasonEnum;
                                class BmdMemberStateEnum;
                                class BmMuxstateEnum;
                                class BmMuxreasonEnum;


                        }; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData


                        class MacAddress : public Entity
                        {
                            public:
                                MacAddress();
                                ~MacAddress();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value address; //type: string




                        }; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::Counters> counters;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::LinkData> link_data;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MacAddress> mac_address;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData::MemberMuxData> member_mux_data;
                            class BmdMemberTypeEnumEnum;


                    }; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData


                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::BundleData> bundle_data;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor::MemberData> > member_data;


                }; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor


                class BundleMemberItem : public Entity
                {
                    public:
                        BundleMemberItem();
                        ~BundleMemberItem();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value bandwidth; //type: uint32
                        Value port_priority; //type: uint16
                        Value port_number; //type: uint16
                        Value underlying_link_id; //type: uint16
                        Value link_order_number; //type: uint16
                        Value interface_name; //type: string
                        Value iccp_node; //type: uint32
                        Value member_type; //type: BmdMemberTypeEnumEnum
                        Value member_name; //type: string


                    class Counters : public Entity
                    {
                        public:
                            Counters();
                            ~Counters();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value lacpd_us_received; //type: uint32
                            Value lacpd_us_transmitted; //type: uint32
                            Value marker_packets_received; //type: uint32
                            Value marker_responses_transmitted; //type: uint32
                            Value illegal_packets_received; //type: uint32
                            Value excess_lacpd_us_received; //type: uint32
                            Value excess_marker_packets_received; //type: uint32
                            Value defaulted; //type: uint32
                            Value expired; //type: uint32
                            Value last_cleared_sec; //type: uint32
                            Value last_cleared_nsec; //type: uint32




                    }; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters


                    class LinkData : public Entity
                    {
                        public:
                            LinkData();
                            ~LinkData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value interface_handle; //type: string
                            Value actor_system_priority; //type: uint16
                            Value actor_system_mac_address; //type: string
                            Value actor_operational_key; //type: uint16
                            Value partner_system_priority; //type: uint16
                            Value partner_system_mac_address; //type: string
                            Value partner_operational_key; //type: uint16
                            Value selected_aggregator_id; //type: uint32
                            Value attached_aggregator_id; //type: uint32
                            Value actor_port_id; //type: uint16
                            Value actor_port_priority; //type: uint16
                            Value partner_port_id; //type: uint16
                            Value partner_port_priority; //type: uint16
                            Value actor_port_state; //type: uint8
                            Value partner_port_state; //type: uint8




                    }; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData


                    class MemberMuxData : public Entity
                    {
                        public:
                            MemberMuxData();
                            ~MemberMuxData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value mux_state; //type: BmMuxstateEnum
                            Value error; //type: uint32
                            Value member_mux_state_reason; //type: BmMbrStateReasonEnum
                            Value member_state; //type: BmdMemberStateEnum
                            Value mux_state_reason; //type: BmMuxreasonEnum


                        class MemberMuxStateReasonData : public Entity
                        {
                            public:
                                MemberMuxStateReasonData();
                                ~MemberMuxStateReasonData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reason_type; //type: BmStateReasonTargetEnum
                                Value severity; //type: BmSeverityEnum


                                class BmStateReasonTargetEnum;
                                class BmSeverityEnum;


                        }; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData::MemberMuxStateReasonData> member_mux_state_reason_data;
                            class BmMbrStateReasonEnum;
                            class BmdMemberStateEnum;
                            class BmMuxstateEnum;
                            class BmMuxreasonEnum;


                    }; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData


                    class MacAddress : public Entity
                    {
                        public:
                            MacAddress();
                            ~MacAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value address; //type: string




                    }; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress


                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::Counters> counters;
                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::LinkData> link_data;
                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MacAddress> mac_address;
                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem::MemberMuxData> member_mux_data;
                        class BmdMemberTypeEnumEnum;


                }; // BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberAncestor> bundle_member_ancestor;
                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember::BundleMemberItem> bundle_member_item;


            }; // BundleInformation::Bundle::BundleMembers::BundleMember


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers::BundleMember> > bundle_member;


        }; // BundleInformation::Bundle::BundleMembers


            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleBundles> bundle_bundles;
            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle::BundleMembers> bundle_members;


    }; // BundleInformation::Bundle


    class EventsRg : public Entity
    {
        public:
            EventsRg();
            ~EventsRg();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class EventsRgMembers : public Entity
        {
            public:
                EventsRgMembers();
                ~EventsRgMembers();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class EventsRgMember : public Entity
            {
                public:
                    EventsRgMember();
                    ~EventsRgMember();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value member_interface; //type: string


                class EventsRgMemberAncestor : public Entity
                {
                    public:
                        EventsRgMemberAncestor();
                        ~EventsRgMemberAncestor();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value item_name; //type: string


                    class Items : public Entity
                    {
                        public:
                            Items();
                            ~Items();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value event_type; //type: BmdBagTargetEnum


                        class MemberEvtInfo : public Entity
                        {
                            public:
                                MemberEvtInfo();
                                ~MemberEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value member_event_type; //type: BmdBagEventMbrItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo::Data> data;
                                class BmdBagEventMbrItemEnum;


                        }; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo


                        class BundleEvtInfo : public Entity
                        {
                            public:
                                BundleEvtInfo();
                                ~BundleEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bundle_event_type; //type: BmdBagEventBdlItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo::Data> data;
                                class BmdBagEventBdlItemEnum;


                        }; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo


                        class RgEvtInfo : public Entity
                        {
                            public:
                                RgEvtInfo();
                                ~RgEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value rg_event_type; //type: BmdBagEventRgItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo::Data> data;
                                class BmdBagEventRgItemEnum;


                        }; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::BundleEvtInfo> bundle_evt_info;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::MemberEvtInfo> member_evt_info;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items::RgEvtInfo> rg_evt_info;
                            class BmdBagTargetEnum;


                    }; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor::Items> > items;


                }; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember::EventsRgMemberAncestor> events_rg_member_ancestor;


            }; // BundleInformation::EventsRg::EventsRgMembers::EventsRgMember


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers::EventsRgMember> > events_rg_member;


        }; // BundleInformation::EventsRg::EventsRgMembers


        class EventsRgIccpGroups : public Entity
        {
            public:
                EventsRgIccpGroups();
                ~EventsRgIccpGroups();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class EventsRgIccpGroup : public Entity
            {
                public:
                    EventsRgIccpGroup();
                    ~EventsRgIccpGroup();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value iccp_group; //type: uint32


                class EventsRgBundleItemIccpGroup : public Entity
                {
                    public:
                        EventsRgBundleItemIccpGroup();
                        ~EventsRgBundleItemIccpGroup();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value item_name; //type: string


                    class Items : public Entity
                    {
                        public:
                            Items();
                            ~Items();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value event_type; //type: BmdBagTargetEnum


                        class MemberEvtInfo : public Entity
                        {
                            public:
                                MemberEvtInfo();
                                ~MemberEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value member_event_type; //type: BmdBagEventMbrItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo::Data> data;
                                class BmdBagEventMbrItemEnum;


                        }; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo


                        class BundleEvtInfo : public Entity
                        {
                            public:
                                BundleEvtInfo();
                                ~BundleEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bundle_event_type; //type: BmdBagEventBdlItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo::Data> data;
                                class BmdBagEventBdlItemEnum;


                        }; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo


                        class RgEvtInfo : public Entity
                        {
                            public:
                                RgEvtInfo();
                                ~RgEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value rg_event_type; //type: BmdBagEventRgItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo::Data> data;
                                class BmdBagEventRgItemEnum;


                        }; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::BundleEvtInfo> bundle_evt_info;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::MemberEvtInfo> member_evt_info;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items::RgEvtInfo> rg_evt_info;
                            class BmdBagTargetEnum;


                    }; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup::Items> > items;


                }; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup::EventsRgBundleItemIccpGroup> events_rg_bundle_item_iccp_group;


            }; // BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups::EventsRgIccpGroup> > events_rg_iccp_group;


        }; // BundleInformation::EventsRg::EventsRgIccpGroups


        class EventsRgBundles : public Entity
        {
            public:
                EventsRgBundles();
                ~EventsRgBundles();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class EventsRgBundle : public Entity
            {
                public:
                    EventsRgBundle();
                    ~EventsRgBundle();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value bundle_interface; //type: string


                class EventsRgBundleAncestor : public Entity
                {
                    public:
                        EventsRgBundleAncestor();
                        ~EventsRgBundleAncestor();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value item_name; //type: string


                    class Items : public Entity
                    {
                        public:
                            Items();
                            ~Items();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value event_type; //type: BmdBagTargetEnum


                        class MemberEvtInfo : public Entity
                        {
                            public:
                                MemberEvtInfo();
                                ~MemberEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value member_event_type; //type: BmdBagEventMbrItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo::Data> data;
                                class BmdBagEventMbrItemEnum;


                        }; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo


                        class BundleEvtInfo : public Entity
                        {
                            public:
                                BundleEvtInfo();
                                ~BundleEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bundle_event_type; //type: BmdBagEventBdlItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo::Data> data;
                                class BmdBagEventBdlItemEnum;


                        }; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo


                        class RgEvtInfo : public Entity
                        {
                            public:
                                RgEvtInfo();
                                ~RgEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value rg_event_type; //type: BmdBagEventRgItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo::Data> data;
                                class BmdBagEventRgItemEnum;


                        }; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::BundleEvtInfo> bundle_evt_info;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::MemberEvtInfo> member_evt_info;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items::RgEvtInfo> rg_evt_info;
                            class BmdBagTargetEnum;


                    }; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor::Items> > items;


                }; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle::EventsRgBundleAncestor> events_rg_bundle_ancestor;


            }; // BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles::EventsRgBundle> > events_rg_bundle;


        }; // BundleInformation::EventsRg::EventsRgBundles


            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgBundles> events_rg_bundles;
            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgIccpGroups> events_rg_iccp_groups;
            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg::EventsRgMembers> events_rg_members;


    }; // BundleInformation::EventsRg


    class Lacp : public Entity
    {
        public:
            Lacp();
            ~Lacp();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class LacpBundles : public Entity
        {
            public:
                LacpBundles();
                ~LacpBundles();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class LacpBundle : public Entity
            {
                public:
                    LacpBundle();
                    ~LacpBundle();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value bundle_interface; //type: string


                class LacpBundleItem : public Entity
                {
                    public:
                        LacpBundleItem();
                        ~LacpBundleItem();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value actor_operational_key; //type: uint16
                        Value partner_system_priority; //type: uint16
                        Value partner_system_mac_address; //type: string
                        Value partner_operational_key; //type: uint16


                    class ActorBundleData : public Entity
                    {
                        public:
                            ActorBundleData();
                            ~ActorBundleData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value bundle_interface_name; //type: string
                            Value available_bandwidth; //type: uint32
                            Value effective_bandwidth; //type: uint32
                            Value configured_bandwidth; //type: uint32
                            Value minimum_active_links; //type: uint8
                            Value maximum_active_links; //type: uint8
                            Value maximum_active_links_source; //type: BmWhichSystemEnum
                            Value minimum_bandwidth; //type: uint32
                            Value primary_member; //type: string
                            Value bundle_status; //type: BmBdlStateEnum
                            Value active_member_count; //type: uint16
                            Value standby_member_count; //type: uint16
                            Value configured_member_count; //type: uint16
                            Value mac_source; //type: BmBdlMacSourceEnum
                            Value mac_source_member; //type: string
                            Value inter_chassis; //type: boolean
                            Value is_active; //type: boolean
                            Value lacp_status; //type: BmFeatureStatusEnum
                            Value mlacp_status; //type: BmFeatureStatusEnum
                            Value ipv4bfd_status; //type: BmFeatureStatusEnum
                            Value link_order_status; //type: BmFeatureStatusEnum
                            Value ipv6bfd_status; //type: BmFeatureStatusEnum
                            Value load_balance_hash_type; //type: string
                            Value load_balance_locality_threshold; //type: uint16
                            Value suppression_timer; //type: uint16
                            Value wait_while_timer; //type: uint16
                            Value collector_max_delay; //type: uint16
                            Value cisco_extensions; //type: boolean
                            Value lacp_nonrevertive; //type: boolean
                            Value iccp_group_id; //type: uint32
                            Value active_foreign_member_count; //type: uint16
                            Value configured_foreign_member_count; //type: uint16
                            Value switchover_type; //type: BmdMlacpSwitchoverEnum
                            Value maximize_threshold_value_links; //type: uint32
                            Value maximize_threshold_value_band_width; //type: uint32
                            Value mlacp_mode; //type: BundleMlacpModeEnum
                            Value recovery_delay; //type: uint16
                            Value singleton; //type: boolean


                        class MacAddress : public Entity
                        {
                            public:
                                MacAddress();
                                ~MacAddress();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value address; //type: string




                        }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress


                        class BfdConfig : public Entity
                        {
                            public:
                                BfdConfig();
                                ~BfdConfig();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bundle_status; //type: BmdBfdBdlStateEnum
                                Value start_timer; //type: uint32
                                Value nbr_unconfig_timer; //type: uint32
                                Value pref_multiplier; //type: uint16
                                Value pref_min_interval; //type: uint32
                                Value pref_echo_min_interval; //type: uint32
                                Value fast_detect; //type: boolean
                                Value mode_info; //type: uint32


                            class DestinationAddress : public Entity
                            {
                                public:
                                    DestinationAddress();
                                    ~DestinationAddress();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value af; //type: BmAfIdEnum
                                    Value ipv4; //type: string
                                    Value ipv6; //type: string


                                    class BmAfIdEnum;


                            }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig::DestinationAddress> destination_address;
                                class BmdBfdBdlStateEnum;


                        }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig


                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::BfdConfig> > bfd_config;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData::MacAddress> mac_address;
                            class BmBdlStateEnum;
                            class BmFeatureStatusEnum;
                            class BmFeatureStatusEnum;
                            class BmFeatureStatusEnum;
                            class BmFeatureStatusEnum;
                            class BmBdlMacSourceEnum;
                            class BmWhichSystemEnum;
                            class BundleMlacpModeEnum;
                            class BmFeatureStatusEnum;
                            class BmdMlacpSwitchoverEnum;


                    }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData


                    class BundleSystemId : public Entity
                    {
                        public:
                            BundleSystemId();
                            ~BundleSystemId();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value system_prio; //type: uint16


                        class SystemMacAddr : public Entity
                        {
                            public:
                                SystemMacAddr();
                                ~SystemMacAddr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value macaddr; //type: string




                        }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId::SystemMacAddr> system_mac_addr;


                    }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId


                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::ActorBundleData> actor_bundle_data;
                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem::BundleSystemId> bundle_system_id;


                }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem


                class LacpBundleDescendant : public Entity
                {
                    public:
                        LacpBundleDescendant();
                        ~LacpBundleDescendant();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class BundleData : public Entity
                    {
                        public:
                            BundleData();
                            ~BundleData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value actor_operational_key; //type: uint16
                            Value partner_system_priority; //type: uint16
                            Value partner_system_mac_address; //type: string
                            Value partner_operational_key; //type: uint16


                        class ActorBundleData : public Entity
                        {
                            public:
                                ActorBundleData();
                                ~ActorBundleData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bundle_interface_name; //type: string
                                Value available_bandwidth; //type: uint32
                                Value effective_bandwidth; //type: uint32
                                Value configured_bandwidth; //type: uint32
                                Value minimum_active_links; //type: uint8
                                Value maximum_active_links; //type: uint8
                                Value maximum_active_links_source; //type: BmWhichSystemEnum
                                Value minimum_bandwidth; //type: uint32
                                Value primary_member; //type: string
                                Value bundle_status; //type: BmBdlStateEnum
                                Value active_member_count; //type: uint16
                                Value standby_member_count; //type: uint16
                                Value configured_member_count; //type: uint16
                                Value mac_source; //type: BmBdlMacSourceEnum
                                Value mac_source_member; //type: string
                                Value inter_chassis; //type: boolean
                                Value is_active; //type: boolean
                                Value lacp_status; //type: BmFeatureStatusEnum
                                Value mlacp_status; //type: BmFeatureStatusEnum
                                Value ipv4bfd_status; //type: BmFeatureStatusEnum
                                Value link_order_status; //type: BmFeatureStatusEnum
                                Value ipv6bfd_status; //type: BmFeatureStatusEnum
                                Value load_balance_hash_type; //type: string
                                Value load_balance_locality_threshold; //type: uint16
                                Value suppression_timer; //type: uint16
                                Value wait_while_timer; //type: uint16
                                Value collector_max_delay; //type: uint16
                                Value cisco_extensions; //type: boolean
                                Value lacp_nonrevertive; //type: boolean
                                Value iccp_group_id; //type: uint32
                                Value active_foreign_member_count; //type: uint16
                                Value configured_foreign_member_count; //type: uint16
                                Value switchover_type; //type: BmdMlacpSwitchoverEnum
                                Value maximize_threshold_value_links; //type: uint32
                                Value maximize_threshold_value_band_width; //type: uint32
                                Value mlacp_mode; //type: BundleMlacpModeEnum
                                Value recovery_delay; //type: uint16
                                Value singleton; //type: boolean


                            class MacAddress : public Entity
                            {
                                public:
                                    MacAddress();
                                    ~MacAddress();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address; //type: string




                            }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress


                            class BfdConfig : public Entity
                            {
                                public:
                                    BfdConfig();
                                    ~BfdConfig();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value bundle_status; //type: BmdBfdBdlStateEnum
                                    Value start_timer; //type: uint32
                                    Value nbr_unconfig_timer; //type: uint32
                                    Value pref_multiplier; //type: uint16
                                    Value pref_min_interval; //type: uint32
                                    Value pref_echo_min_interval; //type: uint32
                                    Value fast_detect; //type: boolean
                                    Value mode_info; //type: uint32


                                class DestinationAddress : public Entity
                                {
                                    public:
                                        DestinationAddress();
                                        ~DestinationAddress();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value af; //type: BmAfIdEnum
                                        Value ipv4; //type: string
                                        Value ipv6; //type: string


                                        class BmAfIdEnum;


                                }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig::DestinationAddress> destination_address;
                                    class BmdBfdBdlStateEnum;


                            }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig


                                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::BfdConfig> > bfd_config;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData::MacAddress> mac_address;
                                class BmBdlStateEnum;
                                class BmFeatureStatusEnum;
                                class BmFeatureStatusEnum;
                                class BmFeatureStatusEnum;
                                class BmFeatureStatusEnum;
                                class BmBdlMacSourceEnum;
                                class BmWhichSystemEnum;
                                class BundleMlacpModeEnum;
                                class BmFeatureStatusEnum;
                                class BmdMlacpSwitchoverEnum;


                        }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData


                        class BundleSystemId : public Entity
                        {
                            public:
                                BundleSystemId();
                                ~BundleSystemId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value system_prio; //type: uint16


                            class SystemMacAddr : public Entity
                            {
                                public:
                                    SystemMacAddr();
                                    ~SystemMacAddr();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value macaddr; //type: string




                            }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId::SystemMacAddr> system_mac_addr;


                        }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::ActorBundleData> actor_bundle_data;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData::BundleSystemId> bundle_system_id;


                    }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData


                    class MemberData : public Entity
                    {
                        public:
                            MemberData();
                            ~MemberData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value selected_aggregator_id; //type: uint32
                            Value attached_aggregator_id; //type: uint32
                            Value selection_state; //type: LacpSelStateEnum
                            Value period_state; //type: LacpPeriodStateEnum
                            Value receive_machine_state; //type: RxstatesEnum
                            Value mux_state; //type: BmMuxstateEnum
                            Value actor_churn_state; //type: LacpChurnstatesEnum
                            Value partner_churn_state; //type: LacpChurnstatesEnum
                            Value iccp_group_id; //type: uint32


                        class ActorInfo : public Entity
                        {
                            public:
                                ActorInfo();
                                ~ActorInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value tx_period; //type: uint32


                            class PortInfo : public Entity
                            {
                                public:
                                    PortInfo();
                                    ~PortInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value key; //type: uint16
                                    Value state; //type: uint8


                                class System : public Entity
                                {
                                    public:
                                        System();
                                        ~System();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value system_prio; //type: uint16


                                    class SystemMacAddr : public Entity
                                    {
                                        public:
                                            SystemMacAddr();
                                            ~SystemMacAddr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value macaddr; //type: string




                                    }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr


                                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System::SystemMacAddr> system_mac_addr;


                                }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System


                                class Port : public Entity
                                {
                                    public:
                                        Port();
                                        ~Port();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value link_priority; //type: uint16
                                        Value link_number; //type: uint16




                                }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::Port> port;
                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo::System> system;


                            }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo::PortInfo> port_info;


                        }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo


                        class PartnerInfo : public Entity
                        {
                            public:
                                PartnerInfo();
                                ~PartnerInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value tx_period; //type: uint32


                            class PortInfo : public Entity
                            {
                                public:
                                    PortInfo();
                                    ~PortInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value key; //type: uint16
                                    Value state; //type: uint8


                                class System : public Entity
                                {
                                    public:
                                        System();
                                        ~System();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value system_prio; //type: uint16


                                    class SystemMacAddr : public Entity
                                    {
                                        public:
                                            SystemMacAddr();
                                            ~SystemMacAddr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value macaddr; //type: string




                                    }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr


                                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr> system_mac_addr;


                                }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System


                                class Port : public Entity
                                {
                                    public:
                                        Port();
                                        ~Port();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value link_priority; //type: uint16
                                        Value link_number; //type: uint16




                                }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::Port> port;
                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo::System> system;


                            }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo::PortInfo> port_info;


                        }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo


                        class AdditionalInfo : public Entity
                        {
                            public:
                                AdditionalInfo();
                                ~AdditionalInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value mbr_type; //type: BmdMemberTypeEnumEnum


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
                                    Value interface_handle; //type: string




                            }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local


                            class Foreign : public Entity
                            {
                                public:
                                    Foreign();
                                    ~Foreign();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value peer_address; //type: string
                                    Value member_name; //type: string




                            }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Foreign> foreign;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo::Local> local;
                                class BmdMemberTypeEnumEnum;


                        }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::ActorInfo> actor_info;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::AdditionalInfo> additional_info;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData::PartnerInfo> partner_info;
                            class LacpChurnstatesEnum;
                            class BmMuxstateEnum;
                            class LacpChurnstatesEnum;
                            class LacpPeriodStateEnum;
                            class RxstatesEnum;
                            class LacpSelStateEnum;


                    }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData


                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::BundleData> bundle_data;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant::MemberData> > member_data;


                }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant


                class LacpBundleChildrenMembers : public Entity
                {
                    public:
                        LacpBundleChildrenMembers();
                        ~LacpBundleChildrenMembers();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class LacpBundleChildrenMember : public Entity
                    {
                        public:
                            LacpBundleChildrenMember();
                            ~LacpBundleChildrenMember();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value member_interface; //type: string
                            Value selected_aggregator_id; //type: uint32
                            Value attached_aggregator_id; //type: uint32
                            Value selection_state; //type: LacpSelStateEnum
                            Value period_state; //type: LacpPeriodStateEnum
                            Value receive_machine_state; //type: RxstatesEnum
                            Value mux_state; //type: BmMuxstateEnum
                            Value actor_churn_state; //type: LacpChurnstatesEnum
                            Value partner_churn_state; //type: LacpChurnstatesEnum
                            Value iccp_group_id; //type: uint32


                        class ActorInfo : public Entity
                        {
                            public:
                                ActorInfo();
                                ~ActorInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value tx_period; //type: uint32


                            class PortInfo : public Entity
                            {
                                public:
                                    PortInfo();
                                    ~PortInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value key; //type: uint16
                                    Value state; //type: uint8


                                class System : public Entity
                                {
                                    public:
                                        System();
                                        ~System();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value system_prio; //type: uint16


                                    class SystemMacAddr : public Entity
                                    {
                                        public:
                                            SystemMacAddr();
                                            ~SystemMacAddr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value macaddr; //type: string




                                    }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr


                                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System::SystemMacAddr> system_mac_addr;


                                }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System


                                class Port : public Entity
                                {
                                    public:
                                        Port();
                                        ~Port();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value link_priority; //type: uint16
                                        Value link_number; //type: uint16




                                }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::Port> port;
                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo::System> system;


                            }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo::PortInfo> port_info;


                        }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo


                        class PartnerInfo : public Entity
                        {
                            public:
                                PartnerInfo();
                                ~PartnerInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value tx_period; //type: uint32


                            class PortInfo : public Entity
                            {
                                public:
                                    PortInfo();
                                    ~PortInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value key; //type: uint16
                                    Value state; //type: uint8


                                class System : public Entity
                                {
                                    public:
                                        System();
                                        ~System();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value system_prio; //type: uint16


                                    class SystemMacAddr : public Entity
                                    {
                                        public:
                                            SystemMacAddr();
                                            ~SystemMacAddr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value macaddr; //type: string




                                    }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr


                                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System::SystemMacAddr> system_mac_addr;


                                }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System


                                class Port : public Entity
                                {
                                    public:
                                        Port();
                                        ~Port();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value link_priority; //type: uint16
                                        Value link_number; //type: uint16




                                }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::Port> port;
                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo::System> system;


                            }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo::PortInfo> port_info;


                        }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo


                        class AdditionalInfo : public Entity
                        {
                            public:
                                AdditionalInfo();
                                ~AdditionalInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value mbr_type; //type: BmdMemberTypeEnumEnum


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
                                    Value interface_handle; //type: string




                            }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local


                            class Foreign : public Entity
                            {
                                public:
                                    Foreign();
                                    ~Foreign();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value peer_address; //type: string
                                    Value member_name; //type: string




                            }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Foreign> foreign;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo::Local> local;
                                class BmdMemberTypeEnumEnum;


                        }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::ActorInfo> actor_info;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::AdditionalInfo> additional_info;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember::PartnerInfo> partner_info;
                            class LacpChurnstatesEnum;
                            class BmMuxstateEnum;
                            class LacpChurnstatesEnum;
                            class LacpPeriodStateEnum;
                            class RxstatesEnum;
                            class LacpSelStateEnum;


                    }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers::LacpBundleChildrenMember> > lacp_bundle_children_member;


                }; // BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleChildrenMembers> lacp_bundle_children_members;
                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleDescendant> lacp_bundle_descendant;
                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle::LacpBundleItem> lacp_bundle_item;


            }; // BundleInformation::Lacp::LacpBundles::LacpBundle


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles::LacpBundle> > lacp_bundle;


        }; // BundleInformation::Lacp::LacpBundles


        class LacpMembers : public Entity
        {
            public:
                LacpMembers();
                ~LacpMembers();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class LacpMember : public Entity
            {
                public:
                    LacpMember();
                    ~LacpMember();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value member_interface; //type: string


                class LacpMemberAncestor : public Entity
                {
                    public:
                        LacpMemberAncestor();
                        ~LacpMemberAncestor();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class BundleData : public Entity
                    {
                        public:
                            BundleData();
                            ~BundleData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value actor_operational_key; //type: uint16
                            Value partner_system_priority; //type: uint16
                            Value partner_system_mac_address; //type: string
                            Value partner_operational_key; //type: uint16


                        class ActorBundleData : public Entity
                        {
                            public:
                                ActorBundleData();
                                ~ActorBundleData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bundle_interface_name; //type: string
                                Value available_bandwidth; //type: uint32
                                Value effective_bandwidth; //type: uint32
                                Value configured_bandwidth; //type: uint32
                                Value minimum_active_links; //type: uint8
                                Value maximum_active_links; //type: uint8
                                Value maximum_active_links_source; //type: BmWhichSystemEnum
                                Value minimum_bandwidth; //type: uint32
                                Value primary_member; //type: string
                                Value bundle_status; //type: BmBdlStateEnum
                                Value active_member_count; //type: uint16
                                Value standby_member_count; //type: uint16
                                Value configured_member_count; //type: uint16
                                Value mac_source; //type: BmBdlMacSourceEnum
                                Value mac_source_member; //type: string
                                Value inter_chassis; //type: boolean
                                Value is_active; //type: boolean
                                Value lacp_status; //type: BmFeatureStatusEnum
                                Value mlacp_status; //type: BmFeatureStatusEnum
                                Value ipv4bfd_status; //type: BmFeatureStatusEnum
                                Value link_order_status; //type: BmFeatureStatusEnum
                                Value ipv6bfd_status; //type: BmFeatureStatusEnum
                                Value load_balance_hash_type; //type: string
                                Value load_balance_locality_threshold; //type: uint16
                                Value suppression_timer; //type: uint16
                                Value wait_while_timer; //type: uint16
                                Value collector_max_delay; //type: uint16
                                Value cisco_extensions; //type: boolean
                                Value lacp_nonrevertive; //type: boolean
                                Value iccp_group_id; //type: uint32
                                Value active_foreign_member_count; //type: uint16
                                Value configured_foreign_member_count; //type: uint16
                                Value switchover_type; //type: BmdMlacpSwitchoverEnum
                                Value maximize_threshold_value_links; //type: uint32
                                Value maximize_threshold_value_band_width; //type: uint32
                                Value mlacp_mode; //type: BundleMlacpModeEnum
                                Value recovery_delay; //type: uint16
                                Value singleton; //type: boolean


                            class MacAddress : public Entity
                            {
                                public:
                                    MacAddress();
                                    ~MacAddress();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address; //type: string




                            }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress


                            class BfdConfig : public Entity
                            {
                                public:
                                    BfdConfig();
                                    ~BfdConfig();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value bundle_status; //type: BmdBfdBdlStateEnum
                                    Value start_timer; //type: uint32
                                    Value nbr_unconfig_timer; //type: uint32
                                    Value pref_multiplier; //type: uint16
                                    Value pref_min_interval; //type: uint32
                                    Value pref_echo_min_interval; //type: uint32
                                    Value fast_detect; //type: boolean
                                    Value mode_info; //type: uint32


                                class DestinationAddress : public Entity
                                {
                                    public:
                                        DestinationAddress();
                                        ~DestinationAddress();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value af; //type: BmAfIdEnum
                                        Value ipv4; //type: string
                                        Value ipv6; //type: string


                                        class BmAfIdEnum;


                                }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig::DestinationAddress> destination_address;
                                    class BmdBfdBdlStateEnum;


                            }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig


                                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::BfdConfig> > bfd_config;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData::MacAddress> mac_address;
                                class BmBdlStateEnum;
                                class BmFeatureStatusEnum;
                                class BmFeatureStatusEnum;
                                class BmFeatureStatusEnum;
                                class BmFeatureStatusEnum;
                                class BmBdlMacSourceEnum;
                                class BmWhichSystemEnum;
                                class BundleMlacpModeEnum;
                                class BmFeatureStatusEnum;
                                class BmdMlacpSwitchoverEnum;


                        }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData


                        class BundleSystemId : public Entity
                        {
                            public:
                                BundleSystemId();
                                ~BundleSystemId();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value system_prio; //type: uint16


                            class SystemMacAddr : public Entity
                            {
                                public:
                                    SystemMacAddr();
                                    ~SystemMacAddr();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value macaddr; //type: string




                            }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId::SystemMacAddr> system_mac_addr;


                        }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::ActorBundleData> actor_bundle_data;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData::BundleSystemId> bundle_system_id;


                    }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData


                    class MemberData : public Entity
                    {
                        public:
                            MemberData();
                            ~MemberData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value selected_aggregator_id; //type: uint32
                            Value attached_aggregator_id; //type: uint32
                            Value selection_state; //type: LacpSelStateEnum
                            Value period_state; //type: LacpPeriodStateEnum
                            Value receive_machine_state; //type: RxstatesEnum
                            Value mux_state; //type: BmMuxstateEnum
                            Value actor_churn_state; //type: LacpChurnstatesEnum
                            Value partner_churn_state; //type: LacpChurnstatesEnum
                            Value iccp_group_id; //type: uint32


                        class ActorInfo : public Entity
                        {
                            public:
                                ActorInfo();
                                ~ActorInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value tx_period; //type: uint32


                            class PortInfo : public Entity
                            {
                                public:
                                    PortInfo();
                                    ~PortInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value key; //type: uint16
                                    Value state; //type: uint8


                                class System : public Entity
                                {
                                    public:
                                        System();
                                        ~System();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value system_prio; //type: uint16


                                    class SystemMacAddr : public Entity
                                    {
                                        public:
                                            SystemMacAddr();
                                            ~SystemMacAddr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value macaddr; //type: string




                                    }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr


                                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System::SystemMacAddr> system_mac_addr;


                                }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System


                                class Port : public Entity
                                {
                                    public:
                                        Port();
                                        ~Port();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value link_priority; //type: uint16
                                        Value link_number; //type: uint16




                                }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::Port> port;
                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo::System> system;


                            }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo::PortInfo> port_info;


                        }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo


                        class PartnerInfo : public Entity
                        {
                            public:
                                PartnerInfo();
                                ~PartnerInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value tx_period; //type: uint32


                            class PortInfo : public Entity
                            {
                                public:
                                    PortInfo();
                                    ~PortInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value key; //type: uint16
                                    Value state; //type: uint8


                                class System : public Entity
                                {
                                    public:
                                        System();
                                        ~System();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value system_prio; //type: uint16


                                    class SystemMacAddr : public Entity
                                    {
                                        public:
                                            SystemMacAddr();
                                            ~SystemMacAddr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value macaddr; //type: string




                                    }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr


                                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System::SystemMacAddr> system_mac_addr;


                                }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System


                                class Port : public Entity
                                {
                                    public:
                                        Port();
                                        ~Port();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value link_priority; //type: uint16
                                        Value link_number; //type: uint16




                                }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::Port> port;
                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo::System> system;


                            }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo::PortInfo> port_info;


                        }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo


                        class AdditionalInfo : public Entity
                        {
                            public:
                                AdditionalInfo();
                                ~AdditionalInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value mbr_type; //type: BmdMemberTypeEnumEnum


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
                                    Value interface_handle; //type: string




                            }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local


                            class Foreign : public Entity
                            {
                                public:
                                    Foreign();
                                    ~Foreign();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value peer_address; //type: string
                                    Value member_name; //type: string




                            }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Foreign> foreign;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo::Local> local;
                                class BmdMemberTypeEnumEnum;


                        }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::ActorInfo> actor_info;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::AdditionalInfo> additional_info;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData::PartnerInfo> partner_info;
                            class LacpChurnstatesEnum;
                            class BmMuxstateEnum;
                            class LacpChurnstatesEnum;
                            class LacpPeriodStateEnum;
                            class RxstatesEnum;
                            class LacpSelStateEnum;


                    }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData


                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::BundleData> bundle_data;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor::MemberData> > member_data;


                }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor


                class LacpMemberItem : public Entity
                {
                    public:
                        LacpMemberItem();
                        ~LacpMemberItem();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value selected_aggregator_id; //type: uint32
                        Value attached_aggregator_id; //type: uint32
                        Value selection_state; //type: LacpSelStateEnum
                        Value period_state; //type: LacpPeriodStateEnum
                        Value receive_machine_state; //type: RxstatesEnum
                        Value mux_state; //type: BmMuxstateEnum
                        Value actor_churn_state; //type: LacpChurnstatesEnum
                        Value partner_churn_state; //type: LacpChurnstatesEnum
                        Value iccp_group_id; //type: uint32


                    class ActorInfo : public Entity
                    {
                        public:
                            ActorInfo();
                            ~ActorInfo();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value tx_period; //type: uint32


                        class PortInfo : public Entity
                        {
                            public:
                                PortInfo();
                                ~PortInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value key; //type: uint16
                                Value state; //type: uint8


                            class System : public Entity
                            {
                                public:
                                    System();
                                    ~System();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value system_prio; //type: uint16


                                class SystemMacAddr : public Entity
                                {
                                    public:
                                        SystemMacAddr();
                                        ~SystemMacAddr();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value macaddr; //type: string




                                }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System::SystemMacAddr> system_mac_addr;


                            }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System


                            class Port : public Entity
                            {
                                public:
                                    Port();
                                    ~Port();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value link_priority; //type: uint16
                                    Value link_number; //type: uint16




                            }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::Port> port;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo::System> system;


                        }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo::PortInfo> port_info;


                    }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo


                    class PartnerInfo : public Entity
                    {
                        public:
                            PartnerInfo();
                            ~PartnerInfo();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value tx_period; //type: uint32


                        class PortInfo : public Entity
                        {
                            public:
                                PortInfo();
                                ~PortInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value key; //type: uint16
                                Value state; //type: uint8


                            class System : public Entity
                            {
                                public:
                                    System();
                                    ~System();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value system_prio; //type: uint16


                                class SystemMacAddr : public Entity
                                {
                                    public:
                                        SystemMacAddr();
                                        ~SystemMacAddr();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value macaddr; //type: string




                                }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System::SystemMacAddr> system_mac_addr;


                            }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System


                            class Port : public Entity
                            {
                                public:
                                    Port();
                                    ~Port();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value link_priority; //type: uint16
                                    Value link_number; //type: uint16




                            }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::Port> port;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo::System> system;


                        }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo::PortInfo> port_info;


                    }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo


                    class AdditionalInfo : public Entity
                    {
                        public:
                            AdditionalInfo();
                            ~AdditionalInfo();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value mbr_type; //type: BmdMemberTypeEnumEnum


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
                                Value interface_handle; //type: string




                        }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local


                        class Foreign : public Entity
                        {
                            public:
                                Foreign();
                                ~Foreign();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value peer_address; //type: string
                                Value member_name; //type: string




                        }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Foreign> foreign;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo::Local> local;
                            class BmdMemberTypeEnumEnum;


                    }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo


                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::ActorInfo> actor_info;
                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::AdditionalInfo> additional_info;
                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem::PartnerInfo> partner_info;
                        class LacpChurnstatesEnum;
                        class BmMuxstateEnum;
                        class LacpChurnstatesEnum;
                        class LacpPeriodStateEnum;
                        class RxstatesEnum;
                        class LacpSelStateEnum;


                }; // BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberAncestor> lacp_member_ancestor;
                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember::LacpMemberItem> lacp_member_item;


            }; // BundleInformation::Lacp::LacpMembers::LacpMember


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers::LacpMember> > lacp_member;


        }; // BundleInformation::Lacp::LacpMembers


            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpBundles> lacp_bundles;
            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp::LacpMembers> lacp_members;


    }; // BundleInformation::Lacp


    class MlacpBundleCounters : public Entity
    {
        public:
            MlacpBundleCounters();
            ~MlacpBundleCounters();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class IccpGroups : public Entity
        {
            public:
                IccpGroups();
                ~IccpGroups();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class IccpGroup : public Entity
            {
                public:
                    IccpGroup();
                    ~IccpGroup();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value iccp_group; //type: uint32


                class IccpGroupItem : public Entity
                {
                    public:
                        IccpGroupItem();
                        ~IccpGroupItem();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class IccpGroupData : public Entity
                    {
                        public:
                            IccpGroupData();
                            ~IccpGroupData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value iccp_group_id; //type: uint32


                        class MlacpSyncRequestsOnAllLocalPorts : public Entity
                        {
                            public:
                                MlacpSyncRequestsOnAllLocalPorts();
                                ~MlacpSyncRequestsOnAllLocalPorts();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value last_time_cleared; //type: uint64
                                Value time_since_cleared; //type: uint64


                            class ReceivedSyncRequests : public Entity
                            {
                                public:
                                    ReceivedSyncRequests();
                                    ~ReceivedSyncRequests();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value all_syncs; //type: uint32
                                    Value config_syncs; //type: uint32
                                    Value state_syncs; //type: uint32




                            }; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests> received_sync_requests;


                        }; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts


                        class MlacpSyncRequestsOnAllLocalBundles : public Entity
                        {
                            public:
                                MlacpSyncRequestsOnAllLocalBundles();
                                ~MlacpSyncRequestsOnAllLocalBundles();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value last_time_cleared; //type: uint64
                                Value time_since_cleared; //type: uint64


                            class ReceivedSyncRequests : public Entity
                            {
                                public:
                                    ReceivedSyncRequests();
                                    ~ReceivedSyncRequests();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value all_syncs; //type: uint32
                                    Value config_syncs; //type: uint32
                                    Value state_syncs; //type: uint32




                            }; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests> received_sync_requests;


                        }; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles


                        class BundleData : public Entity
                        {
                            public:
                                BundleData();
                                ~BundleData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bundle_name; //type: string


                            class MlacpTlvCounters : public Entity
                            {
                                public:
                                    MlacpTlvCounters();
                                    ~MlacpTlvCounters();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value sent_config_tl_vs; //type: uint32
                                    Value sent_state_tl_vs; //type: uint32
                                    Value sent_priority_tl_vs; //type: uint32
                                    Value received_priority_tl_vs; //type: uint32
                                    Value received_nak_tl_vs; //type: uint32
                                    Value last_time_cleared; //type: uint64
                                    Value time_since_cleared; //type: uint64
                                    Value last_unexpected_event; //type: uint64


                                class ReceivedSyncRequests : public Entity
                                {
                                    public:
                                        ReceivedSyncRequests();
                                        ~ReceivedSyncRequests();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value all_syncs; //type: uint32
                                        Value config_syncs; //type: uint32
                                        Value state_syncs; //type: uint32




                                }; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;


                            }; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData::MlacpTlvCounters> mlacp_tlv_counters;


                        }; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData


                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::BundleData> > bundle_data;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles> mlacp_sync_requests_on_all_local_bundles;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts> mlacp_sync_requests_on_all_local_ports;


                    }; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData


                    class NodeData : public Entity
                    {
                        public:
                            NodeData();
                            ~NodeData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class NodeData_ : public Entity
                        {
                            public:
                                NodeData_();
                                ~NodeData_();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value node_id; //type: uint32


                            class MlacpSyncRequestsOnAllForeignPorts : public Entity
                            {
                                public:
                                    MlacpSyncRequestsOnAllForeignPorts();
                                    ~MlacpSyncRequestsOnAllForeignPorts();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value last_time_cleared; //type: uint64
                                    Value time_since_cleared; //type: uint64


                                class ReceivedSyncRequests : public Entity
                                {
                                    public:
                                        ReceivedSyncRequests();
                                        ~ReceivedSyncRequests();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value all_syncs; //type: uint32
                                        Value config_syncs; //type: uint32
                                        Value state_syncs; //type: uint32




                                }; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests> received_sync_requests;


                            }; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts


                            class MlacpSyncRequestsOnAllForeignBundles : public Entity
                            {
                                public:
                                    MlacpSyncRequestsOnAllForeignBundles();
                                    ~MlacpSyncRequestsOnAllForeignBundles();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value last_time_cleared; //type: uint64
                                    Value time_since_cleared; //type: uint64


                                class ReceivedSyncRequests : public Entity
                                {
                                    public:
                                        ReceivedSyncRequests();
                                        ~ReceivedSyncRequests();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value all_syncs; //type: uint32
                                        Value config_syncs; //type: uint32
                                        Value state_syncs; //type: uint32




                                }; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests> received_sync_requests;


                            }; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles> mlacp_sync_requests_on_all_foreign_bundles;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts> mlacp_sync_requests_on_all_foreign_ports;


                        }; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_


                        class BundleData : public Entity
                        {
                            public:
                                BundleData();
                                ~BundleData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bundle_name; //type: string


                            class MlacpTlvCounters : public Entity
                            {
                                public:
                                    MlacpTlvCounters();
                                    ~MlacpTlvCounters();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value sent_config_tl_vs; //type: uint32
                                    Value sent_state_tl_vs; //type: uint32
                                    Value sent_priority_tl_vs; //type: uint32
                                    Value received_priority_tl_vs; //type: uint32
                                    Value received_nak_tl_vs; //type: uint32
                                    Value last_time_cleared; //type: uint64
                                    Value time_since_cleared; //type: uint64
                                    Value last_unexpected_event; //type: uint64


                                class ReceivedSyncRequests : public Entity
                                {
                                    public:
                                        ReceivedSyncRequests();
                                        ~ReceivedSyncRequests();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value all_syncs; //type: uint32
                                        Value config_syncs; //type: uint32
                                        Value state_syncs; //type: uint32




                                }; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;


                            }; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData::MlacpTlvCounters> mlacp_tlv_counters;


                        }; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData


                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::BundleData> > bundle_data;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData::NodeData_> node_data;


                    }; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData


                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupData> iccp_group_data;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem::NodeData> > node_data;


                }; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup::IccpGroupItem> iccp_group_item;


            }; // BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups::IccpGroup> > iccp_group;


        }; // BundleInformation::MlacpBundleCounters::IccpGroups


        class Bundles : public Entity
        {
            public:
                Bundles();
                ~Bundles();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Bundle : public Entity
            {
                public:
                    Bundle();
                    ~Bundle();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value bundle_interface; //type: string


                class BundleItem : public Entity
                {
                    public:
                        BundleItem();
                        ~BundleItem();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class IccpGroup : public Entity
                    {
                        public:
                            IccpGroup();
                            ~IccpGroup();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class IccpGroupData : public Entity
                        {
                            public:
                                IccpGroupData();
                                ~IccpGroupData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value iccp_group_id; //type: uint32


                            class MlacpSyncRequestsOnAllLocalPorts : public Entity
                            {
                                public:
                                    MlacpSyncRequestsOnAllLocalPorts();
                                    ~MlacpSyncRequestsOnAllLocalPorts();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value last_time_cleared; //type: uint64
                                    Value time_since_cleared; //type: uint64


                                class ReceivedSyncRequests : public Entity
                                {
                                    public:
                                        ReceivedSyncRequests();
                                        ~ReceivedSyncRequests();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value all_syncs; //type: uint32
                                        Value config_syncs; //type: uint32
                                        Value state_syncs; //type: uint32




                                }; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests> received_sync_requests;


                            }; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts


                            class MlacpSyncRequestsOnAllLocalBundles : public Entity
                            {
                                public:
                                    MlacpSyncRequestsOnAllLocalBundles();
                                    ~MlacpSyncRequestsOnAllLocalBundles();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value last_time_cleared; //type: uint64
                                    Value time_since_cleared; //type: uint64


                                class ReceivedSyncRequests : public Entity
                                {
                                    public:
                                        ReceivedSyncRequests();
                                        ~ReceivedSyncRequests();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value all_syncs; //type: uint32
                                        Value config_syncs; //type: uint32
                                        Value state_syncs; //type: uint32




                                }; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests> received_sync_requests;


                            }; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles


                            class BundleData : public Entity
                            {
                                public:
                                    BundleData();
                                    ~BundleData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value bundle_name; //type: string


                                class MlacpTlvCounters : public Entity
                                {
                                    public:
                                        MlacpTlvCounters();
                                        ~MlacpTlvCounters();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value sent_config_tl_vs; //type: uint32
                                        Value sent_state_tl_vs; //type: uint32
                                        Value sent_priority_tl_vs; //type: uint32
                                        Value received_priority_tl_vs; //type: uint32
                                        Value received_nak_tl_vs; //type: uint32
                                        Value last_time_cleared; //type: uint64
                                        Value time_since_cleared; //type: uint64
                                        Value last_unexpected_event; //type: uint64


                                    class ReceivedSyncRequests : public Entity
                                    {
                                        public:
                                            ReceivedSyncRequests();
                                            ~ReceivedSyncRequests();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value all_syncs; //type: uint32
                                            Value config_syncs; //type: uint32
                                            Value state_syncs; //type: uint32




                                    }; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests


                                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;


                                }; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData::MlacpTlvCounters> mlacp_tlv_counters;


                            }; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData


                                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::BundleData> > bundle_data;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles> mlacp_sync_requests_on_all_local_bundles;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts> mlacp_sync_requests_on_all_local_ports;


                        }; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData


                        class NodeData : public Entity
                        {
                            public:
                                NodeData();
                                ~NodeData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class NodeData_ : public Entity
                            {
                                public:
                                    NodeData_();
                                    ~NodeData_();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value node_id; //type: uint32


                                class MlacpSyncRequestsOnAllForeignPorts : public Entity
                                {
                                    public:
                                        MlacpSyncRequestsOnAllForeignPorts();
                                        ~MlacpSyncRequestsOnAllForeignPorts();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value last_time_cleared; //type: uint64
                                        Value time_since_cleared; //type: uint64


                                    class ReceivedSyncRequests : public Entity
                                    {
                                        public:
                                            ReceivedSyncRequests();
                                            ~ReceivedSyncRequests();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value all_syncs; //type: uint32
                                            Value config_syncs; //type: uint32
                                            Value state_syncs; //type: uint32




                                    }; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests


                                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests> received_sync_requests;


                                }; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts


                                class MlacpSyncRequestsOnAllForeignBundles : public Entity
                                {
                                    public:
                                        MlacpSyncRequestsOnAllForeignBundles();
                                        ~MlacpSyncRequestsOnAllForeignBundles();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value last_time_cleared; //type: uint64
                                        Value time_since_cleared; //type: uint64


                                    class ReceivedSyncRequests : public Entity
                                    {
                                        public:
                                            ReceivedSyncRequests();
                                            ~ReceivedSyncRequests();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value all_syncs; //type: uint32
                                            Value config_syncs; //type: uint32
                                            Value state_syncs; //type: uint32




                                    }; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests


                                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests> received_sync_requests;


                                }; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles> mlacp_sync_requests_on_all_foreign_bundles;
                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts> mlacp_sync_requests_on_all_foreign_ports;


                            }; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_


                            class BundleData : public Entity
                            {
                                public:
                                    BundleData();
                                    ~BundleData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value bundle_name; //type: string


                                class MlacpTlvCounters : public Entity
                                {
                                    public:
                                        MlacpTlvCounters();
                                        ~MlacpTlvCounters();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value sent_config_tl_vs; //type: uint32
                                        Value sent_state_tl_vs; //type: uint32
                                        Value sent_priority_tl_vs; //type: uint32
                                        Value received_priority_tl_vs; //type: uint32
                                        Value received_nak_tl_vs; //type: uint32
                                        Value last_time_cleared; //type: uint64
                                        Value time_since_cleared; //type: uint64
                                        Value last_unexpected_event; //type: uint64


                                    class ReceivedSyncRequests : public Entity
                                    {
                                        public:
                                            ReceivedSyncRequests();
                                            ~ReceivedSyncRequests();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value all_syncs; //type: uint32
                                            Value config_syncs; //type: uint32
                                            Value state_syncs; //type: uint32




                                    }; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests


                                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;


                                }; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData::MlacpTlvCounters> mlacp_tlv_counters;


                            }; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData


                                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::BundleData> > bundle_data;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData::NodeData_> node_data;


                        }; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::IccpGroupData> iccp_group_data;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup::NodeData> > node_data;


                    }; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem::IccpGroup> > iccp_group;


                }; // BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle::BundleItem> bundle_item;


            }; // BundleInformation::MlacpBundleCounters::Bundles::Bundle


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles::Bundle> > bundle;


        }; // BundleInformation::MlacpBundleCounters::Bundles


        class Nodes : public Entity
        {
            public:
                Nodes();
                ~Nodes();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Node : public Entity
            {
                public:
                    Node();
                    ~Node();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value node; //type: string


                class NodeItem : public Entity
                {
                    public:
                        NodeItem();
                        ~NodeItem();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class IccpGroupData : public Entity
                    {
                        public:
                            IccpGroupData();
                            ~IccpGroupData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value iccp_group_id; //type: uint32


                        class MlacpSyncRequestsOnAllLocalPorts : public Entity
                        {
                            public:
                                MlacpSyncRequestsOnAllLocalPorts();
                                ~MlacpSyncRequestsOnAllLocalPorts();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value last_time_cleared; //type: uint64
                                Value time_since_cleared; //type: uint64


                            class ReceivedSyncRequests : public Entity
                            {
                                public:
                                    ReceivedSyncRequests();
                                    ~ReceivedSyncRequests();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value all_syncs; //type: uint32
                                    Value config_syncs; //type: uint32
                                    Value state_syncs; //type: uint32




                            }; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests> received_sync_requests;


                        }; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts


                        class MlacpSyncRequestsOnAllLocalBundles : public Entity
                        {
                            public:
                                MlacpSyncRequestsOnAllLocalBundles();
                                ~MlacpSyncRequestsOnAllLocalBundles();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value last_time_cleared; //type: uint64
                                Value time_since_cleared; //type: uint64


                            class ReceivedSyncRequests : public Entity
                            {
                                public:
                                    ReceivedSyncRequests();
                                    ~ReceivedSyncRequests();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value all_syncs; //type: uint32
                                    Value config_syncs; //type: uint32
                                    Value state_syncs; //type: uint32




                            }; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles::ReceivedSyncRequests> received_sync_requests;


                        }; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles


                        class BundleData : public Entity
                        {
                            public:
                                BundleData();
                                ~BundleData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bundle_name; //type: string


                            class MlacpTlvCounters : public Entity
                            {
                                public:
                                    MlacpTlvCounters();
                                    ~MlacpTlvCounters();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value sent_config_tl_vs; //type: uint32
                                    Value sent_state_tl_vs; //type: uint32
                                    Value sent_priority_tl_vs; //type: uint32
                                    Value received_priority_tl_vs; //type: uint32
                                    Value received_nak_tl_vs; //type: uint32
                                    Value last_time_cleared; //type: uint64
                                    Value time_since_cleared; //type: uint64
                                    Value last_unexpected_event; //type: uint64


                                class ReceivedSyncRequests : public Entity
                                {
                                    public:
                                        ReceivedSyncRequests();
                                        ~ReceivedSyncRequests();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value all_syncs; //type: uint32
                                        Value config_syncs; //type: uint32
                                        Value state_syncs; //type: uint32




                                }; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;


                            }; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData::MlacpTlvCounters> mlacp_tlv_counters;


                        }; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData


                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::BundleData> > bundle_data;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalBundles> mlacp_sync_requests_on_all_local_bundles;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData::MlacpSyncRequestsOnAllLocalPorts> mlacp_sync_requests_on_all_local_ports;


                    }; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData


                    class NodeData : public Entity
                    {
                        public:
                            NodeData();
                            ~NodeData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class NodeData_ : public Entity
                        {
                            public:
                                NodeData_();
                                ~NodeData_();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value node_id; //type: uint32


                            class MlacpSyncRequestsOnAllForeignPorts : public Entity
                            {
                                public:
                                    MlacpSyncRequestsOnAllForeignPorts();
                                    ~MlacpSyncRequestsOnAllForeignPorts();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value last_time_cleared; //type: uint64
                                    Value time_since_cleared; //type: uint64


                                class ReceivedSyncRequests : public Entity
                                {
                                    public:
                                        ReceivedSyncRequests();
                                        ~ReceivedSyncRequests();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value all_syncs; //type: uint32
                                        Value config_syncs; //type: uint32
                                        Value state_syncs; //type: uint32




                                }; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests> received_sync_requests;


                            }; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts


                            class MlacpSyncRequestsOnAllForeignBundles : public Entity
                            {
                                public:
                                    MlacpSyncRequestsOnAllForeignBundles();
                                    ~MlacpSyncRequestsOnAllForeignBundles();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value last_time_cleared; //type: uint64
                                    Value time_since_cleared; //type: uint64


                                class ReceivedSyncRequests : public Entity
                                {
                                    public:
                                        ReceivedSyncRequests();
                                        ~ReceivedSyncRequests();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value all_syncs; //type: uint32
                                        Value config_syncs; //type: uint32
                                        Value state_syncs; //type: uint32




                                }; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles::ReceivedSyncRequests> received_sync_requests;


                            }; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignBundles> mlacp_sync_requests_on_all_foreign_bundles;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_::MlacpSyncRequestsOnAllForeignPorts> mlacp_sync_requests_on_all_foreign_ports;


                        }; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_


                        class BundleData : public Entity
                        {
                            public:
                                BundleData();
                                ~BundleData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bundle_name; //type: string


                            class MlacpTlvCounters : public Entity
                            {
                                public:
                                    MlacpTlvCounters();
                                    ~MlacpTlvCounters();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value sent_config_tl_vs; //type: uint32
                                    Value sent_state_tl_vs; //type: uint32
                                    Value sent_priority_tl_vs; //type: uint32
                                    Value received_priority_tl_vs; //type: uint32
                                    Value received_nak_tl_vs; //type: uint32
                                    Value last_time_cleared; //type: uint64
                                    Value time_since_cleared; //type: uint64
                                    Value last_unexpected_event; //type: uint64


                                class ReceivedSyncRequests : public Entity
                                {
                                    public:
                                        ReceivedSyncRequests();
                                        ~ReceivedSyncRequests();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value all_syncs; //type: uint32
                                        Value config_syncs; //type: uint32
                                        Value state_syncs; //type: uint32




                                }; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;


                            }; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData::MlacpTlvCounters> mlacp_tlv_counters;


                        }; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData


                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::BundleData> > bundle_data;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData::NodeData_> node_data;


                    }; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData


                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::IccpGroupData> iccp_group_data;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem::NodeData> > node_data;


                }; // BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node::NodeItem> node_item;


            }; // BundleInformation::MlacpBundleCounters::Nodes::Node


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes::Node> > node;


        }; // BundleInformation::MlacpBundleCounters::Nodes


            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Bundles> bundles;
            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::IccpGroups> iccp_groups;
            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters::Nodes> nodes;


    }; // BundleInformation::MlacpBundleCounters


    class Protect : public Entity
    {
        public:
            Protect();
            ~Protect();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class ProtectBundles : public Entity
        {
            public:
                ProtectBundles();
                ~ProtectBundles();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class ProtectBundle : public Entity
            {
                public:
                    ProtectBundle();
                    ~ProtectBundle();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value bundle_interface; //type: string


                class ProtectBundleItem : public Entity
                {
                    public:
                        ProtectBundleItem();
                        ~ProtectBundleItem();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value bundle_interface_handle; //type: string
                        Value interface_up; //type: boolean
                        Value registered; //type: boolean
                        Value slow_path_up; //type: boolean
                        Value slow_path_trigger; //type: boolean
                        Value minimum_active_links; //type: uint32
                        Value minimum_bandwidth; //type: uint32
                        Value event_type; //type: BmdBagTargetEnum
                        Value time_stamp; //type: uint64


                    class MemberInfo : public Entity
                    {
                        public:
                            MemberInfo();
                            ~MemberInfo();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value interface_handle; //type: string
                            Value underlying_link_id; //type: uint16
                            Value link_order_number; //type: uint16
                            Value bandwidth; //type: uint32
                            Value node; //type: string
                            Value active; //type: boolean
                            Value notification_received; //type: boolean
                            Value slow_path_up; //type: boolean
                            Value time_stamp; //type: uint64




                    }; // BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem::MemberInfo> > member_info;
                        class BmdBagTargetEnum;


                }; // BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Protect::ProtectBundles::ProtectBundle::ProtectBundleItem> protect_bundle_item;


            }; // BundleInformation::Protect::ProtectBundles::ProtectBundle


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Protect::ProtectBundles::ProtectBundle> > protect_bundle;


        }; // BundleInformation::Protect::ProtectBundles


            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Protect::ProtectBundles> protect_bundles;


    }; // BundleInformation::Protect


    class MlacpBrief : public Entity
    {
        public:
            MlacpBrief();
            ~MlacpBrief();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class MlacpBundleBriefs : public Entity
        {
            public:
                MlacpBundleBriefs();
                ~MlacpBundleBriefs();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class MlacpBundleBrief : public Entity
            {
                public:
                    MlacpBundleBrief();
                    ~MlacpBundleBrief();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value bundle_interface; //type: string


                class MlacpBundleItemBrief : public Entity
                {
                    public:
                        MlacpBundleItemBrief();
                        ~MlacpBundleItemBrief();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class MlacpData : public Entity
                    {
                        public:
                            MlacpData();
                            ~MlacpData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class IccpGroupData : public Entity
                        {
                            public:
                                IccpGroupData();
                                ~IccpGroupData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value iccp_group_id; //type: uint32
                                Value singleton; //type: boolean
                                Value connect_timer_running; //type: uint64


                            class NodeData : public Entity
                            {
                                public:
                                    NodeData();
                                    ~NodeData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value mlacp_node_id; //type: uint8
                                    Value ldp_id; //type: string
                                    Value version_number; //type: uint32
                                    Value node_state; //type: BmdMlacpNodeStateEnumEnum
                                    Value iccp_group_state; //type: BmdMlacpNodeSyncEnumEnum


                                class SystemId : public Entity
                                {
                                    public:
                                        SystemId();
                                        ~SystemId();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value system_prio; //type: uint16


                                    class SystemMacAddr : public Entity
                                    {
                                        public:
                                            SystemMacAddr();
                                            ~SystemMacAddr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value macaddr; //type: string




                                    }; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr


                                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr> system_mac_addr;


                                }; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData::SystemId> system_id;
                                    class BmdMlacpNodeSyncEnumEnum;
                                    class BmdMlacpNodeStateEnumEnum;


                            }; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData


                                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData::NodeData> > node_data;


                        }; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData


                        class BundleData : public Entity
                        {
                            public:
                                BundleData();
                                ~BundleData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bundle_interface_key; //type: uint16
                                Value media_type; //type: BundleMediaEnum
                                Value redundancy_object_id; //type: uint64


                            class MlacpBundleData : public Entity
                            {
                                public:
                                    MlacpBundleData();
                                    ~MlacpBundleData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value bundle_name; //type: string
                                    Value mlacp_node_id; //type: uint8
                                    Value aggregator_id; //type: uint16
                                    Value bundle_state; //type: BmdMlacpBdlStateEnumEnum
                                    Value port_priority; //type: uint16


                                class MacAddress : public Entity
                                {
                                    public:
                                        MacAddress();
                                        ~MacAddress();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value address; //type: string




                                }; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData::MacAddress> mac_address;
                                    class BmdMlacpBdlStateEnumEnum;


                            }; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData


                            class MlacpMemberData : public Entity
                            {
                                public:
                                    MlacpMemberData();
                                    ~MlacpMemberData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value port_name; //type: string
                                    Value interface_handle; //type: string
                                    Value mlacp_node_id; //type: uint8
                                    Value port_number; //type: uint16
                                    Value operational_priority; //type: uint16
                                    Value configured_priority; //type: uint16
                                    Value member_state; //type: BmdMlacpMbrStateEnumEnum


                                    class BmdMlacpMbrStateEnumEnum;


                            }; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData


                                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpBundleData> > mlacp_bundle_data;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData::MlacpMemberData> > mlacp_member_data;
                                class BundleMediaEnum;


                        }; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData


                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::BundleData> > bundle_data;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData::IccpGroupData> iccp_group_data;


                    }; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief::MlacpData> > mlacp_data;


                }; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief::MlacpBundleItemBrief> mlacp_bundle_item_brief;


            }; // BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs::MlacpBundleBrief> > mlacp_bundle_brief;


        }; // BundleInformation::MlacpBrief::MlacpBundleBriefs


        class MlacpBriefIccpGroups : public Entity
        {
            public:
                MlacpBriefIccpGroups();
                ~MlacpBriefIccpGroups();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class MlacpBriefIccpGroup : public Entity
            {
                public:
                    MlacpBriefIccpGroup();
                    ~MlacpBriefIccpGroup();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value iccp_group; //type: uint32


                class MlacpBriefIccpGroupItem : public Entity
                {
                    public:
                        MlacpBriefIccpGroupItem();
                        ~MlacpBriefIccpGroupItem();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class IccpGroupData : public Entity
                    {
                        public:
                            IccpGroupData();
                            ~IccpGroupData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value iccp_group_id; //type: uint32
                            Value singleton; //type: boolean
                            Value connect_timer_running; //type: uint64


                        class NodeData : public Entity
                        {
                            public:
                                NodeData();
                                ~NodeData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value mlacp_node_id; //type: uint8
                                Value ldp_id; //type: string
                                Value version_number; //type: uint32
                                Value node_state; //type: BmdMlacpNodeStateEnumEnum
                                Value iccp_group_state; //type: BmdMlacpNodeSyncEnumEnum


                            class SystemId : public Entity
                            {
                                public:
                                    SystemId();
                                    ~SystemId();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value system_prio; //type: uint16


                                class SystemMacAddr : public Entity
                                {
                                    public:
                                        SystemMacAddr();
                                        ~SystemMacAddr();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value macaddr; //type: string




                                }; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr> system_mac_addr;


                            }; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData::SystemId> system_id;
                                class BmdMlacpNodeSyncEnumEnum;
                                class BmdMlacpNodeStateEnumEnum;


                        }; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData


                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData::NodeData> > node_data;


                    }; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData


                    class BundleData : public Entity
                    {
                        public:
                            BundleData();
                            ~BundleData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value bundle_interface_key; //type: uint16
                            Value media_type; //type: BundleMediaEnum
                            Value redundancy_object_id; //type: uint64


                        class MlacpBundleData : public Entity
                        {
                            public:
                                MlacpBundleData();
                                ~MlacpBundleData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bundle_name; //type: string
                                Value mlacp_node_id; //type: uint8
                                Value aggregator_id; //type: uint16
                                Value bundle_state; //type: BmdMlacpBdlStateEnumEnum
                                Value port_priority; //type: uint16


                            class MacAddress : public Entity
                            {
                                public:
                                    MacAddress();
                                    ~MacAddress();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address; //type: string




                            }; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData::MacAddress> mac_address;
                                class BmdMlacpBdlStateEnumEnum;


                        }; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData


                        class MlacpMemberData : public Entity
                        {
                            public:
                                MlacpMemberData();
                                ~MlacpMemberData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value port_name; //type: string
                                Value interface_handle; //type: string
                                Value mlacp_node_id; //type: uint8
                                Value port_number; //type: uint16
                                Value operational_priority; //type: uint16
                                Value configured_priority; //type: uint16
                                Value member_state; //type: BmdMlacpMbrStateEnumEnum


                                class BmdMlacpMbrStateEnumEnum;


                        }; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData


                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpBundleData> > mlacp_bundle_data;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData::MlacpMemberData> > mlacp_member_data;
                            class BundleMediaEnum;


                    }; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::BundleData> > bundle_data;
                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem::IccpGroupData> iccp_group_data;


                }; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup::MlacpBriefIccpGroupItem> mlacp_brief_iccp_group_item;


            }; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups::MlacpBriefIccpGroup> > mlacp_brief_iccp_group;


        }; // BundleInformation::MlacpBrief::MlacpBriefIccpGroups


            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBriefIccpGroups> mlacp_brief_iccp_groups;
            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief::MlacpBundleBriefs> mlacp_bundle_briefs;


    }; // BundleInformation::MlacpBrief


    class Mlacp : public Entity
    {
        public:
            Mlacp();
            ~Mlacp();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class MlacpBundles : public Entity
        {
            public:
                MlacpBundles();
                ~MlacpBundles();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class MlacpBundle : public Entity
            {
                public:
                    MlacpBundle();
                    ~MlacpBundle();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value bundle_interface; //type: string


                class MlacpBundleItem : public Entity
                {
                    public:
                        MlacpBundleItem();
                        ~MlacpBundleItem();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class MlacpData : public Entity
                    {
                        public:
                            MlacpData();
                            ~MlacpData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class IccpGroupData : public Entity
                        {
                            public:
                                IccpGroupData();
                                ~IccpGroupData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value iccp_group_id; //type: uint32
                                Value singleton; //type: boolean
                                Value connect_timer_running; //type: uint64


                            class NodeData : public Entity
                            {
                                public:
                                    NodeData();
                                    ~NodeData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value mlacp_node_id; //type: uint8
                                    Value ldp_id; //type: string
                                    Value version_number; //type: uint32
                                    Value node_state; //type: BmdMlacpNodeStateEnumEnum
                                    Value iccp_group_state; //type: BmdMlacpNodeSyncEnumEnum


                                class SystemId : public Entity
                                {
                                    public:
                                        SystemId();
                                        ~SystemId();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value system_prio; //type: uint16


                                    class SystemMacAddr : public Entity
                                    {
                                        public:
                                            SystemMacAddr();
                                            ~SystemMacAddr();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value macaddr; //type: string




                                    }; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr


                                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId::SystemMacAddr> system_mac_addr;


                                }; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData::SystemId> system_id;
                                    class BmdMlacpNodeSyncEnumEnum;
                                    class BmdMlacpNodeStateEnumEnum;


                            }; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData


                                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData::NodeData> > node_data;


                        }; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData


                        class BundleData : public Entity
                        {
                            public:
                                BundleData();
                                ~BundleData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bundle_interface_key; //type: uint16
                                Value media_type; //type: BundleMediaEnum
                                Value redundancy_object_id; //type: uint64


                            class MlacpBundleData : public Entity
                            {
                                public:
                                    MlacpBundleData();
                                    ~MlacpBundleData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value bundle_name; //type: string
                                    Value mlacp_node_id; //type: uint8
                                    Value aggregator_id; //type: uint16
                                    Value bundle_state; //type: BmdMlacpBdlStateEnumEnum
                                    Value port_priority; //type: uint16


                                class MacAddress : public Entity
                                {
                                    public:
                                        MacAddress();
                                        ~MacAddress();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value address; //type: string




                                }; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData::MacAddress> mac_address;
                                    class BmdMlacpBdlStateEnumEnum;


                            }; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData


                            class MlacpMemberData : public Entity
                            {
                                public:
                                    MlacpMemberData();
                                    ~MlacpMemberData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value port_name; //type: string
                                    Value interface_handle; //type: string
                                    Value mlacp_node_id; //type: uint8
                                    Value port_number; //type: uint16
                                    Value operational_priority; //type: uint16
                                    Value configured_priority; //type: uint16
                                    Value member_state; //type: BmdMlacpMbrStateEnumEnum


                                    class BmdMlacpMbrStateEnumEnum;


                            }; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData


                                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpBundleData> > mlacp_bundle_data;
                                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData::MlacpMemberData> > mlacp_member_data;
                                class BundleMediaEnum;


                        }; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData


                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::BundleData> > bundle_data;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData::IccpGroupData> iccp_group_data;


                    }; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem::MlacpData> > mlacp_data;


                }; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle::MlacpBundleItem> mlacp_bundle_item;


            }; // BundleInformation::Mlacp::MlacpBundles::MlacpBundle


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles::MlacpBundle> > mlacp_bundle;


        }; // BundleInformation::Mlacp::MlacpBundles


        class MlacpIccpGroups : public Entity
        {
            public:
                MlacpIccpGroups();
                ~MlacpIccpGroups();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class MlacpIccpGroup : public Entity
            {
                public:
                    MlacpIccpGroup();
                    ~MlacpIccpGroup();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value iccp_group; //type: uint32


                class MlacpIccpGroupItem : public Entity
                {
                    public:
                        MlacpIccpGroupItem();
                        ~MlacpIccpGroupItem();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class IccpGroupData : public Entity
                    {
                        public:
                            IccpGroupData();
                            ~IccpGroupData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value iccp_group_id; //type: uint32
                            Value singleton; //type: boolean
                            Value connect_timer_running; //type: uint64


                        class NodeData : public Entity
                        {
                            public:
                                NodeData();
                                ~NodeData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value mlacp_node_id; //type: uint8
                                Value ldp_id; //type: string
                                Value version_number; //type: uint32
                                Value node_state; //type: BmdMlacpNodeStateEnumEnum
                                Value iccp_group_state; //type: BmdMlacpNodeSyncEnumEnum


                            class SystemId : public Entity
                            {
                                public:
                                    SystemId();
                                    ~SystemId();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value system_prio; //type: uint16


                                class SystemMacAddr : public Entity
                                {
                                    public:
                                        SystemMacAddr();
                                        ~SystemMacAddr();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value macaddr; //type: string




                                }; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId::SystemMacAddr> system_mac_addr;


                            }; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData::SystemId> system_id;
                                class BmdMlacpNodeSyncEnumEnum;
                                class BmdMlacpNodeStateEnumEnum;


                        }; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData


                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData::NodeData> > node_data;


                    }; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData


                    class BundleData : public Entity
                    {
                        public:
                            BundleData();
                            ~BundleData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value bundle_interface_key; //type: uint16
                            Value media_type; //type: BundleMediaEnum
                            Value redundancy_object_id; //type: uint64


                        class MlacpBundleData : public Entity
                        {
                            public:
                                MlacpBundleData();
                                ~MlacpBundleData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bundle_name; //type: string
                                Value mlacp_node_id; //type: uint8
                                Value aggregator_id; //type: uint16
                                Value bundle_state; //type: BmdMlacpBdlStateEnumEnum
                                Value port_priority; //type: uint16


                            class MacAddress : public Entity
                            {
                                public:
                                    MacAddress();
                                    ~MacAddress();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value address; //type: string




                            }; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData::MacAddress> mac_address;
                                class BmdMlacpBdlStateEnumEnum;


                        }; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData


                        class MlacpMemberData : public Entity
                        {
                            public:
                                MlacpMemberData();
                                ~MlacpMemberData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value port_name; //type: string
                                Value interface_handle; //type: string
                                Value mlacp_node_id; //type: uint8
                                Value port_number; //type: uint16
                                Value operational_priority; //type: uint16
                                Value configured_priority; //type: uint16
                                Value member_state; //type: BmdMlacpMbrStateEnumEnum


                                class BmdMlacpMbrStateEnumEnum;


                        }; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData


                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpBundleData> > mlacp_bundle_data;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData::MlacpMemberData> > mlacp_member_data;
                            class BundleMediaEnum;


                    }; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::BundleData> > bundle_data;
                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem::IccpGroupData> iccp_group_data;


                }; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup::MlacpIccpGroupItem> mlacp_iccp_group_item;


            }; // BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups::MlacpIccpGroup> > mlacp_iccp_group;


        }; // BundleInformation::Mlacp::MlacpIccpGroups


            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpBundles> mlacp_bundles;
            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp::MlacpIccpGroups> mlacp_iccp_groups;


    }; // BundleInformation::Mlacp


    class MacAllocation : public Entity
    {
        public:
            MacAllocation();
            ~MacAllocation();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class MacAllocationGlobal : public Entity
        {
            public:
                MacAllocationGlobal();
                ~MacAllocationGlobal();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class MacAllocationGlobalItem : public Entity
            {
                public:
                    MacAllocationGlobalItem();
                    ~MacAllocationGlobalItem();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class MacAddress : public Entity
                {
                    public:
                        MacAddress();
                        ~MacAddress();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value address; //type: string




                }; // BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress


                    std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem::MacAddress> > mac_address;


            }; // BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem


                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MacAllocation::MacAllocationGlobal::MacAllocationGlobalItem> mac_allocation_global_item;


        }; // BundleInformation::MacAllocation::MacAllocationGlobal


            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MacAllocation::MacAllocationGlobal> mac_allocation_global;


    }; // BundleInformation::MacAllocation


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


        class EventsMembers : public Entity
        {
            public:
                EventsMembers();
                ~EventsMembers();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class EventsMember : public Entity
            {
                public:
                    EventsMember();
                    ~EventsMember();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value member_interface; //type: string


                class EventsMemberItem : public Entity
                {
                    public:
                        EventsMemberItem();
                        ~EventsMemberItem();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value item_name; //type: string


                    class Items : public Entity
                    {
                        public:
                            Items();
                            ~Items();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value event_type; //type: BmdBagTargetEnum


                        class MemberEvtInfo : public Entity
                        {
                            public:
                                MemberEvtInfo();
                                ~MemberEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value member_event_type; //type: BmdBagEventMbrItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo::Data> data;
                                class BmdBagEventMbrItemEnum;


                        }; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo


                        class BundleEvtInfo : public Entity
                        {
                            public:
                                BundleEvtInfo();
                                ~BundleEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bundle_event_type; //type: BmdBagEventBdlItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo::Data> data;
                                class BmdBagEventBdlItemEnum;


                        }; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo


                        class RgEvtInfo : public Entity
                        {
                            public:
                                RgEvtInfo();
                                ~RgEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value rg_event_type; //type: BmdBagEventRgItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo::Data> data;
                                class BmdBagEventRgItemEnum;


                        }; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::BundleEvtInfo> bundle_evt_info;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::MemberEvtInfo> member_evt_info;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items::RgEvtInfo> rg_evt_info;
                            class BmdBagTargetEnum;


                    }; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem::Items> > items;


                }; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem


                class EventsMemberAncestor : public Entity
                {
                    public:
                        EventsMemberAncestor();
                        ~EventsMemberAncestor();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value item_name; //type: string


                    class Items : public Entity
                    {
                        public:
                            Items();
                            ~Items();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value event_type; //type: BmdBagTargetEnum


                        class MemberEvtInfo : public Entity
                        {
                            public:
                                MemberEvtInfo();
                                ~MemberEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value member_event_type; //type: BmdBagEventMbrItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo::Data> data;
                                class BmdBagEventMbrItemEnum;


                        }; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo


                        class BundleEvtInfo : public Entity
                        {
                            public:
                                BundleEvtInfo();
                                ~BundleEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bundle_event_type; //type: BmdBagEventBdlItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo::Data> data;
                                class BmdBagEventBdlItemEnum;


                        }; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo


                        class RgEvtInfo : public Entity
                        {
                            public:
                                RgEvtInfo();
                                ~RgEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value rg_event_type; //type: BmdBagEventRgItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo::Data> data;
                                class BmdBagEventRgItemEnum;


                        }; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::BundleEvtInfo> bundle_evt_info;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::MemberEvtInfo> member_evt_info;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items::RgEvtInfo> rg_evt_info;
                            class BmdBagTargetEnum;


                    }; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor::Items> > items;


                }; // BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberAncestor> events_member_ancestor;
                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember::EventsMemberItem> events_member_item;


            }; // BundleInformation::Events::EventsMembers::EventsMember


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers::EventsMember> > events_member;


        }; // BundleInformation::Events::EventsMembers


        class EventsBundles : public Entity
        {
            public:
                EventsBundles();
                ~EventsBundles();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class EventsBundle : public Entity
            {
                public:
                    EventsBundle();
                    ~EventsBundle();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value bundle_interface; //type: string


                class EventsBundleAncestor : public Entity
                {
                    public:
                        EventsBundleAncestor();
                        ~EventsBundleAncestor();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value item_name; //type: string


                    class Items : public Entity
                    {
                        public:
                            Items();
                            ~Items();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value event_type; //type: BmdBagTargetEnum


                        class MemberEvtInfo : public Entity
                        {
                            public:
                                MemberEvtInfo();
                                ~MemberEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value member_event_type; //type: BmdBagEventMbrItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo::Data> data;
                                class BmdBagEventMbrItemEnum;


                        }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo


                        class BundleEvtInfo : public Entity
                        {
                            public:
                                BundleEvtInfo();
                                ~BundleEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bundle_event_type; //type: BmdBagEventBdlItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo::Data> data;
                                class BmdBagEventBdlItemEnum;


                        }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo


                        class RgEvtInfo : public Entity
                        {
                            public:
                                RgEvtInfo();
                                ~RgEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value rg_event_type; //type: BmdBagEventRgItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo::Data> data;
                                class BmdBagEventRgItemEnum;


                        }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::BundleEvtInfo> bundle_evt_info;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::MemberEvtInfo> member_evt_info;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items::RgEvtInfo> rg_evt_info;
                            class BmdBagTargetEnum;


                    }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor::Items> > items;


                }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor


                class EventsBundleItem : public Entity
                {
                    public:
                        EventsBundleItem();
                        ~EventsBundleItem();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value item_name; //type: string


                    class Items : public Entity
                    {
                        public:
                            Items();
                            ~Items();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value event_type; //type: BmdBagTargetEnum


                        class MemberEvtInfo : public Entity
                        {
                            public:
                                MemberEvtInfo();
                                ~MemberEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value member_event_type; //type: BmdBagEventMbrItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo::Data> data;
                                class BmdBagEventMbrItemEnum;


                        }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo


                        class BundleEvtInfo : public Entity
                        {
                            public:
                                BundleEvtInfo();
                                ~BundleEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bundle_event_type; //type: BmdBagEventBdlItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo::Data> data;
                                class BmdBagEventBdlItemEnum;


                        }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo


                        class RgEvtInfo : public Entity
                        {
                            public:
                                RgEvtInfo();
                                ~RgEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value rg_event_type; //type: BmdBagEventRgItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo::Data> data;
                                class BmdBagEventRgItemEnum;


                        }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::BundleEvtInfo> bundle_evt_info;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::MemberEvtInfo> member_evt_info;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items::RgEvtInfo> rg_evt_info;
                            class BmdBagTargetEnum;


                    }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem::Items> > items;


                }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem


                class EventsBundleDescendant : public Entity
                {
                    public:
                        EventsBundleDescendant();
                        ~EventsBundleDescendant();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class EventsItem : public Entity
                    {
                        public:
                            EventsItem();
                            ~EventsItem();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value item_name; //type: string


                        class Items : public Entity
                        {
                            public:
                                Items();
                                ~Items();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value event_type; //type: BmdBagTargetEnum


                            class MemberEvtInfo : public Entity
                            {
                                public:
                                    MemberEvtInfo();
                                    ~MemberEvtInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value member_event_type; //type: BmdBagEventMbrItemEnum
                                    Value time_stamp; //type: uint64


                                class Data : public Entity
                                {
                                    public:
                                        Data();
                                        ~Data();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value data_type; //type: BmdBagEventDataEnum
                                        Value no_data; //type: uint8
                                        Value error; //type: uint32
                                        Value string_data; //type: string


                                        class BmdBagEventDataEnum;


                                }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo::Data> data;
                                    class BmdBagEventMbrItemEnum;


                            }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo


                            class BundleEvtInfo : public Entity
                            {
                                public:
                                    BundleEvtInfo();
                                    ~BundleEvtInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value bundle_event_type; //type: BmdBagEventBdlItemEnum
                                    Value time_stamp; //type: uint64


                                class Data : public Entity
                                {
                                    public:
                                        Data();
                                        ~Data();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value data_type; //type: BmdBagEventDataEnum
                                        Value no_data; //type: uint8
                                        Value error; //type: uint32
                                        Value string_data; //type: string


                                        class BmdBagEventDataEnum;


                                }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo::Data> data;
                                    class BmdBagEventBdlItemEnum;


                            }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo


                            class RgEvtInfo : public Entity
                            {
                                public:
                                    RgEvtInfo();
                                    ~RgEvtInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value rg_event_type; //type: BmdBagEventRgItemEnum
                                    Value time_stamp; //type: uint64


                                class Data : public Entity
                                {
                                    public:
                                        Data();
                                        ~Data();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value data_type; //type: BmdBagEventDataEnum
                                        Value no_data; //type: uint8
                                        Value error; //type: uint32
                                        Value string_data; //type: string


                                        class BmdBagEventDataEnum;


                                }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo::Data> data;
                                    class BmdBagEventRgItemEnum;


                            }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::BundleEvtInfo> bundle_evt_info;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::MemberEvtInfo> member_evt_info;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items::RgEvtInfo> rg_evt_info;
                                class BmdBagTargetEnum;


                        }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items


                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem::Items> > items;


                    }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant::EventsItem> > events_item;


                }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant


                class EventsBundleChildrenMembers : public Entity
                {
                    public:
                        EventsBundleChildrenMembers();
                        ~EventsBundleChildrenMembers();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class EventsBundleChildrenMember : public Entity
                    {
                        public:
                            EventsBundleChildrenMember();
                            ~EventsBundleChildrenMember();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value member_interface; //type: string
                            Value item_name; //type: string


                        class Items : public Entity
                        {
                            public:
                                Items();
                                ~Items();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value event_type; //type: BmdBagTargetEnum


                            class MemberEvtInfo : public Entity
                            {
                                public:
                                    MemberEvtInfo();
                                    ~MemberEvtInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value member_event_type; //type: BmdBagEventMbrItemEnum
                                    Value time_stamp; //type: uint64


                                class Data : public Entity
                                {
                                    public:
                                        Data();
                                        ~Data();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value data_type; //type: BmdBagEventDataEnum
                                        Value no_data; //type: uint8
                                        Value error; //type: uint32
                                        Value string_data; //type: string


                                        class BmdBagEventDataEnum;


                                }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo::Data> data;
                                    class BmdBagEventMbrItemEnum;


                            }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo


                            class BundleEvtInfo : public Entity
                            {
                                public:
                                    BundleEvtInfo();
                                    ~BundleEvtInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value bundle_event_type; //type: BmdBagEventBdlItemEnum
                                    Value time_stamp; //type: uint64


                                class Data : public Entity
                                {
                                    public:
                                        Data();
                                        ~Data();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value data_type; //type: BmdBagEventDataEnum
                                        Value no_data; //type: uint8
                                        Value error; //type: uint32
                                        Value string_data; //type: string


                                        class BmdBagEventDataEnum;


                                }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo::Data> data;
                                    class BmdBagEventBdlItemEnum;


                            }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo


                            class RgEvtInfo : public Entity
                            {
                                public:
                                    RgEvtInfo();
                                    ~RgEvtInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value rg_event_type; //type: BmdBagEventRgItemEnum
                                    Value time_stamp; //type: uint64


                                class Data : public Entity
                                {
                                    public:
                                        Data();
                                        ~Data();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value data_type; //type: BmdBagEventDataEnum
                                        Value no_data; //type: uint8
                                        Value error; //type: uint32
                                        Value string_data; //type: string


                                        class BmdBagEventDataEnum;


                                }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo::Data> data;
                                    class BmdBagEventRgItemEnum;


                            }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::BundleEvtInfo> bundle_evt_info;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::MemberEvtInfo> member_evt_info;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items::RgEvtInfo> rg_evt_info;
                                class BmdBagTargetEnum;


                        }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items


                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember::Items> > items;


                    }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers::EventsBundleChildrenMember> > events_bundle_children_member;


                }; // BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleAncestor> events_bundle_ancestor;
                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleChildrenMembers> events_bundle_children_members;
                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleDescendant> events_bundle_descendant;
                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle::EventsBundleItem> events_bundle_item;


            }; // BundleInformation::Events::EventsBundles::EventsBundle


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles::EventsBundle> > events_bundle;


        }; // BundleInformation::Events::EventsBundles


            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsBundles> events_bundles;
            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events::EventsMembers> events_members;


    }; // BundleInformation::Events


    class EventsBdl : public Entity
    {
        public:
            EventsBdl();
            ~EventsBdl();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class EventsBdlMembers : public Entity
        {
            public:
                EventsBdlMembers();
                ~EventsBdlMembers();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class EventsBdlMember : public Entity
            {
                public:
                    EventsBdlMember();
                    ~EventsBdlMember();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value member_interface; //type: string


                class EventsBdlMemberAncestor : public Entity
                {
                    public:
                        EventsBdlMemberAncestor();
                        ~EventsBdlMemberAncestor();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value item_name; //type: string


                    class Items : public Entity
                    {
                        public:
                            Items();
                            ~Items();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value event_type; //type: BmdBagTargetEnum


                        class MemberEvtInfo : public Entity
                        {
                            public:
                                MemberEvtInfo();
                                ~MemberEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value member_event_type; //type: BmdBagEventMbrItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo::Data> data;
                                class BmdBagEventMbrItemEnum;


                        }; // BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo


                        class BundleEvtInfo : public Entity
                        {
                            public:
                                BundleEvtInfo();
                                ~BundleEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bundle_event_type; //type: BmdBagEventBdlItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo::Data> data;
                                class BmdBagEventBdlItemEnum;


                        }; // BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo


                        class RgEvtInfo : public Entity
                        {
                            public:
                                RgEvtInfo();
                                ~RgEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value rg_event_type; //type: BmdBagEventRgItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo::Data> data;
                                class BmdBagEventRgItemEnum;


                        }; // BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::BundleEvtInfo> bundle_evt_info;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::MemberEvtInfo> member_evt_info;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items::RgEvtInfo> rg_evt_info;
                            class BmdBagTargetEnum;


                    }; // BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor::Items> > items;


                }; // BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember::EventsBdlMemberAncestor> events_bdl_member_ancestor;


            }; // BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers::EventsBdlMember> > events_bdl_member;


        }; // BundleInformation::EventsBdl::EventsBdlMembers


        class EventsBdlBundles : public Entity
        {
            public:
                EventsBdlBundles();
                ~EventsBdlBundles();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class EventsBdlBundle : public Entity
            {
                public:
                    EventsBdlBundle();
                    ~EventsBdlBundle();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value bundle_interface; //type: string


                class EventsBdlBundleItem : public Entity
                {
                    public:
                        EventsBdlBundleItem();
                        ~EventsBdlBundleItem();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value item_name; //type: string


                    class Items : public Entity
                    {
                        public:
                            Items();
                            ~Items();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value event_type; //type: BmdBagTargetEnum


                        class MemberEvtInfo : public Entity
                        {
                            public:
                                MemberEvtInfo();
                                ~MemberEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value member_event_type; //type: BmdBagEventMbrItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo::Data> data;
                                class BmdBagEventMbrItemEnum;


                        }; // BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo


                        class BundleEvtInfo : public Entity
                        {
                            public:
                                BundleEvtInfo();
                                ~BundleEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bundle_event_type; //type: BmdBagEventBdlItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo::Data> data;
                                class BmdBagEventBdlItemEnum;


                        }; // BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo


                        class RgEvtInfo : public Entity
                        {
                            public:
                                RgEvtInfo();
                                ~RgEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value rg_event_type; //type: BmdBagEventRgItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo::Data> data;
                                class BmdBagEventRgItemEnum;


                        }; // BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::BundleEvtInfo> bundle_evt_info;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::MemberEvtInfo> member_evt_info;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items::RgEvtInfo> rg_evt_info;
                            class BmdBagTargetEnum;


                    }; // BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem::Items> > items;


                }; // BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle::EventsBdlBundleItem> events_bdl_bundle_item;


            }; // BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles::EventsBdlBundle> > events_bdl_bundle;


        }; // BundleInformation::EventsBdl::EventsBdlBundles


        class EventsBdlIccpGroups : public Entity
        {
            public:
                EventsBdlIccpGroups();
                ~EventsBdlIccpGroups();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class EventsBdlIccpGroup : public Entity
            {
                public:
                    EventsBdlIccpGroup();
                    ~EventsBdlIccpGroup();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value iccp_group; //type: uint32


                class EventsBdlBundleDescendantIccpGroup : public Entity
                {
                    public:
                        EventsBdlBundleDescendantIccpGroup();
                        ~EventsBdlBundleDescendantIccpGroup();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class EventsItem : public Entity
                    {
                        public:
                            EventsItem();
                            ~EventsItem();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value item_name; //type: string


                        class Items : public Entity
                        {
                            public:
                                Items();
                                ~Items();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value event_type; //type: BmdBagTargetEnum


                            class MemberEvtInfo : public Entity
                            {
                                public:
                                    MemberEvtInfo();
                                    ~MemberEvtInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value member_event_type; //type: BmdBagEventMbrItemEnum
                                    Value time_stamp; //type: uint64


                                class Data : public Entity
                                {
                                    public:
                                        Data();
                                        ~Data();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value data_type; //type: BmdBagEventDataEnum
                                        Value no_data; //type: uint8
                                        Value error; //type: uint32
                                        Value string_data; //type: string


                                        class BmdBagEventDataEnum;


                                }; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data> data;
                                    class BmdBagEventMbrItemEnum;


                            }; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo


                            class BundleEvtInfo : public Entity
                            {
                                public:
                                    BundleEvtInfo();
                                    ~BundleEvtInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value bundle_event_type; //type: BmdBagEventBdlItemEnum
                                    Value time_stamp; //type: uint64


                                class Data : public Entity
                                {
                                    public:
                                        Data();
                                        ~Data();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value data_type; //type: BmdBagEventDataEnum
                                        Value no_data; //type: uint8
                                        Value error; //type: uint32
                                        Value string_data; //type: string


                                        class BmdBagEventDataEnum;


                                }; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data> data;
                                    class BmdBagEventBdlItemEnum;


                            }; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo


                            class RgEvtInfo : public Entity
                            {
                                public:
                                    RgEvtInfo();
                                    ~RgEvtInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value rg_event_type; //type: BmdBagEventRgItemEnum
                                    Value time_stamp; //type: uint64


                                class Data : public Entity
                                {
                                    public:
                                        Data();
                                        ~Data();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value data_type; //type: BmdBagEventDataEnum
                                        Value no_data; //type: uint8
                                        Value error; //type: uint32
                                        Value string_data; //type: string


                                        class BmdBagEventDataEnum;


                                }; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data> data;
                                    class BmdBagEventRgItemEnum;


                            }; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo> bundle_evt_info;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo> member_evt_info;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo> rg_evt_info;
                                class BmdBagTargetEnum;


                        }; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items


                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem::Items> > items;


                    }; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup::EventsItem> > events_item;


                }; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup::EventsBdlBundleDescendantIccpGroup> events_bdl_bundle_descendant_iccp_group;


            }; // BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups::EventsBdlIccpGroup> > events_bdl_iccp_group;


        }; // BundleInformation::EventsBdl::EventsBdlIccpGroups


            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlBundles> events_bdl_bundles;
            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlIccpGroups> events_bdl_iccp_groups;
            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl::EventsBdlMembers> events_bdl_members;


    }; // BundleInformation::EventsBdl


    class BundleBriefs : public Entity
    {
        public:
            BundleBriefs();
            ~BundleBriefs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class BundleBrief : public Entity
        {
            public:
                BundleBrief();
                ~BundleBrief();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value bundle_interface; //type: string


            class BundleBriefItem : public Entity
            {
                public:
                    BundleBriefItem();
                    ~BundleBriefItem();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value bundle_interface_name; //type: string
                    Value available_bandwidth; //type: uint32
                    Value effective_bandwidth; //type: uint32
                    Value configured_bandwidth; //type: uint32
                    Value minimum_active_links; //type: uint8
                    Value maximum_active_links; //type: uint8
                    Value maximum_active_links_source; //type: BmWhichSystemEnum
                    Value minimum_bandwidth; //type: uint32
                    Value primary_member; //type: string
                    Value bundle_status; //type: BmBdlStateEnum
                    Value active_member_count; //type: uint16
                    Value standby_member_count; //type: uint16
                    Value configured_member_count; //type: uint16
                    Value mac_source; //type: BmBdlMacSourceEnum
                    Value mac_source_member; //type: string
                    Value inter_chassis; //type: boolean
                    Value is_active; //type: boolean
                    Value lacp_status; //type: BmFeatureStatusEnum
                    Value mlacp_status; //type: BmFeatureStatusEnum
                    Value ipv4bfd_status; //type: BmFeatureStatusEnum
                    Value link_order_status; //type: BmFeatureStatusEnum
                    Value ipv6bfd_status; //type: BmFeatureStatusEnum
                    Value load_balance_hash_type; //type: string
                    Value load_balance_locality_threshold; //type: uint16
                    Value suppression_timer; //type: uint16
                    Value wait_while_timer; //type: uint16
                    Value collector_max_delay; //type: uint16
                    Value cisco_extensions; //type: boolean
                    Value lacp_nonrevertive; //type: boolean
                    Value iccp_group_id; //type: uint32
                    Value active_foreign_member_count; //type: uint16
                    Value configured_foreign_member_count; //type: uint16
                    Value switchover_type; //type: BmdMlacpSwitchoverEnum
                    Value maximize_threshold_value_links; //type: uint32
                    Value maximize_threshold_value_band_width; //type: uint32
                    Value mlacp_mode; //type: BundleMlacpModeEnum
                    Value recovery_delay; //type: uint16
                    Value singleton; //type: boolean


                class MacAddress : public Entity
                {
                    public:
                        MacAddress();
                        ~MacAddress();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value address; //type: string




                }; // BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress


                class BfdConfig : public Entity
                {
                    public:
                        BfdConfig();
                        ~BfdConfig();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value bundle_status; //type: BmdBfdBdlStateEnum
                        Value start_timer; //type: uint32
                        Value nbr_unconfig_timer; //type: uint32
                        Value pref_multiplier; //type: uint16
                        Value pref_min_interval; //type: uint32
                        Value pref_echo_min_interval; //type: uint32
                        Value fast_detect; //type: boolean
                        Value mode_info; //type: uint32


                    class DestinationAddress : public Entity
                    {
                        public:
                            DestinationAddress();
                            ~DestinationAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value af; //type: BmAfIdEnum
                            Value ipv4; //type: string
                            Value ipv6; //type: string


                            class BmAfIdEnum;


                    }; // BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress


                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig::DestinationAddress> destination_address;
                        class BmdBfdBdlStateEnum;


                }; // BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig


                    std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::BfdConfig> > bfd_config;
                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem::MacAddress> mac_address;
                    class BmBdlStateEnum;
                    class BmFeatureStatusEnum;
                    class BmFeatureStatusEnum;
                    class BmFeatureStatusEnum;
                    class BmFeatureStatusEnum;
                    class BmBdlMacSourceEnum;
                    class BmWhichSystemEnum;
                    class BundleMlacpModeEnum;
                    class BmFeatureStatusEnum;
                    class BmdMlacpSwitchoverEnum;


            }; // BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem


                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BundleBriefs::BundleBrief::BundleBriefItem> bundle_brief_item;


        }; // BundleInformation::BundleBriefs::BundleBrief


            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BundleBriefs::BundleBrief> > bundle_brief;


    }; // BundleInformation::BundleBriefs


    class EventsMbr : public Entity
    {
        public:
            EventsMbr();
            ~EventsMbr();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class EventsMbrBundles : public Entity
        {
            public:
                EventsMbrBundles();
                ~EventsMbrBundles();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class EventsMbrBundle : public Entity
            {
                public:
                    EventsMbrBundle();
                    ~EventsMbrBundle();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value bundle_interface; //type: string


                class EventsMbrBundleChildrenMembers : public Entity
                {
                    public:
                        EventsMbrBundleChildrenMembers();
                        ~EventsMbrBundleChildrenMembers();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class EventsMbrBundleChildrenMember : public Entity
                    {
                        public:
                            EventsMbrBundleChildrenMember();
                            ~EventsMbrBundleChildrenMember();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value member_interface; //type: string
                            Value item_name; //type: string


                        class Items : public Entity
                        {
                            public:
                                Items();
                                ~Items();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value event_type; //type: BmdBagTargetEnum


                            class MemberEvtInfo : public Entity
                            {
                                public:
                                    MemberEvtInfo();
                                    ~MemberEvtInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value member_event_type; //type: BmdBagEventMbrItemEnum
                                    Value time_stamp; //type: uint64


                                class Data : public Entity
                                {
                                    public:
                                        Data();
                                        ~Data();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value data_type; //type: BmdBagEventDataEnum
                                        Value no_data; //type: uint8
                                        Value error; //type: uint32
                                        Value string_data; //type: string


                                        class BmdBagEventDataEnum;


                                }; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo::Data> data;
                                    class BmdBagEventMbrItemEnum;


                            }; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo


                            class BundleEvtInfo : public Entity
                            {
                                public:
                                    BundleEvtInfo();
                                    ~BundleEvtInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value bundle_event_type; //type: BmdBagEventBdlItemEnum
                                    Value time_stamp; //type: uint64


                                class Data : public Entity
                                {
                                    public:
                                        Data();
                                        ~Data();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value data_type; //type: BmdBagEventDataEnum
                                        Value no_data; //type: uint8
                                        Value error; //type: uint32
                                        Value string_data; //type: string


                                        class BmdBagEventDataEnum;


                                }; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo::Data> data;
                                    class BmdBagEventBdlItemEnum;


                            }; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo


                            class RgEvtInfo : public Entity
                            {
                                public:
                                    RgEvtInfo();
                                    ~RgEvtInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value rg_event_type; //type: BmdBagEventRgItemEnum
                                    Value time_stamp; //type: uint64


                                class Data : public Entity
                                {
                                    public:
                                        Data();
                                        ~Data();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value data_type; //type: BmdBagEventDataEnum
                                        Value no_data; //type: uint8
                                        Value error; //type: uint32
                                        Value string_data; //type: string


                                        class BmdBagEventDataEnum;


                                }; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo::Data> data;
                                    class BmdBagEventRgItemEnum;


                            }; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::BundleEvtInfo> bundle_evt_info;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::MemberEvtInfo> member_evt_info;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items::RgEvtInfo> rg_evt_info;
                                class BmdBagTargetEnum;


                        }; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items


                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember::Items> > items;


                    }; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers::EventsMbrBundleChildrenMember> > events_mbr_bundle_children_member;


                }; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers


                class EventsMbrBundleDescendant : public Entity
                {
                    public:
                        EventsMbrBundleDescendant();
                        ~EventsMbrBundleDescendant();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class EventsItem : public Entity
                    {
                        public:
                            EventsItem();
                            ~EventsItem();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value item_name; //type: string


                        class Items : public Entity
                        {
                            public:
                                Items();
                                ~Items();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value event_type; //type: BmdBagTargetEnum


                            class MemberEvtInfo : public Entity
                            {
                                public:
                                    MemberEvtInfo();
                                    ~MemberEvtInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value member_event_type; //type: BmdBagEventMbrItemEnum
                                    Value time_stamp; //type: uint64


                                class Data : public Entity
                                {
                                    public:
                                        Data();
                                        ~Data();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value data_type; //type: BmdBagEventDataEnum
                                        Value no_data; //type: uint8
                                        Value error; //type: uint32
                                        Value string_data; //type: string


                                        class BmdBagEventDataEnum;


                                }; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo::Data> data;
                                    class BmdBagEventMbrItemEnum;


                            }; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo


                            class BundleEvtInfo : public Entity
                            {
                                public:
                                    BundleEvtInfo();
                                    ~BundleEvtInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value bundle_event_type; //type: BmdBagEventBdlItemEnum
                                    Value time_stamp; //type: uint64


                                class Data : public Entity
                                {
                                    public:
                                        Data();
                                        ~Data();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value data_type; //type: BmdBagEventDataEnum
                                        Value no_data; //type: uint8
                                        Value error; //type: uint32
                                        Value string_data; //type: string


                                        class BmdBagEventDataEnum;


                                }; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo::Data> data;
                                    class BmdBagEventBdlItemEnum;


                            }; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo


                            class RgEvtInfo : public Entity
                            {
                                public:
                                    RgEvtInfo();
                                    ~RgEvtInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value rg_event_type; //type: BmdBagEventRgItemEnum
                                    Value time_stamp; //type: uint64


                                class Data : public Entity
                                {
                                    public:
                                        Data();
                                        ~Data();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value data_type; //type: BmdBagEventDataEnum
                                        Value no_data; //type: uint8
                                        Value error; //type: uint32
                                        Value string_data; //type: string


                                        class BmdBagEventDataEnum;


                                }; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo::Data> data;
                                    class BmdBagEventRgItemEnum;


                            }; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::BundleEvtInfo> bundle_evt_info;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::MemberEvtInfo> member_evt_info;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items::RgEvtInfo> rg_evt_info;
                                class BmdBagTargetEnum;


                        }; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items


                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem::Items> > items;


                    }; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant::EventsItem> > events_item;


                }; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleChildrenMembers> events_mbr_bundle_children_members;
                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle::EventsMbrBundleDescendant> events_mbr_bundle_descendant;


            }; // BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles::EventsMbrBundle> > events_mbr_bundle;


        }; // BundleInformation::EventsMbr::EventsMbrBundles


        class EventsMbrMembers : public Entity
        {
            public:
                EventsMbrMembers();
                ~EventsMbrMembers();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class EventsMbrMember : public Entity
            {
                public:
                    EventsMbrMember();
                    ~EventsMbrMember();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value member_interface; //type: string


                class EventsMbrMemberItem : public Entity
                {
                    public:
                        EventsMbrMemberItem();
                        ~EventsMbrMemberItem();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value item_name; //type: string


                    class Items : public Entity
                    {
                        public:
                            Items();
                            ~Items();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value event_type; //type: BmdBagTargetEnum


                        class MemberEvtInfo : public Entity
                        {
                            public:
                                MemberEvtInfo();
                                ~MemberEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value member_event_type; //type: BmdBagEventMbrItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo::Data> data;
                                class BmdBagEventMbrItemEnum;


                        }; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo


                        class BundleEvtInfo : public Entity
                        {
                            public:
                                BundleEvtInfo();
                                ~BundleEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bundle_event_type; //type: BmdBagEventBdlItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo::Data> data;
                                class BmdBagEventBdlItemEnum;


                        }; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo


                        class RgEvtInfo : public Entity
                        {
                            public:
                                RgEvtInfo();
                                ~RgEvtInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value rg_event_type; //type: BmdBagEventRgItemEnum
                                Value time_stamp; //type: uint64


                            class Data : public Entity
                            {
                                public:
                                    Data();
                                    ~Data();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value data_type; //type: BmdBagEventDataEnum
                                    Value no_data; //type: uint8
                                    Value error; //type: uint32
                                    Value string_data; //type: string


                                    class BmdBagEventDataEnum;


                            }; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo::Data> data;
                                class BmdBagEventRgItemEnum;


                        }; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::BundleEvtInfo> bundle_evt_info;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::MemberEvtInfo> member_evt_info;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items::RgEvtInfo> rg_evt_info;
                            class BmdBagTargetEnum;


                    }; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem::Items> > items;


                }; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember::EventsMbrMemberItem> events_mbr_member_item;


            }; // BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers::EventsMbrMember> > events_mbr_member;


        }; // BundleInformation::EventsMbr::EventsMbrMembers


        class EventsMbrIccpGroups : public Entity
        {
            public:
                EventsMbrIccpGroups();
                ~EventsMbrIccpGroups();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class EventsMbrIccpGroup : public Entity
            {
                public:
                    EventsMbrIccpGroup();
                    ~EventsMbrIccpGroup();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value iccp_group; //type: uint32


                class EventsMbrBundleChildrenMemberIccpGroups : public Entity
                {
                    public:
                        EventsMbrBundleChildrenMemberIccpGroups();
                        ~EventsMbrBundleChildrenMemberIccpGroups();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class EventsMbrBundleChildrenMemberIccpGroup : public Entity
                    {
                        public:
                            EventsMbrBundleChildrenMemberIccpGroup();
                            ~EventsMbrBundleChildrenMemberIccpGroup();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value member_interface; //type: string
                            Value item_name; //type: string


                        class Items : public Entity
                        {
                            public:
                                Items();
                                ~Items();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value event_type; //type: BmdBagTargetEnum


                            class MemberEvtInfo : public Entity
                            {
                                public:
                                    MemberEvtInfo();
                                    ~MemberEvtInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value member_event_type; //type: BmdBagEventMbrItemEnum
                                    Value time_stamp; //type: uint64


                                class Data : public Entity
                                {
                                    public:
                                        Data();
                                        ~Data();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value data_type; //type: BmdBagEventDataEnum
                                        Value no_data; //type: uint8
                                        Value error; //type: uint32
                                        Value string_data; //type: string


                                        class BmdBagEventDataEnum;


                                }; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo::Data> data;
                                    class BmdBagEventMbrItemEnum;


                            }; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo


                            class BundleEvtInfo : public Entity
                            {
                                public:
                                    BundleEvtInfo();
                                    ~BundleEvtInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value bundle_event_type; //type: BmdBagEventBdlItemEnum
                                    Value time_stamp; //type: uint64


                                class Data : public Entity
                                {
                                    public:
                                        Data();
                                        ~Data();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value data_type; //type: BmdBagEventDataEnum
                                        Value no_data; //type: uint8
                                        Value error; //type: uint32
                                        Value string_data; //type: string


                                        class BmdBagEventDataEnum;


                                }; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo::Data> data;
                                    class BmdBagEventBdlItemEnum;


                            }; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo


                            class RgEvtInfo : public Entity
                            {
                                public:
                                    RgEvtInfo();
                                    ~RgEvtInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value rg_event_type; //type: BmdBagEventRgItemEnum
                                    Value time_stamp; //type: uint64


                                class Data : public Entity
                                {
                                    public:
                                        Data();
                                        ~Data();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value data_type; //type: BmdBagEventDataEnum
                                        Value no_data; //type: uint8
                                        Value error; //type: uint32
                                        Value string_data; //type: string


                                        class BmdBagEventDataEnum;


                                }; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo::Data> data;
                                    class BmdBagEventRgItemEnum;


                            }; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::BundleEvtInfo> bundle_evt_info;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::MemberEvtInfo> member_evt_info;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items::RgEvtInfo> rg_evt_info;
                                class BmdBagTargetEnum;


                        }; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items


                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup::Items> > items;


                    }; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups::EventsMbrBundleChildrenMemberIccpGroup> > events_mbr_bundle_children_member_iccp_group;


                }; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups


                class EventsMbrBundleDescendantIccpGroup : public Entity
                {
                    public:
                        EventsMbrBundleDescendantIccpGroup();
                        ~EventsMbrBundleDescendantIccpGroup();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class EventsItem : public Entity
                    {
                        public:
                            EventsItem();
                            ~EventsItem();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value item_name; //type: string


                        class Items : public Entity
                        {
                            public:
                                Items();
                                ~Items();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value event_type; //type: BmdBagTargetEnum


                            class MemberEvtInfo : public Entity
                            {
                                public:
                                    MemberEvtInfo();
                                    ~MemberEvtInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value member_event_type; //type: BmdBagEventMbrItemEnum
                                    Value time_stamp; //type: uint64


                                class Data : public Entity
                                {
                                    public:
                                        Data();
                                        ~Data();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value data_type; //type: BmdBagEventDataEnum
                                        Value no_data; //type: uint8
                                        Value error; //type: uint32
                                        Value string_data; //type: string


                                        class BmdBagEventDataEnum;


                                }; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo::Data> data;
                                    class BmdBagEventMbrItemEnum;


                            }; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo


                            class BundleEvtInfo : public Entity
                            {
                                public:
                                    BundleEvtInfo();
                                    ~BundleEvtInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value bundle_event_type; //type: BmdBagEventBdlItemEnum
                                    Value time_stamp; //type: uint64


                                class Data : public Entity
                                {
                                    public:
                                        Data();
                                        ~Data();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value data_type; //type: BmdBagEventDataEnum
                                        Value no_data; //type: uint8
                                        Value error; //type: uint32
                                        Value string_data; //type: string


                                        class BmdBagEventDataEnum;


                                }; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo::Data> data;
                                    class BmdBagEventBdlItemEnum;


                            }; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo


                            class RgEvtInfo : public Entity
                            {
                                public:
                                    RgEvtInfo();
                                    ~RgEvtInfo();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value rg_event_type; //type: BmdBagEventRgItemEnum
                                    Value time_stamp; //type: uint64


                                class Data : public Entity
                                {
                                    public:
                                        Data();
                                        ~Data();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value data_type; //type: BmdBagEventDataEnum
                                        Value no_data; //type: uint8
                                        Value error; //type: uint32
                                        Value string_data; //type: string


                                        class BmdBagEventDataEnum;


                                }; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo::Data> data;
                                    class BmdBagEventRgItemEnum;


                            }; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::BundleEvtInfo> bundle_evt_info;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::MemberEvtInfo> member_evt_info;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items::RgEvtInfo> rg_evt_info;
                                class BmdBagTargetEnum;


                        }; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items


                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem::Items> > items;


                    }; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup::EventsItem> > events_item;


                }; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleChildrenMemberIccpGroups> events_mbr_bundle_children_member_iccp_groups;
                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup::EventsMbrBundleDescendantIccpGroup> events_mbr_bundle_descendant_iccp_group;


            }; // BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups::EventsMbrIccpGroup> > events_mbr_iccp_group;


        }; // BundleInformation::EventsMbr::EventsMbrIccpGroups


            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrBundles> events_mbr_bundles;
            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrIccpGroups> events_mbr_iccp_groups;
            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr::EventsMbrMembers> events_mbr_members;


    }; // BundleInformation::EventsMbr


    class MlacpIccpGroupCounters : public Entity
    {
        public:
            MlacpIccpGroupCounters();
            ~MlacpIccpGroupCounters();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class IccpGroups : public Entity
        {
            public:
                IccpGroups();
                ~IccpGroups();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class IccpGroup : public Entity
            {
                public:
                    IccpGroup();
                    ~IccpGroup();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value iccp_group; //type: uint32


                class IccpGroupAncestorBundle : public Entity
                {
                    public:
                        IccpGroupAncestorBundle();
                        ~IccpGroupAncestorBundle();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value iccp_group_id; //type: uint32


                    class IccpGroupCounters : public Entity
                    {
                        public:
                            IccpGroupCounters();
                            ~IccpGroupCounters();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value last_time_cleared; //type: uint64
                            Value time_since_cleared; //type: uint64
                            Value last_unexpected_event; //type: uint64


                        class Connection : public Entity
                        {
                            public:
                                Connection();
                                ~Connection();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sent_connects; //type: uint32
                                Value received_connects; //type: uint32
                                Value iccp_invalid_connects; //type: uint32
                                Value iccp_config_connect_errors; //type: uint32
                                Value iccp_count_connect_errors; //type: uint32
                                Value sent_wrong_versions; //type: uint32
                                Value received_wrong_versions; //type: uint32
                                Value sent_disconnects; //type: uint32
                                Value received_disconnects; //type: uint32
                                Value iccp_invalid_disconnects; //type: uint32




                        }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection


                        class TlVs : public Entity
                        {
                            public:
                                TlVs();
                                ~TlVs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sent_config; //type: uint32
                                Value received_config; //type: uint32
                                Value sent_state; //type: uint32
                                Value received_state; //type: uint32
                                Value sent_na_ks; //type: uint32
                                Value received_na_ks; //type: uint32
                                Value sent_sync_requests; //type: uint32
                                Value received_sync_requests; //type: uint32
                                Value sent_state_sync_requests; //type: uint32
                                Value received_state_sync_requests; //type: uint32
                                Value sent_config_sync_requests; //type: uint32
                                Value received_config_sync_requests; //type: uint32
                                Value sent_solicited_sync_data; //type: uint32
                                Value received_solicited_sync_data; //type: uint32
                                Value sent_unsolicited_sync_data; //type: uint32
                                Value received_unsolicited_sync_data; //type: uint32




                        }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs


                        class InvalidTlVs : public Entity
                        {
                            public:
                                InvalidTlVs();
                                ~InvalidTlVs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value incorrect_length; //type: uint32
                                Value invalid_type; //type: uint32
                                Value invalid_data; //type: uint32
                                Value unknown_bundle; //type: uint32
                                Value unknown_port; //type: uint32




                        }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs


                        class IccpMessages : public Entity
                        {
                            public:
                                IccpMessages();
                                ~IccpMessages();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sent_messages; //type: uint32
                                Value sent_buffer_messages; //type: uint32
                                Value received_messages; //type: uint32
                                Value transmission_errors; //type: uint32




                        }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages


                        class IccpEvents : public Entity
                        {
                            public:
                                IccpEvents();
                                ~IccpEvents();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value transport_up; //type: uint32
                                Value transport_down; //type: uint32
                                Value transport_unavailable; //type: uint32
                                Value configured_set; //type: uint32
                                Value configured_clear; //type: uint32
                                Value reachability_set; //type: uint32
                                Value reachability_cleared; //type: uint32
                                Value member_status_up; //type: uint32
                                Value member_status_down; //type: uint32
                                Value pe_isolated; //type: uint32
                                Value pe_isolated_clear; //type: uint32




                        }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::Connection> connection;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpEvents> iccp_events;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::IccpMessages> iccp_messages;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::InvalidTlVs> invalid_tl_vs;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters::TlVs> tl_vs;


                    }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters


                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle::IccpGroupCounters> iccp_group_counters;


                }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle


                class IccpGroupAncestorMember : public Entity
                {
                    public:
                        IccpGroupAncestorMember();
                        ~IccpGroupAncestorMember();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value iccp_group_id; //type: uint32


                    class IccpGroupCounters : public Entity
                    {
                        public:
                            IccpGroupCounters();
                            ~IccpGroupCounters();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value last_time_cleared; //type: uint64
                            Value time_since_cleared; //type: uint64
                            Value last_unexpected_event; //type: uint64


                        class Connection : public Entity
                        {
                            public:
                                Connection();
                                ~Connection();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sent_connects; //type: uint32
                                Value received_connects; //type: uint32
                                Value iccp_invalid_connects; //type: uint32
                                Value iccp_config_connect_errors; //type: uint32
                                Value iccp_count_connect_errors; //type: uint32
                                Value sent_wrong_versions; //type: uint32
                                Value received_wrong_versions; //type: uint32
                                Value sent_disconnects; //type: uint32
                                Value received_disconnects; //type: uint32
                                Value iccp_invalid_disconnects; //type: uint32




                        }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection


                        class TlVs : public Entity
                        {
                            public:
                                TlVs();
                                ~TlVs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sent_config; //type: uint32
                                Value received_config; //type: uint32
                                Value sent_state; //type: uint32
                                Value received_state; //type: uint32
                                Value sent_na_ks; //type: uint32
                                Value received_na_ks; //type: uint32
                                Value sent_sync_requests; //type: uint32
                                Value received_sync_requests; //type: uint32
                                Value sent_state_sync_requests; //type: uint32
                                Value received_state_sync_requests; //type: uint32
                                Value sent_config_sync_requests; //type: uint32
                                Value received_config_sync_requests; //type: uint32
                                Value sent_solicited_sync_data; //type: uint32
                                Value received_solicited_sync_data; //type: uint32
                                Value sent_unsolicited_sync_data; //type: uint32
                                Value received_unsolicited_sync_data; //type: uint32




                        }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs


                        class InvalidTlVs : public Entity
                        {
                            public:
                                InvalidTlVs();
                                ~InvalidTlVs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value incorrect_length; //type: uint32
                                Value invalid_type; //type: uint32
                                Value invalid_data; //type: uint32
                                Value unknown_bundle; //type: uint32
                                Value unknown_port; //type: uint32




                        }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs


                        class IccpMessages : public Entity
                        {
                            public:
                                IccpMessages();
                                ~IccpMessages();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sent_messages; //type: uint32
                                Value sent_buffer_messages; //type: uint32
                                Value received_messages; //type: uint32
                                Value transmission_errors; //type: uint32




                        }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages


                        class IccpEvents : public Entity
                        {
                            public:
                                IccpEvents();
                                ~IccpEvents();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value transport_up; //type: uint32
                                Value transport_down; //type: uint32
                                Value transport_unavailable; //type: uint32
                                Value configured_set; //type: uint32
                                Value configured_clear; //type: uint32
                                Value reachability_set; //type: uint32
                                Value reachability_cleared; //type: uint32
                                Value member_status_up; //type: uint32
                                Value member_status_down; //type: uint32
                                Value pe_isolated; //type: uint32
                                Value pe_isolated_clear; //type: uint32




                        }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::Connection> connection;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpEvents> iccp_events;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::IccpMessages> iccp_messages;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::InvalidTlVs> invalid_tl_vs;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters::TlVs> tl_vs;


                    }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters


                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember::IccpGroupCounters> iccp_group_counters;


                }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember


                class IccpGroupAncestorNode : public Entity
                {
                    public:
                        IccpGroupAncestorNode();
                        ~IccpGroupAncestorNode();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value iccp_group_id; //type: uint32


                    class IccpGroupCounters : public Entity
                    {
                        public:
                            IccpGroupCounters();
                            ~IccpGroupCounters();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value last_time_cleared; //type: uint64
                            Value time_since_cleared; //type: uint64
                            Value last_unexpected_event; //type: uint64


                        class Connection : public Entity
                        {
                            public:
                                Connection();
                                ~Connection();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sent_connects; //type: uint32
                                Value received_connects; //type: uint32
                                Value iccp_invalid_connects; //type: uint32
                                Value iccp_config_connect_errors; //type: uint32
                                Value iccp_count_connect_errors; //type: uint32
                                Value sent_wrong_versions; //type: uint32
                                Value received_wrong_versions; //type: uint32
                                Value sent_disconnects; //type: uint32
                                Value received_disconnects; //type: uint32
                                Value iccp_invalid_disconnects; //type: uint32




                        }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection


                        class TlVs : public Entity
                        {
                            public:
                                TlVs();
                                ~TlVs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sent_config; //type: uint32
                                Value received_config; //type: uint32
                                Value sent_state; //type: uint32
                                Value received_state; //type: uint32
                                Value sent_na_ks; //type: uint32
                                Value received_na_ks; //type: uint32
                                Value sent_sync_requests; //type: uint32
                                Value received_sync_requests; //type: uint32
                                Value sent_state_sync_requests; //type: uint32
                                Value received_state_sync_requests; //type: uint32
                                Value sent_config_sync_requests; //type: uint32
                                Value received_config_sync_requests; //type: uint32
                                Value sent_solicited_sync_data; //type: uint32
                                Value received_solicited_sync_data; //type: uint32
                                Value sent_unsolicited_sync_data; //type: uint32
                                Value received_unsolicited_sync_data; //type: uint32




                        }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs


                        class InvalidTlVs : public Entity
                        {
                            public:
                                InvalidTlVs();
                                ~InvalidTlVs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value incorrect_length; //type: uint32
                                Value invalid_type; //type: uint32
                                Value invalid_data; //type: uint32
                                Value unknown_bundle; //type: uint32
                                Value unknown_port; //type: uint32




                        }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs


                        class IccpMessages : public Entity
                        {
                            public:
                                IccpMessages();
                                ~IccpMessages();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sent_messages; //type: uint32
                                Value sent_buffer_messages; //type: uint32
                                Value received_messages; //type: uint32
                                Value transmission_errors; //type: uint32




                        }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages


                        class IccpEvents : public Entity
                        {
                            public:
                                IccpEvents();
                                ~IccpEvents();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value transport_up; //type: uint32
                                Value transport_down; //type: uint32
                                Value transport_unavailable; //type: uint32
                                Value configured_set; //type: uint32
                                Value configured_clear; //type: uint32
                                Value reachability_set; //type: uint32
                                Value reachability_cleared; //type: uint32
                                Value member_status_up; //type: uint32
                                Value member_status_down; //type: uint32
                                Value pe_isolated; //type: uint32
                                Value pe_isolated_clear; //type: uint32




                        }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::Connection> connection;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpEvents> iccp_events;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::IccpMessages> iccp_messages;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::InvalidTlVs> invalid_tl_vs;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters::TlVs> tl_vs;


                    }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters


                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode::IccpGroupCounters> iccp_group_counters;


                }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode


                class IccpGroupItem : public Entity
                {
                    public:
                        IccpGroupItem();
                        ~IccpGroupItem();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value iccp_group_id; //type: uint32


                    class IccpGroupCounters : public Entity
                    {
                        public:
                            IccpGroupCounters();
                            ~IccpGroupCounters();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value last_time_cleared; //type: uint64
                            Value time_since_cleared; //type: uint64
                            Value last_unexpected_event; //type: uint64


                        class Connection : public Entity
                        {
                            public:
                                Connection();
                                ~Connection();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sent_connects; //type: uint32
                                Value received_connects; //type: uint32
                                Value iccp_invalid_connects; //type: uint32
                                Value iccp_config_connect_errors; //type: uint32
                                Value iccp_count_connect_errors; //type: uint32
                                Value sent_wrong_versions; //type: uint32
                                Value received_wrong_versions; //type: uint32
                                Value sent_disconnects; //type: uint32
                                Value received_disconnects; //type: uint32
                                Value iccp_invalid_disconnects; //type: uint32




                        }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection


                        class TlVs : public Entity
                        {
                            public:
                                TlVs();
                                ~TlVs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sent_config; //type: uint32
                                Value received_config; //type: uint32
                                Value sent_state; //type: uint32
                                Value received_state; //type: uint32
                                Value sent_na_ks; //type: uint32
                                Value received_na_ks; //type: uint32
                                Value sent_sync_requests; //type: uint32
                                Value received_sync_requests; //type: uint32
                                Value sent_state_sync_requests; //type: uint32
                                Value received_state_sync_requests; //type: uint32
                                Value sent_config_sync_requests; //type: uint32
                                Value received_config_sync_requests; //type: uint32
                                Value sent_solicited_sync_data; //type: uint32
                                Value received_solicited_sync_data; //type: uint32
                                Value sent_unsolicited_sync_data; //type: uint32
                                Value received_unsolicited_sync_data; //type: uint32




                        }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs


                        class InvalidTlVs : public Entity
                        {
                            public:
                                InvalidTlVs();
                                ~InvalidTlVs();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value incorrect_length; //type: uint32
                                Value invalid_type; //type: uint32
                                Value invalid_data; //type: uint32
                                Value unknown_bundle; //type: uint32
                                Value unknown_port; //type: uint32




                        }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs


                        class IccpMessages : public Entity
                        {
                            public:
                                IccpMessages();
                                ~IccpMessages();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sent_messages; //type: uint32
                                Value sent_buffer_messages; //type: uint32
                                Value received_messages; //type: uint32
                                Value transmission_errors; //type: uint32




                        }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages


                        class IccpEvents : public Entity
                        {
                            public:
                                IccpEvents();
                                ~IccpEvents();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value transport_up; //type: uint32
                                Value transport_down; //type: uint32
                                Value transport_unavailable; //type: uint32
                                Value configured_set; //type: uint32
                                Value configured_clear; //type: uint32
                                Value reachability_set; //type: uint32
                                Value reachability_cleared; //type: uint32
                                Value member_status_up; //type: uint32
                                Value member_status_down; //type: uint32
                                Value pe_isolated; //type: uint32
                                Value pe_isolated_clear; //type: uint32




                        }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::Connection> connection;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpEvents> iccp_events;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::IccpMessages> iccp_messages;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::InvalidTlVs> invalid_tl_vs;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters::TlVs> tl_vs;


                    }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters


                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem::IccpGroupCounters> iccp_group_counters;


                }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorBundle> iccp_group_ancestor_bundle;
                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorMember> iccp_group_ancestor_member;
                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupAncestorNode> iccp_group_ancestor_node;
                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup::IccpGroupItem> iccp_group_item;


            }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups::IccpGroup> > iccp_group;


        }; // BundleInformation::MlacpIccpGroupCounters::IccpGroups


            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters::IccpGroups> iccp_groups;


    }; // BundleInformation::MlacpIccpGroupCounters


    class SystemId : public Entity
    {
        public:
            SystemId();
            ~SystemId();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class SystemIdGlobal : public Entity
        {
            public:
                SystemIdGlobal();
                ~SystemIdGlobal();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class SystemIdGlobalItem : public Entity
            {
                public:
                    SystemIdGlobalItem();
                    ~SystemIdGlobalItem();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value iccp_group_id; //type: uint32
                    Value system_priority; //type: uint16
                    Value system_mac_address; //type: string


                class SystemId_ : public Entity
                {
                    public:
                        SystemId_();
                        ~SystemId_();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value system_prio; //type: uint16


                    class SystemMacAddr : public Entity
                    {
                        public:
                            SystemMacAddr();
                            ~SystemMacAddr();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value macaddr; //type: string




                    }; // BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr


                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_::SystemMacAddr> system_mac_addr;


                }; // BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem::SystemId_> system_id;


            }; // BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem


                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdGlobal::SystemIdGlobalItem> system_id_global_item;


        }; // BundleInformation::SystemId::SystemIdGlobal


        class SystemIdIccpGroups : public Entity
        {
            public:
                SystemIdIccpGroups();
                ~SystemIdIccpGroups();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class SystemIdIccpGroup : public Entity
            {
                public:
                    SystemIdIccpGroup();
                    ~SystemIdIccpGroup();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value iccp_group; //type: uint32


                class SystemIdIccpGroupItem : public Entity
                {
                    public:
                        SystemIdIccpGroupItem();
                        ~SystemIdIccpGroupItem();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value iccp_group_id; //type: uint32
                        Value system_priority; //type: uint16
                        Value system_mac_address; //type: string


                    class SystemId_ : public Entity
                    {
                        public:
                            SystemId_();
                            ~SystemId_();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value system_prio; //type: uint16


                        class SystemMacAddr : public Entity
                        {
                            public:
                                SystemMacAddr();
                                ~SystemMacAddr();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value macaddr; //type: string




                        }; // BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_::SystemMacAddr> system_mac_addr;


                    }; // BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_


                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem::SystemId_> system_id;


                }; // BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup::SystemIdIccpGroupItem> system_id_iccp_group_item;


            }; // BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdIccpGroups::SystemIdIccpGroup> > system_id_iccp_group;


        }; // BundleInformation::SystemId::SystemIdIccpGroups


            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdGlobal> system_id_global;
            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId::SystemIdIccpGroups> system_id_iccp_groups;


    }; // BundleInformation::SystemId


    class MlacpMemberCounters : public Entity
    {
        public:
            MlacpMemberCounters();
            ~MlacpMemberCounters();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class IccpGroups : public Entity
        {
            public:
                IccpGroups();
                ~IccpGroups();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class IccpGroup : public Entity
            {
                public:
                    IccpGroup();
                    ~IccpGroup();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value iccp_group; //type: uint32


                class IccpGroupItem : public Entity
                {
                    public:
                        IccpGroupItem();
                        ~IccpGroupItem();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Items : public Entity
                    {
                        public:
                            Items();
                            ~Items();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class BundleData : public Entity
                        {
                            public:
                                BundleData();
                                ~BundleData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bundle_name; //type: string
                                Value iccp_group_id; //type: uint32


                            class MlacpSyncRequestsOnAllLocalPorts : public Entity
                            {
                                public:
                                    MlacpSyncRequestsOnAllLocalPorts();
                                    ~MlacpSyncRequestsOnAllLocalPorts();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value last_time_cleared; //type: uint64
                                    Value time_since_cleared; //type: uint64


                                class ReceivedSyncRequests : public Entity
                                {
                                    public:
                                        ReceivedSyncRequests();
                                        ~ReceivedSyncRequests();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value all_syncs; //type: uint32
                                        Value config_syncs; //type: uint32
                                        Value state_syncs; //type: uint32




                                }; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests> received_sync_requests;


                            }; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts> mlacp_sync_requests_on_all_local_ports;


                        }; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData


                        class NodeData : public Entity
                        {
                            public:
                                NodeData();
                                ~NodeData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class NodeData_ : public Entity
                            {
                                public:
                                    NodeData_();
                                    ~NodeData_();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value node_id; //type: uint32
                                    Value iccp_group_id; //type: uint32




                            }; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_


                            class MlacpSyncRequestsOnAllForeignPorts : public Entity
                            {
                                public:
                                    MlacpSyncRequestsOnAllForeignPorts();
                                    ~MlacpSyncRequestsOnAllForeignPorts();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value last_time_cleared; //type: uint64
                                    Value time_since_cleared; //type: uint64


                                class ReceivedSyncRequests : public Entity
                                {
                                    public:
                                        ReceivedSyncRequests();
                                        ~ReceivedSyncRequests();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value all_syncs; //type: uint32
                                        Value config_syncs; //type: uint32
                                        Value state_syncs; //type: uint32




                                }; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests> received_sync_requests;


                            }; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts


                            class MemberData : public Entity
                            {
                                public:
                                    MemberData();
                                    ~MemberData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value port_name; //type: string


                                class MlacpTlvCounters : public Entity
                                {
                                    public:
                                        MlacpTlvCounters();
                                        ~MlacpTlvCounters();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value sent_config_tl_vs; //type: uint32
                                        Value sent_state_tl_vs; //type: uint32
                                        Value sent_priority_tl_vs; //type: uint32
                                        Value received_priority_tl_vs; //type: uint32
                                        Value received_nak_tl_vs; //type: uint32
                                        Value last_time_cleared; //type: uint64
                                        Value time_since_cleared; //type: uint64
                                        Value last_unexpected_event; //type: uint64


                                    class ReceivedSyncRequests : public Entity
                                    {
                                        public:
                                            ReceivedSyncRequests();
                                            ~ReceivedSyncRequests();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value all_syncs; //type: uint32
                                            Value config_syncs; //type: uint32
                                            Value state_syncs; //type: uint32




                                    }; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests


                                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;


                                }; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData::MlacpTlvCounters> mlacp_tlv_counters;


                            }; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData


                                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MemberData> > member_data;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts> mlacp_sync_requests_on_all_foreign_ports;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData::NodeData_> node_data;


                        }; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData


                        class MemberData : public Entity
                        {
                            public:
                                MemberData();
                                ~MemberData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value port_name; //type: string


                            class MlacpTlvCounters : public Entity
                            {
                                public:
                                    MlacpTlvCounters();
                                    ~MlacpTlvCounters();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value sent_config_tl_vs; //type: uint32
                                    Value sent_state_tl_vs; //type: uint32
                                    Value sent_priority_tl_vs; //type: uint32
                                    Value received_priority_tl_vs; //type: uint32
                                    Value received_nak_tl_vs; //type: uint32
                                    Value last_time_cleared; //type: uint64
                                    Value time_since_cleared; //type: uint64
                                    Value last_unexpected_event; //type: uint64


                                class ReceivedSyncRequests : public Entity
                                {
                                    public:
                                        ReceivedSyncRequests();
                                        ~ReceivedSyncRequests();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value all_syncs; //type: uint32
                                        Value config_syncs; //type: uint32
                                        Value state_syncs; //type: uint32




                                }; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;


                            }; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData::MlacpTlvCounters> mlacp_tlv_counters;


                        }; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::BundleData> bundle_data;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::MemberData> > member_data;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items::NodeData> > node_data;


                    }; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem::Items> > items;


                }; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup::IccpGroupItem> iccp_group_item;


            }; // BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups::IccpGroup> > iccp_group;


        }; // BundleInformation::MlacpMemberCounters::IccpGroups


        class Members : public Entity
        {
            public:
                Members();
                ~Members();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Member : public Entity
            {
                public:
                    Member();
                    ~Member();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value member_interface; //type: string


                class MemberItem : public Entity
                {
                    public:
                        MemberItem();
                        ~MemberItem();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Items : public Entity
                    {
                        public:
                            Items();
                            ~Items();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class BundleData : public Entity
                        {
                            public:
                                BundleData();
                                ~BundleData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bundle_name; //type: string
                                Value iccp_group_id; //type: uint32


                            class MlacpSyncRequestsOnAllLocalPorts : public Entity
                            {
                                public:
                                    MlacpSyncRequestsOnAllLocalPorts();
                                    ~MlacpSyncRequestsOnAllLocalPorts();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value last_time_cleared; //type: uint64
                                    Value time_since_cleared; //type: uint64


                                class ReceivedSyncRequests : public Entity
                                {
                                    public:
                                        ReceivedSyncRequests();
                                        ~ReceivedSyncRequests();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value all_syncs; //type: uint32
                                        Value config_syncs; //type: uint32
                                        Value state_syncs; //type: uint32




                                }; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests> received_sync_requests;


                            }; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts> mlacp_sync_requests_on_all_local_ports;


                        }; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData


                        class NodeData : public Entity
                        {
                            public:
                                NodeData();
                                ~NodeData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class NodeData_ : public Entity
                            {
                                public:
                                    NodeData_();
                                    ~NodeData_();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value node_id; //type: uint32
                                    Value iccp_group_id; //type: uint32




                            }; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_


                            class MlacpSyncRequestsOnAllForeignPorts : public Entity
                            {
                                public:
                                    MlacpSyncRequestsOnAllForeignPorts();
                                    ~MlacpSyncRequestsOnAllForeignPorts();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value last_time_cleared; //type: uint64
                                    Value time_since_cleared; //type: uint64


                                class ReceivedSyncRequests : public Entity
                                {
                                    public:
                                        ReceivedSyncRequests();
                                        ~ReceivedSyncRequests();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value all_syncs; //type: uint32
                                        Value config_syncs; //type: uint32
                                        Value state_syncs; //type: uint32




                                }; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests> received_sync_requests;


                            }; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts


                            class MemberData : public Entity
                            {
                                public:
                                    MemberData();
                                    ~MemberData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value port_name; //type: string


                                class MlacpTlvCounters : public Entity
                                {
                                    public:
                                        MlacpTlvCounters();
                                        ~MlacpTlvCounters();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value sent_config_tl_vs; //type: uint32
                                        Value sent_state_tl_vs; //type: uint32
                                        Value sent_priority_tl_vs; //type: uint32
                                        Value received_priority_tl_vs; //type: uint32
                                        Value received_nak_tl_vs; //type: uint32
                                        Value last_time_cleared; //type: uint64
                                        Value time_since_cleared; //type: uint64
                                        Value last_unexpected_event; //type: uint64


                                    class ReceivedSyncRequests : public Entity
                                    {
                                        public:
                                            ReceivedSyncRequests();
                                            ~ReceivedSyncRequests();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value all_syncs; //type: uint32
                                            Value config_syncs; //type: uint32
                                            Value state_syncs; //type: uint32




                                    }; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests


                                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;


                                }; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData::MlacpTlvCounters> mlacp_tlv_counters;


                            }; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData


                                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MemberData> > member_data;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts> mlacp_sync_requests_on_all_foreign_ports;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData::NodeData_> node_data;


                        }; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData


                        class MemberData : public Entity
                        {
                            public:
                                MemberData();
                                ~MemberData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value port_name; //type: string


                            class MlacpTlvCounters : public Entity
                            {
                                public:
                                    MlacpTlvCounters();
                                    ~MlacpTlvCounters();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value sent_config_tl_vs; //type: uint32
                                    Value sent_state_tl_vs; //type: uint32
                                    Value sent_priority_tl_vs; //type: uint32
                                    Value received_priority_tl_vs; //type: uint32
                                    Value received_nak_tl_vs; //type: uint32
                                    Value last_time_cleared; //type: uint64
                                    Value time_since_cleared; //type: uint64
                                    Value last_unexpected_event; //type: uint64


                                class ReceivedSyncRequests : public Entity
                                {
                                    public:
                                        ReceivedSyncRequests();
                                        ~ReceivedSyncRequests();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value all_syncs; //type: uint32
                                        Value config_syncs; //type: uint32
                                        Value state_syncs; //type: uint32




                                }; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;


                            }; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData::MlacpTlvCounters> mlacp_tlv_counters;


                        }; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::BundleData> bundle_data;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::MemberData> > member_data;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items::NodeData> > node_data;


                    }; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem::Items> > items;


                }; // BundleInformation::MlacpMemberCounters::Members::Member::MemberItem


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member::MemberItem> member_item;


            }; // BundleInformation::MlacpMemberCounters::Members::Member


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members::Member> > member;


        }; // BundleInformation::MlacpMemberCounters::Members


        class Bundles : public Entity
        {
            public:
                Bundles();
                ~Bundles();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Bundle : public Entity
            {
                public:
                    Bundle();
                    ~Bundle();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value bundle_interface; //type: string


                class BundleItem : public Entity
                {
                    public:
                        BundleItem();
                        ~BundleItem();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class BundleData : public Entity
                    {
                        public:
                            BundleData();
                            ~BundleData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value bundle_name; //type: string
                            Value iccp_group_id; //type: uint32


                        class MlacpSyncRequestsOnAllLocalPorts : public Entity
                        {
                            public:
                                MlacpSyncRequestsOnAllLocalPorts();
                                ~MlacpSyncRequestsOnAllLocalPorts();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value last_time_cleared; //type: uint64
                                Value time_since_cleared; //type: uint64


                            class ReceivedSyncRequests : public Entity
                            {
                                public:
                                    ReceivedSyncRequests();
                                    ~ReceivedSyncRequests();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value all_syncs; //type: uint32
                                    Value config_syncs; //type: uint32
                                    Value state_syncs; //type: uint32




                            }; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests> received_sync_requests;


                        }; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData::MlacpSyncRequestsOnAllLocalPorts> mlacp_sync_requests_on_all_local_ports;


                    }; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData


                    class NodeData : public Entity
                    {
                        public:
                            NodeData();
                            ~NodeData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class NodeData_ : public Entity
                        {
                            public:
                                NodeData_();
                                ~NodeData_();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value node_id; //type: uint32
                                Value iccp_group_id; //type: uint32




                        }; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_


                        class MlacpSyncRequestsOnAllForeignPorts : public Entity
                        {
                            public:
                                MlacpSyncRequestsOnAllForeignPorts();
                                ~MlacpSyncRequestsOnAllForeignPorts();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value last_time_cleared; //type: uint64
                                Value time_since_cleared; //type: uint64


                            class ReceivedSyncRequests : public Entity
                            {
                                public:
                                    ReceivedSyncRequests();
                                    ~ReceivedSyncRequests();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value all_syncs; //type: uint32
                                    Value config_syncs; //type: uint32
                                    Value state_syncs; //type: uint32




                            }; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests> received_sync_requests;


                        }; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts


                        class MemberData : public Entity
                        {
                            public:
                                MemberData();
                                ~MemberData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value port_name; //type: string


                            class MlacpTlvCounters : public Entity
                            {
                                public:
                                    MlacpTlvCounters();
                                    ~MlacpTlvCounters();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value sent_config_tl_vs; //type: uint32
                                    Value sent_state_tl_vs; //type: uint32
                                    Value sent_priority_tl_vs; //type: uint32
                                    Value received_priority_tl_vs; //type: uint32
                                    Value received_nak_tl_vs; //type: uint32
                                    Value last_time_cleared; //type: uint64
                                    Value time_since_cleared; //type: uint64
                                    Value last_unexpected_event; //type: uint64


                                class ReceivedSyncRequests : public Entity
                                {
                                    public:
                                        ReceivedSyncRequests();
                                        ~ReceivedSyncRequests();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value all_syncs; //type: uint32
                                        Value config_syncs; //type: uint32
                                        Value state_syncs; //type: uint32




                                }; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;


                            }; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData::MlacpTlvCounters> mlacp_tlv_counters;


                        }; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData


                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MemberData> > member_data;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::MlacpSyncRequestsOnAllForeignPorts> mlacp_sync_requests_on_all_foreign_ports;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData::NodeData_> node_data;


                    }; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData


                    class MemberData : public Entity
                    {
                        public:
                            MemberData();
                            ~MemberData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value port_name; //type: string


                        class MlacpTlvCounters : public Entity
                        {
                            public:
                                MlacpTlvCounters();
                                ~MlacpTlvCounters();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value sent_config_tl_vs; //type: uint32
                                Value sent_state_tl_vs; //type: uint32
                                Value sent_priority_tl_vs; //type: uint32
                                Value received_priority_tl_vs; //type: uint32
                                Value received_nak_tl_vs; //type: uint32
                                Value last_time_cleared; //type: uint64
                                Value time_since_cleared; //type: uint64
                                Value last_unexpected_event; //type: uint64


                            class ReceivedSyncRequests : public Entity
                            {
                                public:
                                    ReceivedSyncRequests();
                                    ~ReceivedSyncRequests();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value all_syncs; //type: uint32
                                    Value config_syncs; //type: uint32
                                    Value state_syncs; //type: uint32




                            }; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;


                        }; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData::MlacpTlvCounters> mlacp_tlv_counters;


                    }; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData


                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::BundleData> bundle_data;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::MemberData> > member_data;
                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem::NodeData> > node_data;


                }; // BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle::BundleItem> bundle_item;


            }; // BundleInformation::MlacpMemberCounters::Bundles::Bundle


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles::Bundle> > bundle;


        }; // BundleInformation::MlacpMemberCounters::Bundles


        class Nodes : public Entity
        {
            public:
                Nodes();
                ~Nodes();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Node : public Entity
            {
                public:
                    Node();
                    ~Node();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value node; //type: string


                class NodeItem : public Entity
                {
                    public:
                        NodeItem();
                        ~NodeItem();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Items : public Entity
                    {
                        public:
                            Items();
                            ~Items();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class BundleData : public Entity
                        {
                            public:
                                BundleData();
                                ~BundleData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value bundle_name; //type: string
                                Value iccp_group_id; //type: uint32


                            class MlacpSyncRequestsOnAllLocalPorts : public Entity
                            {
                                public:
                                    MlacpSyncRequestsOnAllLocalPorts();
                                    ~MlacpSyncRequestsOnAllLocalPorts();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value last_time_cleared; //type: uint64
                                    Value time_since_cleared; //type: uint64


                                class ReceivedSyncRequests : public Entity
                                {
                                    public:
                                        ReceivedSyncRequests();
                                        ~ReceivedSyncRequests();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value all_syncs; //type: uint32
                                        Value config_syncs; //type: uint32
                                        Value state_syncs; //type: uint32




                                }; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts::ReceivedSyncRequests> received_sync_requests;


                            }; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData::MlacpSyncRequestsOnAllLocalPorts> mlacp_sync_requests_on_all_local_ports;


                        }; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData


                        class NodeData : public Entity
                        {
                            public:
                                NodeData();
                                ~NodeData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;


                            class NodeData_ : public Entity
                            {
                                public:
                                    NodeData_();
                                    ~NodeData_();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value node_id; //type: uint32
                                    Value iccp_group_id; //type: uint32




                            }; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_


                            class MlacpSyncRequestsOnAllForeignPorts : public Entity
                            {
                                public:
                                    MlacpSyncRequestsOnAllForeignPorts();
                                    ~MlacpSyncRequestsOnAllForeignPorts();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value last_time_cleared; //type: uint64
                                    Value time_since_cleared; //type: uint64


                                class ReceivedSyncRequests : public Entity
                                {
                                    public:
                                        ReceivedSyncRequests();
                                        ~ReceivedSyncRequests();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value all_syncs; //type: uint32
                                        Value config_syncs; //type: uint32
                                        Value state_syncs; //type: uint32




                                }; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts::ReceivedSyncRequests> received_sync_requests;


                            }; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts


                            class MemberData : public Entity
                            {
                                public:
                                    MemberData();
                                    ~MemberData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value port_name; //type: string


                                class MlacpTlvCounters : public Entity
                                {
                                    public:
                                        MlacpTlvCounters();
                                        ~MlacpTlvCounters();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value sent_config_tl_vs; //type: uint32
                                        Value sent_state_tl_vs; //type: uint32
                                        Value sent_priority_tl_vs; //type: uint32
                                        Value received_priority_tl_vs; //type: uint32
                                        Value received_nak_tl_vs; //type: uint32
                                        Value last_time_cleared; //type: uint64
                                        Value time_since_cleared; //type: uint64
                                        Value last_unexpected_event; //type: uint64


                                    class ReceivedSyncRequests : public Entity
                                    {
                                        public:
                                            ReceivedSyncRequests();
                                            ~ReceivedSyncRequests();

                                            bool has_data() const override;
                                            bool has_operation() const override;
                                            EntityPath get_entity_path(Entity* parent) const override;
                                            std::string get_segment_path() const override;
                                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                            void set_value(const std::string & value_path, std::string value) override;
                                            std::map<std::string, Entity*> & get_children() override;
                                            Value all_syncs; //type: uint32
                                            Value config_syncs; //type: uint32
                                            Value state_syncs; //type: uint32




                                    }; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests


                                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;


                                }; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData::MlacpTlvCounters> mlacp_tlv_counters;


                            }; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData


                                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MemberData> > member_data;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::MlacpSyncRequestsOnAllForeignPorts> mlacp_sync_requests_on_all_foreign_ports;
                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData::NodeData_> node_data;


                        }; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData


                        class MemberData : public Entity
                        {
                            public:
                                MemberData();
                                ~MemberData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value port_name; //type: string


                            class MlacpTlvCounters : public Entity
                            {
                                public:
                                    MlacpTlvCounters();
                                    ~MlacpTlvCounters();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value sent_config_tl_vs; //type: uint32
                                    Value sent_state_tl_vs; //type: uint32
                                    Value sent_priority_tl_vs; //type: uint32
                                    Value received_priority_tl_vs; //type: uint32
                                    Value received_nak_tl_vs; //type: uint32
                                    Value last_time_cleared; //type: uint64
                                    Value time_since_cleared; //type: uint64
                                    Value last_unexpected_event; //type: uint64


                                class ReceivedSyncRequests : public Entity
                                {
                                    public:
                                        ReceivedSyncRequests();
                                        ~ReceivedSyncRequests();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value all_syncs; //type: uint32
                                        Value config_syncs; //type: uint32
                                        Value state_syncs; //type: uint32




                                }; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters::ReceivedSyncRequests> received_sync_requests;


                            }; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData::MlacpTlvCounters> mlacp_tlv_counters;


                        }; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::BundleData> bundle_data;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::MemberData> > member_data;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items::NodeData> > node_data;


                    }; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem::Items> > items;


                }; // BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node::NodeItem> node_item;


            }; // BundleInformation::MlacpMemberCounters::Nodes::Node


                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes::Node> > node;


        }; // BundleInformation::MlacpMemberCounters::Nodes


            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Bundles> bundles;
            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::IccpGroups> iccp_groups;
            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Members> members;
            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters::Nodes> nodes;


    }; // BundleInformation::MlacpMemberCounters


        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BfdCounters> bfd_counters;
        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Bundle> bundle;
        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::BundleBriefs> bundle_briefs;
        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Events> events;
        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsBdl> events_bdl;
        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsMbr> events_mbr;
        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::EventsRg> events_rg;
        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Lacp> lacp;
        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MacAllocation> mac_allocation;
        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Mlacp> mlacp;
        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBrief> mlacp_brief;
        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpBundleCounters> mlacp_bundle_counters;
        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpIccpGroupCounters> mlacp_iccp_group_counters;
        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::MlacpMemberCounters> mlacp_member_counters;
        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::Protect> protect;
        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::ScheduledActions> scheduled_actions;
        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundleInformation::SystemId> system_id;


}; // BundleInformation

class LacpData : public Entity
{
    public:
        LacpData();
        ~LacpData();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


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


        class SystemId : public Entity
        {
            public:
                SystemId();
                ~SystemId();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value iccp_group_id; //type: uint32
                Value system_priority; //type: uint16
                Value system_mac_address; //type: string


            class SystemId_ : public Entity
            {
                public:
                    SystemId_();
                    ~SystemId_();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value system_prio; //type: uint16


                class SystemMacAddr : public Entity
                {
                    public:
                        SystemMacAddr();
                        ~SystemMacAddr();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value macaddr; //type: string




                }; // LacpData::Global::SystemId::SystemId_::SystemMacAddr


                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpData::Global::SystemId::SystemId_::SystemMacAddr> system_mac_addr;


            }; // LacpData::Global::SystemId::SystemId_


                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpData::Global::SystemId::SystemId_> system_id;


        }; // LacpData::Global::SystemId


            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpData::Global::SystemId> system_id;


    }; // LacpData::Global


        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpData::Global> global;


}; // LacpData

class Bundles : public Entity
{
    public:
        Bundles();
        ~Bundles();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Bundles_ : public Entity
    {
        public:
            Bundles_();
            ~Bundles_();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Bundle : public Entity
        {
            public:
                Bundle();
                ~Bundle();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value bundle_interface; //type: string


            class Data : public Entity
            {
                public:
                    Data();
                    ~Data();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value bundle_interface_name; //type: string
                    Value available_bandwidth; //type: uint32
                    Value effective_bandwidth; //type: uint32
                    Value configured_bandwidth; //type: uint32
                    Value minimum_active_links; //type: uint8
                    Value maximum_active_links; //type: uint8
                    Value maximum_active_links_source; //type: BmWhichSystemEnum
                    Value minimum_bandwidth; //type: uint32
                    Value primary_member; //type: string
                    Value bundle_status; //type: BmBdlStateEnum
                    Value active_member_count; //type: uint16
                    Value standby_member_count; //type: uint16
                    Value configured_member_count; //type: uint16
                    Value mac_source; //type: BmBdlMacSourceEnum
                    Value mac_source_member; //type: string
                    Value inter_chassis; //type: boolean
                    Value is_active; //type: boolean
                    Value lacp_status; //type: BmFeatureStatusEnum
                    Value mlacp_status; //type: BmFeatureStatusEnum
                    Value ipv4bfd_status; //type: BmFeatureStatusEnum
                    Value link_order_status; //type: BmFeatureStatusEnum
                    Value ipv6bfd_status; //type: BmFeatureStatusEnum
                    Value load_balance_hash_type; //type: string
                    Value load_balance_locality_threshold; //type: uint16
                    Value suppression_timer; //type: uint16
                    Value wait_while_timer; //type: uint16
                    Value collector_max_delay; //type: uint16
                    Value cisco_extensions; //type: boolean
                    Value lacp_nonrevertive; //type: boolean
                    Value iccp_group_id; //type: uint32
                    Value active_foreign_member_count; //type: uint16
                    Value configured_foreign_member_count; //type: uint16
                    Value switchover_type; //type: BmdMlacpSwitchoverEnum
                    Value maximize_threshold_value_links; //type: uint32
                    Value maximize_threshold_value_band_width; //type: uint32
                    Value mlacp_mode; //type: BundleMlacpModeEnum
                    Value recovery_delay; //type: uint16
                    Value singleton; //type: boolean


                class MacAddress : public Entity
                {
                    public:
                        MacAddress();
                        ~MacAddress();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value address; //type: string




                }; // Bundles::Bundles_::Bundle::Data::MacAddress


                class BfdConfig : public Entity
                {
                    public:
                        BfdConfig();
                        ~BfdConfig();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value bundle_status; //type: BmdBfdBdlStateEnum
                        Value start_timer; //type: uint32
                        Value nbr_unconfig_timer; //type: uint32
                        Value pref_multiplier; //type: uint16
                        Value pref_min_interval; //type: uint32
                        Value pref_echo_min_interval; //type: uint32
                        Value fast_detect; //type: boolean
                        Value mode_info; //type: uint32


                    class DestinationAddress : public Entity
                    {
                        public:
                            DestinationAddress();
                            ~DestinationAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value af; //type: BmAfIdEnum
                            Value ipv4; //type: string
                            Value ipv6; //type: string


                            class BmAfIdEnum;


                    }; // Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress


                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Data::BfdConfig::DestinationAddress> destination_address;
                        class BmdBfdBdlStateEnum;


                }; // Bundles::Bundles_::Bundle::Data::BfdConfig


                    std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Data::BfdConfig> > bfd_config;
                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Data::MacAddress> mac_address;
                    class BmBdlStateEnum;
                    class BmFeatureStatusEnum;
                    class BmFeatureStatusEnum;
                    class BmFeatureStatusEnum;
                    class BmFeatureStatusEnum;
                    class BmBdlMacSourceEnum;
                    class BmWhichSystemEnum;
                    class BundleMlacpModeEnum;
                    class BmFeatureStatusEnum;
                    class BmdMlacpSwitchoverEnum;


            }; // Bundles::Bundles_::Bundle::Data


            class Members : public Entity
            {
                public:
                    Members();
                    ~Members();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Member : public Entity
                {
                    public:
                        Member();
                        ~Member();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value member_interface; //type: string
                        Value bandwidth; //type: uint32
                        Value port_priority; //type: uint16
                        Value port_number; //type: uint16
                        Value underlying_link_id; //type: uint16
                        Value link_order_number; //type: uint16
                        Value interface_name; //type: string
                        Value iccp_node; //type: uint32
                        Value member_type; //type: BmdMemberTypeEnumEnum
                        Value member_name; //type: string


                    class Counters : public Entity
                    {
                        public:
                            Counters();
                            ~Counters();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value lacpd_us_received; //type: uint32
                            Value lacpd_us_transmitted; //type: uint32
                            Value marker_packets_received; //type: uint32
                            Value marker_responses_transmitted; //type: uint32
                            Value illegal_packets_received; //type: uint32
                            Value excess_lacpd_us_received; //type: uint32
                            Value excess_marker_packets_received; //type: uint32
                            Value defaulted; //type: uint32
                            Value expired; //type: uint32
                            Value last_cleared_sec; //type: uint32
                            Value last_cleared_nsec; //type: uint32




                    }; // Bundles::Bundles_::Bundle::Members::Member::Counters


                    class LinkData : public Entity
                    {
                        public:
                            LinkData();
                            ~LinkData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value interface_handle; //type: string
                            Value actor_system_priority; //type: uint16
                            Value actor_system_mac_address; //type: string
                            Value actor_operational_key; //type: uint16
                            Value partner_system_priority; //type: uint16
                            Value partner_system_mac_address; //type: string
                            Value partner_operational_key; //type: uint16
                            Value selected_aggregator_id; //type: uint32
                            Value attached_aggregator_id; //type: uint32
                            Value actor_port_id; //type: uint16
                            Value actor_port_priority; //type: uint16
                            Value partner_port_id; //type: uint16
                            Value partner_port_priority; //type: uint16
                            Value actor_port_state; //type: uint8
                            Value partner_port_state; //type: uint8




                    }; // Bundles::Bundles_::Bundle::Members::Member::LinkData


                    class MemberMuxData : public Entity
                    {
                        public:
                            MemberMuxData();
                            ~MemberMuxData();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value mux_state; //type: BmMuxstateEnum
                            Value error; //type: uint32
                            Value member_mux_state_reason; //type: BmMbrStateReasonEnum
                            Value member_state; //type: BmdMemberStateEnum
                            Value mux_state_reason; //type: BmMuxreasonEnum


                        class MemberMuxStateReasonData : public Entity
                        {
                            public:
                                MemberMuxStateReasonData();
                                ~MemberMuxStateReasonData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value reason_type; //type: BmStateReasonTargetEnum
                                Value severity; //type: BmSeverityEnum


                                class BmStateReasonTargetEnum;
                                class BmSeverityEnum;


                        }; // Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Members::Member::MemberMuxData::MemberMuxStateReasonData> member_mux_state_reason_data;
                            class BmMbrStateReasonEnum;
                            class BmdMemberStateEnum;
                            class BmMuxstateEnum;
                            class BmMuxreasonEnum;


                    }; // Bundles::Bundles_::Bundle::Members::Member::MemberMuxData


                    class MacAddress : public Entity
                    {
                        public:
                            MacAddress();
                            ~MacAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value address; //type: string




                    }; // Bundles::Bundles_::Bundle::Members::Member::MacAddress


                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Members::Member::Counters> counters;
                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Members::Member::LinkData> link_data;
                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Members::Member::MacAddress> mac_address;
                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Members::Member::MemberMuxData> member_mux_data;
                        class BmdMemberTypeEnumEnum;


                }; // Bundles::Bundles_::Bundle::Members::Member


                    std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Members::Member> > member;


            }; // Bundles::Bundles_::Bundle::Members


                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Data> data;
                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle::Members> members;


        }; // Bundles::Bundles_::Bundle


            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_::Bundle> > bundle;


    }; // Bundles::Bundles_


        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::Bundles::Bundles_> bundles;


}; // Bundles

class LacpBundleMembers : public Entity
{
    public:
        LacpBundleMembers();
        ~LacpBundleMembers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Nodes : public Entity
    {
        public:
            Nodes();
            ~Nodes();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Node : public Entity
        {
            public:
                Node();
                ~Node();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value node; //type: string


            class Counters : public Entity
            {
                public:
                    Counters();
                    ~Counters();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value wrong_port_count; //type: uint32
                    Value last_wrong_port; //type: uint32
                    Value unknown_port_count; //type: uint32
                    Value undecodable_packets; //type: uint32
                    Value time_since_cleared; //type: uint64
                    Value time_since_unexpected_event; //type: uint64
                    Value time_since_last_updated; //type: uint64




            }; // LacpBundleMembers::Nodes::Node::Counters


                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers::Nodes::Node::Counters> counters;


        }; // LacpBundleMembers::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers::Nodes::Node> > node;


    }; // LacpBundleMembers::Nodes


    class Members : public Entity
    {
        public:
            Members();
            ~Members();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Member : public Entity
        {
            public:
                Member();
                ~Member();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value member_interface; //type: string


            class Data : public Entity
            {
                public:
                    Data();
                    ~Data();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value interface_handle; //type: string
                    Value actor_system_priority; //type: uint16
                    Value actor_system_mac_address; //type: string
                    Value actor_operational_key; //type: uint16
                    Value partner_system_priority; //type: uint16
                    Value partner_system_mac_address; //type: string
                    Value partner_operational_key; //type: uint16
                    Value selected_aggregator_id; //type: uint32
                    Value attached_aggregator_id; //type: uint32
                    Value actor_port_id; //type: uint16
                    Value actor_port_priority; //type: uint16
                    Value partner_port_id; //type: uint16
                    Value partner_port_priority; //type: uint16
                    Value actor_port_state; //type: uint8
                    Value partner_port_state; //type: uint8




            }; // LacpBundleMembers::Members::Member::Data


            class Counters : public Entity
            {
                public:
                    Counters();
                    ~Counters();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value lacpd_us_received; //type: uint32
                    Value lacpd_us_transmitted; //type: uint32
                    Value marker_packets_received; //type: uint32
                    Value marker_responses_transmitted; //type: uint32
                    Value illegal_packets_received; //type: uint32
                    Value excess_lacpd_us_received; //type: uint32
                    Value excess_marker_packets_received; //type: uint32
                    Value defaulted; //type: uint32
                    Value expired; //type: uint32
                    Value time_since_last_lacpdu_received; //type: uint64
                    Value time_since_cleared; //type: uint64
                    Value time_since_unexpected_event; //type: uint64
                    Value last_cleared_sec; //type: uint32
                    Value last_cleared_nsec; //type: uint32




            }; // LacpBundleMembers::Members::Member::Counters


                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers::Members::Member::Counters> counters;
                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers::Members::Member::Data> data;


        }; // LacpBundleMembers::Members::Member


            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers::Members::Member> > member;


    }; // LacpBundleMembers::Members


        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers::Members> members;
        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::LacpBundleMembers::Nodes> nodes;


}; // LacpBundleMembers

class BundlesAdjacency : public Entity
{
    public:
        BundlesAdjacency();
        ~BundlesAdjacency();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Nodes : public Entity
    {
        public:
            Nodes();
            ~Nodes();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Node : public Entity
        {
            public:
                Node();
                ~Node();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value node_name; //type: string


            class Brief : public Entity
            {
                public:
                    Brief();
                    ~Brief();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class BundleData : public Entity
                {
                    public:
                        BundleData();
                        ~BundleData();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value interface_name; //type: string
                        Value sub_interface_count; //type: uint32
                        Value member_count; //type: uint32
                        Value total_weight; //type: uint32


                    class SubInterface : public Entity
                    {
                        public:
                            SubInterface();
                            ~SubInterface();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value interface_name; //type: string


                        class LoadBalanceData : public Entity
                        {
                            public:
                                LoadBalanceData();
                                ~LoadBalanceData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value type; //type: LoadBalanceEnum
                                Value value_; //type: uint32
                                Value local_link_threshold; //type: uint32


                                class LoadBalanceEnum;


                        }; // BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface::LoadBalanceData> load_balance_data;


                    }; // BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface


                        std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Brief::BundleData::SubInterface> > sub_interface;


                }; // BundlesAdjacency::Nodes::Node::Brief::BundleData


                    std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Brief::BundleData> > bundle_data;


            }; // BundlesAdjacency::Nodes::Node::Brief


            class Bundles : public Entity
            {
                public:
                    Bundles();
                    ~Bundles();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Bundle : public Entity
                {
                    public:
                        Bundle();
                        ~Bundle();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value bundle_name; //type: string


                    class BundleInfo : public Entity
                    {
                        public:
                            BundleInfo();
                            ~BundleInfo();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value media; //type: BundleMedia1Enum
                            Value max_member_count; //type: uint32
                            Value avoid_rebalance; //type: boolean


                        class Brief : public Entity
                        {
                            public:
                                Brief();
                                ~Brief();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value interface_name; //type: string
                                Value sub_interface_count; //type: uint32
                                Value member_count; //type: uint32
                                Value total_weight; //type: uint32


                            class SubInterface : public Entity
                            {
                                public:
                                    SubInterface();
                                    ~SubInterface();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value interface_name; //type: string


                                class LoadBalanceData : public Entity
                                {
                                    public:
                                        LoadBalanceData();
                                        ~LoadBalanceData();

                                        bool has_data() const override;
                                        bool has_operation() const override;
                                        EntityPath get_entity_path(Entity* parent) const override;
                                        std::string get_segment_path() const override;
                                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                        void set_value(const std::string & value_path, std::string value) override;
                                        std::map<std::string, Entity*> & get_children() override;
                                        Value type; //type: LoadBalanceEnum
                                        Value value_; //type: uint32
                                        Value local_link_threshold; //type: uint32


                                        class LoadBalanceEnum;


                                }; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData


                                    std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface::LoadBalanceData> load_balance_data;


                            }; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface


                                std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief::SubInterface> > sub_interface;


                        }; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief


                        class LoadBalanceData : public Entity
                        {
                            public:
                                LoadBalanceData();
                                ~LoadBalanceData();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value type; //type: LoadBalanceEnum
                                Value value_; //type: uint32
                                Value local_link_threshold; //type: uint32


                                class LoadBalanceEnum;


                        }; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData


                        class Member : public Entity
                        {
                            public:
                                Member();
                                ~Member();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value interface_name; //type: string
                                Value link_id; //type: uint8
                                Value link_order_number; //type: uint8
                                Value bandwidth; //type: uint8




                        }; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member


                        class SubInterface : public Entity
                        {
                            public:
                                SubInterface();
                                ~SubInterface();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value interface_name; //type: string


                            class LoadBalanceData : public Entity
                            {
                                public:
                                    LoadBalanceData();
                                    ~LoadBalanceData();

                                    bool has_data() const override;
                                    bool has_operation() const override;
                                    EntityPath get_entity_path(Entity* parent) const override;
                                    std::string get_segment_path() const override;
                                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                    void set_value(const std::string & value_path, std::string value) override;
                                    std::map<std::string, Entity*> & get_children() override;
                                    Value type; //type: LoadBalanceEnum
                                    Value value_; //type: uint32
                                    Value local_link_threshold; //type: uint32


                                    class LoadBalanceEnum;


                            }; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData


                                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface::LoadBalanceData> load_balance_data;


                        }; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface


                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Brief> brief;
                            std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::LoadBalanceData> load_balance_data;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::Member> > member;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo::SubInterface> > sub_interface;
                            class BundleMedia1Enum;


                    }; // BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo


                        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle::BundleInfo> bundle_info;


                }; // BundlesAdjacency::Nodes::Node::Bundles::Bundle


                    std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles::Bundle> > bundle;


            }; // BundlesAdjacency::Nodes::Node::Bundles


                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Brief> brief;
                std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node::Bundles> bundles;


        }; // BundlesAdjacency::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes::Node> > node;


    }; // BundlesAdjacency::Nodes


        std::unique_ptr<Cisco_IOS_XR_bundlemgr_oper::BundlesAdjacency::Nodes> nodes;


}; // BundlesAdjacency


class BmdMlacpSwitchoverEnum : public Enum
{
    public:
        static const Enum::Value bmd_mlacp_switchover_nonrevertive;
        static const Enum::Value bmd_mlacp_switchover_brute_force;
        static const Enum::Value bmd_mlacp_switchover_revertive;
        static const Enum::Value bmd_mlacp_switchover_count;

};

class LoadBalanceEnum : public Enum
{
    public:
        static const Enum::Value default_;
        static const Enum::Value auto_;
        static const Enum::Value value_;
        static const Enum::Value source_ip;
        static const Enum::Value destination_ip;
        static const Enum::Value unknown;

};

class BmBdlStateEnum : public Enum
{
    public:
        static const Enum::Value bm_bdl_state_admin_down;
        static const Enum::Value bm_bdl_state_down;
        static const Enum::Value bm_bdl_state_ptnr_down;
        static const Enum::Value bm_bdl_state_bundle_shutdown;
        static const Enum::Value bm_bdl_state_pe_isolated;
        static const Enum::Value bm_bdl_state_nak;
        static const Enum::Value bm_bdl_state_up_active;
        static const Enum::Value bm_bdl_state_mlacp_hot_standby;
        static const Enum::Value bm_bdl_state_mlacp_cold_standby;
        static const Enum::Value bm_bdl_state_unknown;
        static const Enum::Value bm_bdl_state_cold_standby;
        static const Enum::Value bm_bdl_state_error_disabled;
        static const Enum::Value bm_bdl_state_efd_disabled;

};

class LacpPeriodStateEnum : public Enum
{
    public:
        static const Enum::Value period_s_low;
        static const Enum::Value period_fast;
        static const Enum::Value period_none;

};

class BundleMediaEnum : public Enum
{
    public:
        static const Enum::Value bundle_media_ethernet;
        static const Enum::Value bundle_media_pos;
        static const Enum::Value bundle_media_count;

};

class BmdMlacpBdlStateEnumEnum : public Enum
{
    public:
        static const Enum::Value bdl_state_nak;
        static const Enum::Value bdl_state_unknown;
        static const Enum::Value bdl_state_no_sync;
        static const Enum::Value bdl_state_rec_delay;
        static const Enum::Value bdl_state_up;
        static const Enum::Value bdl_state_down;
        static const Enum::Value bdl_state_admin_down;
        static const Enum::Value bdl_state_test;
        static const Enum::Value bdl_state_error;

};

class BundleMedia1Enum : public Enum
{
    public:
        static const Enum::Value ethernet;
        static const Enum::Value pos;

};

class RxstatesEnum : public Enum
{
    public:
        static const Enum::Value current_rx;
        static const Enum::Value expired;
        static const Enum::Value defaulted;
        static const Enum::Value initialize;
        static const Enum::Value lacp_disabled;
        static const Enum::Value port_disabled;

};

class LacpChurnstatesEnum : public Enum
{
    public:
        static const Enum::Value no_churn;
        static const Enum::Value churn;
        static const Enum::Value churn_monitor;

};

class BmdBagEventMbrItemEnum : public Enum
{
    public:
        static const Enum::Value bmd_event_mbr_idb_create;
        static const Enum::Value bmd_event_mbr_bdl_add;
        static const Enum::Value bmd_event_mbr_im_state;
        static const Enum::Value bmd_event_mbr_sel_logic;
        static const Enum::Value bmd_event_mbr_mux;
        static const Enum::Value bmd_event_mbr_bfd;
        static const Enum::Value bmd_event_mbr_expired;
        static const Enum::Value bmd_event_mbr_defaulted;
        static const Enum::Value bmd_event_mbr_first_retry;
        static const Enum::Value bmd_event_mbr_msg;
        static const Enum::Value bmd_event_mbr_error;
        static const Enum::Value bmd_event_mbr_mlacp_tlv;
        static const Enum::Value bmd_event_mbr_redundancy_role;
        static const Enum::Value bmd_event_mbr_count;

};

class BmdBagEventDataEnum : public Enum
{
    public:
        static const Enum::Value bmd_bag_evt_data_none;
        static const Enum::Value bmd_bag_evt_data_error;
        static const Enum::Value bmd_bag_evt_data_string;

};

class BmdSwitchReasonEnum : public Enum
{
    public:
        static const Enum::Value bm_switch_reason_none;
        static const Enum::Value bm_switch_reason_noop;
        static const Enum::Value bm_switch_reason_not_mlacp;
        static const Enum::Value bm_switch_reason_revertive;
        static const Enum::Value bm_switch_reason_bdl_down;
        static const Enum::Value bm_switch_reason_recovery;
        static const Enum::Value bm_switch_reason_preceding_error;
        static const Enum::Value bm_switch_reason_wrong_order;
        static const Enum::Value bm_switch_reason_singleton;

};

class BmdMemberTypeEnumEnum : public Enum
{
    public:
        static const Enum::Value bmd_mbr_local;
        static const Enum::Value bmd_mbr_foreign;
        static const Enum::Value bmd_mbr_unknown;

};

class BmAfIdEnum : public Enum
{
    public:
        static const Enum::Value bm_af_id_ipv4;
        static const Enum::Value bm_af_id_ipv6;

};

class BmMbrStateReasonEnum : public Enum
{
    public:
        static const Enum::Value bm_mbr_state_reason_unknown;
        static const Enum::Value bm_mbr_state_reason_unselectable_unknown;
        static const Enum::Value bm_mbr_state_reason_link_down;
        static const Enum::Value bm_mbr_state_reason_link_deleting;
        static const Enum::Value bm_mbr_state_reason_creating;
        static const Enum::Value bm_mbr_state_reason_bundle_creating;
        static const Enum::Value bm_mbr_state_reason_bundle_deleting;
        static const Enum::Value bm_mbr_state_reason_bundle_admin_down;
        static const Enum::Value bm_mbr_state_reason_replicating;
        static const Enum::Value bm_mbr_state_reason_bandwidth;
        static const Enum::Value bm_mbr_state_reason_loop_back;
        static const Enum::Value bm_mbr_state_reason_activity_type;
        static const Enum::Value bm_mbr_state_reason_bundle_shutdown;
        static const Enum::Value bm_mbr_state_reason_min_selected;
        static const Enum::Value bm_mbr_state_reason_max_selected;
        static const Enum::Value bm_mbr_state_reason_link_limit;
        static const Enum::Value bm_mbr_state_reason_active_limit;
        static const Enum::Value bm_mbr_state_reason_standby_unknown;
        static const Enum::Value bm_mbr_state_reason_expired;
        static const Enum::Value bm_mbr_state_reason_defaulted;
        static const Enum::Value bm_mbr_state_reason_act_or_not_agg;
        static const Enum::Value bm_mbr_state_reason_partner_not_agg;
        static const Enum::Value bm_mbr_state_reason_lagid;
        static const Enum::Value bm_mbr_state_reason_bundle_not_cfgd;
        static const Enum::Value bm_mbr_state_reason_bundle_not_ready;
        static const Enum::Value bm_mbr_state_reason_partner_ood;
        static const Enum::Value bm_mbr_state_reason_partner_not_in_sync;
        static const Enum::Value bm_mbr_state_reason_foreign_partner_oos;
        static const Enum::Value bm_mbr_state_reason_attach_unknown;
        static const Enum::Value bm_mbr_state_reason_partner_not_collecting;
        static const Enum::Value bm_mbr_state_reason_collect_unknown;
        static const Enum::Value bm_mbr_state_reason_standby_foreign;
        static const Enum::Value bm_mbr_state_reason_bfd_starting;
        static const Enum::Value bm_mbr_state_reason_bfd_down;
        static const Enum::Value bm_mbr_state_reason_bfd_nbr_unconfig;
        static const Enum::Value bm_mbr_state_reason_mlacp;
        static const Enum::Value bm_mbr_state_reason_pe_isolated;
        static const Enum::Value bm_mbr_state_reason_forced_switchover;
        static const Enum::Value bm_mbr_state_reason_errdis_unknown;
        static const Enum::Value bm_mbr_state_reason_mlacp_no_mbr_state_info;
        static const Enum::Value bm_mbr_state_reason_active;
        static const Enum::Value bm_mbr_state_reason_mlacp_no_bdl_state_info;
        static const Enum::Value bm_mbr_state_reason_mlacp_no_bdl_config_info;
        static const Enum::Value bm_mbr_state_reason_mlacp_no_bdl_sync;
        static const Enum::Value bm_mbr_state_reason_mlacp_bdl_has_no_peer;
        static const Enum::Value bm_mbr_state_reason_mlacp_nak;
        static const Enum::Value bm_mbr_state_reason_mlacp_transport_unavailable;
        static const Enum::Value bm_mbr_state_reason_mlacp_not_configured;
        static const Enum::Value bm_mbr_state_reason_recovery_timer;
        static const Enum::Value bm_mbr_state_reason_mlacp_standby;
        static const Enum::Value bm_mbr_state_reason_maximized_out;
        static const Enum::Value bm_mbr_state_reason_mlacp_peer_selected;
        static const Enum::Value bm_mbr_state_reason_mlacp_connect_timer_running;
        static const Enum::Value bm_mbr_state_reason_bundle_not_mlacp;
        static const Enum::Value bm_mbr_state_reason_no_lon;
        static const Enum::Value bm_mbr_state_reason_cumul_rel_bw_limit;
        static const Enum::Value bm_mbr_state_reason_no_mac;
        static const Enum::Value bm_mbr_state_reason_no_system_id;
        static const Enum::Value bm_mbr_state_reason_link_shutdown;
        static const Enum::Value bm_mbr_state_reason_activity_mlacp;
        static const Enum::Value bm_mbr_state_reason_activity_iccp;
        static const Enum::Value bm_mbr_state_reason_bundle_icpe_mlacp;
        static const Enum::Value bm_mbr_state_reason_no_link_num;
        static const Enum::Value bm_mbr_state_reason_standby_peer_higher_prio;
        static const Enum::Value bm_mbr_state_reason_red_state_standby;
        static const Enum::Value bm_mbr_state_reason_other_red_state_standby;
        static const Enum::Value bm_mbr_state_reason_hold_ing;
        static const Enum::Value bm_mbr_state_reason_bundle_error_disabled;
        static const Enum::Value bm_mbr_state_reason_bundle_efd_disabled;
        static const Enum::Value bm_mbr_state_reason_singleton_pe_isolated;
        static const Enum::Value bm_mbr_state_reason_bfd_ipv6_starting;
        static const Enum::Value bm_mbr_state_reason_bfd_ipv6_down;
        static const Enum::Value bm_mbr_state_reason_bfd_ipv6_nbr_unconfig;
        static const Enum::Value bm_mbr_state_reason_timer_running;
        static const Enum::Value bm_mbr_state_reason_count;

};

class BmdBagEventBdlItemEnum : public Enum
{
    public:
        static const Enum::Value bmd_event_bdl_idb_create;
        static const Enum::Value bmd_event_bdl_configured;
        static const Enum::Value bmd_event_bdl_im_state;
        static const Enum::Value bmd_event_bdl_mbr_added;
        static const Enum::Value bmd_event_bdl_mbr_deleted;
        static const Enum::Value bmd_event_bdl_mac_addr;
        static const Enum::Value bmd_event_bdl_first_retry;
        static const Enum::Value bmd_event_bdl_user_config;
        static const Enum::Value bmd_event_bdl_error;
        static const Enum::Value bmd_event_bdl_mlacp_tlv;
        static const Enum::Value bmd_event_bdl_redundancy_role;
        static const Enum::Value bdl_bfd_state_change;
        static const Enum::Value bmd_event_bdl_icl;
        static const Enum::Value bmd_event_bdl_count;

};

class BmdMlacpNodeStateEnumEnum : public Enum
{
    public:
        static const Enum::Value node_state_incomplete;
        static const Enum::Value node_state_conn_rejected;
        static const Enum::Value node_state_connect_sent;
        static const Enum::Value node_state_unconfigured;
        static const Enum::Value node_state_unreachable;
        static const Enum::Value node_state_iccp_down;
        static const Enum::Value node_state_nak;
        static const Enum::Value node_state_unknown;
        static const Enum::Value node_state_mlacp_down;
        static const Enum::Value node_state_admin_down;
        static const Enum::Value node_state_pe_isolated;
        static const Enum::Value node_state_error;
        static const Enum::Value node_state_test;
        static const Enum::Value node_state_up;

};

class BmdBagEventRgItemEnum : public Enum
{
    public:
        static const Enum::Value bmd_event_rg_idb_create;
        static const Enum::Value bmd_event_rg_configured;
        static const Enum::Value bmd_event_rg_user_config;
        static const Enum::Value bmd_event_rg_connect_ion;
        static const Enum::Value bmd_event_rg_data;
        static const Enum::Value bmd_event_rg_sync;
        static const Enum::Value bmd_event_rg_first_retry;
        static const Enum::Value bmd_event_rg_error;
        static const Enum::Value bmd_event_rg_mlacp_tlv;
        static const Enum::Value bmd_event_rg_iccp_event;
        static const Enum::Value bmd_event_rg_count;

};

class BmWhichSystemEnum : public Enum
{
    public:
        static const Enum::Value bm_which_system_actr;
        static const Enum::Value bm_which_system_ptnr;

};

class BmdBfdBdlStateEnum : public Enum
{
    public:
        static const Enum::Value bmd_bfd_bdl_down;
        static const Enum::Value bmd_bfd_bdl_unknown;
        static const Enum::Value bmd_bfd_bdl_up;
        static const Enum::Value bmd_bfd_bdl_count;

};

class BmdMlacpMbrStateEnumEnum : public Enum
{
    public:
        static const Enum::Value mbr_state_nak;
        static const Enum::Value mbr_state_unknown;
        static const Enum::Value mbr_state_up;
        static const Enum::Value mbr_state_down;
        static const Enum::Value mbr_state_admin_down;
        static const Enum::Value mbr_state_test;
        static const Enum::Value mbr_state_error;

};

class BmdBagTargetEnum : public Enum
{
    public:
        static const Enum::Value bm_bag_target_mbr;
        static const Enum::Value bm_bag_target_bdl;
        static const Enum::Value bm_bag_target_node;
        static const Enum::Value bm_bag_target_rg;

};

class BmMuxstateEnum : public Enum
{
    public:
        static const Enum::Value detached;
        static const Enum::Value waiting;
        static const Enum::Value attached;
        static const Enum::Value collecting;
        static const Enum::Value distributing;
        static const Enum::Value collecting_distributing;

};

class LacpSelStateEnum : public Enum
{
    public:
        static const Enum::Value unselected;
        static const Enum::Value standby;
        static const Enum::Value selected;

};

class BmdMemberStateEnum : public Enum
{
    public:
        static const Enum::Value bmd_mbr_state_configured;
        static const Enum::Value bmd_mbr_state_standby;
        static const Enum::Value bmd_mbr_state_hot_standby;
        static const Enum::Value bmd_mbr_state_negotiating;
        static const Enum::Value bmd_mbr_state_bfd_running;
        static const Enum::Value bmd_mbr_state_active;

};

class BmMuxreasonEnum : public Enum
{
    public:
        static const Enum::Value bm_mux_reason_no_reason;
        static const Enum::Value bm_mux_reason_link_down;
        static const Enum::Value bm_mux_reason_link_deleted;
        static const Enum::Value bm_mux_reason_duplex;
        static const Enum::Value bm_mux_reason_bandwidth;
        static const Enum::Value bm_mux_reason_loop_back;
        static const Enum::Value bm_mux_reason_activity_type;
        static const Enum::Value bm_mux_reason_link_limit;
        static const Enum::Value bm_mux_reason_shared;
        static const Enum::Value bm_mux_reason_lagid;
        static const Enum::Value bm_mux_reason_no_bundle;
        static const Enum::Value bm_mux_reason_no_primary;
        static const Enum::Value bm_mux_reason_bundle_down;
        static const Enum::Value bm_mux_reason_individual;
        static const Enum::Value bm_mux_reason_defaulted;
        static const Enum::Value bm_mux_reason_in_sync;
        static const Enum::Value bm_mux_reason_collecting;
        static const Enum::Value bm_mux_reason_active_link_limit;
        static const Enum::Value bm_mux_reason_distributing;
        static const Enum::Value bm_mux_reason_count;

};

class BmFeatureStatusEnum : public Enum
{
    public:
        static const Enum::Value bm_feature_not_configured;
        static const Enum::Value bm_feature_not_operational;
        static const Enum::Value bm_feature_operational;

};

class BmSeverityEnum : public Enum
{
    public:
        static const Enum::Value ok;
        static const Enum::Value information;
        static const Enum::Value misconfiguration;
        static const Enum::Value warning;
        static const Enum::Value error;

};

class BundleMlacpModeEnum : public Enum
{
    public:
        static const Enum::Value bundle_mlacp_mode_standby;
        static const Enum::Value bundle_mlacp_mode_active;
        static const Enum::Value bundle_mlacp_mode_count;

};

class BmdBagMlacpSchActionItemEnum : public Enum
{
    public:
        static const Enum::Value switchover;
        static const Enum::Value switchback;

};

class BmStateReasonTargetEnum : public Enum
{
    public:
        static const Enum::Value member_reason;
        static const Enum::Value bundle_reason;

};

class BmdMlacpNodeSyncEnumEnum : public Enum
{
    public:
        static const Enum::Value node_sync_req;
        static const Enum::Value node_sync_done;
        static const Enum::Value node_sync_start;
        static const Enum::Value node_sync_init;
        static const Enum::Value node_sync_singleton;

};

class BmBdlMacSourceEnum : public Enum
{
    public:
        static const Enum::Value bm_bdl_mac_source_unknown;
        static const Enum::Value bm_bdl_mac_source_chassis;
        static const Enum::Value bm_bdl_mac_source_configured;
        static const Enum::Value bm_bdl_mac_source_member;
        static const Enum::Value bm_bdl_mac_source_peer;

};


}
}

#endif /* _CISCO_IOS_XR_BUNDLEMGR_OPER_ */

