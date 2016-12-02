#ifndef _CISCO_IOS_XR_IPV4_ACL_OPER_
#define _CISCO_IOS_XR_IPV4_ACL_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

#include "Cisco_IOS_XR_common_acl_datatypes.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_acl_oper {

class Ipv4AclAndPrefixList : public Entity
{
    public:
        Ipv4AclAndPrefixList();
        ~Ipv4AclAndPrefixList();

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
                            Value item_type; //type: AclAce1Enum
                            Value sequence; //type: uint32
                            Value grant; //type: AclActionEnum
                            Value prefix; //type: string
                            Value prefix_length; //type: uint32
                            Value operator_; //type: AclPortOperatorEnum
                            Value minimum_length; //type: uint32
                            Value maximum_length; //type: uint32
                            Value hits; //type: uint32
                            Value remark; //type: string
                            Value acl_name; //type: string


                            class AclActionEnum;
                            class AclAce1Enum;
                            class AclPortOperatorEnum;


                    }; // Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences::PrefixListSequence> > prefix_list_sequence;


                }; // Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences


                    std::unique_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix::PrefixListSequences> prefix_list_sequences;


            }; // Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Prefixes::Prefix> > prefix;


        }; // Ipv4AclAndPrefixList::AccessListManager::Prefixes


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
                            Value item_type; //type: AclAce1Enum
                            Value sequence; //type: uint32
                            Value grant; //type: AclActionEnum
                            Value protocol; //type: uint16
                            Value source_address; //type: string
                            Value source_address_mask; //type: string
                            Value destination_address; //type: string
                            Value destination_address_mask; //type: string
                            Value source_operator; //type: AclPortOperatorEnum
                            Value source_port1; //type: uint16
                            Value source_port2; //type: uint16
                            Value sorce_operator; //type: AclPortOperatorEnum
                            Value sorce_port1; //type: uint16
                            Value sorce_port2; //type: uint16
                            Value destination_operator; //type: AclPortOperatorEnum
                            Value destination_port1; //type: uint16
                            Value destination_port2; //type: uint16
                            Value log_option; //type: AclLogEnum
                            Value counter_name; //type: string
                            Value capture; //type: boolean
                            Value dscp_present; //type: boolean
                            Value dscp; //type: uint8
                            Value dscp2; //type: uint8
                            Value dscp_operator; //type: uint8
                            Value precedence_present; //type: boolean
                            Value precedence; //type: uint8
                            Value tcp_flags_operator; //type: AclTcpflagsOperatorEnum
                            Value tcp_flags; //type: uint8
                            Value tcp_flags_mask; //type: uint8
                            Value fragments; //type: uint8
                            Value port_length_operator; //type: AclPortOperatorEnum
                            Value port_length1; //type: uint16
                            Value port_length2; //type: uint16
                            Value ttl_operator; //type: AclPortOperatorEnum
                            Value ttl1; //type: uint16
                            Value ttl2; //type: uint16
                            Value no_stats; //type: boolean
                            Value hits; //type: uint64
                            Value is_icmp_off; //type: boolean
                            Value next_hop_type; //type: BagAclNhEnum
                            Value remark; //type: string
                            Value dynamic; //type: boolean
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
                                Value next_hop; //type: uint32
                                Value type; //type: BagAclNhEnum
                                Value vrf_name; //type: string


                                class BagAclNhEnum;


                        }; // Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo


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
                                Value track_name; //type: string
                                Value status; //type: BagAclNhStatusEnum
                                Value at_status; //type: BagAclNhAtStatusEnum
                                Value is_acl_next_hop_exist; //type: boolean


                                class BagAclNhAtStatusEnum;
                                class BagAclNhStatusEnum;


                        }; // Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo


                            std::unique_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo> hw_next_hop_info;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo> > next_hop_info;
                            class AclPortOperatorEnum;
                            class AclActionEnum;
                            class AclAce1Enum;
                            class AclLogEnum;
                            class BagAclNhEnum;
                            class AclPortOperatorEnum;
                            class AclPortOperatorEnum;
                            class AclPortOperatorEnum;
                            class AclTcpflagsOperatorEnum;
                            class AclPortOperatorEnum;


                    }; // Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence> > access_list_sequence;


                }; // Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences


                    std::unique_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences> access_list_sequences;


            }; // Ipv4AclAndPrefixList::AccessListManager::Accesses::Access


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Accesses::Access> > access;


        }; // Ipv4AclAndPrefixList::AccessListManager::Accesses


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


            }; // Ipv4AclAndPrefixList::AccessListManager::Usages::Usage


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Usages::Usage> > usage;


        }; // Ipv4AclAndPrefixList::AccessListManager::Usages


            std::unique_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Accesses> accesses;
            std::unique_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Prefixes> prefixes;
            std::unique_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Usages> usages;


    }; // Ipv4AclAndPrefixList::AccessListManager


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
                Value default_max_ac_ls; //type: uint32
                Value default_max_ac_es; //type: uint32
                Value current_configured_ac_ls; //type: uint32
                Value current_configured_ac_es; //type: uint32
                Value current_max_configurable_ac_ls; //type: uint32
                Value current_max_configurable_ac_es; //type: uint32
                Value max_configurable_ac_ls; //type: uint32
                Value max_configurable_ac_es; //type: uint32




        }; // Ipv4AclAndPrefixList::Oor::Details


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
                    Value default_max_ac_ls; //type: uint32
                    Value default_max_ac_es; //type: uint32
                    Value current_configured_ac_ls; //type: uint32
                    Value current_configured_ac_es; //type: uint32
                    Value current_max_configurable_ac_ls; //type: uint32
                    Value current_max_configurable_ac_es; //type: uint32
                    Value max_configurable_ac_ls; //type: uint32
                    Value max_configurable_ac_es; //type: uint32




            }; // Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::Oor::OorPrefixes::OorPrefix> > oor_prefix;


        }; // Ipv4AclAndPrefixList::Oor::OorPrefixes


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
                    Value default_max_ac_ls; //type: uint32
                    Value default_max_ac_es; //type: uint32
                    Value current_configured_ac_ls; //type: uint32
                    Value current_configured_ac_es; //type: uint32
                    Value current_max_configurable_ac_ls; //type: uint32
                    Value current_max_configurable_ac_es; //type: uint32
                    Value max_configurable_ac_ls; //type: uint32
                    Value max_configurable_ac_es; //type: uint32




            }; // Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess


                std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::Oor::OorAccesses::OorAccess> > oor_access;


        }; // Ipv4AclAndPrefixList::Oor::OorAccesses


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
                    Value default_max_ac_ls; //type: uint32
                    Value default_max_ac_es; //type: uint32
                    Value current_configured_ac_ls; //type: uint32
                    Value current_configured_ac_es; //type: uint32
                    Value current_max_configurable_ac_ls; //type: uint32
                    Value current_max_configurable_ac_es; //type: uint32
                    Value max_configurable_ac_ls; //type: uint32
                    Value max_configurable_ac_es; //type: uint32




            }; // Ipv4AclAndPrefixList::Oor::AccessListSummary::Details


                std::unique_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::Oor::AccessListSummary::Details> details;


        }; // Ipv4AclAndPrefixList::Oor::AccessListSummary


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
                    Value default_max_ac_ls; //type: uint32
                    Value default_max_ac_es; //type: uint32
                    Value current_configured_ac_ls; //type: uint32
                    Value current_configured_ac_es; //type: uint32
                    Value current_max_configurable_ac_ls; //type: uint32
                    Value current_max_configurable_ac_es; //type: uint32
                    Value max_configurable_ac_ls; //type: uint32
                    Value max_configurable_ac_es; //type: uint32




            }; // Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details


                std::unique_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::Oor::PrefixListSummary::Details> details;


        }; // Ipv4AclAndPrefixList::Oor::PrefixListSummary


            std::unique_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::Oor::AccessListSummary> access_list_summary;
            std::unique_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::Oor::Details> details;
            std::unique_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::Oor::OorAccesses> oor_accesses;
            std::unique_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::Oor::OorPrefixes> oor_prefixes;
            std::unique_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::Oor::PrefixListSummary> prefix_list_summary;


    }; // Ipv4AclAndPrefixList::Oor


        std::unique_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager> access_list_manager;
        std::unique_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::Oor> oor;


}; // Ipv4AclAndPrefixList


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

#endif /* _CISCO_IOS_XR_IPV4_ACL_OPER_ */

