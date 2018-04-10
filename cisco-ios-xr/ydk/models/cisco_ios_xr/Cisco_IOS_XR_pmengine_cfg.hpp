#ifndef _CISCO_IOS_XR_PMENGINE_CFG_
#define _CISCO_IOS_XR_PMENGINE_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_cfg {

class SecyifReport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf report_if_inpkts_untagged;
        static const ydk::Enum::YLeaf report_if_inpkts_not_ag;
        static const ydk::Enum::YLeaf report_if_inpktsbadtag;
        static const ydk::Enum::YLeaf report_if_inpkts_unknown_sci;
        static const ydk::Enum::YLeaf report_if_inpktsnosci;
        static const ydk::Enum::YLeaf report_if_inpkts_overrun;
        static const ydk::Enum::YLeaf report_if_inoctets_validate_d;
        static const ydk::Enum::YLeaf report_if_inoctetsdecrypted;
        static const ydk::Enum::YLeaf report_if_outpkts_untagged;
        static const ydk::Enum::YLeaf report_if_outpkts_too_long;
        static const ydk::Enum::YLeaf report_if_outoctetsprotected;
        static const ydk::Enum::YLeaf report_if_outoctetsencrypted;

};

class GfpReport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf report_rx_bit_err;
        static const ydk::Enum::YLeaf report_rx_inv_typ;
        static const ydk::Enum::YLeaf report_rx_crc;
        static const ydk::Enum::YLeaf report_rx_lfd;
        static const ydk::Enum::YLeaf report_rx_csf;

};

class HoVcThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf thresh_eb;
        static const ydk::Enum::YLeaf thresh_es;
        static const ydk::Enum::YLeaf thresh_esr;
        static const ydk::Enum::YLeaf thresh_ses;
        static const ydk::Enum::YLeaf thresh_sesr;
        static const ydk::Enum::YLeaf thresh_bbe;
        static const ydk::Enum::YLeaf thresh_bber;
        static const ydk::Enum::YLeaf thresh_uass;

};

class EtherThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf thresh_rx_pkt;
        static const ydk::Enum::YLeaf thresh_rx_util;
        static const ydk::Enum::YLeaf thresh_tx_util;
        static const ydk::Enum::YLeaf thresh_stat_pkt;
        static const ydk::Enum::YLeaf thresh_octet_stat;
        static const ydk::Enum::YLeaf thresh_over_size_pkt;
        static const ydk::Enum::YLeaf thresh_fcs_err;
        static const ydk::Enum::YLeaf thresh_long_frame_s;
        static const ydk::Enum::YLeaf thresh_jabber_stats;
        static const ydk::Enum::YLeaf thresh_64_octet;
        static const ydk::Enum::YLeaf thresh_65_127_octet;
        static const ydk::Enum::YLeaf thresh_128_255_octet;
        static const ydk::Enum::YLeaf thresh_256_511_octet;
        static const ydk::Enum::YLeaf thresh_512_1023_octet;
        static const ydk::Enum::YLeaf thresh_1024_1518_octet;
        static const ydk::Enum::YLeaf thresh_in_ucast;
        static const ydk::Enum::YLeaf thresh_in_mcast;
        static const ydk::Enum::YLeaf thresh_in_bcast;
        static const ydk::Enum::YLeaf thresh_out_ucast;
        static const ydk::Enum::YLeaf thresh_out_mcast;
        static const ydk::Enum::YLeaf thresh_out_bcast;
        static const ydk::Enum::YLeaf thresh_tx_pkt;
        static const ydk::Enum::YLeaf thresh_ifin_error_s;
        static const ydk::Enum::YLeaf thresh_ifin_octets;
        static const ydk::Enum::YLeaf thresh_ether_stat_multicast_pkt;
        static const ydk::Enum::YLeaf thresh_ether_stat_broadcast_pkt;
        static const ydk::Enum::YLeaf thresh_ether_stat_under_size_d_pkt;
        static const ydk::Enum::YLeaf thresh_out_octet;
        static const ydk::Enum::YLeaf thresh_in_pause_frame;
        static const ydk::Enum::YLeaf thresh_in_go_od_bytes;
        static const ydk::Enum::YLeaf thresh_in_802_1q_frame_s;
        static const ydk::Enum::YLeaf thresh_in_pkts_1519_max_octets;
        static const ydk::Enum::YLeaf thresh_in_go_od_pkts;
        static const ydk::Enum::YLeaf thresh_in_drop_overrun;
        static const ydk::Enum::YLeaf thresh_in_drop_abort;
        static const ydk::Enum::YLeaf thresh_in_drop_invalid_vlan;
        static const ydk::Enum::YLeaf thresh_in_drop_invalid_dmac;
        static const ydk::Enum::YLeaf thresh_in_drop_invalid_encap;
        static const ydk::Enum::YLeaf thresh_in_drop_other;
        static const ydk::Enum::YLeaf thresh_in_mib_giant;
        static const ydk::Enum::YLeaf thresh_in_mib_jabber;
        static const ydk::Enum::YLeaf thresh_in_mib_crc;
        static const ydk::Enum::YLeaf thresh_in_error_collision_s;
        static const ydk::Enum::YLeaf thresh_in_error_symbol;
        static const ydk::Enum::YLeaf thresh_out_go_od_bytes;
        static const ydk::Enum::YLeaf thresh_out_802_1q_frame_s;
        static const ydk::Enum::YLeaf thresh_out_pause_frame_s;
        static const ydk::Enum::YLeaf thresh_out_pkts_1519_max_octets;
        static const ydk::Enum::YLeaf thresh_out_go_od_pkts;
        static const ydk::Enum::YLeaf thresh_out_drop_under_run;
        static const ydk::Enum::YLeaf thresh_out_drop_abort;
        static const ydk::Enum::YLeaf thresh_out_drop_other;
        static const ydk::Enum::YLeaf thresh_out_error_other;
        static const ydk::Enum::YLeaf thresh_in_error_giant;
        static const ydk::Enum::YLeaf thresh_in_error_runt;
        static const ydk::Enum::YLeaf thresh_in_error_jabbers;
        static const ydk::Enum::YLeaf thresh_in_error_fragments;
        static const ydk::Enum::YLeaf thresh_in_error_other;
        static const ydk::Enum::YLeaf thresh_in_pkt_64_octet;
        static const ydk::Enum::YLeaf thresh_in_pkts_65_127octets;
        static const ydk::Enum::YLeaf thresh_in_pkts_128_255_octets;
        static const ydk::Enum::YLeaf thresh_in_pkts_256_511_octets;
        static const ydk::Enum::YLeaf thresh_in_pkts_512_1023_octets;
        static const ydk::Enum::YLeaf thresh_in_pkts_1024_1518_octets;
        static const ydk::Enum::YLeaf thresh_out_pkt_64_octet;
        static const ydk::Enum::YLeaf thresh_out_pkts_65_127octets;
        static const ydk::Enum::YLeaf thresh_out_pkts_128_255_octets;
        static const ydk::Enum::YLeaf thresh_out_pkts_256_511_octets;
        static const ydk::Enum::YLeaf thresh_out_pkts_512_1023_octets;
        static const ydk::Enum::YLeaf thresh_out_pkts_1024_1518_octets;
        static const ydk::Enum::YLeaf thresh_tx_under_size_d_pkt;
        static const ydk::Enum::YLeaf thresh_tx_over_size_d_pkt;
        static const ydk::Enum::YLeaf thresh_tx_fragments;
        static const ydk::Enum::YLeaf thresh_tx_jabber;
        static const ydk::Enum::YLeaf thresh_tx_bad_fcs;

};

class PathThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf thresh_cv;
        static const ydk::Enum::YLeaf thresh_es;
        static const ydk::Enum::YLeaf thresh_ses;
        static const ydk::Enum::YLeaf thresh_uas;

};

class StsThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf thresh_cv;
        static const ydk::Enum::YLeaf thresh_es;
        static const ydk::Enum::YLeaf thresh_ses;
        static const ydk::Enum::YLeaf thresh_uas;

};

class SecytxReport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf report_tx_outpktsprotected;
        static const ydk::Enum::YLeaf report_tx_outpktsencrypted;
        static const ydk::Enum::YLeaf report_tx_outoctetsprotected;
        static const ydk::Enum::YLeaf report_tx_outoctetsencrypted;
        static const ydk::Enum::YLeaf report_tx_outpkts_too_long;

};

class OcnReport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf report_sefss;
        static const ydk::Enum::YLeaf report_cvs;
        static const ydk::Enum::YLeaf report_ess;
        static const ydk::Enum::YLeaf report_sess;
        static const ydk::Enum::YLeaf report_cvl_ne;
        static const ydk::Enum::YLeaf report_esl_ne;
        static const ydk::Enum::YLeaf report_sesl_ne;
        static const ydk::Enum::YLeaf report_uasl_ne;
        static const ydk::Enum::YLeaf report_fcl_ne;
        static const ydk::Enum::YLeaf report_fcl_fe;
        static const ydk::Enum::YLeaf report_cvl_fe;
        static const ydk::Enum::YLeaf report_esl_fe;
        static const ydk::Enum::YLeaf report_sesl_fe;
        static const ydk::Enum::YLeaf report_uasl_fe;

};

class HoVcReport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf report_eb;
        static const ydk::Enum::YLeaf report_es;
        static const ydk::Enum::YLeaf report_esr;
        static const ydk::Enum::YLeaf report_ses;
        static const ydk::Enum::YLeaf report_sesr;
        static const ydk::Enum::YLeaf report_bbe;
        static const ydk::Enum::YLeaf report_bber;
        static const ydk::Enum::YLeaf report_uass;

};

class OtnThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf thresh_es_sm_ne;
        static const ydk::Enum::YLeaf thresh_ses_sm_ne;
        static const ydk::Enum::YLeaf thresh_uas_sm_ne;
        static const ydk::Enum::YLeaf thresh_bbe_sm_ne;
        static const ydk::Enum::YLeaf thresh_fc_sm_ne;
        static const ydk::Enum::YLeaf thresh_esr_sm_ne;
        static const ydk::Enum::YLeaf thresh_sesr_sm_ne;
        static const ydk::Enum::YLeaf thresh_bber_sm_ne;
        static const ydk::Enum::YLeaf thresh_es_pm_ne;
        static const ydk::Enum::YLeaf thresh_ses_pm_ne;
        static const ydk::Enum::YLeaf thresh_uas_pm_ne;
        static const ydk::Enum::YLeaf thresh_bbe_pm_ne;
        static const ydk::Enum::YLeaf thresh_fc_pm_ne;
        static const ydk::Enum::YLeaf thresh_esr_pm_ne;
        static const ydk::Enum::YLeaf thresh_sesr_pm_ne;
        static const ydk::Enum::YLeaf thresh_bber_pm_ne;
        static const ydk::Enum::YLeaf thresh_es_sm_fe;
        static const ydk::Enum::YLeaf thresh_ses_sm_fe;
        static const ydk::Enum::YLeaf thresh_uas_sm_fe;
        static const ydk::Enum::YLeaf thresh_bbe_sm_fe;
        static const ydk::Enum::YLeaf thresh_fc_sm_fe;
        static const ydk::Enum::YLeaf thresh_esr_sm_fe;
        static const ydk::Enum::YLeaf thresh_sesr_sm_fe;
        static const ydk::Enum::YLeaf thresh_bber_sm_fe;
        static const ydk::Enum::YLeaf thresh_es_pm_fe;
        static const ydk::Enum::YLeaf thresh_ses_pm_fe;
        static const ydk::Enum::YLeaf thresh_uas_pm_fe;
        static const ydk::Enum::YLeaf thresh_bbe_pm_fe;
        static const ydk::Enum::YLeaf thresh_fc_pm_fe;
        static const ydk::Enum::YLeaf thresh_esr_pm_fe;
        static const ydk::Enum::YLeaf thresh_sesr_pm_fe;
        static const ydk::Enum::YLeaf thresh_bber_pm_fe;

};

class OpticsThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf thresh_opt_min;
        static const ydk::Enum::YLeaf thresh_opr_min;
        static const ydk::Enum::YLeaf thresh_lbc_min;
        static const ydk::Enum::YLeaf thresh_lbc_pc_min;
        static const ydk::Enum::YLeaf thresh_cd_min;
        static const ydk::Enum::YLeaf thresh_dgd_min;
        static const ydk::Enum::YLeaf thresh_pmd_min;
        static const ydk::Enum::YLeaf thresh_osnr_min;
        static const ydk::Enum::YLeaf thresh_pdl_min;
        static const ydk::Enum::YLeaf thresh_pcr_min;
        static const ydk::Enum::YLeaf thresh_pn_min;
        static const ydk::Enum::YLeaf thresh_rx_sig_pow_min;
        static const ydk::Enum::YLeaf thresh_low_sig_freq_off_min;
        static const ydk::Enum::YLeaf thresh_ampli_gain_min;
        static const ydk::Enum::YLeaf thresh_ampli_gain_tilt_min;
        static const ydk::Enum::YLeaf thresh_opt_max;
        static const ydk::Enum::YLeaf thresh_opr_max;
        static const ydk::Enum::YLeaf thresh_lbc_max;
        static const ydk::Enum::YLeaf thresh_lbc_pc_max;
        static const ydk::Enum::YLeaf thresh_cd_max;
        static const ydk::Enum::YLeaf thresh_dgd_max;
        static const ydk::Enum::YLeaf thresh_pmd_max;
        static const ydk::Enum::YLeaf thresh_osnr_max;
        static const ydk::Enum::YLeaf thresh_pdl_max;
        static const ydk::Enum::YLeaf thresh_pcr_max;
        static const ydk::Enum::YLeaf thresh_pn_max;
        static const ydk::Enum::YLeaf thresh_rx_sig_pow_max;
        static const ydk::Enum::YLeaf thresh_low_sig_freq_off_max;
        static const ydk::Enum::YLeaf thresh_ampli_gain_max;
        static const ydk::Enum::YLeaf thresh_ampli_gain_tilt_max;

};

class OcnThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf thresh_sefss;
        static const ydk::Enum::YLeaf thresh_cvs;
        static const ydk::Enum::YLeaf thresh_ess;
        static const ydk::Enum::YLeaf thresh_sess;
        static const ydk::Enum::YLeaf thresh_cvl_ne;
        static const ydk::Enum::YLeaf thresh_esl_ne;
        static const ydk::Enum::YLeaf thresh_sesl_ne;
        static const ydk::Enum::YLeaf thresh_uasl_ne;
        static const ydk::Enum::YLeaf thresh_fcl_ne;
        static const ydk::Enum::YLeaf thresh_fcl_fe;
        static const ydk::Enum::YLeaf thresh_cvl_fe;
        static const ydk::Enum::YLeaf thresh_esl_fe;
        static const ydk::Enum::YLeaf thresh_sesl_fe;
        static const ydk::Enum::YLeaf thresh_uasl_fe;

};

class OpticsReport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf report_opt_min;
        static const ydk::Enum::YLeaf report_opr_min;
        static const ydk::Enum::YLeaf report_lbc_min;
        static const ydk::Enum::YLeaf report_lbc_pc_min;
        static const ydk::Enum::YLeaf report_cd_min;
        static const ydk::Enum::YLeaf report_dgd_min;
        static const ydk::Enum::YLeaf report_pmd_min;
        static const ydk::Enum::YLeaf report_osnr_min;
        static const ydk::Enum::YLeaf report_pdl_min;
        static const ydk::Enum::YLeaf report_pcr_min;
        static const ydk::Enum::YLeaf report_pn_min;
        static const ydk::Enum::YLeaf report_rx_sig_pow_min;
        static const ydk::Enum::YLeaf report_low_sig_freq_off_min;
        static const ydk::Enum::YLeaf report_ampli_gain_min;
        static const ydk::Enum::YLeaf report_ampli_gain_tilt_min;
        static const ydk::Enum::YLeaf report_opt_max;
        static const ydk::Enum::YLeaf report_opr_max;
        static const ydk::Enum::YLeaf report_lbc_max;
        static const ydk::Enum::YLeaf report_lbc_pc_max;
        static const ydk::Enum::YLeaf report_cd_max;
        static const ydk::Enum::YLeaf report_dgd_max;
        static const ydk::Enum::YLeaf report_pmd_max;
        static const ydk::Enum::YLeaf report_osnr_max;
        static const ydk::Enum::YLeaf report_pdl_max;
        static const ydk::Enum::YLeaf report_pcr_max;
        static const ydk::Enum::YLeaf report_pn_max;
        static const ydk::Enum::YLeaf report_rx_sig_pow_max;
        static const ydk::Enum::YLeaf report_low_sig_freq_off_max;
        static const ydk::Enum::YLeaf report_ampli_gain_max;
        static const ydk::Enum::YLeaf report_ampli_gain_tilt_max;

};

class EtherReport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf report_rx_pkt;
        static const ydk::Enum::YLeaf report_rx_util;
        static const ydk::Enum::YLeaf report_tx_util;
        static const ydk::Enum::YLeaf report_stat_pkt;
        static const ydk::Enum::YLeaf report_octet_stat;
        static const ydk::Enum::YLeaf report_over_size_pkt;
        static const ydk::Enum::YLeaf report_fcs_err;
        static const ydk::Enum::YLeaf report_long_frame_s;
        static const ydk::Enum::YLeaf report_jabber_stats;
        static const ydk::Enum::YLeaf report_64_octet;
        static const ydk::Enum::YLeaf report_65_127_octet;
        static const ydk::Enum::YLeaf report_128_255_octet;
        static const ydk::Enum::YLeaf report_256_511_octet;
        static const ydk::Enum::YLeaf report_512_1023_octet;
        static const ydk::Enum::YLeaf report_1024_1518_octet;
        static const ydk::Enum::YLeaf report_in_ucast;
        static const ydk::Enum::YLeaf report_in_mcast;
        static const ydk::Enum::YLeaf report_in_bcast;
        static const ydk::Enum::YLeaf report_out_ucast;
        static const ydk::Enum::YLeaf report_out_mcast;
        static const ydk::Enum::YLeaf report_out_bcast;
        static const ydk::Enum::YLeaf report_tx_pkt;
        static const ydk::Enum::YLeaf report_ifin_error_s;
        static const ydk::Enum::YLeaf report_ifin_octets;
        static const ydk::Enum::YLeaf report_ether_stat_multicast_pkt;
        static const ydk::Enum::YLeaf report_ether_stat_broadcast_pkt;
        static const ydk::Enum::YLeaf report_ether_stat_under_size_d_pkt;
        static const ydk::Enum::YLeaf report_out_octet;
        static const ydk::Enum::YLeaf report_in_pause_frame;
        static const ydk::Enum::YLeaf report_in_go_od_bytes;
        static const ydk::Enum::YLeaf report_in_802_1q_frame_s;
        static const ydk::Enum::YLeaf report_in_pkts_1519_max_octets;
        static const ydk::Enum::YLeaf report_in_go_od_pkts;
        static const ydk::Enum::YLeaf report_in_drop_overrun;
        static const ydk::Enum::YLeaf report_in_drop_abort;
        static const ydk::Enum::YLeaf report_in_drop_invalid_vlan;
        static const ydk::Enum::YLeaf report_in_drop_invalid_dmac;
        static const ydk::Enum::YLeaf report_in_drop_invalid_encap;
        static const ydk::Enum::YLeaf report_in_drop_other;
        static const ydk::Enum::YLeaf report_in_mib_giant;
        static const ydk::Enum::YLeaf report_in_mib_jabber;
        static const ydk::Enum::YLeaf report_in_mib_crc;
        static const ydk::Enum::YLeaf report_in_error_collision_s;
        static const ydk::Enum::YLeaf report_in_error_symbol;
        static const ydk::Enum::YLeaf report_out_go_od_bytes;
        static const ydk::Enum::YLeaf report_out_802_1q_frame_s;
        static const ydk::Enum::YLeaf report_out_pause_frame_s;
        static const ydk::Enum::YLeaf report_out_pkts_1519_max_octets;
        static const ydk::Enum::YLeaf report_out_go_od_pkts;
        static const ydk::Enum::YLeaf report_out_drop_under_run;
        static const ydk::Enum::YLeaf report_out_drop_abort;
        static const ydk::Enum::YLeaf report_out_drop_other;
        static const ydk::Enum::YLeaf report_out_error_other;
        static const ydk::Enum::YLeaf report_in_error_giant;
        static const ydk::Enum::YLeaf report_in_error_runt;
        static const ydk::Enum::YLeaf report_in_error_jabbers;
        static const ydk::Enum::YLeaf report_in_error_fragments;
        static const ydk::Enum::YLeaf report_in_error_other;
        static const ydk::Enum::YLeaf report_in_pkt_64_octet;
        static const ydk::Enum::YLeaf report_in_pkts_65_127octets;
        static const ydk::Enum::YLeaf report_in_pkts_128_255_octets;
        static const ydk::Enum::YLeaf report_in_pkts_256_511_octets;
        static const ydk::Enum::YLeaf report_in_pkts_512_1023_octets;
        static const ydk::Enum::YLeaf report_in_pkts_1024_1518_octets;
        static const ydk::Enum::YLeaf report_out_pkt_64_octet;
        static const ydk::Enum::YLeaf report_out_pkts_65_127octets;
        static const ydk::Enum::YLeaf report_out_pkts_128_255_octets;
        static const ydk::Enum::YLeaf report_out_pkts_256_511_octets;
        static const ydk::Enum::YLeaf report_out_pkts_512_1023_octets;
        static const ydk::Enum::YLeaf report_out_pkts_1024_1518_octets;
        static const ydk::Enum::YLeaf report_tx_under_size_d_pkt;
        static const ydk::Enum::YLeaf report_tx_over_size_d_pkt;
        static const ydk::Enum::YLeaf report_tx_fragments;
        static const ydk::Enum::YLeaf report_tx_jabber;
        static const ydk::Enum::YLeaf report_tx_bad_fcs;

};

class OtnTcmReport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf report_es_tcm_fe;
        static const ydk::Enum::YLeaf report_ses_tcm_fe;
        static const ydk::Enum::YLeaf report_uas_tcm_fe;
        static const ydk::Enum::YLeaf report_bbe_tcm_fe;
        static const ydk::Enum::YLeaf report_fc_tcm_fe;
        static const ydk::Enum::YLeaf report_esr_tcm_fe;
        static const ydk::Enum::YLeaf report_sesr_tcm_fe;
        static const ydk::Enum::YLeaf report_bber_tcm_fe;
        static const ydk::Enum::YLeaf report_es_tcm_ne;
        static const ydk::Enum::YLeaf report_ses_tcm_ne;
        static const ydk::Enum::YLeaf report_uas_tcm_ne;
        static const ydk::Enum::YLeaf report_bbe_tcm_ne;
        static const ydk::Enum::YLeaf report_fc_tcm_ne;
        static const ydk::Enum::YLeaf report_esr_tcm_ne;
        static const ydk::Enum::YLeaf report_sesr_tcm_ne;
        static const ydk::Enum::YLeaf report_bber_tcm_ne;

};

class FecThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf thresh_ec_bits;
        static const ydk::Enum::YLeaf thresh_uc_words;
        static const ydk::Enum::YLeaf thresh_pre_fec_ber_max;
        static const ydk::Enum::YLeaf thresh_post_fec_ber_max;
        static const ydk::Enum::YLeaf thresh_q_max;
        static const ydk::Enum::YLeaf thresh_q_margin_max;
        static const ydk::Enum::YLeaf thresh_pre_fec_ber_min;
        static const ydk::Enum::YLeaf thresh_post_fec_ber_min;
        static const ydk::Enum::YLeaf thresh_q_min;
        static const ydk::Enum::YLeaf thresh_q_margin_min;

};

class SecyifThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf thresh_if_inpkts_untagged;
        static const ydk::Enum::YLeaf thresh_if_inpkts_not_ag;
        static const ydk::Enum::YLeaf thresh_if_inpktsbadtag;
        static const ydk::Enum::YLeaf thresh_if_inpktsunkownsci;
        static const ydk::Enum::YLeaf thresh_if_inpktsnosci;
        static const ydk::Enum::YLeaf thresh_if_inpkts_overrun;
        static const ydk::Enum::YLeaf thresh_if_inoctets_validate_d;
        static const ydk::Enum::YLeaf thresh_if_inoctetsdecrypted;
        static const ydk::Enum::YLeaf thresh_if_outpkts_untagged;
        static const ydk::Enum::YLeaf thresh_if_thresh_outpkts_too_long;
        static const ydk::Enum::YLeaf thresh_if_outoctetsprotected;
        static const ydk::Enum::YLeaf thresh_if_outoctetsencrypted;

};

class StsReport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf report_cv;
        static const ydk::Enum::YLeaf report_es;
        static const ydk::Enum::YLeaf report_ses;
        static const ydk::Enum::YLeaf report_uas;

};

class StmThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf thresh_ebs;
        static const ydk::Enum::YLeaf thresh_ess;
        static const ydk::Enum::YLeaf thresh_esrs;
        static const ydk::Enum::YLeaf thresh_sess;
        static const ydk::Enum::YLeaf thresh_sesrs;
        static const ydk::Enum::YLeaf thresh_bbes;
        static const ydk::Enum::YLeaf thresh_bbesr;
        static const ydk::Enum::YLeaf thresh_uass;
        static const ydk::Enum::YLeaf thresh_ebl_ne;
        static const ydk::Enum::YLeaf thresh_esl_ne;
        static const ydk::Enum::YLeaf thresh_eslr_ne;
        static const ydk::Enum::YLeaf thresh_sesl_ne;
        static const ydk::Enum::YLeaf thresh_sesrl_ne;
        static const ydk::Enum::YLeaf thresh_bbel_ne;
        static const ydk::Enum::YLeaf thresh_bberl_ne;
        static const ydk::Enum::YLeaf thresh_uasl_ne;
        static const ydk::Enum::YLeaf thresh_ebl_fe;
        static const ydk::Enum::YLeaf thresh_esl_fe;
        static const ydk::Enum::YLeaf thresh_esrl_fe;
        static const ydk::Enum::YLeaf thresh_sesl_fe;
        static const ydk::Enum::YLeaf thresh_sesrl_fe;
        static const ydk::Enum::YLeaf thresh_bbel_fe;
        static const ydk::Enum::YLeaf thresh_bberl_fe;
        static const ydk::Enum::YLeaf thresh_uasl_fe;

};

class OtnTcmThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf thresh_es_tcm_fe;
        static const ydk::Enum::YLeaf thresh_ses_tcm_fe;
        static const ydk::Enum::YLeaf thresh_uas_tcm_fe;
        static const ydk::Enum::YLeaf thresh_bbe_tcm_fe;
        static const ydk::Enum::YLeaf thresh_fc_tcm_fe;
        static const ydk::Enum::YLeaf thresh_esr_tcm_fe;
        static const ydk::Enum::YLeaf thresh_sesr_tcm_fe;
        static const ydk::Enum::YLeaf thresh_bber_tcm_fe;
        static const ydk::Enum::YLeaf thresh_es_tcm_ne;
        static const ydk::Enum::YLeaf thresh_ses_tcm_ne;
        static const ydk::Enum::YLeaf thresh_uas_tcm_ne;
        static const ydk::Enum::YLeaf thresh_bbe_tcm_ne;
        static const ydk::Enum::YLeaf thresh_fc_tcm_ne;
        static const ydk::Enum::YLeaf thresh_esr_tcm_ne;
        static const ydk::Enum::YLeaf thresh_sesr_tcm_ne;
        static const ydk::Enum::YLeaf thresh_bber_tcm_ne;

};

class Report : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

};

class OtnReport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf report_es_sm_ne;
        static const ydk::Enum::YLeaf report_ses_sm_ne;
        static const ydk::Enum::YLeaf report_uas_sm_ne;
        static const ydk::Enum::YLeaf report_bbe_sm_ne;
        static const ydk::Enum::YLeaf report_fc_sm_ne;
        static const ydk::Enum::YLeaf report_esr_sm_ne;
        static const ydk::Enum::YLeaf report_sesr_sm_ne;
        static const ydk::Enum::YLeaf report_bber_sm_ne;
        static const ydk::Enum::YLeaf report_es_pm_ne;
        static const ydk::Enum::YLeaf report_ses_pm_ne;
        static const ydk::Enum::YLeaf report_uas_pm_ne;
        static const ydk::Enum::YLeaf report_bbe_pm_ne;
        static const ydk::Enum::YLeaf report_fc_pm_ne;
        static const ydk::Enum::YLeaf report_esr_pm_ne;
        static const ydk::Enum::YLeaf report_sesr_pm_ne;
        static const ydk::Enum::YLeaf report_bber_pm_ne;
        static const ydk::Enum::YLeaf report_es_sm_fe;
        static const ydk::Enum::YLeaf report_ses_sm_fe;
        static const ydk::Enum::YLeaf report_uas_sm_fe;
        static const ydk::Enum::YLeaf report_bbe_sm_fe;
        static const ydk::Enum::YLeaf report_fc_sm_fe;
        static const ydk::Enum::YLeaf report_esr_sm_fe;
        static const ydk::Enum::YLeaf report_sesr_sm_fe;
        static const ydk::Enum::YLeaf report_bber_sm_fe;
        static const ydk::Enum::YLeaf report_es_pm_fe;
        static const ydk::Enum::YLeaf report_ses_pm_fe;
        static const ydk::Enum::YLeaf report_uas_pm_fe;
        static const ydk::Enum::YLeaf report_bbe_pm_fe;
        static const ydk::Enum::YLeaf report_fc_pm_fe;
        static const ydk::Enum::YLeaf report_esr_pm_fe;
        static const ydk::Enum::YLeaf report_sesr_pm_fe;
        static const ydk::Enum::YLeaf report_bber_pm_fe;

};

class SecytxThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf thresh_tx_outpktsprotected;
        static const ydk::Enum::YLeaf thresh_tx_outpktsencrypted;
        static const ydk::Enum::YLeaf thresh_tx_outoctetsprotected;
        static const ydk::Enum::YLeaf thresh_tx_outoctetsencrypted;
        static const ydk::Enum::YLeaf thresh_tx_outpkts_too_long;

};

class FecReport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf report_ec_bits;
        static const ydk::Enum::YLeaf report_uc_words;
        static const ydk::Enum::YLeaf report_pre_fec_ber_max;
        static const ydk::Enum::YLeaf report_post_fec_ber_max;
        static const ydk::Enum::YLeaf report_q_max;
        static const ydk::Enum::YLeaf report_q_margin_max;
        static const ydk::Enum::YLeaf report_pre_fec_ber_min;
        static const ydk::Enum::YLeaf report_post_fec_ber_min;
        static const ydk::Enum::YLeaf report_q_min;
        static const ydk::Enum::YLeaf report_q_margin_min;

};

class PathReport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf report_cv;
        static const ydk::Enum::YLeaf report_es;
        static const ydk::Enum::YLeaf report_ses;
        static const ydk::Enum::YLeaf report_uas;

};

class SecyrxReport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf report_rx_inpktsun_check_ed;
        static const ydk::Enum::YLeaf report_rx_inpkts_delayed;
        static const ydk::Enum::YLeaf report_rx_inpktslate;
        static const ydk::Enum::YLeaf report_rx_inpktsok;
        static const ydk::Enum::YLeaf report_rx_inpkts_invalid;
        static const ydk::Enum::YLeaf report_rx_inpkts_not_valid;
        static const ydk::Enum::YLeaf report_rx_inpkts_not_usingsa;
        static const ydk::Enum::YLeaf report_rx_inpktsunusedsa;
        static const ydk::Enum::YLeaf report_rx_inpkts_untagged_hit;
        static const ydk::Enum::YLeaf report_rx_inoctets_validate_d;
        static const ydk::Enum::YLeaf report_rx_inoctetsdecrypted;

};

class SecyrxThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf thresh_rx_inpktsun_check_ed;
        static const ydk::Enum::YLeaf thresh_rx_inpkts_delayed;
        static const ydk::Enum::YLeaf thresh_rx_inpktslate;
        static const ydk::Enum::YLeaf thresh_rx_inpktsok;
        static const ydk::Enum::YLeaf thresh_rx_inpkts_invalid;
        static const ydk::Enum::YLeaf thresh_rx_inpkts_not_valid;
        static const ydk::Enum::YLeaf thresh_rx_inpkts_not_usingsa;
        static const ydk::Enum::YLeaf thresh_rx_inpktsunusedsa;
        static const ydk::Enum::YLeaf thresh_rx_inpkts_untagged_hit;
        static const ydk::Enum::YLeaf thresh_rx_inoctets_validate_d;
        static const ydk::Enum::YLeaf thresh_rx_inoctetsdecrypted;

};

class GfpThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf thresh_rx_bit_err;
        static const ydk::Enum::YLeaf thresh_rx_inv_typ;
        static const ydk::Enum::YLeaf thresh_rx_crc;
        static const ydk::Enum::YLeaf thresh_rx_lfd;
        static const ydk::Enum::YLeaf thresh_rx_csf;

};

class StmReport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf report_ebs;
        static const ydk::Enum::YLeaf report_ess;
        static const ydk::Enum::YLeaf report_esrs;
        static const ydk::Enum::YLeaf report_sess;
        static const ydk::Enum::YLeaf report_sesrs;
        static const ydk::Enum::YLeaf report_bbes;
        static const ydk::Enum::YLeaf report_bbesr;
        static const ydk::Enum::YLeaf report_uass;
        static const ydk::Enum::YLeaf report_ebl_ne;
        static const ydk::Enum::YLeaf report_esl_ne;
        static const ydk::Enum::YLeaf report_eslr_ne;
        static const ydk::Enum::YLeaf report_sesl_ne;
        static const ydk::Enum::YLeaf report_sesrl_ne;
        static const ydk::Enum::YLeaf report_bbel_ne;
        static const ydk::Enum::YLeaf report_bberl_ne;
        static const ydk::Enum::YLeaf report_uasl_ne;
        static const ydk::Enum::YLeaf report_ebl_fe;
        static const ydk::Enum::YLeaf report_esl_fe;
        static const ydk::Enum::YLeaf report_esrl_fe;
        static const ydk::Enum::YLeaf report_sesl_fe;
        static const ydk::Enum::YLeaf report_sesrl_fe;
        static const ydk::Enum::YLeaf report_bbel_fe;
        static const ydk::Enum::YLeaf report_bberl_fe;
        static const ydk::Enum::YLeaf report_uasl_fe;

};


}
}

#endif /* _CISCO_IOS_XR_PMENGINE_CFG_ */

