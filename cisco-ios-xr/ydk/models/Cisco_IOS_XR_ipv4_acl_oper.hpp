#ifndef _CISCO_IOS_XR_IPV4_ACL_OPER_
#define _CISCO_IOS_XR_IPV4_ACL_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"


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


                    YLeaf prefix_list_name; //type: string

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


                            YLeaf sequence_number; //type: uint32
                            YLeaf item_type; //type: AclAce1Enum
                            YLeaf sequence; //type: uint32
                            YLeaf grant; //type: AclActionEnum
                            YLeaf prefix; //type: string
                            YLeaf prefix_length; //type: uint32
                            YLeaf operator_; //type: AclPortOperatorEnum
                            YLeaf minimum_length; //type: uint32
                            YLeaf maximum_length; //type: uint32
                            YLeaf hits; //type: uint32
                            YLeaf remark; //type: string
                            YLeaf acl_name; //type: string



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


                    YLeaf access_list_name; //type: string

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


                            YLeaf sequence_number; //type: uint32
                            YLeaf item_type; //type: AclAce1Enum
                            YLeaf sequence; //type: uint32
                            YLeaf grant; //type: AclActionEnum
                            YLeaf protocol; //type: uint16
                            YLeaf source_address; //type: string
                            YLeaf source_address_mask; //type: string
                            YLeaf destination_address; //type: string
                            YLeaf destination_address_mask; //type: string
                            YLeaf source_operator; //type: AclPortOperatorEnum
                            YLeaf source_port1; //type: uint16
                            YLeaf source_port2; //type: uint16
                            YLeaf sorce_operator; //type: AclPortOperatorEnum
                            YLeaf sorce_port1; //type: uint16
                            YLeaf sorce_port2; //type: uint16
                            YLeaf destination_operator; //type: AclPortOperatorEnum
                            YLeaf destination_port1; //type: uint16
                            YLeaf destination_port2; //type: uint16
                            YLeaf log_option; //type: AclLogEnum
                            YLeaf counter_name; //type: string
                            YLeaf capture; //type: boolean
                            YLeaf dscp_present; //type: boolean
                            YLeaf dscp; //type: uint8
                            YLeaf dscp2; //type: uint8
                            YLeaf dscp_operator; //type: uint8
                            YLeaf precedence_present; //type: boolean
                            YLeaf precedence; //type: uint8
                            YLeaf tcp_flags_operator; //type: AclTcpflagsOperatorEnum
                            YLeaf tcp_flags; //type: uint8
                            YLeaf tcp_flags_mask; //type: uint8
                            YLeaf fragments; //type: uint8
                            YLeaf port_length_operator; //type: AclPortOperatorEnum
                            YLeaf port_length1; //type: uint16
                            YLeaf port_length2; //type: uint16
                            YLeaf ttl_operator; //type: AclPortOperatorEnum
                            YLeaf ttl1; //type: uint16
                            YLeaf ttl2; //type: uint16
                            YLeaf no_stats; //type: boolean
                            YLeaf hits; //type: uint64
                            YLeaf is_icmp_off; //type: boolean
                            YLeaf next_hop_type; //type: BagAclNhEnum
                            YLeaf remark; //type: string
                            YLeaf dynamic; //type: boolean
                            YLeaf source_prefix_group; //type: string
                            YLeaf destination_prefix_group; //type: string
                            YLeaf source_port_group; //type: string
                            YLeaf destination_port_group; //type: string
                            YLeaf acl_name; //type: string
                            YLeaf sequence_str; //type: string

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


                                YLeaf next_hop; //type: uint32
                                YLeaf type; //type: BagAclNhEnum
                                YLeaf vrf_name; //type: string



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


                                YLeaf next_hop; //type: string
                                YLeaf track_name; //type: string
                                YLeaf status; //type: BagAclNhStatusEnum
                                YLeaf at_status; //type: BagAclNhAtStatusEnum
                                YLeaf is_acl_next_hop_exist; //type: boolean



                        }; // Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo


                            std::unique_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::HwNextHopInfo> hw_next_hop_info;
                            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_acl_oper::Ipv4AclAndPrefixList::AccessListManager::Accesses::Access::AccessListSequences::AccessListSequence::NextHopInfo> > next_hop_info;


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


                    YLeaf node_name; //type: string
                    YLeaf application_id; //type: AclUsageAppIdEnumEnum
                    YLeaf access_list_name; //type: string
                    YLeaf usage_details; //type: string



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


                YLeaf default_max_ac_ls; //type: uint32
                YLeaf default_max_ac_es; //type: uint32
                YLeaf current_configured_ac_ls; //type: uint32
                YLeaf current_configured_ac_es; //type: uint32
                YLeaf current_max_configurable_ac_ls; //type: uint32
                YLeaf current_max_configurable_ac_es; //type: uint32
                YLeaf max_configurable_ac_ls; //type: uint32
                YLeaf max_configurable_ac_es; //type: uint32



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


                    YLeaf prefix_list_name; //type: string
                    YLeaf default_max_ac_ls; //type: uint32
                    YLeaf default_max_ac_es; //type: uint32
                    YLeaf current_configured_ac_ls; //type: uint32
                    YLeaf current_configured_ac_es; //type: uint32
                    YLeaf current_max_configurable_ac_ls; //type: uint32
                    YLeaf current_max_configurable_ac_es; //type: uint32
                    YLeaf max_configurable_ac_ls; //type: uint32
                    YLeaf max_configurable_ac_es; //type: uint32



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


                    YLeaf access_list_name; //type: string
                    YLeaf default_max_ac_ls; //type: uint32
                    YLeaf default_max_ac_es; //type: uint32
                    YLeaf current_configured_ac_ls; //type: uint32
                    YLeaf current_configured_ac_es; //type: uint32
                    YLeaf current_max_configurable_ac_ls; //type: uint32
                    YLeaf current_max_configurable_ac_es; //type: uint32
                    YLeaf max_configurable_ac_ls; //type: uint32
                    YLeaf max_configurable_ac_es; //type: uint32



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


                    YLeaf default_max_ac_ls; //type: uint32
                    YLeaf default_max_ac_es; //type: uint32
                    YLeaf current_configured_ac_ls; //type: uint32
                    YLeaf current_configured_ac_es; //type: uint32
                    YLeaf current_max_configurable_ac_ls; //type: uint32
                    YLeaf current_max_configurable_ac_es; //type: uint32
                    YLeaf max_configurable_ac_ls; //type: uint32
                    YLeaf max_configurable_ac_es; //type: uint32



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


                    YLeaf default_max_ac_ls; //type: uint32
                    YLeaf default_max_ac_es; //type: uint32
                    YLeaf current_configured_ac_ls; //type: uint32
                    YLeaf current_configured_ac_es; //type: uint32
                    YLeaf current_max_configurable_ac_ls; //type: uint32
                    YLeaf current_max_configurable_ac_es; //type: uint32
                    YLeaf max_configurable_ac_ls; //type: uint32
                    YLeaf max_configurable_ac_es; //type: uint32



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
        static const Enum::YLeaf match_none;
        static const Enum::YLeaf match_all;
        static const Enum::YLeaf match_any_old;
        static const Enum::YLeaf match_any;

};

class AclPortOperatorEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf eq;
        static const Enum::YLeaf gt;
        static const Enum::YLeaf lt;
        static const Enum::YLeaf neq;
        static const Enum::YLeaf range;
        static const Enum::YLeaf onebyte;
        static const Enum::YLeaf twobytes;

};

class AclAce1Enum : public Enum
{
    public:
        static const Enum::YLeaf normal;
        static const Enum::YLeaf remark;
        static const Enum::YLeaf abf;

};

class BagAclNhAtStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf up;
        static const Enum::YLeaf down;
        static const Enum::YLeaf not_present;
        static const Enum::YLeaf max;

};

class BagAclNhEnum : public Enum
{
    public:
        static const Enum::YLeaf nexthop_none;
        static const Enum::YLeaf nexthop_default;
        static const Enum::YLeaf nexthop;

};

class AclActionEnum : public Enum
{
    public:
        static const Enum::YLeaf deny;
        static const Enum::YLeaf permit;
        static const Enum::YLeaf encrypt;
        static const Enum::YLeaf bypass;
        static const Enum::YLeaf fallthrough;
        static const Enum::YLeaf invalid;

};

class BagAclNhStatusEnum : public Enum
{
    public:
        static const Enum::YLeaf not_present;
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf down;
        static const Enum::YLeaf up;
        static const Enum::YLeaf max;

};

class AclLogEnum : public Enum
{
    public:
        static const Enum::YLeaf log_none;
        static const Enum::YLeaf log;
        static const Enum::YLeaf log_input;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_ACL_OPER_ */

