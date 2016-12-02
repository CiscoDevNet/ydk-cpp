#ifndef _CISCO_IOS_XR_IPV4_ACL_CFG_
#define _CISCO_IOS_XR_IPV4_ACL_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

#include "Cisco_IOS_XR_ipv4_acl_datatypes.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_acl_cfg {

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


            class AccessListEntries : public Entity
            {
                public:
                    AccessListEntries();
                    ~AccessListEntries();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class AccessListEntry : public Entity
                {
                    public:
                        AccessListEntry();
                        ~AccessListEntry();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value sequence_number; //type: uint32
                        Value grant; //type: Ipv4AclGrantEnumEnum
                        Value protocol; //type: one of uint32, enumeration
                        Value counter_name; //type: string
                        Value igmp_message_type; //type: one of uint32, enumeration
                        Value precedence; //type: one of uint32, enumeration
                        Value log_option; //type: Ipv4AclLoggingEnumEnum
                        Value capture; //type: boolean
                        Value icmp_off; //type: empty
                        Value fragments; //type: empty
                        Value remark; //type: string
                        Value source_prefix_group; //type: string
                        Value destination_prefix_group; //type: string
                        Value source_port_group; //type: string
                        Value destination_port_group; //type: string
                        Value sequence_str; //type: string


                    class SourceNetwork : public Entity
                    {
                        public:
                            SourceNetwork();
                            ~SourceNetwork();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_address; //type: string
                            Value source_wild_card_bits; //type: string




                    }; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork


                    class DestinationNetwork : public Entity
                    {
                        public:
                            DestinationNetwork();
                            ~DestinationNetwork();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_address; //type: string
                            Value destination_wild_card_bits; //type: string




                    }; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork


                    class SourcePort : public Entity
                    {
                        public:
                            SourcePort();
                            ~SourcePort();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value source_operator; //type: Ipv4AclOperatorEnumEnum
                            Value first_source_port; //type: one of uint32, enumeration
                            Value second_source_port; //type: one of uint32, enumeration


                            class Ipv4AclPortNumberEnum;
                            class Ipv4AclPortNumberEnum;
                            class Ipv4AclOperatorEnumEnum;


                    }; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort


                    class DestinationPort : public Entity
                    {
                        public:
                            DestinationPort();
                            ~DestinationPort();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value destination_operator; //type: Ipv4AclOperatorEnumEnum
                            Value first_destination_port; //type: one of uint32, enumeration
                            Value second_destination_port; //type: one of uint32, enumeration


                            class Ipv4AclOperatorEnumEnum;
                            class Ipv4AclPortNumberEnum;
                            class Ipv4AclPortNumberEnum;


                    }; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort


                    class Icmp : public Entity
                    {
                        public:
                            Icmp();
                            ~Icmp();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value icmp_type_code; //type: Ipv4AclIcmpTypeCodeEnumEnum


                            class Ipv4AclIcmpTypeCodeEnumEnum;


                    }; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp


                    class Tcp : public Entity
                    {
                        public:
                            Tcp();
                            ~Tcp();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value tcp_bits_match_operator; //type: Ipv4AclTcpMatchOperatorEnumEnum
                            Value tcp_bits; //type: one of uint32, enumeration
                            Value tcp_bits_mask; //type: one of uint32, enumeration


                            class Ipv4AclTcpBitsNumberEnum;
                            class Ipv4AclTcpBitsNumberEnum;
                            class Ipv4AclTcpMatchOperatorEnumEnum;


                    }; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp


                    class PacketLength : public Entity
                    {
                        public:
                            PacketLength();
                            ~PacketLength();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value packet_length_operator; //type: Ipv4AclOperatorEnumEnum
                            Value packet_length_min; //type: uint32
                            Value packet_length_max; //type: uint32


                            class Ipv4AclOperatorEnumEnum;


                    }; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength


                    class TimeToLive : public Entity
                    {
                        public:
                            TimeToLive();
                            ~TimeToLive();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value time_to_live_operator; //type: Ipv4AclOperatorEnumEnum
                            Value time_to_live_min; //type: uint32
                            Value time_to_live_max; //type: uint32


                            class Ipv4AclOperatorEnumEnum;


                    }; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive


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
                            Value next_hop_type; //type: NextHopTypeEnum


                        class NextHop1 : public Entity
                        {
                            public:
                                NextHop1();
                                ~NextHop1();

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




                        }; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1


                        class NextHop2 : public Entity
                        {
                            public:
                                NextHop2();
                                ~NextHop2();

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




                        }; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2


                        class NextHop3 : public Entity
                        {
                            public:
                                NextHop3();
                                ~NextHop3();

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




                        }; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3


                            std::unique_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop1> next_hop_1;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop2> next_hop_2;
                            std::unique_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop::NextHop3> next_hop_3;
                            class NextHopTypeEnum;


                    }; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop


                    class Dscp : public Entity
                    {
                        public:
                            Dscp();
                            ~Dscp();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value dscp_operator; //type: Ipv4AclOperatorEnumEnum
                            Value dscp_min; //type: one of uint32, enumeration
                            Value dscp_max; //type: one of uint32, enumeration


                            class Ipv4AclDscpNumberEnum;
                            class Ipv4AclDscpNumberEnum;
                            class Ipv4AclOperatorEnumEnum;


                    }; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Dscp


                        std::unique_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationNetwork> destination_network;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::DestinationPort> destination_port;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Dscp> dscp;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Icmp> icmp;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::NextHop> next_hop;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::PacketLength> packet_length;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourceNetwork> source_network;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::SourcePort> source_port;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::Tcp> tcp;
                        std::unique_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry::TimeToLive> time_to_live;
                        class Ipv4AclGrantEnumEnum;
                        class Ipv4AclIgmpNumberEnum;
                        class Ipv4AclLoggingEnumEnum;
                        class Ipv4AclPrecedenceNumberEnum;
                        class Ipv4AclProtocolNumberEnum;


                }; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries::AccessListEntry> > access_list_entry;


            }; // Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries


                std::unique_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access::AccessListEntries> access_list_entries;


        }; // Ipv4AclAndPrefixList::Accesses::Access


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses::Access> > access;


    }; // Ipv4AclAndPrefixList::Accesses


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


            class PrefixListEntries : public Entity
            {
                public:
                    PrefixListEntries();
                    ~PrefixListEntries();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class PrefixListEntry : public Entity
                {
                    public:
                        PrefixListEntry();
                        ~PrefixListEntry();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value sequence_number; //type: uint32
                        Value grant; //type: Ipv4AclGrantEnumEnum
                        Value prefix; //type: string
                        Value netmask; //type: string
                        Value match_exact_length; //type: empty
                        Value exact_prefix_length; //type: uint32
                        Value match_max_length; //type: empty
                        Value max_prefix_length; //type: uint32
                        Value match_min_length; //type: empty
                        Value min_prefix_length; //type: uint32
                        Value remark; //type: string


                        class Ipv4AclGrantEnumEnum;


                }; // Ipv4AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Prefixes::Prefix::PrefixListEntries::PrefixListEntry> > prefix_list_entry;


            }; // Ipv4AclAndPrefixList::Prefixes::Prefix::PrefixListEntries


                std::unique_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Prefixes::Prefix::PrefixListEntries> prefix_list_entries; // presence node


        }; // Ipv4AclAndPrefixList::Prefixes::Prefix


            std::vector<std::unique_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Prefixes::Prefix> > prefix;


    }; // Ipv4AclAndPrefixList::Prefixes


    class LogUpdate : public Entity
    {
        public:
            LogUpdate();
            ~LogUpdate();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value threshold; //type: uint32
            Value rate; //type: uint32




    }; // Ipv4AclAndPrefixList::LogUpdate


        std::unique_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Accesses> accesses;
        std::unique_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::LogUpdate> log_update;
        std::unique_ptr<Cisco_IOS_XR_ipv4_acl_cfg::Ipv4AclAndPrefixList::Prefixes> prefixes;


}; // Ipv4AclAndPrefixList


class NextHopTypeEnum : public Enum
{
    public:
        static const Enum::Value none_next_hop;
        static const Enum::Value regular_next_hop;
        static const Enum::Value default_next_hop;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_ACL_CFG_ */

