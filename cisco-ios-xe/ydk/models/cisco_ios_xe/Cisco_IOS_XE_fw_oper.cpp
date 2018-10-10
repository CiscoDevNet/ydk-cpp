
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_fw_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_fw_oper {

FwOperData::FwOperData()
    :
    fw_drop_stats(nullptr) // presence node
    , fw_zonepair_entries(this, {"zonepair_name"})
{

    yang_name = "fw-oper-data"; yang_parent_name = "Cisco-IOS-XE-fw-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

FwOperData::~FwOperData()
{
}

bool FwOperData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fw_zonepair_entries.len(); index++)
    {
        if(fw_zonepair_entries[index]->has_data())
            return true;
    }
    return (fw_drop_stats !=  nullptr && fw_drop_stats->has_data());
}

bool FwOperData::has_operation() const
{
    for (std::size_t index=0; index<fw_zonepair_entries.len(); index++)
    {
        if(fw_zonepair_entries[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (fw_drop_stats !=  nullptr && fw_drop_stats->has_operation());
}

std::string FwOperData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-fw-oper:fw-oper-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FwOperData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> FwOperData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fw-drop-stats")
    {
        if(fw_drop_stats == nullptr)
        {
            fw_drop_stats = std::make_shared<FwOperData::FwDropStats>();
        }
        return fw_drop_stats;
    }

    if(child_yang_name == "fw-zonepair-entries")
    {
        auto c = std::make_shared<FwOperData::FwZonepairEntries>();
        c->parent = this;
        fw_zonepair_entries.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FwOperData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(fw_drop_stats != nullptr)
    {
        children["fw-drop-stats"] = fw_drop_stats;
    }

    count = 0;
    for (auto c : fw_zonepair_entries.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FwOperData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void FwOperData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> FwOperData::clone_ptr() const
{
    return std::make_shared<FwOperData>();
}

std::string FwOperData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string FwOperData::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function FwOperData::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> FwOperData::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool FwOperData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fw-drop-stats" || name == "fw-zonepair-entries")
        return true;
    return false;
}

FwOperData::FwDropStats::FwDropStats()
    :
    catch_all{YType::uint64, "catch-all"},
    l4_max_halfsession{YType::uint64, "l4-max-halfsession"},
    l4_too_many_pkts{YType::uint64, "l4-too-many-pkts"},
    l4_session_limit{YType::uint64, "l4-session-limit"},
    l4_invalid_hdr{YType::uint64, "l4-invalid-hdr"},
    l4_internal_err_undefined_dir{YType::uint64, "l4-internal-err-undefined-dir"},
    l4_scb_close{YType::uint64, "l4-scb-close"},
    l4_tcp_invalid_ack_flag{YType::uint64, "l4-tcp-invalid-ack-flag"},
    l4_tcp_invalid_ack_num{YType::uint64, "l4-tcp-invalid-ack-num"},
    l4_tcp_invalid_tcp_initiator{YType::uint64, "l4-tcp-invalid-tcp-initiator"},
    l4_tcp_syn_with_data{YType::uint64, "l4-tcp-syn-with-data"},
    l4_tcp_invalid_win_scale_option{YType::uint64, "l4-tcp-invalid-win-scale-option"},
    l4_tcp_invalid_seg_synsent_state{YType::uint64, "l4-tcp-invalid-seg-synsent-state"},
    l4_tcp_invalid_seg_synrcvd_state{YType::uint64, "l4-tcp-invalid-seg-synrcvd-state"},
    l4_tcp_invalid_seg_pkt_too_old{YType::uint64, "l4-tcp-invalid-seg-pkt-too-old"},
    l4_tcp_invalid_seg_pkt_win_overflow{YType::uint64, "l4-tcp-invalid-seg-pkt-win-overflow"},
    l4_tcp_invalid_seg_pyld_after_fin_send{YType::uint64, "l4-tcp-invalid-seg-pyld-after-fin-send"},
    l4_tcp_invalid_flags{YType::uint64, "l4-tcp-invalid-flags"},
    l4_tcp_invalid_seq{YType::uint64, "l4-tcp-invalid-seq"},
    l4_tcp_retrans_invalid_flags{YType::uint64, "l4-tcp-retrans-invalid-flags"},
    l4_tcp_l7_ooo_seg{YType::uint64, "l4-tcp-l7-ooo-seg"},
    l4_tcp_syn_flood_drop{YType::uint64, "l4-tcp-syn-flood-drop"},
    l4_tcp_internal_err_synflood_alloc_hostdb_fail{YType::uint64, "l4-tcp-internal-err-synflood-alloc-hostdb-fail"},
    l4_tcp_synflood_blackout_drop{YType::uint64, "l4-tcp-synflood-blackout-drop"},
    l4_tcp_unexpect_tcp_payload{YType::uint64, "l4-tcp-unexpect-tcp-payload"},
    l4_tcp_syn_in_win{YType::uint64, "l4-tcp-syn-in-win"},
    l4_tcp_rst_in_win{YType::uint64, "l4-tcp-rst-in-win"},
    l4_tcp_stray_seg{YType::uint64, "l4-tcp-stray-seg"},
    l4_tcp_rst_to_resp{YType::uint64, "l4-tcp-rst-to-resp"},
    insp_pam_lookup_fail{YType::uint64, "insp-pam-lookup-fail"},
    insp_internal_err_get_stat_blk_fail{YType::uint64, "insp-internal-err-get-stat-blk-fail"},
    insp_dstaddr_lookup_fail{YType::uint64, "insp-dstaddr-lookup-fail"},
    insp_policy_not_present{YType::uint64, "insp-policy-not-present"},
    insp_sess_miss_policy_not_present{YType::uint64, "insp-sess-miss-policy-not-present"},
    insp_classification_fail{YType::uint64, "insp-classification-fail"},
    insp_class_action_drop{YType::uint64, "insp-class-action-drop"},
    insp_policy_misconfigure{YType::uint64, "insp-policy-misconfigure"},
    l4_icmp_too_many_err_pkts{YType::uint64, "l4-icmp-too-many-err-pkts"},
    l4_icmp_internal_err_no_nat{YType::uint64, "l4-icmp-internal-err-no-nat"},
    l4_icmp_internal_err_alloc_fail{YType::uint64, "l4-icmp-internal-err-alloc-fail"},
    l4_icmp_internal_err_get_stat_blk_fail{YType::uint64, "l4-icmp-internal-err-get-stat-blk-fail"},
    l4_icmp_internal_err_dir_not_identified{YType::uint64, "l4-icmp-internal-err-dir-not-identified"},
    l4_icmp_scb_close{YType::uint64, "l4-icmp-scb-close"},
    l4_icmp_pkt_no_ip_hdr{YType::uint64, "l4-icmp-pkt-no-ip-hdr"},
    l4_icmp_pkt_too_short{YType::uint64, "l4-icmp-pkt-too-short"},
    l4_icmp_err_no_ip_no_icmp{YType::uint64, "l4-icmp-err-no-ip-no-icmp"},
    l4_icmp_err_pkts_burst{YType::uint64, "l4-icmp-err-pkts-burst"},
    l4_icmp_err_multiple_unreach{YType::uint64, "l4-icmp-err-multiple-unreach"},
    l4_icmp_err_l4_invalid_seq{YType::uint64, "l4-icmp-err-l4-invalid-seq"},
    l4_icmp_err_l4_invalid_ack{YType::uint64, "l4-icmp-err-l4-invalid-ack"},
    l4_icmp_err_policy_not_present{YType::uint64, "l4-icmp-err-policy-not-present"},
    l4_icmp_err_classification_fail{YType::uint64, "l4-icmp-err-classification-fail"},
    syncookie_max_dst{YType::uint64, "syncookie-max-dst"},
    syncookie_internal_err_alloc_fail{YType::uint64, "syncookie-internal-err-alloc-fail"},
    syncookie_trigger{YType::uint64, "syncookie-trigger"},
    policy_fragment_drop{YType::uint64, "policy-fragment-drop"},
    policy_action_drop{YType::uint64, "policy-action-drop"},
    policy_icmp_action_drop{YType::uint64, "policy-icmp-action-drop"},
    l7_type_drop{YType::uint64, "l7-type-drop"},
    l7_no_seg{YType::uint64, "l7-no-seg"},
    l7_no_frag{YType::uint64, "l7-no-frag"},
    l7_unknown_proto{YType::uint64, "l7-unknown-proto"},
    l7_alg_ret_drop{YType::uint64, "l7-alg-ret-drop"},
    l7_promote_fail_no_zone_pair{YType::uint64, "l7-promote-fail-no-zone-pair"},
    l7_promote_fail_no_policy{YType::uint64, "l7-promote-fail-no-policy"},
    no_session{YType::uint64, "no-session"},
    no_new_session{YType::uint64, "no-new-session"},
    not_initiator{YType::uint64, "not-initiator"},
    invalid_zone{YType::uint64, "invalid-zone"},
    ha_ar_standby{YType::uint64, "ha-ar-standby"},
    no_forwarding_zone{YType::uint64, "no-forwarding-zone"},
    backpressure{YType::uint64, "backpressure"},
    zone_mismatch{YType::uint64, "zone-mismatch"},
    fdb_err{YType::uint64, "fdb-err"},
    lisp_header_restore_fail{YType::uint64, "lisp-header-restore-fail"},
    lisp_inner_pkt_insane{YType::uint64, "lisp-inner-pkt-insane"},
    lisp_inner_ipv4_insane{YType::uint64, "lisp-inner-ipv4-insane"},
    lisp_inner_ipv6_insane{YType::uint64, "lisp-inner-ipv6-insane"}
{

    yang_name = "fw-drop-stats"; yang_parent_name = "fw-oper-data"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

FwOperData::FwDropStats::~FwDropStats()
{
}

bool FwOperData::FwDropStats::has_data() const
{
    if (is_presence_container) return true;
    return catch_all.is_set
	|| l4_max_halfsession.is_set
	|| l4_too_many_pkts.is_set
	|| l4_session_limit.is_set
	|| l4_invalid_hdr.is_set
	|| l4_internal_err_undefined_dir.is_set
	|| l4_scb_close.is_set
	|| l4_tcp_invalid_ack_flag.is_set
	|| l4_tcp_invalid_ack_num.is_set
	|| l4_tcp_invalid_tcp_initiator.is_set
	|| l4_tcp_syn_with_data.is_set
	|| l4_tcp_invalid_win_scale_option.is_set
	|| l4_tcp_invalid_seg_synsent_state.is_set
	|| l4_tcp_invalid_seg_synrcvd_state.is_set
	|| l4_tcp_invalid_seg_pkt_too_old.is_set
	|| l4_tcp_invalid_seg_pkt_win_overflow.is_set
	|| l4_tcp_invalid_seg_pyld_after_fin_send.is_set
	|| l4_tcp_invalid_flags.is_set
	|| l4_tcp_invalid_seq.is_set
	|| l4_tcp_retrans_invalid_flags.is_set
	|| l4_tcp_l7_ooo_seg.is_set
	|| l4_tcp_syn_flood_drop.is_set
	|| l4_tcp_internal_err_synflood_alloc_hostdb_fail.is_set
	|| l4_tcp_synflood_blackout_drop.is_set
	|| l4_tcp_unexpect_tcp_payload.is_set
	|| l4_tcp_syn_in_win.is_set
	|| l4_tcp_rst_in_win.is_set
	|| l4_tcp_stray_seg.is_set
	|| l4_tcp_rst_to_resp.is_set
	|| insp_pam_lookup_fail.is_set
	|| insp_internal_err_get_stat_blk_fail.is_set
	|| insp_dstaddr_lookup_fail.is_set
	|| insp_policy_not_present.is_set
	|| insp_sess_miss_policy_not_present.is_set
	|| insp_classification_fail.is_set
	|| insp_class_action_drop.is_set
	|| insp_policy_misconfigure.is_set
	|| l4_icmp_too_many_err_pkts.is_set
	|| l4_icmp_internal_err_no_nat.is_set
	|| l4_icmp_internal_err_alloc_fail.is_set
	|| l4_icmp_internal_err_get_stat_blk_fail.is_set
	|| l4_icmp_internal_err_dir_not_identified.is_set
	|| l4_icmp_scb_close.is_set
	|| l4_icmp_pkt_no_ip_hdr.is_set
	|| l4_icmp_pkt_too_short.is_set
	|| l4_icmp_err_no_ip_no_icmp.is_set
	|| l4_icmp_err_pkts_burst.is_set
	|| l4_icmp_err_multiple_unreach.is_set
	|| l4_icmp_err_l4_invalid_seq.is_set
	|| l4_icmp_err_l4_invalid_ack.is_set
	|| l4_icmp_err_policy_not_present.is_set
	|| l4_icmp_err_classification_fail.is_set
	|| syncookie_max_dst.is_set
	|| syncookie_internal_err_alloc_fail.is_set
	|| syncookie_trigger.is_set
	|| policy_fragment_drop.is_set
	|| policy_action_drop.is_set
	|| policy_icmp_action_drop.is_set
	|| l7_type_drop.is_set
	|| l7_no_seg.is_set
	|| l7_no_frag.is_set
	|| l7_unknown_proto.is_set
	|| l7_alg_ret_drop.is_set
	|| l7_promote_fail_no_zone_pair.is_set
	|| l7_promote_fail_no_policy.is_set
	|| no_session.is_set
	|| no_new_session.is_set
	|| not_initiator.is_set
	|| invalid_zone.is_set
	|| ha_ar_standby.is_set
	|| no_forwarding_zone.is_set
	|| backpressure.is_set
	|| zone_mismatch.is_set
	|| fdb_err.is_set
	|| lisp_header_restore_fail.is_set
	|| lisp_inner_pkt_insane.is_set
	|| lisp_inner_ipv4_insane.is_set
	|| lisp_inner_ipv6_insane.is_set;
}

bool FwOperData::FwDropStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(catch_all.yfilter)
	|| ydk::is_set(l4_max_halfsession.yfilter)
	|| ydk::is_set(l4_too_many_pkts.yfilter)
	|| ydk::is_set(l4_session_limit.yfilter)
	|| ydk::is_set(l4_invalid_hdr.yfilter)
	|| ydk::is_set(l4_internal_err_undefined_dir.yfilter)
	|| ydk::is_set(l4_scb_close.yfilter)
	|| ydk::is_set(l4_tcp_invalid_ack_flag.yfilter)
	|| ydk::is_set(l4_tcp_invalid_ack_num.yfilter)
	|| ydk::is_set(l4_tcp_invalid_tcp_initiator.yfilter)
	|| ydk::is_set(l4_tcp_syn_with_data.yfilter)
	|| ydk::is_set(l4_tcp_invalid_win_scale_option.yfilter)
	|| ydk::is_set(l4_tcp_invalid_seg_synsent_state.yfilter)
	|| ydk::is_set(l4_tcp_invalid_seg_synrcvd_state.yfilter)
	|| ydk::is_set(l4_tcp_invalid_seg_pkt_too_old.yfilter)
	|| ydk::is_set(l4_tcp_invalid_seg_pkt_win_overflow.yfilter)
	|| ydk::is_set(l4_tcp_invalid_seg_pyld_after_fin_send.yfilter)
	|| ydk::is_set(l4_tcp_invalid_flags.yfilter)
	|| ydk::is_set(l4_tcp_invalid_seq.yfilter)
	|| ydk::is_set(l4_tcp_retrans_invalid_flags.yfilter)
	|| ydk::is_set(l4_tcp_l7_ooo_seg.yfilter)
	|| ydk::is_set(l4_tcp_syn_flood_drop.yfilter)
	|| ydk::is_set(l4_tcp_internal_err_synflood_alloc_hostdb_fail.yfilter)
	|| ydk::is_set(l4_tcp_synflood_blackout_drop.yfilter)
	|| ydk::is_set(l4_tcp_unexpect_tcp_payload.yfilter)
	|| ydk::is_set(l4_tcp_syn_in_win.yfilter)
	|| ydk::is_set(l4_tcp_rst_in_win.yfilter)
	|| ydk::is_set(l4_tcp_stray_seg.yfilter)
	|| ydk::is_set(l4_tcp_rst_to_resp.yfilter)
	|| ydk::is_set(insp_pam_lookup_fail.yfilter)
	|| ydk::is_set(insp_internal_err_get_stat_blk_fail.yfilter)
	|| ydk::is_set(insp_dstaddr_lookup_fail.yfilter)
	|| ydk::is_set(insp_policy_not_present.yfilter)
	|| ydk::is_set(insp_sess_miss_policy_not_present.yfilter)
	|| ydk::is_set(insp_classification_fail.yfilter)
	|| ydk::is_set(insp_class_action_drop.yfilter)
	|| ydk::is_set(insp_policy_misconfigure.yfilter)
	|| ydk::is_set(l4_icmp_too_many_err_pkts.yfilter)
	|| ydk::is_set(l4_icmp_internal_err_no_nat.yfilter)
	|| ydk::is_set(l4_icmp_internal_err_alloc_fail.yfilter)
	|| ydk::is_set(l4_icmp_internal_err_get_stat_blk_fail.yfilter)
	|| ydk::is_set(l4_icmp_internal_err_dir_not_identified.yfilter)
	|| ydk::is_set(l4_icmp_scb_close.yfilter)
	|| ydk::is_set(l4_icmp_pkt_no_ip_hdr.yfilter)
	|| ydk::is_set(l4_icmp_pkt_too_short.yfilter)
	|| ydk::is_set(l4_icmp_err_no_ip_no_icmp.yfilter)
	|| ydk::is_set(l4_icmp_err_pkts_burst.yfilter)
	|| ydk::is_set(l4_icmp_err_multiple_unreach.yfilter)
	|| ydk::is_set(l4_icmp_err_l4_invalid_seq.yfilter)
	|| ydk::is_set(l4_icmp_err_l4_invalid_ack.yfilter)
	|| ydk::is_set(l4_icmp_err_policy_not_present.yfilter)
	|| ydk::is_set(l4_icmp_err_classification_fail.yfilter)
	|| ydk::is_set(syncookie_max_dst.yfilter)
	|| ydk::is_set(syncookie_internal_err_alloc_fail.yfilter)
	|| ydk::is_set(syncookie_trigger.yfilter)
	|| ydk::is_set(policy_fragment_drop.yfilter)
	|| ydk::is_set(policy_action_drop.yfilter)
	|| ydk::is_set(policy_icmp_action_drop.yfilter)
	|| ydk::is_set(l7_type_drop.yfilter)
	|| ydk::is_set(l7_no_seg.yfilter)
	|| ydk::is_set(l7_no_frag.yfilter)
	|| ydk::is_set(l7_unknown_proto.yfilter)
	|| ydk::is_set(l7_alg_ret_drop.yfilter)
	|| ydk::is_set(l7_promote_fail_no_zone_pair.yfilter)
	|| ydk::is_set(l7_promote_fail_no_policy.yfilter)
	|| ydk::is_set(no_session.yfilter)
	|| ydk::is_set(no_new_session.yfilter)
	|| ydk::is_set(not_initiator.yfilter)
	|| ydk::is_set(invalid_zone.yfilter)
	|| ydk::is_set(ha_ar_standby.yfilter)
	|| ydk::is_set(no_forwarding_zone.yfilter)
	|| ydk::is_set(backpressure.yfilter)
	|| ydk::is_set(zone_mismatch.yfilter)
	|| ydk::is_set(fdb_err.yfilter)
	|| ydk::is_set(lisp_header_restore_fail.yfilter)
	|| ydk::is_set(lisp_inner_pkt_insane.yfilter)
	|| ydk::is_set(lisp_inner_ipv4_insane.yfilter)
	|| ydk::is_set(lisp_inner_ipv6_insane.yfilter);
}

std::string FwOperData::FwDropStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-fw-oper:fw-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string FwOperData::FwDropStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fw-drop-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FwOperData::FwDropStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (catch_all.is_set || is_set(catch_all.yfilter)) leaf_name_data.push_back(catch_all.get_name_leafdata());
    if (l4_max_halfsession.is_set || is_set(l4_max_halfsession.yfilter)) leaf_name_data.push_back(l4_max_halfsession.get_name_leafdata());
    if (l4_too_many_pkts.is_set || is_set(l4_too_many_pkts.yfilter)) leaf_name_data.push_back(l4_too_many_pkts.get_name_leafdata());
    if (l4_session_limit.is_set || is_set(l4_session_limit.yfilter)) leaf_name_data.push_back(l4_session_limit.get_name_leafdata());
    if (l4_invalid_hdr.is_set || is_set(l4_invalid_hdr.yfilter)) leaf_name_data.push_back(l4_invalid_hdr.get_name_leafdata());
    if (l4_internal_err_undefined_dir.is_set || is_set(l4_internal_err_undefined_dir.yfilter)) leaf_name_data.push_back(l4_internal_err_undefined_dir.get_name_leafdata());
    if (l4_scb_close.is_set || is_set(l4_scb_close.yfilter)) leaf_name_data.push_back(l4_scb_close.get_name_leafdata());
    if (l4_tcp_invalid_ack_flag.is_set || is_set(l4_tcp_invalid_ack_flag.yfilter)) leaf_name_data.push_back(l4_tcp_invalid_ack_flag.get_name_leafdata());
    if (l4_tcp_invalid_ack_num.is_set || is_set(l4_tcp_invalid_ack_num.yfilter)) leaf_name_data.push_back(l4_tcp_invalid_ack_num.get_name_leafdata());
    if (l4_tcp_invalid_tcp_initiator.is_set || is_set(l4_tcp_invalid_tcp_initiator.yfilter)) leaf_name_data.push_back(l4_tcp_invalid_tcp_initiator.get_name_leafdata());
    if (l4_tcp_syn_with_data.is_set || is_set(l4_tcp_syn_with_data.yfilter)) leaf_name_data.push_back(l4_tcp_syn_with_data.get_name_leafdata());
    if (l4_tcp_invalid_win_scale_option.is_set || is_set(l4_tcp_invalid_win_scale_option.yfilter)) leaf_name_data.push_back(l4_tcp_invalid_win_scale_option.get_name_leafdata());
    if (l4_tcp_invalid_seg_synsent_state.is_set || is_set(l4_tcp_invalid_seg_synsent_state.yfilter)) leaf_name_data.push_back(l4_tcp_invalid_seg_synsent_state.get_name_leafdata());
    if (l4_tcp_invalid_seg_synrcvd_state.is_set || is_set(l4_tcp_invalid_seg_synrcvd_state.yfilter)) leaf_name_data.push_back(l4_tcp_invalid_seg_synrcvd_state.get_name_leafdata());
    if (l4_tcp_invalid_seg_pkt_too_old.is_set || is_set(l4_tcp_invalid_seg_pkt_too_old.yfilter)) leaf_name_data.push_back(l4_tcp_invalid_seg_pkt_too_old.get_name_leafdata());
    if (l4_tcp_invalid_seg_pkt_win_overflow.is_set || is_set(l4_tcp_invalid_seg_pkt_win_overflow.yfilter)) leaf_name_data.push_back(l4_tcp_invalid_seg_pkt_win_overflow.get_name_leafdata());
    if (l4_tcp_invalid_seg_pyld_after_fin_send.is_set || is_set(l4_tcp_invalid_seg_pyld_after_fin_send.yfilter)) leaf_name_data.push_back(l4_tcp_invalid_seg_pyld_after_fin_send.get_name_leafdata());
    if (l4_tcp_invalid_flags.is_set || is_set(l4_tcp_invalid_flags.yfilter)) leaf_name_data.push_back(l4_tcp_invalid_flags.get_name_leafdata());
    if (l4_tcp_invalid_seq.is_set || is_set(l4_tcp_invalid_seq.yfilter)) leaf_name_data.push_back(l4_tcp_invalid_seq.get_name_leafdata());
    if (l4_tcp_retrans_invalid_flags.is_set || is_set(l4_tcp_retrans_invalid_flags.yfilter)) leaf_name_data.push_back(l4_tcp_retrans_invalid_flags.get_name_leafdata());
    if (l4_tcp_l7_ooo_seg.is_set || is_set(l4_tcp_l7_ooo_seg.yfilter)) leaf_name_data.push_back(l4_tcp_l7_ooo_seg.get_name_leafdata());
    if (l4_tcp_syn_flood_drop.is_set || is_set(l4_tcp_syn_flood_drop.yfilter)) leaf_name_data.push_back(l4_tcp_syn_flood_drop.get_name_leafdata());
    if (l4_tcp_internal_err_synflood_alloc_hostdb_fail.is_set || is_set(l4_tcp_internal_err_synflood_alloc_hostdb_fail.yfilter)) leaf_name_data.push_back(l4_tcp_internal_err_synflood_alloc_hostdb_fail.get_name_leafdata());
    if (l4_tcp_synflood_blackout_drop.is_set || is_set(l4_tcp_synflood_blackout_drop.yfilter)) leaf_name_data.push_back(l4_tcp_synflood_blackout_drop.get_name_leafdata());
    if (l4_tcp_unexpect_tcp_payload.is_set || is_set(l4_tcp_unexpect_tcp_payload.yfilter)) leaf_name_data.push_back(l4_tcp_unexpect_tcp_payload.get_name_leafdata());
    if (l4_tcp_syn_in_win.is_set || is_set(l4_tcp_syn_in_win.yfilter)) leaf_name_data.push_back(l4_tcp_syn_in_win.get_name_leafdata());
    if (l4_tcp_rst_in_win.is_set || is_set(l4_tcp_rst_in_win.yfilter)) leaf_name_data.push_back(l4_tcp_rst_in_win.get_name_leafdata());
    if (l4_tcp_stray_seg.is_set || is_set(l4_tcp_stray_seg.yfilter)) leaf_name_data.push_back(l4_tcp_stray_seg.get_name_leafdata());
    if (l4_tcp_rst_to_resp.is_set || is_set(l4_tcp_rst_to_resp.yfilter)) leaf_name_data.push_back(l4_tcp_rst_to_resp.get_name_leafdata());
    if (insp_pam_lookup_fail.is_set || is_set(insp_pam_lookup_fail.yfilter)) leaf_name_data.push_back(insp_pam_lookup_fail.get_name_leafdata());
    if (insp_internal_err_get_stat_blk_fail.is_set || is_set(insp_internal_err_get_stat_blk_fail.yfilter)) leaf_name_data.push_back(insp_internal_err_get_stat_blk_fail.get_name_leafdata());
    if (insp_dstaddr_lookup_fail.is_set || is_set(insp_dstaddr_lookup_fail.yfilter)) leaf_name_data.push_back(insp_dstaddr_lookup_fail.get_name_leafdata());
    if (insp_policy_not_present.is_set || is_set(insp_policy_not_present.yfilter)) leaf_name_data.push_back(insp_policy_not_present.get_name_leafdata());
    if (insp_sess_miss_policy_not_present.is_set || is_set(insp_sess_miss_policy_not_present.yfilter)) leaf_name_data.push_back(insp_sess_miss_policy_not_present.get_name_leafdata());
    if (insp_classification_fail.is_set || is_set(insp_classification_fail.yfilter)) leaf_name_data.push_back(insp_classification_fail.get_name_leafdata());
    if (insp_class_action_drop.is_set || is_set(insp_class_action_drop.yfilter)) leaf_name_data.push_back(insp_class_action_drop.get_name_leafdata());
    if (insp_policy_misconfigure.is_set || is_set(insp_policy_misconfigure.yfilter)) leaf_name_data.push_back(insp_policy_misconfigure.get_name_leafdata());
    if (l4_icmp_too_many_err_pkts.is_set || is_set(l4_icmp_too_many_err_pkts.yfilter)) leaf_name_data.push_back(l4_icmp_too_many_err_pkts.get_name_leafdata());
    if (l4_icmp_internal_err_no_nat.is_set || is_set(l4_icmp_internal_err_no_nat.yfilter)) leaf_name_data.push_back(l4_icmp_internal_err_no_nat.get_name_leafdata());
    if (l4_icmp_internal_err_alloc_fail.is_set || is_set(l4_icmp_internal_err_alloc_fail.yfilter)) leaf_name_data.push_back(l4_icmp_internal_err_alloc_fail.get_name_leafdata());
    if (l4_icmp_internal_err_get_stat_blk_fail.is_set || is_set(l4_icmp_internal_err_get_stat_blk_fail.yfilter)) leaf_name_data.push_back(l4_icmp_internal_err_get_stat_blk_fail.get_name_leafdata());
    if (l4_icmp_internal_err_dir_not_identified.is_set || is_set(l4_icmp_internal_err_dir_not_identified.yfilter)) leaf_name_data.push_back(l4_icmp_internal_err_dir_not_identified.get_name_leafdata());
    if (l4_icmp_scb_close.is_set || is_set(l4_icmp_scb_close.yfilter)) leaf_name_data.push_back(l4_icmp_scb_close.get_name_leafdata());
    if (l4_icmp_pkt_no_ip_hdr.is_set || is_set(l4_icmp_pkt_no_ip_hdr.yfilter)) leaf_name_data.push_back(l4_icmp_pkt_no_ip_hdr.get_name_leafdata());
    if (l4_icmp_pkt_too_short.is_set || is_set(l4_icmp_pkt_too_short.yfilter)) leaf_name_data.push_back(l4_icmp_pkt_too_short.get_name_leafdata());
    if (l4_icmp_err_no_ip_no_icmp.is_set || is_set(l4_icmp_err_no_ip_no_icmp.yfilter)) leaf_name_data.push_back(l4_icmp_err_no_ip_no_icmp.get_name_leafdata());
    if (l4_icmp_err_pkts_burst.is_set || is_set(l4_icmp_err_pkts_burst.yfilter)) leaf_name_data.push_back(l4_icmp_err_pkts_burst.get_name_leafdata());
    if (l4_icmp_err_multiple_unreach.is_set || is_set(l4_icmp_err_multiple_unreach.yfilter)) leaf_name_data.push_back(l4_icmp_err_multiple_unreach.get_name_leafdata());
    if (l4_icmp_err_l4_invalid_seq.is_set || is_set(l4_icmp_err_l4_invalid_seq.yfilter)) leaf_name_data.push_back(l4_icmp_err_l4_invalid_seq.get_name_leafdata());
    if (l4_icmp_err_l4_invalid_ack.is_set || is_set(l4_icmp_err_l4_invalid_ack.yfilter)) leaf_name_data.push_back(l4_icmp_err_l4_invalid_ack.get_name_leafdata());
    if (l4_icmp_err_policy_not_present.is_set || is_set(l4_icmp_err_policy_not_present.yfilter)) leaf_name_data.push_back(l4_icmp_err_policy_not_present.get_name_leafdata());
    if (l4_icmp_err_classification_fail.is_set || is_set(l4_icmp_err_classification_fail.yfilter)) leaf_name_data.push_back(l4_icmp_err_classification_fail.get_name_leafdata());
    if (syncookie_max_dst.is_set || is_set(syncookie_max_dst.yfilter)) leaf_name_data.push_back(syncookie_max_dst.get_name_leafdata());
    if (syncookie_internal_err_alloc_fail.is_set || is_set(syncookie_internal_err_alloc_fail.yfilter)) leaf_name_data.push_back(syncookie_internal_err_alloc_fail.get_name_leafdata());
    if (syncookie_trigger.is_set || is_set(syncookie_trigger.yfilter)) leaf_name_data.push_back(syncookie_trigger.get_name_leafdata());
    if (policy_fragment_drop.is_set || is_set(policy_fragment_drop.yfilter)) leaf_name_data.push_back(policy_fragment_drop.get_name_leafdata());
    if (policy_action_drop.is_set || is_set(policy_action_drop.yfilter)) leaf_name_data.push_back(policy_action_drop.get_name_leafdata());
    if (policy_icmp_action_drop.is_set || is_set(policy_icmp_action_drop.yfilter)) leaf_name_data.push_back(policy_icmp_action_drop.get_name_leafdata());
    if (l7_type_drop.is_set || is_set(l7_type_drop.yfilter)) leaf_name_data.push_back(l7_type_drop.get_name_leafdata());
    if (l7_no_seg.is_set || is_set(l7_no_seg.yfilter)) leaf_name_data.push_back(l7_no_seg.get_name_leafdata());
    if (l7_no_frag.is_set || is_set(l7_no_frag.yfilter)) leaf_name_data.push_back(l7_no_frag.get_name_leafdata());
    if (l7_unknown_proto.is_set || is_set(l7_unknown_proto.yfilter)) leaf_name_data.push_back(l7_unknown_proto.get_name_leafdata());
    if (l7_alg_ret_drop.is_set || is_set(l7_alg_ret_drop.yfilter)) leaf_name_data.push_back(l7_alg_ret_drop.get_name_leafdata());
    if (l7_promote_fail_no_zone_pair.is_set || is_set(l7_promote_fail_no_zone_pair.yfilter)) leaf_name_data.push_back(l7_promote_fail_no_zone_pair.get_name_leafdata());
    if (l7_promote_fail_no_policy.is_set || is_set(l7_promote_fail_no_policy.yfilter)) leaf_name_data.push_back(l7_promote_fail_no_policy.get_name_leafdata());
    if (no_session.is_set || is_set(no_session.yfilter)) leaf_name_data.push_back(no_session.get_name_leafdata());
    if (no_new_session.is_set || is_set(no_new_session.yfilter)) leaf_name_data.push_back(no_new_session.get_name_leafdata());
    if (not_initiator.is_set || is_set(not_initiator.yfilter)) leaf_name_data.push_back(not_initiator.get_name_leafdata());
    if (invalid_zone.is_set || is_set(invalid_zone.yfilter)) leaf_name_data.push_back(invalid_zone.get_name_leafdata());
    if (ha_ar_standby.is_set || is_set(ha_ar_standby.yfilter)) leaf_name_data.push_back(ha_ar_standby.get_name_leafdata());
    if (no_forwarding_zone.is_set || is_set(no_forwarding_zone.yfilter)) leaf_name_data.push_back(no_forwarding_zone.get_name_leafdata());
    if (backpressure.is_set || is_set(backpressure.yfilter)) leaf_name_data.push_back(backpressure.get_name_leafdata());
    if (zone_mismatch.is_set || is_set(zone_mismatch.yfilter)) leaf_name_data.push_back(zone_mismatch.get_name_leafdata());
    if (fdb_err.is_set || is_set(fdb_err.yfilter)) leaf_name_data.push_back(fdb_err.get_name_leafdata());
    if (lisp_header_restore_fail.is_set || is_set(lisp_header_restore_fail.yfilter)) leaf_name_data.push_back(lisp_header_restore_fail.get_name_leafdata());
    if (lisp_inner_pkt_insane.is_set || is_set(lisp_inner_pkt_insane.yfilter)) leaf_name_data.push_back(lisp_inner_pkt_insane.get_name_leafdata());
    if (lisp_inner_ipv4_insane.is_set || is_set(lisp_inner_ipv4_insane.yfilter)) leaf_name_data.push_back(lisp_inner_ipv4_insane.get_name_leafdata());
    if (lisp_inner_ipv6_insane.is_set || is_set(lisp_inner_ipv6_insane.yfilter)) leaf_name_data.push_back(lisp_inner_ipv6_insane.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FwOperData::FwDropStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FwOperData::FwDropStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FwOperData::FwDropStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "catch-all")
    {
        catch_all = value;
        catch_all.value_namespace = name_space;
        catch_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-max-halfsession")
    {
        l4_max_halfsession = value;
        l4_max_halfsession.value_namespace = name_space;
        l4_max_halfsession.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-too-many-pkts")
    {
        l4_too_many_pkts = value;
        l4_too_many_pkts.value_namespace = name_space;
        l4_too_many_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-session-limit")
    {
        l4_session_limit = value;
        l4_session_limit.value_namespace = name_space;
        l4_session_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-invalid-hdr")
    {
        l4_invalid_hdr = value;
        l4_invalid_hdr.value_namespace = name_space;
        l4_invalid_hdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-internal-err-undefined-dir")
    {
        l4_internal_err_undefined_dir = value;
        l4_internal_err_undefined_dir.value_namespace = name_space;
        l4_internal_err_undefined_dir.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-scb-close")
    {
        l4_scb_close = value;
        l4_scb_close.value_namespace = name_space;
        l4_scb_close.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-tcp-invalid-ack-flag")
    {
        l4_tcp_invalid_ack_flag = value;
        l4_tcp_invalid_ack_flag.value_namespace = name_space;
        l4_tcp_invalid_ack_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-tcp-invalid-ack-num")
    {
        l4_tcp_invalid_ack_num = value;
        l4_tcp_invalid_ack_num.value_namespace = name_space;
        l4_tcp_invalid_ack_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-tcp-invalid-tcp-initiator")
    {
        l4_tcp_invalid_tcp_initiator = value;
        l4_tcp_invalid_tcp_initiator.value_namespace = name_space;
        l4_tcp_invalid_tcp_initiator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-tcp-syn-with-data")
    {
        l4_tcp_syn_with_data = value;
        l4_tcp_syn_with_data.value_namespace = name_space;
        l4_tcp_syn_with_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-tcp-invalid-win-scale-option")
    {
        l4_tcp_invalid_win_scale_option = value;
        l4_tcp_invalid_win_scale_option.value_namespace = name_space;
        l4_tcp_invalid_win_scale_option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-tcp-invalid-seg-synsent-state")
    {
        l4_tcp_invalid_seg_synsent_state = value;
        l4_tcp_invalid_seg_synsent_state.value_namespace = name_space;
        l4_tcp_invalid_seg_synsent_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-tcp-invalid-seg-synrcvd-state")
    {
        l4_tcp_invalid_seg_synrcvd_state = value;
        l4_tcp_invalid_seg_synrcvd_state.value_namespace = name_space;
        l4_tcp_invalid_seg_synrcvd_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-tcp-invalid-seg-pkt-too-old")
    {
        l4_tcp_invalid_seg_pkt_too_old = value;
        l4_tcp_invalid_seg_pkt_too_old.value_namespace = name_space;
        l4_tcp_invalid_seg_pkt_too_old.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-tcp-invalid-seg-pkt-win-overflow")
    {
        l4_tcp_invalid_seg_pkt_win_overflow = value;
        l4_tcp_invalid_seg_pkt_win_overflow.value_namespace = name_space;
        l4_tcp_invalid_seg_pkt_win_overflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-tcp-invalid-seg-pyld-after-fin-send")
    {
        l4_tcp_invalid_seg_pyld_after_fin_send = value;
        l4_tcp_invalid_seg_pyld_after_fin_send.value_namespace = name_space;
        l4_tcp_invalid_seg_pyld_after_fin_send.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-tcp-invalid-flags")
    {
        l4_tcp_invalid_flags = value;
        l4_tcp_invalid_flags.value_namespace = name_space;
        l4_tcp_invalid_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-tcp-invalid-seq")
    {
        l4_tcp_invalid_seq = value;
        l4_tcp_invalid_seq.value_namespace = name_space;
        l4_tcp_invalid_seq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-tcp-retrans-invalid-flags")
    {
        l4_tcp_retrans_invalid_flags = value;
        l4_tcp_retrans_invalid_flags.value_namespace = name_space;
        l4_tcp_retrans_invalid_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-tcp-l7-ooo-seg")
    {
        l4_tcp_l7_ooo_seg = value;
        l4_tcp_l7_ooo_seg.value_namespace = name_space;
        l4_tcp_l7_ooo_seg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-tcp-syn-flood-drop")
    {
        l4_tcp_syn_flood_drop = value;
        l4_tcp_syn_flood_drop.value_namespace = name_space;
        l4_tcp_syn_flood_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-tcp-internal-err-synflood-alloc-hostdb-fail")
    {
        l4_tcp_internal_err_synflood_alloc_hostdb_fail = value;
        l4_tcp_internal_err_synflood_alloc_hostdb_fail.value_namespace = name_space;
        l4_tcp_internal_err_synflood_alloc_hostdb_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-tcp-synflood-blackout-drop")
    {
        l4_tcp_synflood_blackout_drop = value;
        l4_tcp_synflood_blackout_drop.value_namespace = name_space;
        l4_tcp_synflood_blackout_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-tcp-unexpect-tcp-payload")
    {
        l4_tcp_unexpect_tcp_payload = value;
        l4_tcp_unexpect_tcp_payload.value_namespace = name_space;
        l4_tcp_unexpect_tcp_payload.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-tcp-syn-in-win")
    {
        l4_tcp_syn_in_win = value;
        l4_tcp_syn_in_win.value_namespace = name_space;
        l4_tcp_syn_in_win.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-tcp-rst-in-win")
    {
        l4_tcp_rst_in_win = value;
        l4_tcp_rst_in_win.value_namespace = name_space;
        l4_tcp_rst_in_win.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-tcp-stray-seg")
    {
        l4_tcp_stray_seg = value;
        l4_tcp_stray_seg.value_namespace = name_space;
        l4_tcp_stray_seg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-tcp-rst-to-resp")
    {
        l4_tcp_rst_to_resp = value;
        l4_tcp_rst_to_resp.value_namespace = name_space;
        l4_tcp_rst_to_resp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insp-pam-lookup-fail")
    {
        insp_pam_lookup_fail = value;
        insp_pam_lookup_fail.value_namespace = name_space;
        insp_pam_lookup_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insp-internal-err-get-stat-blk-fail")
    {
        insp_internal_err_get_stat_blk_fail = value;
        insp_internal_err_get_stat_blk_fail.value_namespace = name_space;
        insp_internal_err_get_stat_blk_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insp-dstaddr-lookup-fail")
    {
        insp_dstaddr_lookup_fail = value;
        insp_dstaddr_lookup_fail.value_namespace = name_space;
        insp_dstaddr_lookup_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insp-policy-not-present")
    {
        insp_policy_not_present = value;
        insp_policy_not_present.value_namespace = name_space;
        insp_policy_not_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insp-sess-miss-policy-not-present")
    {
        insp_sess_miss_policy_not_present = value;
        insp_sess_miss_policy_not_present.value_namespace = name_space;
        insp_sess_miss_policy_not_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insp-classification-fail")
    {
        insp_classification_fail = value;
        insp_classification_fail.value_namespace = name_space;
        insp_classification_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insp-class-action-drop")
    {
        insp_class_action_drop = value;
        insp_class_action_drop.value_namespace = name_space;
        insp_class_action_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insp-policy-misconfigure")
    {
        insp_policy_misconfigure = value;
        insp_policy_misconfigure.value_namespace = name_space;
        insp_policy_misconfigure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-icmp-too-many-err-pkts")
    {
        l4_icmp_too_many_err_pkts = value;
        l4_icmp_too_many_err_pkts.value_namespace = name_space;
        l4_icmp_too_many_err_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-icmp-internal-err-no-nat")
    {
        l4_icmp_internal_err_no_nat = value;
        l4_icmp_internal_err_no_nat.value_namespace = name_space;
        l4_icmp_internal_err_no_nat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-icmp-internal-err-alloc-fail")
    {
        l4_icmp_internal_err_alloc_fail = value;
        l4_icmp_internal_err_alloc_fail.value_namespace = name_space;
        l4_icmp_internal_err_alloc_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-icmp-internal-err-get-stat-blk-fail")
    {
        l4_icmp_internal_err_get_stat_blk_fail = value;
        l4_icmp_internal_err_get_stat_blk_fail.value_namespace = name_space;
        l4_icmp_internal_err_get_stat_blk_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-icmp-internal-err-dir-not-identified")
    {
        l4_icmp_internal_err_dir_not_identified = value;
        l4_icmp_internal_err_dir_not_identified.value_namespace = name_space;
        l4_icmp_internal_err_dir_not_identified.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-icmp-scb-close")
    {
        l4_icmp_scb_close = value;
        l4_icmp_scb_close.value_namespace = name_space;
        l4_icmp_scb_close.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-icmp-pkt-no-ip-hdr")
    {
        l4_icmp_pkt_no_ip_hdr = value;
        l4_icmp_pkt_no_ip_hdr.value_namespace = name_space;
        l4_icmp_pkt_no_ip_hdr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-icmp-pkt-too-short")
    {
        l4_icmp_pkt_too_short = value;
        l4_icmp_pkt_too_short.value_namespace = name_space;
        l4_icmp_pkt_too_short.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-icmp-err-no-ip-no-icmp")
    {
        l4_icmp_err_no_ip_no_icmp = value;
        l4_icmp_err_no_ip_no_icmp.value_namespace = name_space;
        l4_icmp_err_no_ip_no_icmp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-icmp-err-pkts-burst")
    {
        l4_icmp_err_pkts_burst = value;
        l4_icmp_err_pkts_burst.value_namespace = name_space;
        l4_icmp_err_pkts_burst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-icmp-err-multiple-unreach")
    {
        l4_icmp_err_multiple_unreach = value;
        l4_icmp_err_multiple_unreach.value_namespace = name_space;
        l4_icmp_err_multiple_unreach.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-icmp-err-l4-invalid-seq")
    {
        l4_icmp_err_l4_invalid_seq = value;
        l4_icmp_err_l4_invalid_seq.value_namespace = name_space;
        l4_icmp_err_l4_invalid_seq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-icmp-err-l4-invalid-ack")
    {
        l4_icmp_err_l4_invalid_ack = value;
        l4_icmp_err_l4_invalid_ack.value_namespace = name_space;
        l4_icmp_err_l4_invalid_ack.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-icmp-err-policy-not-present")
    {
        l4_icmp_err_policy_not_present = value;
        l4_icmp_err_policy_not_present.value_namespace = name_space;
        l4_icmp_err_policy_not_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l4-icmp-err-classification-fail")
    {
        l4_icmp_err_classification_fail = value;
        l4_icmp_err_classification_fail.value_namespace = name_space;
        l4_icmp_err_classification_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syncookie-max-dst")
    {
        syncookie_max_dst = value;
        syncookie_max_dst.value_namespace = name_space;
        syncookie_max_dst.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syncookie-internal-err-alloc-fail")
    {
        syncookie_internal_err_alloc_fail = value;
        syncookie_internal_err_alloc_fail.value_namespace = name_space;
        syncookie_internal_err_alloc_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "syncookie-trigger")
    {
        syncookie_trigger = value;
        syncookie_trigger.value_namespace = name_space;
        syncookie_trigger.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-fragment-drop")
    {
        policy_fragment_drop = value;
        policy_fragment_drop.value_namespace = name_space;
        policy_fragment_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-action-drop")
    {
        policy_action_drop = value;
        policy_action_drop.value_namespace = name_space;
        policy_action_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-icmp-action-drop")
    {
        policy_icmp_action_drop = value;
        policy_icmp_action_drop.value_namespace = name_space;
        policy_icmp_action_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l7-type-drop")
    {
        l7_type_drop = value;
        l7_type_drop.value_namespace = name_space;
        l7_type_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l7-no-seg")
    {
        l7_no_seg = value;
        l7_no_seg.value_namespace = name_space;
        l7_no_seg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l7-no-frag")
    {
        l7_no_frag = value;
        l7_no_frag.value_namespace = name_space;
        l7_no_frag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l7-unknown-proto")
    {
        l7_unknown_proto = value;
        l7_unknown_proto.value_namespace = name_space;
        l7_unknown_proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l7-alg-ret-drop")
    {
        l7_alg_ret_drop = value;
        l7_alg_ret_drop.value_namespace = name_space;
        l7_alg_ret_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l7-promote-fail-no-zone-pair")
    {
        l7_promote_fail_no_zone_pair = value;
        l7_promote_fail_no_zone_pair.value_namespace = name_space;
        l7_promote_fail_no_zone_pair.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l7-promote-fail-no-policy")
    {
        l7_promote_fail_no_policy = value;
        l7_promote_fail_no_policy.value_namespace = name_space;
        l7_promote_fail_no_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-session")
    {
        no_session = value;
        no_session.value_namespace = name_space;
        no_session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-new-session")
    {
        no_new_session = value;
        no_new_session.value_namespace = name_space;
        no_new_session.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-initiator")
    {
        not_initiator = value;
        not_initiator.value_namespace = name_space;
        not_initiator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-zone")
    {
        invalid_zone = value;
        invalid_zone.value_namespace = name_space;
        invalid_zone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ha-ar-standby")
    {
        ha_ar_standby = value;
        ha_ar_standby.value_namespace = name_space;
        ha_ar_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-forwarding-zone")
    {
        no_forwarding_zone = value;
        no_forwarding_zone.value_namespace = name_space;
        no_forwarding_zone.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backpressure")
    {
        backpressure = value;
        backpressure.value_namespace = name_space;
        backpressure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zone-mismatch")
    {
        zone_mismatch = value;
        zone_mismatch.value_namespace = name_space;
        zone_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fdb-err")
    {
        fdb_err = value;
        fdb_err.value_namespace = name_space;
        fdb_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lisp-header-restore-fail")
    {
        lisp_header_restore_fail = value;
        lisp_header_restore_fail.value_namespace = name_space;
        lisp_header_restore_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lisp-inner-pkt-insane")
    {
        lisp_inner_pkt_insane = value;
        lisp_inner_pkt_insane.value_namespace = name_space;
        lisp_inner_pkt_insane.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lisp-inner-ipv4-insane")
    {
        lisp_inner_ipv4_insane = value;
        lisp_inner_ipv4_insane.value_namespace = name_space;
        lisp_inner_ipv4_insane.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lisp-inner-ipv6-insane")
    {
        lisp_inner_ipv6_insane = value;
        lisp_inner_ipv6_insane.value_namespace = name_space;
        lisp_inner_ipv6_insane.value_namespace_prefix = name_space_prefix;
    }
}

void FwOperData::FwDropStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "catch-all")
    {
        catch_all.yfilter = yfilter;
    }
    if(value_path == "l4-max-halfsession")
    {
        l4_max_halfsession.yfilter = yfilter;
    }
    if(value_path == "l4-too-many-pkts")
    {
        l4_too_many_pkts.yfilter = yfilter;
    }
    if(value_path == "l4-session-limit")
    {
        l4_session_limit.yfilter = yfilter;
    }
    if(value_path == "l4-invalid-hdr")
    {
        l4_invalid_hdr.yfilter = yfilter;
    }
    if(value_path == "l4-internal-err-undefined-dir")
    {
        l4_internal_err_undefined_dir.yfilter = yfilter;
    }
    if(value_path == "l4-scb-close")
    {
        l4_scb_close.yfilter = yfilter;
    }
    if(value_path == "l4-tcp-invalid-ack-flag")
    {
        l4_tcp_invalid_ack_flag.yfilter = yfilter;
    }
    if(value_path == "l4-tcp-invalid-ack-num")
    {
        l4_tcp_invalid_ack_num.yfilter = yfilter;
    }
    if(value_path == "l4-tcp-invalid-tcp-initiator")
    {
        l4_tcp_invalid_tcp_initiator.yfilter = yfilter;
    }
    if(value_path == "l4-tcp-syn-with-data")
    {
        l4_tcp_syn_with_data.yfilter = yfilter;
    }
    if(value_path == "l4-tcp-invalid-win-scale-option")
    {
        l4_tcp_invalid_win_scale_option.yfilter = yfilter;
    }
    if(value_path == "l4-tcp-invalid-seg-synsent-state")
    {
        l4_tcp_invalid_seg_synsent_state.yfilter = yfilter;
    }
    if(value_path == "l4-tcp-invalid-seg-synrcvd-state")
    {
        l4_tcp_invalid_seg_synrcvd_state.yfilter = yfilter;
    }
    if(value_path == "l4-tcp-invalid-seg-pkt-too-old")
    {
        l4_tcp_invalid_seg_pkt_too_old.yfilter = yfilter;
    }
    if(value_path == "l4-tcp-invalid-seg-pkt-win-overflow")
    {
        l4_tcp_invalid_seg_pkt_win_overflow.yfilter = yfilter;
    }
    if(value_path == "l4-tcp-invalid-seg-pyld-after-fin-send")
    {
        l4_tcp_invalid_seg_pyld_after_fin_send.yfilter = yfilter;
    }
    if(value_path == "l4-tcp-invalid-flags")
    {
        l4_tcp_invalid_flags.yfilter = yfilter;
    }
    if(value_path == "l4-tcp-invalid-seq")
    {
        l4_tcp_invalid_seq.yfilter = yfilter;
    }
    if(value_path == "l4-tcp-retrans-invalid-flags")
    {
        l4_tcp_retrans_invalid_flags.yfilter = yfilter;
    }
    if(value_path == "l4-tcp-l7-ooo-seg")
    {
        l4_tcp_l7_ooo_seg.yfilter = yfilter;
    }
    if(value_path == "l4-tcp-syn-flood-drop")
    {
        l4_tcp_syn_flood_drop.yfilter = yfilter;
    }
    if(value_path == "l4-tcp-internal-err-synflood-alloc-hostdb-fail")
    {
        l4_tcp_internal_err_synflood_alloc_hostdb_fail.yfilter = yfilter;
    }
    if(value_path == "l4-tcp-synflood-blackout-drop")
    {
        l4_tcp_synflood_blackout_drop.yfilter = yfilter;
    }
    if(value_path == "l4-tcp-unexpect-tcp-payload")
    {
        l4_tcp_unexpect_tcp_payload.yfilter = yfilter;
    }
    if(value_path == "l4-tcp-syn-in-win")
    {
        l4_tcp_syn_in_win.yfilter = yfilter;
    }
    if(value_path == "l4-tcp-rst-in-win")
    {
        l4_tcp_rst_in_win.yfilter = yfilter;
    }
    if(value_path == "l4-tcp-stray-seg")
    {
        l4_tcp_stray_seg.yfilter = yfilter;
    }
    if(value_path == "l4-tcp-rst-to-resp")
    {
        l4_tcp_rst_to_resp.yfilter = yfilter;
    }
    if(value_path == "insp-pam-lookup-fail")
    {
        insp_pam_lookup_fail.yfilter = yfilter;
    }
    if(value_path == "insp-internal-err-get-stat-blk-fail")
    {
        insp_internal_err_get_stat_blk_fail.yfilter = yfilter;
    }
    if(value_path == "insp-dstaddr-lookup-fail")
    {
        insp_dstaddr_lookup_fail.yfilter = yfilter;
    }
    if(value_path == "insp-policy-not-present")
    {
        insp_policy_not_present.yfilter = yfilter;
    }
    if(value_path == "insp-sess-miss-policy-not-present")
    {
        insp_sess_miss_policy_not_present.yfilter = yfilter;
    }
    if(value_path == "insp-classification-fail")
    {
        insp_classification_fail.yfilter = yfilter;
    }
    if(value_path == "insp-class-action-drop")
    {
        insp_class_action_drop.yfilter = yfilter;
    }
    if(value_path == "insp-policy-misconfigure")
    {
        insp_policy_misconfigure.yfilter = yfilter;
    }
    if(value_path == "l4-icmp-too-many-err-pkts")
    {
        l4_icmp_too_many_err_pkts.yfilter = yfilter;
    }
    if(value_path == "l4-icmp-internal-err-no-nat")
    {
        l4_icmp_internal_err_no_nat.yfilter = yfilter;
    }
    if(value_path == "l4-icmp-internal-err-alloc-fail")
    {
        l4_icmp_internal_err_alloc_fail.yfilter = yfilter;
    }
    if(value_path == "l4-icmp-internal-err-get-stat-blk-fail")
    {
        l4_icmp_internal_err_get_stat_blk_fail.yfilter = yfilter;
    }
    if(value_path == "l4-icmp-internal-err-dir-not-identified")
    {
        l4_icmp_internal_err_dir_not_identified.yfilter = yfilter;
    }
    if(value_path == "l4-icmp-scb-close")
    {
        l4_icmp_scb_close.yfilter = yfilter;
    }
    if(value_path == "l4-icmp-pkt-no-ip-hdr")
    {
        l4_icmp_pkt_no_ip_hdr.yfilter = yfilter;
    }
    if(value_path == "l4-icmp-pkt-too-short")
    {
        l4_icmp_pkt_too_short.yfilter = yfilter;
    }
    if(value_path == "l4-icmp-err-no-ip-no-icmp")
    {
        l4_icmp_err_no_ip_no_icmp.yfilter = yfilter;
    }
    if(value_path == "l4-icmp-err-pkts-burst")
    {
        l4_icmp_err_pkts_burst.yfilter = yfilter;
    }
    if(value_path == "l4-icmp-err-multiple-unreach")
    {
        l4_icmp_err_multiple_unreach.yfilter = yfilter;
    }
    if(value_path == "l4-icmp-err-l4-invalid-seq")
    {
        l4_icmp_err_l4_invalid_seq.yfilter = yfilter;
    }
    if(value_path == "l4-icmp-err-l4-invalid-ack")
    {
        l4_icmp_err_l4_invalid_ack.yfilter = yfilter;
    }
    if(value_path == "l4-icmp-err-policy-not-present")
    {
        l4_icmp_err_policy_not_present.yfilter = yfilter;
    }
    if(value_path == "l4-icmp-err-classification-fail")
    {
        l4_icmp_err_classification_fail.yfilter = yfilter;
    }
    if(value_path == "syncookie-max-dst")
    {
        syncookie_max_dst.yfilter = yfilter;
    }
    if(value_path == "syncookie-internal-err-alloc-fail")
    {
        syncookie_internal_err_alloc_fail.yfilter = yfilter;
    }
    if(value_path == "syncookie-trigger")
    {
        syncookie_trigger.yfilter = yfilter;
    }
    if(value_path == "policy-fragment-drop")
    {
        policy_fragment_drop.yfilter = yfilter;
    }
    if(value_path == "policy-action-drop")
    {
        policy_action_drop.yfilter = yfilter;
    }
    if(value_path == "policy-icmp-action-drop")
    {
        policy_icmp_action_drop.yfilter = yfilter;
    }
    if(value_path == "l7-type-drop")
    {
        l7_type_drop.yfilter = yfilter;
    }
    if(value_path == "l7-no-seg")
    {
        l7_no_seg.yfilter = yfilter;
    }
    if(value_path == "l7-no-frag")
    {
        l7_no_frag.yfilter = yfilter;
    }
    if(value_path == "l7-unknown-proto")
    {
        l7_unknown_proto.yfilter = yfilter;
    }
    if(value_path == "l7-alg-ret-drop")
    {
        l7_alg_ret_drop.yfilter = yfilter;
    }
    if(value_path == "l7-promote-fail-no-zone-pair")
    {
        l7_promote_fail_no_zone_pair.yfilter = yfilter;
    }
    if(value_path == "l7-promote-fail-no-policy")
    {
        l7_promote_fail_no_policy.yfilter = yfilter;
    }
    if(value_path == "no-session")
    {
        no_session.yfilter = yfilter;
    }
    if(value_path == "no-new-session")
    {
        no_new_session.yfilter = yfilter;
    }
    if(value_path == "not-initiator")
    {
        not_initiator.yfilter = yfilter;
    }
    if(value_path == "invalid-zone")
    {
        invalid_zone.yfilter = yfilter;
    }
    if(value_path == "ha-ar-standby")
    {
        ha_ar_standby.yfilter = yfilter;
    }
    if(value_path == "no-forwarding-zone")
    {
        no_forwarding_zone.yfilter = yfilter;
    }
    if(value_path == "backpressure")
    {
        backpressure.yfilter = yfilter;
    }
    if(value_path == "zone-mismatch")
    {
        zone_mismatch.yfilter = yfilter;
    }
    if(value_path == "fdb-err")
    {
        fdb_err.yfilter = yfilter;
    }
    if(value_path == "lisp-header-restore-fail")
    {
        lisp_header_restore_fail.yfilter = yfilter;
    }
    if(value_path == "lisp-inner-pkt-insane")
    {
        lisp_inner_pkt_insane.yfilter = yfilter;
    }
    if(value_path == "lisp-inner-ipv4-insane")
    {
        lisp_inner_ipv4_insane.yfilter = yfilter;
    }
    if(value_path == "lisp-inner-ipv6-insane")
    {
        lisp_inner_ipv6_insane.yfilter = yfilter;
    }
}

bool FwOperData::FwDropStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "catch-all" || name == "l4-max-halfsession" || name == "l4-too-many-pkts" || name == "l4-session-limit" || name == "l4-invalid-hdr" || name == "l4-internal-err-undefined-dir" || name == "l4-scb-close" || name == "l4-tcp-invalid-ack-flag" || name == "l4-tcp-invalid-ack-num" || name == "l4-tcp-invalid-tcp-initiator" || name == "l4-tcp-syn-with-data" || name == "l4-tcp-invalid-win-scale-option" || name == "l4-tcp-invalid-seg-synsent-state" || name == "l4-tcp-invalid-seg-synrcvd-state" || name == "l4-tcp-invalid-seg-pkt-too-old" || name == "l4-tcp-invalid-seg-pkt-win-overflow" || name == "l4-tcp-invalid-seg-pyld-after-fin-send" || name == "l4-tcp-invalid-flags" || name == "l4-tcp-invalid-seq" || name == "l4-tcp-retrans-invalid-flags" || name == "l4-tcp-l7-ooo-seg" || name == "l4-tcp-syn-flood-drop" || name == "l4-tcp-internal-err-synflood-alloc-hostdb-fail" || name == "l4-tcp-synflood-blackout-drop" || name == "l4-tcp-unexpect-tcp-payload" || name == "l4-tcp-syn-in-win" || name == "l4-tcp-rst-in-win" || name == "l4-tcp-stray-seg" || name == "l4-tcp-rst-to-resp" || name == "insp-pam-lookup-fail" || name == "insp-internal-err-get-stat-blk-fail" || name == "insp-dstaddr-lookup-fail" || name == "insp-policy-not-present" || name == "insp-sess-miss-policy-not-present" || name == "insp-classification-fail" || name == "insp-class-action-drop" || name == "insp-policy-misconfigure" || name == "l4-icmp-too-many-err-pkts" || name == "l4-icmp-internal-err-no-nat" || name == "l4-icmp-internal-err-alloc-fail" || name == "l4-icmp-internal-err-get-stat-blk-fail" || name == "l4-icmp-internal-err-dir-not-identified" || name == "l4-icmp-scb-close" || name == "l4-icmp-pkt-no-ip-hdr" || name == "l4-icmp-pkt-too-short" || name == "l4-icmp-err-no-ip-no-icmp" || name == "l4-icmp-err-pkts-burst" || name == "l4-icmp-err-multiple-unreach" || name == "l4-icmp-err-l4-invalid-seq" || name == "l4-icmp-err-l4-invalid-ack" || name == "l4-icmp-err-policy-not-present" || name == "l4-icmp-err-classification-fail" || name == "syncookie-max-dst" || name == "syncookie-internal-err-alloc-fail" || name == "syncookie-trigger" || name == "policy-fragment-drop" || name == "policy-action-drop" || name == "policy-icmp-action-drop" || name == "l7-type-drop" || name == "l7-no-seg" || name == "l7-no-frag" || name == "l7-unknown-proto" || name == "l7-alg-ret-drop" || name == "l7-promote-fail-no-zone-pair" || name == "l7-promote-fail-no-policy" || name == "no-session" || name == "no-new-session" || name == "not-initiator" || name == "invalid-zone" || name == "ha-ar-standby" || name == "no-forwarding-zone" || name == "backpressure" || name == "zone-mismatch" || name == "fdb-err" || name == "lisp-header-restore-fail" || name == "lisp-inner-pkt-insane" || name == "lisp-inner-ipv4-insane" || name == "lisp-inner-ipv6-insane")
        return true;
    return false;
}

FwOperData::FwZonepairEntries::FwZonepairEntries()
    :
    zonepair_name{YType::str, "zonepair-name"},
    src_zone_name{YType::str, "src-zone-name"},
    dst_zone_name{YType::str, "dst-zone-name"},
    policy_name{YType::str, "policy-name"}
        ,
    fw_traffic_class_entry(this, {"class_name"})
{

    yang_name = "fw-zonepair-entries"; yang_parent_name = "fw-oper-data"; is_top_level_class = false; has_list_ancestor = false; 
}

FwOperData::FwZonepairEntries::~FwZonepairEntries()
{
}

bool FwOperData::FwZonepairEntries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fw_traffic_class_entry.len(); index++)
    {
        if(fw_traffic_class_entry[index]->has_data())
            return true;
    }
    return zonepair_name.is_set
	|| src_zone_name.is_set
	|| dst_zone_name.is_set
	|| policy_name.is_set;
}

bool FwOperData::FwZonepairEntries::has_operation() const
{
    for (std::size_t index=0; index<fw_traffic_class_entry.len(); index++)
    {
        if(fw_traffic_class_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(zonepair_name.yfilter)
	|| ydk::is_set(src_zone_name.yfilter)
	|| ydk::is_set(dst_zone_name.yfilter)
	|| ydk::is_set(policy_name.yfilter);
}

std::string FwOperData::FwZonepairEntries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-fw-oper:fw-oper-data/" << get_segment_path();
    return path_buffer.str();
}

std::string FwOperData::FwZonepairEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fw-zonepair-entries";
    ADD_KEY_TOKEN(zonepair_name, "zonepair-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FwOperData::FwZonepairEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (zonepair_name.is_set || is_set(zonepair_name.yfilter)) leaf_name_data.push_back(zonepair_name.get_name_leafdata());
    if (src_zone_name.is_set || is_set(src_zone_name.yfilter)) leaf_name_data.push_back(src_zone_name.get_name_leafdata());
    if (dst_zone_name.is_set || is_set(dst_zone_name.yfilter)) leaf_name_data.push_back(dst_zone_name.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FwOperData::FwZonepairEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fw-traffic-class-entry")
    {
        auto c = std::make_shared<FwOperData::FwZonepairEntries::FwTrafficClassEntry>();
        c->parent = this;
        fw_traffic_class_entry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FwOperData::FwZonepairEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fw_traffic_class_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FwOperData::FwZonepairEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "zonepair-name")
    {
        zonepair_name = value;
        zonepair_name.value_namespace = name_space;
        zonepair_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-zone-name")
    {
        src_zone_name = value;
        src_zone_name.value_namespace = name_space;
        src_zone_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dst-zone-name")
    {
        dst_zone_name = value;
        dst_zone_name.value_namespace = name_space;
        dst_zone_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void FwOperData::FwZonepairEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "zonepair-name")
    {
        zonepair_name.yfilter = yfilter;
    }
    if(value_path == "src-zone-name")
    {
        src_zone_name.yfilter = yfilter;
    }
    if(value_path == "dst-zone-name")
    {
        dst_zone_name.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
}

bool FwOperData::FwZonepairEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fw-traffic-class-entry" || name == "zonepair-name" || name == "src-zone-name" || name == "dst-zone-name" || name == "policy-name")
        return true;
    return false;
}

FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTrafficClassEntry()
    :
    class_name{YType::str, "class-name"},
    zonepair_name{YType::str, "zonepair-name"},
    class_action{YType::str, "class-action"},
    pkts_counter{YType::uint64, "pkts-counter"},
    bytes_counter{YType::uint64, "bytes-counter"},
    attempted_conn{YType::uint64, "attempted-conn"},
    current_active_conn{YType::uint64, "current-active-conn"},
    max_active_conn{YType::uint64, "max-active-conn"},
    current_halfopen_conn{YType::uint64, "current-halfopen-conn"},
    max_halfopen_conn{YType::uint64, "max-halfopen-conn"},
    current_terminating_conn{YType::uint64, "current-terminating-conn"},
    max_terminating_conn{YType::uint64, "max-terminating-conn"},
    time_since_last_session_create{YType::uint64, "time-since-last-session-create"}
        ,
    fw_tc_match_entry(this, {"match_name", "match_type_id"})
    , fw_tc_proto_entry(this, {"proto_id"})
{

    yang_name = "fw-traffic-class-entry"; yang_parent_name = "fw-zonepair-entries"; is_top_level_class = false; has_list_ancestor = true; 
}

FwOperData::FwZonepairEntries::FwTrafficClassEntry::~FwTrafficClassEntry()
{
}

bool FwOperData::FwZonepairEntries::FwTrafficClassEntry::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<fw_tc_match_entry.len(); index++)
    {
        if(fw_tc_match_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<fw_tc_proto_entry.len(); index++)
    {
        if(fw_tc_proto_entry[index]->has_data())
            return true;
    }
    return class_name.is_set
	|| zonepair_name.is_set
	|| class_action.is_set
	|| pkts_counter.is_set
	|| bytes_counter.is_set
	|| attempted_conn.is_set
	|| current_active_conn.is_set
	|| max_active_conn.is_set
	|| current_halfopen_conn.is_set
	|| max_halfopen_conn.is_set
	|| current_terminating_conn.is_set
	|| max_terminating_conn.is_set
	|| time_since_last_session_create.is_set;
}

bool FwOperData::FwZonepairEntries::FwTrafficClassEntry::has_operation() const
{
    for (std::size_t index=0; index<fw_tc_match_entry.len(); index++)
    {
        if(fw_tc_match_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<fw_tc_proto_entry.len(); index++)
    {
        if(fw_tc_proto_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(zonepair_name.yfilter)
	|| ydk::is_set(class_action.yfilter)
	|| ydk::is_set(pkts_counter.yfilter)
	|| ydk::is_set(bytes_counter.yfilter)
	|| ydk::is_set(attempted_conn.yfilter)
	|| ydk::is_set(current_active_conn.yfilter)
	|| ydk::is_set(max_active_conn.yfilter)
	|| ydk::is_set(current_halfopen_conn.yfilter)
	|| ydk::is_set(max_halfopen_conn.yfilter)
	|| ydk::is_set(current_terminating_conn.yfilter)
	|| ydk::is_set(max_terminating_conn.yfilter)
	|| ydk::is_set(time_since_last_session_create.yfilter);
}

std::string FwOperData::FwZonepairEntries::FwTrafficClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fw-traffic-class-entry";
    ADD_KEY_TOKEN(class_name, "class-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FwOperData::FwZonepairEntries::FwTrafficClassEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (zonepair_name.is_set || is_set(zonepair_name.yfilter)) leaf_name_data.push_back(zonepair_name.get_name_leafdata());
    if (class_action.is_set || is_set(class_action.yfilter)) leaf_name_data.push_back(class_action.get_name_leafdata());
    if (pkts_counter.is_set || is_set(pkts_counter.yfilter)) leaf_name_data.push_back(pkts_counter.get_name_leafdata());
    if (bytes_counter.is_set || is_set(bytes_counter.yfilter)) leaf_name_data.push_back(bytes_counter.get_name_leafdata());
    if (attempted_conn.is_set || is_set(attempted_conn.yfilter)) leaf_name_data.push_back(attempted_conn.get_name_leafdata());
    if (current_active_conn.is_set || is_set(current_active_conn.yfilter)) leaf_name_data.push_back(current_active_conn.get_name_leafdata());
    if (max_active_conn.is_set || is_set(max_active_conn.yfilter)) leaf_name_data.push_back(max_active_conn.get_name_leafdata());
    if (current_halfopen_conn.is_set || is_set(current_halfopen_conn.yfilter)) leaf_name_data.push_back(current_halfopen_conn.get_name_leafdata());
    if (max_halfopen_conn.is_set || is_set(max_halfopen_conn.yfilter)) leaf_name_data.push_back(max_halfopen_conn.get_name_leafdata());
    if (current_terminating_conn.is_set || is_set(current_terminating_conn.yfilter)) leaf_name_data.push_back(current_terminating_conn.get_name_leafdata());
    if (max_terminating_conn.is_set || is_set(max_terminating_conn.yfilter)) leaf_name_data.push_back(max_terminating_conn.get_name_leafdata());
    if (time_since_last_session_create.is_set || is_set(time_since_last_session_create.yfilter)) leaf_name_data.push_back(time_since_last_session_create.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FwOperData::FwZonepairEntries::FwTrafficClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fw-tc-match-entry")
    {
        auto c = std::make_shared<FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcMatchEntry>();
        c->parent = this;
        fw_tc_match_entry.append(c);
        return c;
    }

    if(child_yang_name == "fw-tc-proto-entry")
    {
        auto c = std::make_shared<FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcProtoEntry>();
        c->parent = this;
        fw_tc_proto_entry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FwOperData::FwZonepairEntries::FwTrafficClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : fw_tc_match_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : fw_tc_proto_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void FwOperData::FwZonepairEntries::FwTrafficClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zonepair-name")
    {
        zonepair_name = value;
        zonepair_name.value_namespace = name_space;
        zonepair_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-action")
    {
        class_action = value;
        class_action.value_namespace = name_space;
        class_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-counter")
    {
        pkts_counter = value;
        pkts_counter.value_namespace = name_space;
        pkts_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes-counter")
    {
        bytes_counter = value;
        bytes_counter.value_namespace = name_space;
        bytes_counter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attempted-conn")
    {
        attempted_conn = value;
        attempted_conn.value_namespace = name_space;
        attempted_conn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-active-conn")
    {
        current_active_conn = value;
        current_active_conn.value_namespace = name_space;
        current_active_conn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-active-conn")
    {
        max_active_conn = value;
        max_active_conn.value_namespace = name_space;
        max_active_conn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-halfopen-conn")
    {
        current_halfopen_conn = value;
        current_halfopen_conn.value_namespace = name_space;
        current_halfopen_conn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-halfopen-conn")
    {
        max_halfopen_conn = value;
        max_halfopen_conn.value_namespace = name_space;
        max_halfopen_conn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-terminating-conn")
    {
        current_terminating_conn = value;
        current_terminating_conn.value_namespace = name_space;
        current_terminating_conn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-terminating-conn")
    {
        max_terminating_conn = value;
        max_terminating_conn.value_namespace = name_space;
        max_terminating_conn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-session-create")
    {
        time_since_last_session_create = value;
        time_since_last_session_create.value_namespace = name_space;
        time_since_last_session_create.value_namespace_prefix = name_space_prefix;
    }
}

void FwOperData::FwZonepairEntries::FwTrafficClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "zonepair-name")
    {
        zonepair_name.yfilter = yfilter;
    }
    if(value_path == "class-action")
    {
        class_action.yfilter = yfilter;
    }
    if(value_path == "pkts-counter")
    {
        pkts_counter.yfilter = yfilter;
    }
    if(value_path == "bytes-counter")
    {
        bytes_counter.yfilter = yfilter;
    }
    if(value_path == "attempted-conn")
    {
        attempted_conn.yfilter = yfilter;
    }
    if(value_path == "current-active-conn")
    {
        current_active_conn.yfilter = yfilter;
    }
    if(value_path == "max-active-conn")
    {
        max_active_conn.yfilter = yfilter;
    }
    if(value_path == "current-halfopen-conn")
    {
        current_halfopen_conn.yfilter = yfilter;
    }
    if(value_path == "max-halfopen-conn")
    {
        max_halfopen_conn.yfilter = yfilter;
    }
    if(value_path == "current-terminating-conn")
    {
        current_terminating_conn.yfilter = yfilter;
    }
    if(value_path == "max-terminating-conn")
    {
        max_terminating_conn.yfilter = yfilter;
    }
    if(value_path == "time-since-last-session-create")
    {
        time_since_last_session_create.yfilter = yfilter;
    }
}

bool FwOperData::FwZonepairEntries::FwTrafficClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fw-tc-match-entry" || name == "fw-tc-proto-entry" || name == "class-name" || name == "zonepair-name" || name == "class-action" || name == "pkts-counter" || name == "bytes-counter" || name == "attempted-conn" || name == "current-active-conn" || name == "max-active-conn" || name == "current-halfopen-conn" || name == "max-halfopen-conn" || name == "current-terminating-conn" || name == "max-terminating-conn" || name == "time-since-last-session-create")
        return true;
    return false;
}

FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcMatchEntry::FwTcMatchEntry()
    :
    match_name{YType::str, "match-name"},
    match_type_id{YType::uint8, "match-type-id"},
    match_type{YType::str, "match-type"}
{

    yang_name = "fw-tc-match-entry"; yang_parent_name = "fw-traffic-class-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcMatchEntry::~FwTcMatchEntry()
{
}

bool FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcMatchEntry::has_data() const
{
    if (is_presence_container) return true;
    return match_name.is_set
	|| match_type_id.is_set
	|| match_type.is_set;
}

bool FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcMatchEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(match_name.yfilter)
	|| ydk::is_set(match_type_id.yfilter)
	|| ydk::is_set(match_type.yfilter);
}

std::string FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcMatchEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fw-tc-match-entry";
    ADD_KEY_TOKEN(match_name, "match-name");
    ADD_KEY_TOKEN(match_type_id, "match-type-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcMatchEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_name.is_set || is_set(match_name.yfilter)) leaf_name_data.push_back(match_name.get_name_leafdata());
    if (match_type_id.is_set || is_set(match_type_id.yfilter)) leaf_name_data.push_back(match_type_id.get_name_leafdata());
    if (match_type.is_set || is_set(match_type.yfilter)) leaf_name_data.push_back(match_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcMatchEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcMatchEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcMatchEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "match-name")
    {
        match_name = value;
        match_name.value_namespace = name_space;
        match_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-type-id")
    {
        match_type_id = value;
        match_type_id.value_namespace = name_space;
        match_type_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "match-type")
    {
        match_type = value;
        match_type.value_namespace = name_space;
        match_type.value_namespace_prefix = name_space_prefix;
    }
}

void FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcMatchEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "match-name")
    {
        match_name.yfilter = yfilter;
    }
    if(value_path == "match-type-id")
    {
        match_type_id.yfilter = yfilter;
    }
    if(value_path == "match-type")
    {
        match_type.yfilter = yfilter;
    }
}

bool FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcMatchEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-name" || name == "match-type-id" || name == "match-type")
        return true;
    return false;
}

FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcProtoEntry::FwTcProtoEntry()
    :
    proto_id{YType::uint16, "proto-id"},
    protocol_name{YType::str, "protocol-name"},
    byte_counters{YType::uint64, "byte-counters"},
    pkt_counters{YType::uint64, "pkt-counters"}
{

    yang_name = "fw-tc-proto-entry"; yang_parent_name = "fw-traffic-class-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcProtoEntry::~FwTcProtoEntry()
{
}

bool FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcProtoEntry::has_data() const
{
    if (is_presence_container) return true;
    return proto_id.is_set
	|| protocol_name.is_set
	|| byte_counters.is_set
	|| pkt_counters.is_set;
}

bool FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcProtoEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto_id.yfilter)
	|| ydk::is_set(protocol_name.yfilter)
	|| ydk::is_set(byte_counters.yfilter)
	|| ydk::is_set(pkt_counters.yfilter);
}

std::string FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcProtoEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fw-tc-proto-entry";
    ADD_KEY_TOKEN(proto_id, "proto-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcProtoEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto_id.is_set || is_set(proto_id.yfilter)) leaf_name_data.push_back(proto_id.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (byte_counters.is_set || is_set(byte_counters.yfilter)) leaf_name_data.push_back(byte_counters.get_name_leafdata());
    if (pkt_counters.is_set || is_set(pkt_counters.yfilter)) leaf_name_data.push_back(pkt_counters.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcProtoEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcProtoEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcProtoEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proto-id")
    {
        proto_id = value;
        proto_id.value_namespace = name_space;
        proto_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counters")
    {
        byte_counters = value;
        byte_counters.value_namespace = name_space;
        byte_counters.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkt-counters")
    {
        pkt_counters = value;
        pkt_counters.value_namespace = name_space;
        pkt_counters.value_namespace_prefix = name_space_prefix;
    }
}

void FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcProtoEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proto-id")
    {
        proto_id.yfilter = yfilter;
    }
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
    if(value_path == "byte-counters")
    {
        byte_counters.yfilter = yfilter;
    }
    if(value_path == "pkt-counters")
    {
        pkt_counters.yfilter = yfilter;
    }
}

bool FwOperData::FwZonepairEntries::FwTrafficClassEntry::FwTcProtoEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proto-id" || name == "protocol-name" || name == "byte-counters" || name == "pkt-counters")
        return true;
    return false;
}


}
}

