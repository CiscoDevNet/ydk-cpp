#ifndef _CISCO_IOS_XR_INFRA_POLICYMGR_CFG_
#define _CISCO_IOS_XR_INFRA_POLICYMGR_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_policymgr_cfg {

class PolicyManager : public Entity
{
    public:
        PolicyManager();
        ~PolicyManager();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class ClassMaps : public Entity
    {
        public:
            ClassMaps();
            ~ClassMaps();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class ClassMap : public Entity
        {
            public:
                ClassMap();
                ~ClassMap();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value type; //type: ClassMapTypeEnum
                Value name; //type: string
                Value class_map_mode_match_any; //type: empty
                Value class_map_mode_match_all; //type: empty
                Value description; //type: string


            class Match : public Entity
            {
                public:
                    Match();
                    ~Match();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value dei; //type: uint8
                    Value dei_inner; //type: uint8
                    Value ipv4_acl; //type: string
                    Value ipv6_acl; //type: string
                    Value ethernet_services_acl; //type: string
                    Value mpls_disposition_ipv4_access_list; //type: string
                    Value mpls_disposition_ipv6_access_list; //type: string
                    Value fr_de; //type: uint8
                    Value tcp_flag; //type: uint16
                    Value authen_status; //type: string
                    Value source_mac; //type: string
                    Value destination_mac; //type: string
                    Value vpls_control; //type: empty
                    Value vpls_broadcast; //type: empty
                    Value vpls_multicast; //type: empty
                    Value vpls_known; //type: empty
                    Value vpls_unknown; //type: empty
                    Value atm_clp; //type: uint8
                    Value atm_oam; //type: empty
                    Value cac_admit; //type: empty
                    Value cac_unadmit; //type: empty
                    ValueList ipv4_dscp; //type: list of  string
                    ValueList ipv6_dscp; //type: list of  string
                    ValueList dscp; //type: list of  string
                    ValueList ipv4_precedence; //type: list of  one of uint8, string
                    ValueList ipv6_precedence; //type: list of  one of uint8, string
                    ValueList precedence; //type: list of  one of uint8, string
                    ValueList qos_group; //type: list of  string
                    ValueList traffic_class; //type: list of  string
                    ValueList cos; //type: list of  uint8
                    ValueList inner_cos; //type: list of  uint8
                    ValueList protocol; //type: list of  string
                    ValueList mpls_experimental_topmost; //type: list of  uint8
                    ValueList mpls_experimental_imposition; //type: list of  uint8
                    ValueList discard_class; //type: list of  uint8
                    ValueList ipv4_packet_length; //type: list of  string
                    ValueList ipv6_packet_length; //type: list of  string
                    ValueList packet_length; //type: list of  string
                    ValueList vlan; //type: list of  string
                    ValueList inner_vlan; //type: list of  string
                    ValueList flow_tag; //type: list of  string
                    ValueList ethertype; //type: list of  string
                    ValueList destination_port; //type: list of  string
                    ValueList fragment_type; //type: list of  string
                    ValueList frame_relay_dlci; //type: list of  string
                    ValueList icmpv4_code; //type: list of  string
                    ValueList icmpv4_type; //type: list of  string
                    ValueList icmpv6_code; //type: list of  string
                    ValueList icmpv6_type; //type: list of  string
                    ValueList source_port; //type: list of  string
                    ValueList circuit_id; //type: list of  string
                    ValueList circuit_id_regex; //type: list of  string
                    ValueList dhcp_client_id; //type: list of  string
                    ValueList dhcp_client_id_regex; //type: list of  string
                    ValueList remote_id; //type: list of  string
                    ValueList remote_id_regex; //type: list of  string
                    ValueList service_name; //type: list of  string
                    ValueList service_name_regex; //type: list of  string
                    ValueList timer; //type: list of  string
                    ValueList timer_regex; //type: list of  string
                    ValueList user_name; //type: list of  string
                    ValueList user_name_regex; //type: list of  string


                class DestinationAddressIpv4 : public Entity
                {
                    public:
                        DestinationAddressIpv4();
                        ~DestinationAddressIpv4();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value address; //type: string
                        Value netmask; //type: string




                }; // PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4


                class DestinationAddressIpv6 : public Entity
                {
                    public:
                        DestinationAddressIpv6();
                        ~DestinationAddressIpv6();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value address; //type: string
                        Value prefix_length; //type: uint8




                }; // PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6


                class SourceAddressIpv4 : public Entity
                {
                    public:
                        SourceAddressIpv4();
                        ~SourceAddressIpv4();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value address; //type: string
                        Value netmask; //type: string




                }; // PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4


                class SourceAddressIpv6 : public Entity
                {
                    public:
                        SourceAddressIpv6();
                        ~SourceAddressIpv6();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value address; //type: string
                        Value prefix_length; //type: uint8




                }; // PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6


                class DomainName : public Entity
                {
                    public:
                        DomainName();
                        ~DomainName();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value name; //type: string
                        Value format; //type: string




                }; // PolicyManager::ClassMaps::ClassMap::Match::DomainName


                class DomainNameRegex : public Entity
                {
                    public:
                        DomainNameRegex();
                        ~DomainNameRegex();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value regex; //type: string
                        Value format; //type: string




                }; // PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex


                class Flow : public Entity
                {
                    public:
                        Flow();
                        ~Flow();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        ValueList flow_key; //type: list of  string


                    class FlowCache : public Entity
                    {
                        public:
                            FlowCache();
                            ~FlowCache();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value idle_timeout; //type: one of uint16, string




                    }; // PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache


                        std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache> flow_cache;


                }; // PolicyManager::ClassMaps::ClassMap::Match::Flow


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4> > destination_address_ipv4;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6> > destination_address_ipv6;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match::DomainName> > domain_name;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex> > domain_name_regex;
                    std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match::Flow> flow;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4> > source_address_ipv4;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6> > source_address_ipv6;


            }; // PolicyManager::ClassMaps::ClassMap::Match


            class MatchNot : public Entity
            {
                public:
                    MatchNot();
                    ~MatchNot();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value dei; //type: uint8
                    Value dei_inner; //type: uint8
                    Value ipv4_acl; //type: string
                    Value ipv6_acl; //type: string
                    Value ethernet_services_acl; //type: string
                    Value mpls_disposition_ipv4_access_list; //type: string
                    Value mpls_disposition_ipv6_access_list; //type: string
                    Value fr_de; //type: uint8
                    Value tcp_flag; //type: uint16
                    Value authen_status; //type: string
                    Value source_mac; //type: string
                    Value destination_mac; //type: string
                    Value vpls_control; //type: empty
                    Value vpls_broadcast; //type: empty
                    Value vpls_multicast; //type: empty
                    Value vpls_known; //type: empty
                    Value vpls_unknown; //type: empty
                    ValueList ipv4_dscp; //type: list of  string
                    ValueList ipv6_dscp; //type: list of  string
                    ValueList dscp; //type: list of  string
                    ValueList ipv4_precedence; //type: list of  one of uint8, string
                    ValueList ipv6_precedence; //type: list of  one of uint8, string
                    ValueList precedence; //type: list of  one of uint8, string
                    ValueList qos_group; //type: list of  string
                    ValueList traffic_class; //type: list of  string
                    ValueList cos; //type: list of  uint8
                    ValueList inner_cos; //type: list of  uint8
                    ValueList protocol; //type: list of  string
                    ValueList mpls_experimental_topmost; //type: list of  uint8
                    ValueList mpls_experimental_imposition; //type: list of  uint8
                    ValueList discard_class; //type: list of  uint8
                    ValueList ipv4_packet_length; //type: list of  string
                    ValueList ipv6_packet_length; //type: list of  string
                    ValueList packet_length; //type: list of  string
                    ValueList vlan; //type: list of  string
                    ValueList inner_vlan; //type: list of  string
                    ValueList flow_tag; //type: list of  string
                    ValueList ethertype; //type: list of  string
                    ValueList destination_port; //type: list of  string
                    ValueList fragment_type; //type: list of  string
                    ValueList frame_relay_dlci; //type: list of  string
                    ValueList icmpv4_code; //type: list of  string
                    ValueList icmpv4_type; //type: list of  string
                    ValueList icmpv6_code; //type: list of  string
                    ValueList icmpv6_type; //type: list of  string
                    ValueList source_port; //type: list of  string
                    ValueList circuit_id; //type: list of  string
                    ValueList circuit_id_regex; //type: list of  string
                    ValueList dhcp_client_id; //type: list of  string
                    ValueList dhcp_client_id_regex; //type: list of  string
                    ValueList remote_id; //type: list of  string
                    ValueList remote_id_regex; //type: list of  string
                    ValueList service_name; //type: list of  string
                    ValueList service_name_regex; //type: list of  string
                    ValueList timer; //type: list of  string
                    ValueList timer_regex; //type: list of  string
                    ValueList user_name; //type: list of  string
                    ValueList user_name_regex; //type: list of  string


                class DestinationAddressIpv4 : public Entity
                {
                    public:
                        DestinationAddressIpv4();
                        ~DestinationAddressIpv4();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value address; //type: string
                        Value netmask; //type: string




                }; // PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4


                class DestinationAddressIpv6 : public Entity
                {
                    public:
                        DestinationAddressIpv6();
                        ~DestinationAddressIpv6();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value address; //type: string
                        Value prefix_length; //type: uint8




                }; // PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6


                class SourceAddressIpv4 : public Entity
                {
                    public:
                        SourceAddressIpv4();
                        ~SourceAddressIpv4();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value address; //type: string
                        Value netmask; //type: string




                }; // PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4


                class SourceAddressIpv6 : public Entity
                {
                    public:
                        SourceAddressIpv6();
                        ~SourceAddressIpv6();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value address; //type: string
                        Value prefix_length; //type: uint8




                }; // PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6


                class DomainName : public Entity
                {
                    public:
                        DomainName();
                        ~DomainName();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value name; //type: string
                        Value format; //type: string




                }; // PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName


                class DomainNameRegex : public Entity
                {
                    public:
                        DomainNameRegex();
                        ~DomainNameRegex();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value regex; //type: string
                        Value format; //type: string




                }; // PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex


                class Flow : public Entity
                {
                    public:
                        Flow();
                        ~Flow();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        ValueList flow_tag; //type: list of  uint16




                }; // PolicyManager::ClassMaps::ClassMap::MatchNot::Flow


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4> > destination_address_ipv4;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6> > destination_address_ipv6;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName> > domain_name;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex> > domain_name_regex;
                    std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::MatchNot::Flow> flow;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4> > source_address_ipv4;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6> > source_address_ipv6;


            }; // PolicyManager::ClassMaps::ClassMap::MatchNot


                std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::Match> match;
                std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap::MatchNot> match_not;
                class ClassMapTypeEnum;


        }; // PolicyManager::ClassMaps::ClassMap


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps::ClassMap> > class_map;


    }; // PolicyManager::ClassMaps


    class PolicyMaps : public Entity
    {
        public:
            PolicyMaps();
            ~PolicyMaps();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class PolicyMap : public Entity
        {
            public:
                PolicyMap();
                ~PolicyMap();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value type; //type: PolicyMapTypeEnum
                Value name; //type: string
                Value description; //type: string


            class Event : public Entity
            {
                public:
                    Event();
                    ~Event();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value event_type; //type: EventTypeEnum
                    Value event_mode_match_all; //type: empty
                    Value event_mode_match_first; //type: empty


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
                        Value class_name; //type: string
                        Value class_type; //type: PmapClassMapTypeEnum
                        Value class_execution_strategy; //type: ExecutionStrategyEnum


                    class ActionRule : public Entity
                    {
                        public:
                            ActionRule();
                            ~ActionRule();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value action_sequence_number; //type: uint16
                            Value disconnect; //type: empty
                            Value monitor; //type: empty


                        class ActivateDynamicTemplate : public Entity
                        {
                            public:
                                ActivateDynamicTemplate();
                                ~ActivateDynamicTemplate();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value name; //type: string
                                Value aaa_list; //type: string




                        }; // PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::ActivateDynamicTemplate


                        class Authenticate : public Entity
                        {
                            public:
                                Authenticate();
                                ~Authenticate();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value aaa_list; //type: string




                        }; // PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authenticate


                        class Authorize : public Entity
                        {
                            public:
                                Authorize();
                                ~Authorize();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value aaa_list; //type: string
                                Value format; //type: string
                                Value identifier; //type: AuthorizeIdentifierEnum
                                Value password; //type: string


                                class AuthorizeIdentifierEnum;


                        }; // PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authorize


                        class DeactivateDynamicTemplate : public Entity
                        {
                            public:
                                DeactivateDynamicTemplate();
                                ~DeactivateDynamicTemplate();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value name; //type: string
                                Value aaa_list; //type: string




                        }; // PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::DeactivateDynamicTemplate


                        class SetTimer : public Entity
                        {
                            public:
                                SetTimer();
                                ~SetTimer();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value timer_name; //type: string
                                Value timer_value; //type: uint32




                        }; // PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::SetTimer


                        class StopTimer : public Entity
                        {
                            public:
                                StopTimer();
                                ~StopTimer();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value timer_name; //type: string




                        }; // PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::StopTimer


                            std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::ActivateDynamicTemplate> activate_dynamic_template; // presence node
                            std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authenticate> authenticate;
                            std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authorize> authorize; // presence node
                            std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::DeactivateDynamicTemplate> deactivate_dynamic_template; // presence node
                            std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::SetTimer> set_timer; // presence node
                            std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::StopTimer> stop_timer;


                    }; // PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule


                        std::vector<std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule> > action_rule;
                        class PmapClassMapTypeEnum;
                        class ExecutionStrategyEnum;


                }; // PolicyManager::PolicyMaps::PolicyMap::Event::Class_


                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::Event::Class_> > class_;
                    class EventTypeEnum;


            }; // PolicyManager::PolicyMaps::PolicyMap::Event


            class PolicyMapRule : public Entity
            {
                public:
                    PolicyMapRule();
                    ~PolicyMapRule();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value class_name; //type: string
                    Value class_type; //type: PmapClassMapTypeEnum
                    Value priority_level; //type: uint8
                    Value default_red; //type: empty
                    Value ecn_red; //type: empty
                    Value http_redirect; //type: string
                    Value pbr_transmit; //type: empty
                    Value pbr_drop; //type: empty
                    Value decap_gre; //type: empty
                    Value service_fragment; //type: string
                    Value fragment; //type: string


                class Shape : public Entity
                {
                    public:
                        Shape();
                        ~Shape();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Rate : public Entity
                    {
                        public:
                            Rate();
                            ~Rate();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value value_; //type: uint32
                            Value unit; //type: string




                    }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate


                    class Burst : public Entity
                    {
                        public:
                            Burst();
                            ~Burst();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value value_; //type: uint32
                            Value units; //type: string




                    }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst


                        std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst> burst;
                        std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate> rate;


                }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape


                class MinBandwidth : public Entity
                {
                    public:
                        MinBandwidth();
                        ~MinBandwidth();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value value_; //type: uint32
                        Value unit; //type: string




                }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth


                class BandwidthRemaining : public Entity
                {
                    public:
                        BandwidthRemaining();
                        ~BandwidthRemaining();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value value_; //type: uint32
                        Value unit; //type: string




                }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining


                class QueueLimit : public Entity
                {
                    public:
                        QueueLimit();
                        ~QueueLimit();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value value_; //type: uint32
                        Value unit; //type: string




                }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit


                class Pfc : public Entity
                {
                    public:
                        Pfc();
                        ~Pfc();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value pfc_pause_set; //type: empty


                    class PfcBufferSize : public Entity
                    {
                        public:
                            PfcBufferSize();
                            ~PfcBufferSize();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value value_; //type: uint32
                            Value unit; //type: string




                    }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize


                    class PfcPauseThreshold : public Entity
                    {
                        public:
                            PfcPauseThreshold();
                            ~PfcPauseThreshold();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value value_; //type: uint32
                            Value unit; //type: string




                    }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold


                    class PfcResumeThreshold : public Entity
                    {
                        public:
                            PfcResumeThreshold();
                            ~PfcResumeThreshold();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value value_; //type: uint32
                            Value unit; //type: string




                    }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold


                        std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize> pfc_buffer_size;
                        std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold> pfc_pause_threshold;
                        std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold> pfc_resume_threshold;


                }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc


                class RandomDetect : public Entity
                {
                    public:
                        RandomDetect();
                        ~RandomDetect();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value threshold_min_value; //type: uint32
                        Value threshold_min_units; //type: string
                        Value threshold_max_value; //type: uint32
                        Value threshold_max_units; //type: string
                        Value dei; //type: uint8
                        Value ecn; //type: empty
                        ValueList cos; //type: list of  string
                        ValueList discard_class; //type: list of  uint8
                        ValueList dscp; //type: list of  string
                        ValueList mpls_exp; //type: list of  uint8
                        ValueList precedence; //type: list of  one of uint8, string




                }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect


                class Set : public Entity
                {
                    public:
                        Set();
                        ~Set();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value dscp; //type: string
                        Value qos_group; //type: uint16
                        Value traffic_class; //type: uint8
                        Value discard_class; //type: uint8
                        Value forward_class; //type: uint8
                        Value df; //type: uint8
                        Value cos; //type: uint8
                        Value inner_cos; //type: uint8
                        Value precedence; //type: one of uint8, string
                        Value precedence_tunnel; //type: one of uint8, string
                        Value mpls_experimental_top_most; //type: uint8
                        Value mpls_experimental_imposition; //type: uint8
                        Value srp_priority; //type: uint8
                        Value fr_de; //type: uint8
                        Value dei; //type: uint8
                        Value dei_imposition; //type: uint8
                        Value source_address; //type: string
                        Value destination_address; //type: string




                }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set


                class Police : public Entity
                {
                    public:
                        Police();
                        ~Police();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Rate : public Entity
                    {
                        public:
                            Rate();
                            ~Rate();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value value_; //type: uint32
                            Value units; //type: string




                    }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate


                    class PeakRate : public Entity
                    {
                        public:
                            PeakRate();
                            ~PeakRate();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value value_; //type: uint32
                            Value units; //type: string




                    }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate


                    class Burst : public Entity
                    {
                        public:
                            Burst();
                            ~Burst();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value value_; //type: uint32
                            Value units; //type: string




                    }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst


                    class PeakBurst : public Entity
                    {
                        public:
                            PeakBurst();
                            ~PeakBurst();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value value_; //type: uint32
                            Value units; //type: string




                    }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst


                    class ConformAction : public Entity
                    {
                        public:
                            ConformAction();
                            ~ConformAction();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value transmit; //type: empty
                            Value drop; //type: empty


                        class Set : public Entity
                        {
                            public:
                                Set();
                                ~Set();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value dscp; //type: string
                                Value qos_group; //type: uint16
                                Value traffic_class; //type: uint8
                                Value discard_class; //type: uint8
                                Value forward_class; //type: uint8
                                Value df; //type: uint8
                                Value cos; //type: uint8
                                Value inner_cos; //type: uint8
                                Value precedence; //type: one of uint8, string
                                Value precedence_tunnel; //type: one of uint8, string
                                Value mpls_experimental_top_most; //type: uint8
                                Value mpls_experimental_imposition; //type: uint8
                                Value srp_priority; //type: uint8
                                Value fr_de; //type: uint8
                                Value dei; //type: uint8
                                Value dei_imposition; //type: uint8
                                Value source_address; //type: string
                                Value destination_address; //type: string




                        }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set


                            std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set> set;


                    }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction


                    class ExceedAction : public Entity
                    {
                        public:
                            ExceedAction();
                            ~ExceedAction();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value transmit; //type: empty
                            Value drop; //type: empty


                        class Set : public Entity
                        {
                            public:
                                Set();
                                ~Set();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value dscp; //type: string
                                Value qos_group; //type: uint16
                                Value traffic_class; //type: uint8
                                Value discard_class; //type: uint8
                                Value forward_class; //type: uint8
                                Value df; //type: uint8
                                Value cos; //type: uint8
                                Value inner_cos; //type: uint8
                                Value precedence; //type: one of uint8, string
                                Value precedence_tunnel; //type: one of uint8, string
                                Value mpls_experimental_top_most; //type: uint8
                                Value mpls_experimental_imposition; //type: uint8
                                Value srp_priority; //type: uint8
                                Value fr_de; //type: uint8
                                Value dei; //type: uint8
                                Value dei_imposition; //type: uint8
                                Value source_address; //type: string
                                Value destination_address; //type: string




                        }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set


                            std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set> set;


                    }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction


                    class ViolateAction : public Entity
                    {
                        public:
                            ViolateAction();
                            ~ViolateAction();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value transmit; //type: empty
                            Value drop; //type: empty


                        class Set : public Entity
                        {
                            public:
                                Set();
                                ~Set();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value dscp; //type: string
                                Value qos_group; //type: uint16
                                Value traffic_class; //type: uint8
                                Value discard_class; //type: uint8
                                Value forward_class; //type: uint8
                                Value df; //type: uint8
                                Value cos; //type: uint8
                                Value inner_cos; //type: uint8
                                Value precedence; //type: one of uint8, string
                                Value precedence_tunnel; //type: one of uint8, string
                                Value mpls_experimental_top_most; //type: uint8
                                Value mpls_experimental_imposition; //type: uint8
                                Value srp_priority; //type: uint8
                                Value fr_de; //type: uint8
                                Value dei; //type: uint8
                                Value dei_imposition; //type: uint8
                                Value source_address; //type: string
                                Value destination_address; //type: string




                        }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set


                            std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set> set;


                    }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction


                        std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst> burst;
                        std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction> conform_action;
                        std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction> exceed_action;
                        std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst> peak_burst;
                        std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate> peak_rate;
                        std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate> rate;
                        std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction> violate_action;


                }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police


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
                        Value policy_name; //type: string
                        Value type; //type: string




                }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy


                class CacLocal : public Entity
                {
                    public:
                        CacLocal();
                        ~CacLocal();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value flow_idle_timeout; //type: one of uint16, string


                    class Rate : public Entity
                    {
                        public:
                            Rate();
                            ~Rate();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value value_; //type: uint32
                            Value units; //type: string




                    }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate


                    class FlowRate : public Entity
                    {
                        public:
                            FlowRate();
                            ~FlowRate();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value value_; //type: uint32
                            Value units; //type: string




                    }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate


                        std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate> flow_rate;
                        std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate> rate;


                }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal


                class FlowParams : public Entity
                {
                    public:
                        FlowParams();
                        ~FlowParams();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value max_flow; //type: uint16
                        Value interval_duration; //type: uint32
                        Value history; //type: uint32
                        Value timeout; //type: uint32




                }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams


                class MetricsIpcbr : public Entity
                {
                    public:
                        MetricsIpcbr();
                        ~MetricsIpcbr();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class Rate : public Entity
                    {
                        public:
                            Rate();
                            ~Rate();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value layer3; //type: uint32
                            Value packet; //type: uint32
                            Value media; //type: uint32




                    }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate


                    class MediaPacket : public Entity
                    {
                        public:
                            MediaPacket();
                            ~MediaPacket();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value size; //type: uint16
                            Value count_in_layer3; //type: uint8




                    }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket


                        std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket> media_packet;
                        std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate> rate;


                }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr


                class React : public Entity
                {
                    public:
                        React();
                        ~React();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value descrition; //type: string
                        Value criterion_delay_factor; //type: empty
                        Value criterion_media_stop; //type: empty
                        Value criterion_mrv; //type: empty
                        Value criterion_flow_count; //type: empty
                        Value criterion_packet_rate; //type: empty


                    class Action : public Entity
                    {
                        public:
                            Action();
                            ~Action();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value syslog; //type: empty
                            Value snmp; //type: empty




                    }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action


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
                            Value severity; //type: string


                        class Type : public Entity
                        {
                            public:
                                Type();
                                ~Type();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value discrete; //type: empty
                                Value group_count; //type: uint16
                                Value group_percent; //type: uint16




                        }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type


                            std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type> type;


                    }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm


                    class Threshold : public Entity
                    {
                        public:
                            Threshold();
                            ~Threshold();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                        class TriggerValue : public Entity
                        {
                            public:
                                TriggerValue();
                                ~TriggerValue();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value greater_than; //type: string
                                Value greater_than_equal; //type: string
                                Value less_than; //type: string
                                Value less_than_equal; //type: string
                                Value range; //type: string




                        }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue


                        class TriggerType : public Entity
                        {
                            public:
                                TriggerType();
                                ~TriggerType();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value immediate; //type: empty
                                Value average; //type: uint32




                        }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType


                            std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType> trigger_type;
                            std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue> trigger_value;


                    }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold


                        std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action> action;
                        std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm> alarm;
                        std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold> threshold;


                }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React


                class PbrForward : public Entity
                {
                    public:
                        PbrForward();
                        ~PbrForward();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value default_; //type: empty


                    class NextHop : public Entity
                    {
                        public:
                            NextHop();
                            ~NextHop();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value vrf; //type: string
                            Value ipv4_address; //type: string
                            Value ipv6_address; //type: string




                    }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop


                        std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop> next_hop;


                }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward


                class ServiceFunctionPath : public Entity
                {
                    public:
                        ServiceFunctionPath();
                        ~ServiceFunctionPath();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value path_id; //type: uint32
                        Value index_; //type: uint8
                        Value metadata; //type: string




                }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath


                    std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining> bandwidth_remaining;
                    std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal> cac_local;
                    std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams> flow_params;
                    std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr> metrics_ipcbr;
                    std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth> min_bandwidth;
                    std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward> pbr_forward;
                    std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc> pfc;
                    std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police> police;
                    std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit> queue_limit;
                    std::vector<std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect> > random_detect;
                    std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React> react;
                    std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath> service_function_path;
                    std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy> service_policy;
                    std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set> set;
                    std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape> shape;
                    class PmapClassMapTypeEnum;


            }; // PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule


                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::Event> > event;
                std::vector<std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule> > policy_map_rule;
                class PolicyMapTypeEnum;


        }; // PolicyManager::PolicyMaps::PolicyMap


            std::vector<std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps::PolicyMap> > policy_map;


    }; // PolicyManager::PolicyMaps


        std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::ClassMaps> class_maps;
        std::unique_ptr<Cisco_IOS_XR_infra_policymgr_cfg::PolicyManager::PolicyMaps> policy_maps;


}; // PolicyManager


class EventTypeEnum : public Enum
{
    public:
        static const Enum::Value account_logoff;
        static const Enum::Value account_logon;
        static const Enum::Value authentication_failure;
        static const Enum::Value authentication_no_response;
        static const Enum::Value authorization_failure;
        static const Enum::Value authorization_no_response;
        static const Enum::Value credit_exhausted;
        static const Enum::Value exception;
        static const Enum::Value idle_timeout;
        static const Enum::Value quota_depleted;
        static const Enum::Value service_start;
        static const Enum::Value service_stop;
        static const Enum::Value session_activate;
        static const Enum::Value session_start;
        static const Enum::Value session_stop;
        static const Enum::Value timer_expiry;

};

class ClassMapTypeEnum : public Enum
{
    public:
        static const Enum::Value qos;
        static const Enum::Value traffic;
        static const Enum::Value control;

};

class ExecutionStrategyEnum : public Enum
{
    public:
        static const Enum::Value do_all;
        static const Enum::Value do_until_failure;
        static const Enum::Value do_until_success;

};

class AuthorizeIdentifierEnum : public Enum
{
    public:
        static const Enum::Value circuit_id;
        static const Enum::Value dhcp_client_id;
        static const Enum::Value remote_id;
        static const Enum::Value source_address_ipv4;
        static const Enum::Value source_address_ipv6;
        static const Enum::Value source_address_mac;
        static const Enum::Value username;

};

class PmapClassMapTypeEnum : public Enum
{
    public:
        static const Enum::Value qos;
        static const Enum::Value traffic;
        static const Enum::Value subscriber_control;

};

class PolicyMapTypeEnum : public Enum
{
    public:
        static const Enum::Value qos;
        static const Enum::Value pbr;
        static const Enum::Value traffic;
        static const Enum::Value subscriber_control;
        static const Enum::Value redirect;
        static const Enum::Value flow_monitor;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_POLICYMGR_CFG_ */

