#ifndef _CISCO_IOS_XR_LPTS_PRE_IFIB_OPER_
#define _CISCO_IOS_XR_LPTS_PRE_IFIB_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>


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
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Nodes; //type: LptsPifib::Nodes

        std::shared_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes> nodes;


}; // LptsPifib


class LptsPifib::Nodes : public Entity
{
    public:
        Nodes();
        ~Nodes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Node; //type: LptsPifib::Nodes::Node

        std::vector<std::shared_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node> > node;


}; // LptsPifib::Nodes


class LptsPifib::Nodes::Node : public Entity
{
    public:
        Node();
        ~Node();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf node_name; //type: string

        class TypeValues; //type: LptsPifib::Nodes::Node::TypeValues
        class Hardware; //type: LptsPifib::Nodes::Node::Hardware

        std::shared_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::Hardware> hardware;
        std::shared_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::TypeValues> type_values;


}; // LptsPifib::Nodes::Node


class LptsPifib::Nodes::Node::TypeValues : public Entity
{
    public:
        TypeValues();
        ~TypeValues();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TypeValue; //type: LptsPifib::Nodes::Node::TypeValues::TypeValue

        std::vector<std::shared_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::TypeValues::TypeValue> > type_value;


}; // LptsPifib::Nodes::Node::TypeValues


class LptsPifib::Nodes::Node::TypeValues::TypeValue : public Entity
{
    public:
        TypeValue();
        ~TypeValue();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pifib_type; //type: LptsPifibEnum

        class Entry; //type: LptsPifib::Nodes::Node::TypeValues::TypeValue::Entry

        std::vector<std::shared_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::TypeValues::TypeValue::Entry> > entry;


}; // LptsPifib::Nodes::Node::TypeValues::TypeValue


class LptsPifib::Nodes::Node::TypeValues::TypeValue::Entry : public Entity
{
    public:
        Entry();
        ~Entry();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf entry; //type: string
        YLeaf vrf_name; //type: string
        YLeaf vid; //type: uint32
        YLeaf l3protocol; //type: uint32
        YLeaf l4protocol; //type: uint32
        YLeaf intf_name; //type: string
        YLeaf intf_handle; //type: uint32
        YLeaf destination_addr; //type: string
        YLeaf source_addr; //type: string
        YLeaf destination_type; //type: string
        YLeaf destination_value; //type: string
        YLeaf source_port; //type: string
        YLeaf is_frag; //type: uint8
        YLeaf is_syn; //type: uint8
        YLeaf opcode; //type: string
        YLeaf flow_type; //type: string
        YLeaf listener_tag; //type: string
        YLeaf local_flag; //type: uint8
        YLeaf is_fgid; //type: uint8
        YLeaf deliver_list_short; //type: string
        YLeaf deliver_list_long; //type: string
        YLeaf min_ttl; //type: uint8
        YLeaf accepts; //type: uint64
        YLeaf drops; //type: uint64
        YLeaf stale; //type: uint8
        YLeaf pifib_type; //type: uint8
        YLeaf pifib_program_time; //type: string



}; // LptsPifib::Nodes::Node::TypeValues::TypeValue::Entry


class LptsPifib::Nodes::Node::Hardware : public Entity
{
    public:
        Hardware();
        ~Hardware();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class UsageEntries; //type: LptsPifib::Nodes::Node::Hardware::UsageEntries
        class Police; //type: LptsPifib::Nodes::Node::Hardware::Police
        class StaticPolice; //type: LptsPifib::Nodes::Node::Hardware::StaticPolice
        class Bfd; //type: LptsPifib::Nodes::Node::Hardware::Bfd
        class Statistics; //type: LptsPifib::Nodes::Node::Hardware::Statistics
        class IndexEntries; //type: LptsPifib::Nodes::Node::Hardware::IndexEntries

        std::shared_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::Hardware::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::Hardware::IndexEntries> index_entries;
        std::shared_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::Hardware::Police> police;
        std::shared_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::Hardware::StaticPolice> static_police;
        std::shared_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::Hardware::Statistics> statistics;
        std::shared_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::Hardware::UsageEntries> usage_entries;


}; // LptsPifib::Nodes::Node::Hardware


class LptsPifib::Nodes::Node::Hardware::UsageEntries : public Entity
{
    public:
        UsageEntries();
        ~UsageEntries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class UsageEntry; //type: LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry> > usage_entry;


}; // LptsPifib::Nodes::Node::Hardware::UsageEntries


class LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry : public Entity
{
    public:
        UsageEntry();
        ~UsageEntry();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf region_id; //type: UsageAddressFamilyEnum

        class UsageInfo; //type: LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo> > usage_info;


}; // LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry


class LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo : public Entity
{
    public:
        UsageInfo();
        ~UsageInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pipe_id; //type: uint8
        YLeaf region; //type: uint8
        YLeaf region_id; //type: uint8
        YLeaf size; //type: uint32
        YLeaf used; //type: uint32



}; // LptsPifib::Nodes::Node::Hardware::UsageEntries::UsageEntry::UsageInfo


class LptsPifib::Nodes::Node::Hardware::Police : public Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PoliceInfo; //type: LptsPifib::Nodes::Node::Hardware::Police::PoliceInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::Hardware::Police::PoliceInfo> > police_info;


}; // LptsPifib::Nodes::Node::Hardware::Police


class LptsPifib::Nodes::Node::Hardware::Police::PoliceInfo : public Entity
{
    public:
        PoliceInfo();
        ~PoliceInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf avgrate; //type: uint32
        YLeaf burst; //type: uint32
        YLeaf static_avgrate; //type: uint32
        YLeaf avgrate_type; //type: uint32
        YLeaf accepted_stats; //type: uint64
        YLeaf dropped_stats; //type: uint64
        YLeaf policer; //type: uint32
        YLeaf iptos_value; //type: uint8
        YLeaf change_type; //type: uint8
        YLeaf acl_config; //type: uint8
        YLeaf acl_str; //type: string



}; // LptsPifib::Nodes::Node::Hardware::Police::PoliceInfo


class LptsPifib::Nodes::Node::Hardware::StaticPolice : public Entity
{
    public:
        StaticPolice();
        ~StaticPolice();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class StaticInfo; //type: LptsPifib::Nodes::Node::Hardware::StaticPolice::StaticInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::Hardware::StaticPolice::StaticInfo> > static_info;


}; // LptsPifib::Nodes::Node::Hardware::StaticPolice


class LptsPifib::Nodes::Node::Hardware::StaticPolice::StaticInfo : public Entity
{
    public:
        StaticInfo();
        ~StaticInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf punt_reason; //type: uint32
        YLeaf sid; //type: uint32
        YLeaf flow_rate; //type: uint32
        YLeaf burst_rate; //type: uint32
        YLeaf accepted; //type: uint64
        YLeaf dropped; //type: uint64
        YLeaf punt_reason_string; //type: string
        YLeaf change_type; //type: uint8



}; // LptsPifib::Nodes::Node::Hardware::StaticPolice::StaticInfo


class LptsPifib::Nodes::Node::Hardware::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BfdEntryInfo; //type: LptsPifib::Nodes::Node::Hardware::Bfd::BfdEntryInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::Hardware::Bfd::BfdEntryInfo> > bfd_entry_info;


}; // LptsPifib::Nodes::Node::Hardware::Bfd


class LptsPifib::Nodes::Node::Hardware::Bfd::BfdEntryInfo : public Entity
{
    public:
        BfdEntryInfo();
        ~BfdEntryInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: uint8
        YLeaf is_mcast; //type: uint8
        YLeaf fgid_or_vqi; //type: uint32
        YLeaf is_valid; //type: uint8
        YLeaf policer_id; //type: uint32



}; // LptsPifib::Nodes::Node::Hardware::Bfd::BfdEntryInfo


class LptsPifib::Nodes::Node::Hardware::Statistics : public Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf accepted; //type: uint64
        YLeaf dropped; //type: uint64
        YLeaf clear_ts; //type: uint64
        YLeaf no_stats_mem_err; //type: uint64



}; // LptsPifib::Nodes::Node::Hardware::Statistics


class LptsPifib::Nodes::Node::Hardware::IndexEntries : public Entity
{
    public:
        IndexEntries();
        ~IndexEntries();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IndexEntry; //type: LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry> > index_entry;


}; // LptsPifib::Nodes::Node::Hardware::IndexEntries


class LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry : public Entity
{
    public:
        IndexEntry();
        ~IndexEntry();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf index_; //type: int32
        YLeaf l3protocol; //type: uint32
        YLeaf l4protocol; //type: uint32
        YLeaf intf_handle; //type: uint32
        YLeaf intf_name; //type: string
        YLeaf uidb_index; //type: uint32
        YLeaf local_addr; //type: string
        YLeaf local_prefix_len; //type: uint32
        YLeaf remote_addr; //type: string
        YLeaf remote_prefix_len; //type: uint32
        YLeaf vrf_id; //type: uint32
        YLeaf u_value; //type: uint32
        YLeaf u_len; //type: uint32
        YLeaf local_port; //type: uint32
        YLeaf is_frag; //type: uint8
        YLeaf is_syn; //type: uint8
        YLeaf action; //type: uint8
        YLeaf action_string; //type: string
        YLeaf listener_tag; //type: uint8
        YLeaf is_fgid; //type: uint8
        YLeaf is_vrf; //type: uint8
        YLeaf is_optimized; //type: uint8
        YLeaf is_uidb_opt_bit; //type: uint8
        YLeaf fgid_or_sfp; //type: uint32
        YLeaf remote_rack; //type: uint8
        YLeaf rack_id; //type: uint32
        YLeaf rslot; //type: uint32
        YLeaf cir; //type: uint64
        YLeaf flow_type; //type: uint32
        YLeaf priority; //type: uint32
        YLeaf sid; //type: uint32
        YLeaf policer_avgrate; //type: uint32
        YLeaf policer_burst; //type: uint32
        YLeaf lookup_priority; //type: int32
        YLeaf storage_priority; //type: int32
        YLeaf num_tm_entries; //type: int32
        YLeaf entry_ptr; //type: uint32
        YLeaf entry_shadow_ptr; //type: uint32
        YLeaf list_node_ptr; //type: uint32
        YLeaf state; //type: uint8
        YLeaf retry_fail_cause; //type: uint8
        YLeaf num_retries; //type: uint8
        YLeaf min_ttl; //type: uint8
        YLeaf u_type; //type: uint8
        YLeaf remote_fgid; //type: uint32
        YLeaf acl_str; //type: string
        YLeaf no_stats; //type: uint8

        class HwInfo; //type: LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo

        std::vector<std::shared_ptr<Cisco_IOS_XR_lpts_pre_ifib_oper::LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo> > hw_info;


}; // LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry


class LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo : public Entity
{
    public:
        HwInfo();
        ~HwInfo();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf policer; //type: uint32
        YLeaf stats_ptr; //type: uint32
        YLeaf accepted; //type: uint64
        YLeaf dropped; //type: uint64
        YLeaf sort_start_offset; //type: int32
        YLeaf tm_start_offset; //type: int32



}; // LptsPifib::Nodes::Node::Hardware::IndexEntries::IndexEntry::HwInfo

class LptsPifibEnum : public Enum
{
    public:
        static const Enum::YLeaf isis;
        static const Enum::YLeaf ipv4_frag;
        static const Enum::YLeaf ipv4_echo;
        static const Enum::YLeaf ipv4_any;
        static const Enum::YLeaf ipv6_frag;
        static const Enum::YLeaf ipv6_echo;
        static const Enum::YLeaf ipv6_nd;
        static const Enum::YLeaf ipv6_any;
        static const Enum::YLeaf bfd_any;
        static const Enum::YLeaf all;

};


}
}

#endif /* _CISCO_IOS_XR_LPTS_PRE_IFIB_OPER_ */

