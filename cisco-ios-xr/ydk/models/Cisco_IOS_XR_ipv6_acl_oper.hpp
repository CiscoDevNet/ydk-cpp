#ifndef _CISCO_IOS_XR_IPV6_ACL_OPER_
#define _CISCO_IOS_XR_IPV6_ACL_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

#include "Cisco_IOS_XR_common_acl_datatypes.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_acl_oper {

class Ipv6AclAndPrefixList : public Entity
{
    public:
        Ipv6AclAndPrefixList();
        ~Ipv6AclAndPrefixList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class AccessListManager : public Entity
    {
        public:
            AccessListManager();
            ~AccessListManager();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Prefixes : public Entity
        {
            public:
                Prefixes();
                ~Prefixes();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Prefix : public Entity
            {
                public:
                    Prefix();
                    ~Prefix();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value prefix_list_name; //type: string


                class PrefixListSequences : public Entity
                {
                    public:
                        PrefixListSequences();
                        ~PrefixListSequences();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class PrefixListSequence : public Entity
                    {
                        public:
                            PrefixListSequence();
                            ~PrefixListSequence();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value sequence_number; //type: uint32
                            Value is_ace_type; //type: AclAce1Enum
                            Value is_ace_sequence_number; //type: uint32
                            Value is_packet_allow_or_deny; //type: AclActionEnum
                            Value is_address_in_numbers; //type: string
                            Value is_address_mask_length; //type: uint32
                            Value is_length_operator; //type: AclPortOperatorEnum
                            Value is_packet_minimum_length; //type: uint32
                            Value is_packet_maximum_length; //type: uint32
                            Value hits; //type: uint32
                            Value is_comment_for_entry; //type: string
                            Value acl_name; //type: string


                            class AclAce1Enum;
                            class AclPortOperatorEnum;
                            class AclActionEnum;


                    }; // Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence> > prefix_list_sequence;


                }; // Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences


                    std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences> prefix_list_sequences;


            }; // Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Prefixes::Prefix> > prefix;


        }; // Ipv6AclAndPrefixList::AccessListManager::Prefixes


        class Usages : public Entity
        {
            public:
                Usages();
                ~Usages();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Usage : public Entity
            {
                public:
                    Usage();
                    ~Usage();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value node_name; //type: string
                    Value application_id; //type: AclUsageAppIdEnumEnum
                    Value access_list_name; //type: string
                    Value usage_details; //type: string


                    class AclUsageAppIdEnumEnum;


            }; // Ipv6AclAndPrefixList::AccessListManager::Usages::Usage


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Usages::Usage> > usage;


        }; // Ipv6AclAndPrefixList::AccessListManager::Usages


        class Accesses : public Entity
        {
            public:
                Accesses();
                ~Accesses();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Access : public Entity
            {
                public:
                    Access();
                    ~Access();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value access_list_name; //type: string


                class AccessListSequences : public Entity
                {
                    public:
                        AccessListSequences();
                        ~AccessListSequences();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class AccessListSequence : public Entity
                    {
                        public:
                            AccessListSequence();
                            ~AccessListSequence();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value sequence_number; //type: uint32
                            Value is_ace_type; //type: AclAce1Enum
                            Value is_ace_sequence_number; //type: uint32
                            Value is_packet_allow_or_deny; //type: AclActionEnum
                            Value is_ipv6_protocol_type; //type: int32
                            Value is_source_address_in_numbers; //type: string
                            Value is_source_address_prefix_length; //type: uint32
                            Value source_mask; //type: string
                            Value is_destination_address_in_numbers; //type: string
                            Value is_destination_address_prefix_length; //type: uint32
                            Value destination_mask; //type: string
                            Value is_source_operator; //type: AclPortOperatorEnum
                            Value is_source_port1; //type: uint32
                            Value is_source_port2; //type: uint32
                            Value is_destination_operator; //type: AclPortOperatorEnum
                            Value is_destination_port1; //type: uint32
                            Value is_destination_port2; //type: uint32
                            Value is_log_option; //type: AclLogEnum
                            Value counter_name; //type: string
                            Value is_tcp_bits_operator; //type: AclTcpflagsOperatorEnum
                            Value is_tcp_bits; //type: uint32
                            Value is_tcp_bits_mask; //type: uint32
                            Value is_dscp_present; //type: int32
                            Value is_dscp_valu; //type: uint32
                            Value is_precedence_present; //type: int32
                            Value is_precedence_value; //type: uint32
                            Value is_header_matches; //type: uint32
                            Value is_packet_length_operator; //type: AclPortOperatorEnum
                            Value is_packet_length_start; //type: uint32
                            Value is_packet_length_end; //type: uint32
                            Value is_time_to_live_operator; //type: AclPortOperatorEnum
                            Value is_time_to_live_start; //type: uint32
                            Value is_time_to_live_end; //type: uint32
                            Value no_stats; //type: int32
                            Value hits; //type: uint64
                            Value capture; //type: boolean
                            Value is_icmp_message_off; //type: int32
                            Value is_comment_for_entry; //type: string
                            Value next_hop_type; //type: BagAclNhEnum
                            Value is_flow_id; //type: uint32
                            Value source_prefix_group; //type: string
                            Value destination_prefix_group; //type: string
                            Value source_port_group; //type: string
                            Value destination_port_group; //type: string
                            Value acl_name; //type: string
                            Value sequence_str; //type: string


                        class HwNextHopInfo : public Entity
                        {
                            public:
                                HwNextHopInfo();
                                ~HwNextHopInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value type; //type: BagAclNhEnum
                                Value next_hop; //type: string
                                Value table_id; //type: uint32
                                Value vrf_name; //type: string


                                class BagAclNhEnum;


                        }; // Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo


                        class NextHopInfo : public Entity
                        {
                            public:
                                NextHopInfo();
                                ~NextHopInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value next_hop; //type: string
                                Value vrf_name; //type: string
                                Value track_name; //type: string
                                Value status; //type: BagAclNhStatusEnum
                                Value at_status; //type: BagAclNhAtStatusEnum
                                Value acl_nh_exist; //type: int32


                                class BagAclNhAtStatusEnum;
                                class BagAclNhStatusEnum;


                        }; // Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo


                            std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo> hw_next_hop_info;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo> > next_hop_info;
                            class AclAce1Enum;
                            class AclPortOperatorEnum;
                            class AclLogEnum;
                            class AclActionEnum;
                            class AclPortOperatorEnum;
                            class AclPortOperatorEnum;
                            class AclTcpflagsOperatorEnum;
                            class AclPortOperatorEnum;
                            class BagAclNhEnum;


                    }; // Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence> > access_list_sequence;


                }; // Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences


                    std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences> access_list_sequences;


            }; // Ipv6AclAndPrefixList::AccessListManager::Accesses::Access


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Accesses::Access> > access;


        }; // Ipv6AclAndPrefixList::AccessListManager::Accesses


            std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Accesses> accesses;
            std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Prefixes> prefixes;
            std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager::Usages> usages;


    }; // Ipv6AclAndPrefixList::AccessListManager


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


        class Details : public Entity
        {
            public:
                Details();
                ~Details();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value is_default_maximum_configurable_ac_ls; //type: uint32
                Value is_default_maximum_configurable_ac_es; //type: uint32
                Value is_current_configured_ac_ls; //type: uint32
                Value is_current_configured_aces; //type: uint32
                Value is_current_maximum_configurable_acls; //type: uint32
                Value is_current_maximum_configurable_aces; //type: uint32
                Value is_maximum_configurable_ac_ls; //type: uint32
                Value is_maximum_configurable_ac_es; //type: uint32




        }; // Ipv6AclAndPrefixList::Oor::Details


        class PrefixListSummary : public Entity
        {
            public:
                PrefixListSummary();
                ~PrefixListSummary();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Details : public Entity
            {
                public:
                    Details();
                    ~Details();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_default_maximum_configurable_ac_ls; //type: uint32
                    Value is_default_maximum_configurable_ac_es; //type: uint32
                    Value is_current_configured_ac_ls; //type: uint32
                    Value is_current_configured_aces; //type: uint32
                    Value is_current_maximum_configurable_acls; //type: uint32
                    Value is_current_maximum_configurable_aces; //type: uint32
                    Value is_maximum_configurable_ac_ls; //type: uint32
                    Value is_maximum_configurable_ac_es; //type: uint32




            }; // Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details


                std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::Oor::PrefixListSummary::Details> details;


        }; // Ipv6AclAndPrefixList::Oor::PrefixListSummary


        class OorAccesses : public Entity
        {
            public:
                OorAccesses();
                ~OorAccesses();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class OorAccess : public Entity
            {
                public:
                    OorAccess();
                    ~OorAccess();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value access_list_name; //type: string
                    Value is_default_maximum_configurable_ac_ls; //type: uint32
                    Value is_default_maximum_configurable_ac_es; //type: uint32
                    Value is_current_configured_ac_ls; //type: uint32
                    Value is_current_configured_aces; //type: uint32
                    Value is_current_maximum_configurable_acls; //type: uint32
                    Value is_current_maximum_configurable_aces; //type: uint32
                    Value is_maximum_configurable_ac_ls; //type: uint32
                    Value is_maximum_configurable_ac_es; //type: uint32




            }; // Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::Oor::OorAccesses::OorAccess> > oor_access;


        }; // Ipv6AclAndPrefixList::Oor::OorAccesses


        class OorPrefixes : public Entity
        {
            public:
                OorPrefixes();
                ~OorPrefixes();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class OorPrefix : public Entity
            {
                public:
                    OorPrefix();
                    ~OorPrefix();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value prefix_list_name; //type: string
                    Value is_default_maximum_configurable_ac_ls; //type: uint32
                    Value is_default_maximum_configurable_ac_es; //type: uint32
                    Value is_current_configured_ac_ls; //type: uint32
                    Value is_current_configured_aces; //type: uint32
                    Value is_current_maximum_configurable_acls; //type: uint32
                    Value is_current_maximum_configurable_aces; //type: uint32
                    Value is_maximum_configurable_ac_ls; //type: uint32
                    Value is_maximum_configurable_ac_es; //type: uint32




            }; // Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::Oor::OorPrefixes::OorPrefix> > oor_prefix;


        }; // Ipv6AclAndPrefixList::Oor::OorPrefixes


        class AccessListSummary : public Entity
        {
            public:
                AccessListSummary();
                ~AccessListSummary();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


            class Details : public Entity
            {
                public:
                    Details();
                    ~Details();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value is_default_maximum_configurable_ac_ls; //type: uint32
                    Value is_default_maximum_configurable_ac_es; //type: uint32
                    Value is_current_configured_ac_ls; //type: uint32
                    Value is_current_configured_aces; //type: uint32
                    Value is_current_maximum_configurable_acls; //type: uint32
                    Value is_current_maximum_configurable_aces; //type: uint32
                    Value is_maximum_configurable_ac_ls; //type: uint32
                    Value is_maximum_configurable_ac_es; //type: uint32




            }; // Ipv6AclAndPrefixList::Oor::AccessListSummary::Details


                std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::Oor::AccessListSummary::Details> details;


        }; // Ipv6AclAndPrefixList::Oor::AccessListSummary


            std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::Oor::AccessListSummary> access_list_summary;
            std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::Oor::Details> details;
            std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::Oor::OorAccesses> oor_accesses;
            std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::Oor::OorPrefixes> oor_prefixes;
            std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::Oor::PrefixListSummary> prefix_list_summary;


    }; // Ipv6AclAndPrefixList::Oor


        std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::AccessListManager> access_list_manager;
        std::unique_ptr<Cisco_IOS_XR_ipv6_acl_oper::Ipv6AclAndPrefixList::Oor> oor;


}; // Ipv6AclAndPrefixList


class AclTcpflagsOperatorEnum : public Enum
{
    public:
        static const Enum::Value match_none;
        static const Enum::Value match_all;
        static const Enum::Value match_any_old;
        static const Enum::Value match_any;

};

class AclPortOperatorEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value eq;
        static const Enum::Value gt;
        static const Enum::Value lt;
        static const Enum::Value neq;
        static const Enum::Value range;
        static const Enum::Value onebyte;
        static const Enum::Value twobytes;

};

class AclAce1Enum : public Enum
{
    public:
        static const Enum::Value normal;
        static const Enum::Value remark;
        static const Enum::Value abf;

};

class BagAclNhAtStatusEnum : public Enum
{
    public:
        static const Enum::Value unknown;
        static const Enum::Value up;
        static const Enum::Value down;
        static const Enum::Value not_present;
        static const Enum::Value max;

};

class BagAclNhEnum : public Enum
{
    public:
        static const Enum::Value nexthop_none;
        static const Enum::Value nexthop_default;
        static const Enum::Value nexthop;

};

class AclActionEnum : public Enum
{
    public:
        static const Enum::Value deny;
        static const Enum::Value permit;
        static const Enum::Value encrypt;
        static const Enum::Value bypass;
        static const Enum::Value fallthrough;
        static const Enum::Value invalid;

};

class BagAclNhStatusEnum : public Enum
{
    public:
        static const Enum::Value not_present;
        static const Enum::Value unknown;
        static const Enum::Value down;
        static const Enum::Value up;
        static const Enum::Value max;

};

class AclLogEnum : public Enum
{
    public:
        static const Enum::Value log_none;
        static const Enum::Value log;
        static const Enum::Value log_input;

};


}
}

#endif /* _CISCO_IOS_XR_IPV6_ACL_OPER_ */

