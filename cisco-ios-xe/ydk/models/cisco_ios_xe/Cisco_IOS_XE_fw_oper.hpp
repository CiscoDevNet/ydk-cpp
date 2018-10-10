#ifndef _CISCO_IOS_XE_FW_OPER_
#define _CISCO_IOS_XE_FW_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_fw_oper {

class FwOperData : public ydk::Entity
{
    public:
        FwOperData();
        ~FwOperData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class FwDropStats; //type: FwOperData::FwDropStats
        class FwZonepairEntries; //type: FwOperData::FwZonepairEntries

        std::shared_ptr<cisco_ios_xe::Cisco_IOS_XE_fw_oper::FwOperData::FwDropStats> fw_drop_stats; // presence node
        ydk::YList fw_zonepair_entries;
        
}; // FwOperData


class FwOperData::FwDropStats : public ydk::Entity
{
    public:
        FwDropStats();
        ~FwDropStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf catch_all; //type: uint64
        ydk::YLeaf l4_max_halfsession; //type: uint64
        ydk::YLeaf l4_too_many_pkts; //type: uint64
        ydk::YLeaf l4_session_limit; //type: uint64
        ydk::YLeaf l4_invalid_hdr; //type: uint64
        ydk::YLeaf l4_internal_err_undefined_dir; //type: uint64
        ydk::YLeaf l4_scb_close; //type: uint64
        ydk::YLeaf l4_tcp_invalid_ack_flag; //type: uint64
        ydk::YLeaf l4_tcp_invalid_ack_num; //type: uint64
        ydk::YLeaf l4_tcp_invalid_tcp_initiator; //type: uint64
        ydk::YLeaf l4_tcp_syn_with_data; //type: uint64
        ydk::YLeaf l4_tcp_invalid_win_scale_option; //type: uint64
        ydk::YLeaf l4_tcp_invalid_seg_synsent_state; //type: uint64
        ydk::YLeaf l4_tcp_invalid_seg_synrcvd_state; //type: uint64
        ydk::YLeaf l4_tcp_invalid_seg_pkt_too_old; //type: uint64
        ydk::YLeaf l4_tcp_invalid_seg_pkt_win_overflow; //type: uint64
        ydk::YLeaf l4_tcp_invalid_seg_pyld_after_fin_send; //type: uint64
        ydk::YLeaf l4_tcp_invalid_flags; //type: uint64
        ydk::YLeaf l4_tcp_invalid_seq; //type: uint64
        ydk::YLeaf l4_tcp_retrans_invalid_flags; //type: uint64
        ydk::YLeaf l4_tcp_l7_ooo_seg; //type: uint64
        ydk::YLeaf l4_tcp_syn_flood_drop; //type: uint64
        ydk::YLeaf l4_tcp_internal_err_synflood_alloc_hostdb_fail; //type: uint64
        ydk::YLeaf l4_tcp_synflood_blackout_drop; //type: uint64
        ydk::YLeaf l4_tcp_unexpect_tcp_payload; //type: uint64
        ydk::YLeaf l4_tcp_syn_in_win; //type: uint64
        ydk::YLeaf l4_tcp_rst_in_win; //type: uint64
        ydk::YLeaf l4_tcp_stray_seg; //type: uint64
        ydk::YLeaf l4_tcp_rst_to_resp; //type: uint64
        ydk::YLeaf insp_pam_lookup_fail; //type: uint64
        ydk::YLeaf insp_internal_err_get_stat_blk_fail; //type: uint64
        ydk::YLeaf insp_dstaddr_lookup_fail; //type: uint64
        ydk::YLeaf insp_policy_not_present; //type: uint64
        ydk::YLeaf insp_sess_miss_policy_not_present; //type: uint64
        ydk::YLeaf insp_classification_fail; //type: uint64
        ydk::YLeaf insp_class_action_drop; //type: uint64
        ydk::YLeaf insp_policy_misconfigure; //type: uint64
        ydk::YLeaf l4_icmp_too_many_err_pkts; //type: uint64
        ydk::YLeaf l4_icmp_internal_err_no_nat; //type: uint64
        ydk::YLeaf l4_icmp_internal_err_alloc_fail; //type: uint64
        ydk::YLeaf l4_icmp_internal_err_get_stat_blk_fail; //type: uint64
        ydk::YLeaf l4_icmp_internal_err_dir_not_identified; //type: uint64
        ydk::YLeaf l4_icmp_scb_close; //type: uint64
        ydk::YLeaf l4_icmp_pkt_no_ip_hdr; //type: uint64
        ydk::YLeaf l4_icmp_pkt_too_short; //type: uint64
        ydk::YLeaf l4_icmp_err_no_ip_no_icmp; //type: uint64
        ydk::YLeaf l4_icmp_err_pkts_burst; //type: uint64
        ydk::YLeaf l4_icmp_err_multiple_unreach; //type: uint64
        ydk::YLeaf l4_icmp_err_l4_invalid_seq; //type: uint64
        ydk::YLeaf l4_icmp_err_l4_invalid_ack; //type: uint64
        ydk::YLeaf l4_icmp_err_policy_not_present; //type: uint64
        ydk::YLeaf l4_icmp_err_classification_fail; //type: uint64
        ydk::YLeaf syncookie_max_dst; //type: uint64
        ydk::YLeaf syncookie_internal_err_alloc_fail; //type: uint64
        ydk::YLeaf syncookie_trigger; //type: uint64
        ydk::YLeaf policy_fragment_drop; //type: uint64
        ydk::YLeaf policy_action_drop; //type: uint64
        ydk::YLeaf policy_icmp_action_drop; //type: uint64
        ydk::YLeaf l7_type_drop; //type: uint64
        ydk::YLeaf l7_no_seg; //type: uint64
        ydk::YLeaf l7_no_frag; //type: uint64
        ydk::YLeaf l7_unknown_proto; //type: uint64
        ydk::YLeaf l7_alg_ret_drop; //type: uint64
        ydk::YLeaf l7_promote_fail_no_zone_pair; //type: uint64
        ydk::YLeaf l7_promote_fail_no_policy; //type: uint64
        ydk::YLeaf no_session; //type: uint64
        ydk::YLeaf no_new_session; //type: uint64
        ydk::YLeaf not_initiator; //type: uint64
        ydk::YLeaf invalid_zone; //type: uint64
        ydk::YLeaf ha_ar_standby; //type: uint64
        ydk::YLeaf no_forwarding_zone; //type: uint64
        ydk::YLeaf backpressure; //type: uint64
        ydk::YLeaf zone_mismatch; //type: uint64
        ydk::YLeaf fdb_err; //type: uint64
        ydk::YLeaf lisp_header_restore_fail; //type: uint64
        ydk::YLeaf lisp_inner_pkt_insane; //type: uint64
        ydk::YLeaf lisp_inner_ipv4_insane; //type: uint64
        ydk::YLeaf lisp_inner_ipv6_insane; //type: uint64

}; // FwOperData::FwDropStats


class FwOperData::FwZonepairEntries : public ydk::Entity
{
    public:
        FwZonepairEntries();
        ~FwZonepairEntries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf zonepair_name; //type: string
        ydk::YLeaf src_zone_name; //type: string
        ydk::YLeaf dst_zone_name; //type: string
        ydk::YLeaf policy_name; //type: string
        class FwTrafficClassEntry; //type: FwOperData::FwZonepairEntries::FwTrafficClassEntry

        ydk::YList fw_traffic_class_entry;
        
}; // FwOperData::FwZonepairEntries


class FwOperData::FwZonepairEntries::FwTrafficClassEntry : public ydk::Entity
{
    public:
        FwTrafficClassEntry();
        ~FwTrafficClassEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf class_name; //type: string
        ydk::YLeaf zonepair_name; //type: string
        ydk::YLeaf class_action; //type: string
        ydk::YLeaf pkts_counter; //type: uint64
        ydk::YLeaf bytes_counter; //type: uint64
        ydk::YLeaf attempted_conn; //type: uint64
        ydk::YLeaf current_active_conn; //type: uint64
        ydk::YLeaf max_active_conn; //type: uint64
        ydk::YLeaf current_halfopen_conn; //type: uint64
        ydk::YLeaf max_halfopen_conn; //type: uint64
        ydk::YLeaf current_terminating_conn; //type: uint64
        ydk::YLeaf max_terminating_conn; //type: uint64
        ydk::YLeaf time_since_last_session_create; //type: uint64
        class FwTcMatchEntry; //type: FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcMatchEntry
        class FwTcProtoEntry; //type: FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcProtoEntry

        ydk::YList fw_tc_match_entry;
        ydk::YList fw_tc_proto_entry;
        
}; // FwOperData::FwZonepairEntries::FwTrafficClassEntry


class FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcMatchEntry : public ydk::Entity
{
    public:
        FwTcMatchEntry();
        ~FwTcMatchEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf match_name; //type: string
        ydk::YLeaf match_type_id; //type: uint8
        ydk::YLeaf match_type; //type: string

}; // FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcMatchEntry


class FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcProtoEntry : public ydk::Entity
{
    public:
        FwTcProtoEntry();
        ~FwTcProtoEntry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proto_id; //type: uint16
        ydk::YLeaf protocol_name; //type: string
        ydk::YLeaf byte_counters; //type: uint64
        ydk::YLeaf pkt_counters; //type: uint64

}; // FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcProtoEntry


}
}

#endif /* _CISCO_IOS_XE_FW_OPER_ */

