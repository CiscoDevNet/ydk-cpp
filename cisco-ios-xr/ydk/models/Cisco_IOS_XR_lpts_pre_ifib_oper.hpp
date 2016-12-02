#ifndef _CISCO_IOS_XR_LPTS_PRE_IFIB_OPER_
#define _CISCO_IOS_XR_LPTS_PRE_IFIB_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

#include "Cisco_IOS_XR_platform_pifib_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_lpts_pre_ifib_oper {

class LptsPifib : public Entity
{
    public:
        LptsPifib();
        ~LptsPifib();

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


            class TypeValues : public Entity
            {
                public:
                    TypeValues();
                    ~TypeValues();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class TypeValue : public Entity
                {
                    public:
                        TypeValue();
                        ~TypeValue();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value pifib_type; //type: LptsPifibEnum


                    class Entry : public Entity
                    {
                        public:
                            Entry();
                            ~Entry();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value entry; //type: string
                            Value vid; //type: uint32
                            Value l3protocol; //type: uint32
                            Value l4protocol; //type: uint32
                            Value intf_handle; //type: uint32
                            Value local_addr; //type: string
                            Value local_prefix_len; //type: uint32
                            Value remote_addr; //type: string
                            Value remote_prefix_len; //type: uint32
                            Value u_type; //type: uint8
                            Value u_value; //type: uint32
                            Value u_len; //type: uint32
                            Value remote_port; //type: uint16
                            Value is_frag; //type: uint8
                            Value is_syn; //type: uint8
                            Value opcode; //type: uint8
                            Value flow_type; //type: uint32
                            Value listener_tag; //type: uint8
                            Value local_flag; //type: uint8
                            Value is_fgid; //type: uint8
                            Value deliver_list; //type: uint32
                            Value deliver_list_str; //type: string
                            Value min_ttl; //type: uint8
                            Value accepts; //type: uint64
                            Value drops; //type: uint64
                            Value stale; //type: uint8
                            Value pifib_type; //type: uint8


                        class Utime : public Entity
                        {
                            public:
                                Utime();
                                ~Utime();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value tv_sec; //type: uint32
                                Value tv_nsec; //type: uint32




                        }; // LptsPifib::Nodes::Node::TypeValues::TypeValue::Entry::Utime


                            std::unique_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::TypeValues::TypeValue::Entry::Utime> utime;


                    }; // LptsPifib::Nodes::Node::TypeValues::TypeValue::Entry


                        std::vector<std::unique_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::TypeValues::TypeValue::Entry> > entry;
                        class LptsPifibEnum;


                }; // LptsPifib::Nodes::Node::TypeValues::TypeValue


                    std::vector<std::unique_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::TypeValues::TypeValue> > type_value;


            }; // LptsPifib::Nodes::Node::TypeValues


            class Hardware : public Entity
            {
                public:
                    Hardware();
                    ~Hardware();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class UsageEntries : public Entity
                {
                    public:
                        UsageEntries();
                        ~UsageEntries();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class UsageEntry : public Entity
                    {
                        public:
                            UsageEntry();
                            ~UsageEntry();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value region_id; //type: UsageAddressFamilyEnum


                        class UsageInfo : public Entity
                        {
                            public:
                                UsageInfo();
                                ~UsageInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value pipe_id; //type: uint8
                                Value region; //type: uint8
                                Value region_id; //type: uint8
                                Value size; //type: uint32
                                Value used; //type: uint32




                        }; // LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo


                            std::vector<std::unique_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo> > usage_info;
                            class UsageAddressFamilyEnum;


                    }; // LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry


                        std::vector<std::unique_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry> > usage_entry;


                }; // LptsPifib::Nodes::Node::Hardware::UsageEntries


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


                    class PoliceInfo : public Entity
                    {
                        public:
                            PoliceInfo();
                            ~PoliceInfo();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value avgrate; //type: uint32
                            Value burst; //type: uint32
                            Value static_avgrate; //type: uint32
                            Value avgrate_type; //type: uint32
                            Value accepted_stats; //type: uint64
                            Value dropped_stats; //type: uint64
                            Value policer; //type: uint32
                            Value iptos_value; //type: uint8
                            Value change_type; //type: uint8
                            Value acl_config; //type: uint8
                            Value acl_str; //type: string




                    }; // LptsPifib::Nodes::Node::Hardware::Police::PoliceInfo


                        std::vector<std::unique_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::Hardware::Police::PoliceInfo> > police_info;


                }; // LptsPifib::Nodes::Node::Hardware::Police


                class StaticPolice : public Entity
                {
                    public:
                        StaticPolice();
                        ~StaticPolice();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class StaticInfo : public Entity
                    {
                        public:
                            StaticInfo();
                            ~StaticInfo();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value punt_reason; //type: uint32
                            Value sid; //type: uint32
                            Value flow_rate; //type: uint32
                            Value burst_rate; //type: uint32
                            Value accepted; //type: uint64
                            Value dropped; //type: uint64
                            Value punt_reason_string; //type: string
                            Value change_type; //type: uint8




                    }; // LptsPifib::Nodes::Node::Hardware::StaticPolice::StaticInfo


                        std::vector<std::unique_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::Hardware::StaticPolice::StaticInfo> > static_info;


                }; // LptsPifib::Nodes::Node::Hardware::StaticPolice


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


                    class BfdEntryInfo : public Entity
                    {
                        public:
                            BfdEntryInfo();
                            ~BfdEntryInfo();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value index_; //type: uint8
                            Value is_mcast; //type: uint8
                            Value fgid_or_vqi; //type: uint32
                            Value is_valid; //type: uint8
                            Value policer_id; //type: uint32




                    }; // LptsPifib::Nodes::Node::Hardware::Bfd::BfdEntryInfo


                        std::vector<std::unique_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::Hardware::Bfd::BfdEntryInfo> > bfd_entry_info;


                }; // LptsPifib::Nodes::Node::Hardware::Bfd


                class Statistics : public Entity
                {
                    public:
                        Statistics();
                        ~Statistics();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value accepted; //type: uint64
                        Value dropped; //type: uint64
                        Value clear_ts; //type: uint64
                        Value no_stats_mem_err; //type: uint64




                }; // LptsPifib::Nodes::Node::Hardware::Statistics


                class IndexEntries : public Entity
                {
                    public:
                        IndexEntries();
                        ~IndexEntries();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                    class IndexEntry : public Entity
                    {
                        public:
                            IndexEntry();
                            ~IndexEntry();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;
                            Value index_; //type: int32
                            Value l3protocol; //type: uint32
                            Value l4protocol; //type: uint32
                            Value intf_handle; //type: uint32
                            Value intf_name; //type: string
                            Value uidb_index; //type: uint32
                            Value local_addr; //type: string
                            Value local_prefix_len; //type: uint32
                            Value remote_addr; //type: string
                            Value remote_prefix_len; //type: uint32
                            Value vrf_id; //type: uint32
                            Value u_value; //type: uint32
                            Value u_len; //type: uint32
                            Value local_port; //type: uint32
                            Value is_frag; //type: uint8
                            Value is_syn; //type: uint8
                            Value action; //type: uint8
                            Value action_string; //type: string
                            Value listener_tag; //type: uint8
                            Value is_fgid; //type: uint8
                            Value is_vrf; //type: uint8
                            Value is_optimized; //type: uint8
                            Value is_uidb_opt_bit; //type: uint8
                            Value fgid_or_sfp; //type: uint32
                            Value remote_rack; //type: uint8
                            Value rack_id; //type: uint32
                            Value rslot; //type: uint32
                            Value cir; //type: uint64
                            Value flow_type; //type: uint32
                            Value priority; //type: uint32
                            Value sid; //type: uint32
                            Value policer_avgrate; //type: uint32
                            Value policer_burst; //type: uint32
                            Value lookup_priority; //type: int32
                            Value storage_priority; //type: int32
                            Value num_tm_entries; //type: int32
                            Value entry_ptr; //type: uint32
                            Value entry_shadow_ptr; //type: uint32
                            Value list_node_ptr; //type: uint32
                            Value state; //type: uint8
                            Value retry_fail_cause; //type: uint8
                            Value num_retries; //type: uint8
                            Value min_ttl; //type: uint8
                            Value u_type; //type: uint8
                            Value remote_fgid; //type: uint32
                            Value acl_str; //type: string
                            Value no_stats; //type: uint8


                        class HwInfo : public Entity
                        {
                            public:
                                HwInfo();
                                ~HwInfo();

                                bool has_data() const override;
                                bool has_operation() const override;
                                EntityPath get_entity_path(Entity* parent) const override;
                                std::string get_segment_path() const override;
                                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                                void set_value(const std::string & value_path, std::string value) override;
                                std::map<std::string, Entity*> & get_children() override;
                                Value policer; //type: uint32
                                Value stats_ptr; //type: uint32
                                Value accepted; //type: uint64
                                Value dropped; //type: uint64
                                Value sort_start_offset; //type: int32
                                Value tm_start_offset; //type: int32




                        }; // LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo


                            std::vector<std::unique_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo> > hw_info;


                    }; // LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry


                        std::vector<std::unique_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry> > index_entry;


                }; // LptsPifib::Nodes::Node::Hardware::IndexEntries


                    std::unique_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::Hardware::Bfd> bfd;
                    std::unique_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::Hardware::IndexEntries> index_entries;
                    std::unique_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::Hardware::Police> police;
                    std::unique_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::Hardware::StaticPolice> static_police;
                    std::unique_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::Hardware::Statistics> statistics;
                    std::unique_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::Hardware::UsageEntries> usage_entries;


            }; // LptsPifib::Nodes::Node::Hardware


                std::unique_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::Hardware> hardware;
                std::unique_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::TypeValues> type_values;


        }; // LptsPifib::Nodes::Node


            std::vector<std::unique_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node> > node;


    }; // LptsPifib::Nodes


        std::unique_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes> nodes;


}; // LptsPifib


class LptsPifibEnum : public Enum
{
    public:
        static const Enum::Value isis;
        static const Enum::Value ipv4_frag;
        static const Enum::Value ipv4_echo;
        static const Enum::Value ipv4_any;
        static const Enum::Value ipv6_frag;
        static const Enum::Value ipv6_echo;
        static const Enum::Value ipv6_nd;
        static const Enum::Value ipv6_any;
        static const Enum::Value bfd_any;
        static const Enum::Value all;

};


}
}

#endif /* _CISCO_IOS_XR_LPTS_PRE_IFIB_OPER_ */

