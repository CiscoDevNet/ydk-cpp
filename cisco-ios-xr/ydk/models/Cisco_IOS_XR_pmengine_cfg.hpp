#ifndef _CISCO_IOS_XR_PMENGINE_CFG_
#define _CISCO_IOS_XR_PMENGINE_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_pmengine_cfg {


class OpticsThresholdEnum : public Enum
{
    public:
        static const Enum::Value thresh_opt_min;
        static const Enum::Value thresh_opr_min;
        static const Enum::Value thresh_lbc_min;
        static const Enum::Value thresh_lbc_pc_min;
        static const Enum::Value thresh_cd_min;
        static const Enum::Value thresh_dgd_min;
        static const Enum::Value thresh_pmd_min;
        static const Enum::Value thresh_osnr_min;
        static const Enum::Value thresh_pdl_min;
        static const Enum::Value thresh_pcr_min;
        static const Enum::Value thresh_pn_min;
        static const Enum::Value thresh_opt_max;
        static const Enum::Value thresh_opr_max;
        static const Enum::Value thresh_lbc_max;
        static const Enum::Value thresh_lbc_pc_max;
        static const Enum::Value thresh_cd_max;
        static const Enum::Value thresh_dgd_max;
        static const Enum::Value thresh_pmd_max;
        static const Enum::Value thresh_osnr_max;
        static const Enum::Value thresh_pdl_max;
        static const Enum::Value thresh_pcr_max;
        static const Enum::Value thresh_pn_max;

};

class OtnThresholdEnum : public Enum
{
    public:
        static const Enum::Value thresh_es_sm_ne;
        static const Enum::Value thresh_ses_sm_ne;
        static const Enum::Value thresh_uas_sm_ne;
        static const Enum::Value thresh_bbe_sm_ne;
        static const Enum::Value thresh_fc_sm_ne;
        static const Enum::Value thresh_esr_sm_ne;
        static const Enum::Value thresh_sesr_sm_ne;
        static const Enum::Value thresh_bber_sm_ne;
        static const Enum::Value thresh_es_pm_ne;
        static const Enum::Value thresh_ses_pm_ne;
        static const Enum::Value thresh_uas_pm_ne;
        static const Enum::Value thresh_bbe_pm_ne;
        static const Enum::Value thresh_fc_pm_ne;
        static const Enum::Value thresh_esr_pm_ne;
        static const Enum::Value thresh_sesr_pm_ne;
        static const Enum::Value thresh_bber_pm_ne;
        static const Enum::Value thresh_es_sm_fe;
        static const Enum::Value thresh_ses_sm_fe;
        static const Enum::Value thresh_uas_sm_fe;
        static const Enum::Value thresh_bbe_sm_fe;
        static const Enum::Value thresh_fc_sm_fe;
        static const Enum::Value thresh_esr_sm_fe;
        static const Enum::Value thresh_sesr_sm_fe;
        static const Enum::Value thresh_bber_sm_fe;
        static const Enum::Value thresh_es_pm_fe;
        static const Enum::Value thresh_ses_pm_fe;
        static const Enum::Value thresh_uas_pm_fe;
        static const Enum::Value thresh_bbe_pm_fe;
        static const Enum::Value thresh_fc_pm_fe;
        static const Enum::Value thresh_esr_pm_fe;
        static const Enum::Value thresh_sesr_pm_fe;
        static const Enum::Value thresh_bber_pm_fe;

};

class OtnTcmThresholdEnum : public Enum
{
    public:
        static const Enum::Value thresh_es_tcm_fe;
        static const Enum::Value thresh_ses_tcm_fe;
        static const Enum::Value thresh_uas_tcm_fe;
        static const Enum::Value thresh_bbe_tcm_fe;
        static const Enum::Value thresh_fc_tcm_fe;
        static const Enum::Value thresh_esr_tcm_fe;
        static const Enum::Value thresh_sesr_tcm_fe;
        static const Enum::Value thresh_bber_tcm_fe;
        static const Enum::Value thresh_es_tcm_ne;
        static const Enum::Value thresh_ses_tcm_ne;
        static const Enum::Value thresh_uas_tcm_ne;
        static const Enum::Value thresh_bbe_tcm_ne;
        static const Enum::Value thresh_fc_tcm_ne;
        static const Enum::Value thresh_esr_tcm_ne;
        static const Enum::Value thresh_sesr_tcm_ne;
        static const Enum::Value thresh_bber_tcm_ne;

};

class StsThresholdEnum : public Enum
{
    public:
        static const Enum::Value thresh_cv;
        static const Enum::Value thresh_es;
        static const Enum::Value thresh_ses;
        static const Enum::Value thresh_uas;

};

class FecReportEnum : public Enum
{
    public:
        static const Enum::Value report_ec_bits;
        static const Enum::Value report_uc_words;
        static const Enum::Value report_pre_fec_ber_max;
        static const Enum::Value report_post_fec_ber_max;
        static const Enum::Value report_q_max;
        static const Enum::Value report_q_margin_max;
        static const Enum::Value report_pre_fec_ber_min;
        static const Enum::Value report_post_fec_ber_min;
        static const Enum::Value report_q_min;
        static const Enum::Value report_q_margin_min;

};

class HoVcThresholdEnum : public Enum
{
    public:
        static const Enum::Value thresh_eb;
        static const Enum::Value thresh_es;
        static const Enum::Value thresh_esr;
        static const Enum::Value thresh_ses;
        static const Enum::Value thresh_sesr;
        static const Enum::Value thresh_bbe;
        static const Enum::Value thresh_bber;
        static const Enum::Value thresh_uass;

};

class GfpThresholdEnum : public Enum
{
    public:
        static const Enum::Value thresh_rx_bit_err;
        static const Enum::Value thresh_rx_inv_typ;
        static const Enum::Value thresh_rx_crc;
        static const Enum::Value thresh_rx_lfd;
        static const Enum::Value thresh_rx_csf;

};

class ReportEnum : public Enum
{
    public:
        static const Enum::Value false_;
        static const Enum::Value true_;

};

class OtnTcmReportEnum : public Enum
{
    public:
        static const Enum::Value report_es_tcm_fe;
        static const Enum::Value report_ses_tcm_fe;
        static const Enum::Value report_uas_tcm_fe;
        static const Enum::Value report_bbe_tcm_fe;
        static const Enum::Value report_fc_tcm_fe;
        static const Enum::Value report_esr_tcm_fe;
        static const Enum::Value report_sesr_tcm_fe;
        static const Enum::Value report_bber_tcm_fe;
        static const Enum::Value report_es_tcm_ne;
        static const Enum::Value report_ses_tcm_ne;
        static const Enum::Value report_uas_tcm_ne;
        static const Enum::Value report_bbe_tcm_ne;
        static const Enum::Value report_fc_tcm_ne;
        static const Enum::Value report_esr_tcm_ne;
        static const Enum::Value report_sesr_tcm_ne;
        static const Enum::Value report_bber_tcm_ne;

};

class OpticsReportEnum : public Enum
{
    public:
        static const Enum::Value report_opt_min;
        static const Enum::Value report_opr_min;
        static const Enum::Value report_lbc_min;
        static const Enum::Value report_lbc_pc_min;
        static const Enum::Value report_cd_min;
        static const Enum::Value report_dgd_min;
        static const Enum::Value report_pmd_min;
        static const Enum::Value report_osnr_min;
        static const Enum::Value report_pdl_min;
        static const Enum::Value report_pcr_min;
        static const Enum::Value report_pn_min;
        static const Enum::Value report_opt_max;
        static const Enum::Value report_opr_max;
        static const Enum::Value report_lbc_max;
        static const Enum::Value report_lbc_pc_max;
        static const Enum::Value report_cd_max;
        static const Enum::Value report_dgd_max;
        static const Enum::Value report_pmd_max;
        static const Enum::Value report_osnr_max;
        static const Enum::Value report_pdl_max;
        static const Enum::Value report_pcr_max;
        static const Enum::Value report_pn_max;

};

class GfpReportEnum : public Enum
{
    public:
        static const Enum::Value report_rx_bit_err;
        static const Enum::Value report_rx_inv_typ;
        static const Enum::Value report_rx_crc;
        static const Enum::Value report_rx_lfd;
        static const Enum::Value report_rx_csf;

};

class HoVcReportEnum : public Enum
{
    public:
        static const Enum::Value report_eb;
        static const Enum::Value report_es;
        static const Enum::Value report_esr;
        static const Enum::Value report_ses;
        static const Enum::Value report_sesr;
        static const Enum::Value report_bbe;
        static const Enum::Value report_bber;
        static const Enum::Value report_uass;

};

class StmReportEnum : public Enum
{
    public:
        static const Enum::Value report_ebs;
        static const Enum::Value report_ess;
        static const Enum::Value report_esrs;
        static const Enum::Value report_sess;
        static const Enum::Value report_sesrs;
        static const Enum::Value report_bbes;
        static const Enum::Value report_bbesr;
        static const Enum::Value report_uass;
        static const Enum::Value report_ebl_ne;
        static const Enum::Value report_esl_ne;
        static const Enum::Value report_eslr_ne;
        static const Enum::Value report_sesl_ne;
        static const Enum::Value report_sesrl_ne;
        static const Enum::Value report_bbel_ne;
        static const Enum::Value report_bberl_ne;
        static const Enum::Value report_uasl_ne;
        static const Enum::Value report_ebl_fe;
        static const Enum::Value report_esl_fe;
        static const Enum::Value report_esrl_fe;
        static const Enum::Value report_sesl_fe;
        static const Enum::Value report_sesrl_fe;
        static const Enum::Value report_bbel_fe;
        static const Enum::Value report_bberl_fe;
        static const Enum::Value report_uasl_fe;

};

class EtherThresholdEnum : public Enum
{
    public:
        static const Enum::Value thresh_rx_pkt;
        static const Enum::Value thresh_rx_util;
        static const Enum::Value thresh_tx_util;
        static const Enum::Value thresh_stat_pkt;
        static const Enum::Value thresh_octet_stat;
        static const Enum::Value thresh_over_size_pkt;
        static const Enum::Value thresh_fcs_err;
        static const Enum::Value thresh_long_frame_s;
        static const Enum::Value thresh_jabber_stats;
        static const Enum::Value thresh_64_octet;
        static const Enum::Value thresh_65_127_octet;
        static const Enum::Value thresh_128_255_octet;
        static const Enum::Value thresh_256_511_octet;
        static const Enum::Value thresh_512_1023_octet;
        static const Enum::Value thresh_1024_1518_octet;
        static const Enum::Value thresh_in_ucast;
        static const Enum::Value thresh_in_mcast;
        static const Enum::Value thresh_in_bcast;
        static const Enum::Value thresh_out_ucast;
        static const Enum::Value thresh_out_mcast;
        static const Enum::Value thresh_out_bcast;
        static const Enum::Value thresh_tx_pkt;
        static const Enum::Value thresh_ifin_error_s;
        static const Enum::Value thresh_ifin_octets;
        static const Enum::Value thresh_ether_stat_multicast_pkt;
        static const Enum::Value thresh_ether_stat_broadcast_pkt;
        static const Enum::Value thresh_ether_stat_under_size_d_pkt;
        static const Enum::Value thresh_out_octet;
        static const Enum::Value thresh_in_pause_frame;
        static const Enum::Value thresh_in_go_od_bytes;
        static const Enum::Value thresh_in_802_1q_frame_s;
        static const Enum::Value thresh_in_pkts_1519_max_octets;
        static const Enum::Value thresh_in_go_od_pkts;
        static const Enum::Value thresh_in_drop_overrun;
        static const Enum::Value thresh_in_drop_abort;
        static const Enum::Value thresh_in_drop_invalid_vlan;
        static const Enum::Value thresh_in_drop_invalid_dmac;
        static const Enum::Value thresh_in_drop_invalid_encap;
        static const Enum::Value thresh_in_drop_other;
        static const Enum::Value thresh_in_mib_giant;
        static const Enum::Value thresh_in_mib_jabber;
        static const Enum::Value thresh_in_mib_crc;
        static const Enum::Value thresh_in_error_collision_s;
        static const Enum::Value thresh_in_error_symbol;
        static const Enum::Value thresh_out_go_od_bytes;
        static const Enum::Value thresh_out_802_1q_frame_s;
        static const Enum::Value thresh_out_pause_frame_s;
        static const Enum::Value thresh_out_pkts_1519_max_octets;
        static const Enum::Value thresh_out_go_od_pkts;
        static const Enum::Value thresh_out_drop_under_run;
        static const Enum::Value thresh_out_drop_abort;
        static const Enum::Value thresh_out_drop_other;
        static const Enum::Value thresh_out_error_other;
        static const Enum::Value thresh_in_error_giant;
        static const Enum::Value thresh_in_error_runt;
        static const Enum::Value thresh_in_error_jabbers;
        static const Enum::Value thresh_in_error_fragments;
        static const Enum::Value thresh_in_error_other;
        static const Enum::Value thresh_in_pkt_64_octet;
        static const Enum::Value thresh_in_pkts_65_127octets;
        static const Enum::Value thresh_in_pkts_128_255_octets;
        static const Enum::Value thresh_in_pkts_256_511_octets;
        static const Enum::Value thresh_in_pkts_512_1023_octets;
        static const Enum::Value thresh_in_pkts_1024_1518_octets;
        static const Enum::Value thresh_out_pkt_64_octet;
        static const Enum::Value thresh_out_pkts_65_127octets;
        static const Enum::Value thresh_out_pkts_128_255_octets;
        static const Enum::Value thresh_out_pkts_256_511_octets;
        static const Enum::Value thresh_out_pkts_512_1023_octets;
        static const Enum::Value thresh_out_pkts_1024_1518_octets;
        static const Enum::Value thresh_tx_under_size_d_pkt;
        static const Enum::Value thresh_tx_over_size_d_pkt;
        static const Enum::Value thresh_tx_fragments;
        static const Enum::Value thresh_tx_jabber;
        static const Enum::Value thresh_tx_bad_fcs;

};

class FecThresholdEnum : public Enum
{
    public:
        static const Enum::Value thresh_ec_bits;
        static const Enum::Value thresh_uc_words;
        static const Enum::Value thresh_pre_fec_ber_max;
        static const Enum::Value thresh_post_fec_ber_max;
        static const Enum::Value thresh_q_max;
        static const Enum::Value thresh_q_margin_max;
        static const Enum::Value thresh_pre_fec_ber_min;
        static const Enum::Value thresh_post_fec_ber_min;
        static const Enum::Value thresh_q_min;
        static const Enum::Value thresh_q_margin_min;

};

class StsReportEnum : public Enum
{
    public:
        static const Enum::Value report_cv;
        static const Enum::Value report_es;
        static const Enum::Value report_ses;
        static const Enum::Value report_uas;

};

class OtnReportEnum : public Enum
{
    public:
        static const Enum::Value report_es_sm_ne;
        static const Enum::Value report_ses_sm_ne;
        static const Enum::Value report_uas_sm_ne;
        static const Enum::Value report_bbe_sm_ne;
        static const Enum::Value report_fc_sm_ne;
        static const Enum::Value report_esr_sm_ne;
        static const Enum::Value report_sesr_sm_ne;
        static const Enum::Value report_bber_sm_ne;
        static const Enum::Value report_es_pm_ne;
        static const Enum::Value report_ses_pm_ne;
        static const Enum::Value report_uas_pm_ne;
        static const Enum::Value report_bbe_pm_ne;
        static const Enum::Value report_fc_pm_ne;
        static const Enum::Value report_esr_pm_ne;
        static const Enum::Value report_sesr_pm_ne;
        static const Enum::Value report_bber_pm_ne;
        static const Enum::Value report_es_sm_fe;
        static const Enum::Value report_ses_sm_fe;
        static const Enum::Value report_uas_sm_fe;
        static const Enum::Value report_bbe_sm_fe;
        static const Enum::Value report_fc_sm_fe;
        static const Enum::Value report_esr_sm_fe;
        static const Enum::Value report_sesr_sm_fe;
        static const Enum::Value report_bber_sm_fe;
        static const Enum::Value report_es_pm_fe;
        static const Enum::Value report_ses_pm_fe;
        static const Enum::Value report_uas_pm_fe;
        static const Enum::Value report_bbe_pm_fe;
        static const Enum::Value report_fc_pm_fe;
        static const Enum::Value report_esr_pm_fe;
        static const Enum::Value report_sesr_pm_fe;
        static const Enum::Value report_bber_pm_fe;

};

class OcnThresholdEnum : public Enum
{
    public:
        static const Enum::Value thresh_sefss;
        static const Enum::Value thresh_cvs;
        static const Enum::Value thresh_ess;
        static const Enum::Value thresh_sess;
        static const Enum::Value thresh_cvl_ne;
        static const Enum::Value thresh_esl_ne;
        static const Enum::Value thresh_sesl_ne;
        static const Enum::Value thresh_uasl_ne;
        static const Enum::Value thresh_fcl_ne;
        static const Enum::Value thresh_fcl_fe;
        static const Enum::Value thresh_cvl_fe;
        static const Enum::Value thresh_esl_fe;
        static const Enum::Value thresh_sesl_fe;
        static const Enum::Value thresh_uasl_fe;

};

class StmThresholdEnum : public Enum
{
    public:
        static const Enum::Value thresh_ebs;
        static const Enum::Value thresh_ess;
        static const Enum::Value thresh_esrs;
        static const Enum::Value thresh_sess;
        static const Enum::Value thresh_sesrs;
        static const Enum::Value thresh_bbes;
        static const Enum::Value thresh_bbesr;
        static const Enum::Value thresh_uass;
        static const Enum::Value thresh_ebl_ne;
        static const Enum::Value thresh_esl_ne;
        static const Enum::Value thresh_eslr_ne;
        static const Enum::Value thresh_sesl_ne;
        static const Enum::Value thresh_sesrl_ne;
        static const Enum::Value thresh_bbel_ne;
        static const Enum::Value thresh_bberl_ne;
        static const Enum::Value thresh_uasl_ne;
        static const Enum::Value thresh_ebl_fe;
        static const Enum::Value thresh_esl_fe;
        static const Enum::Value thresh_esrl_fe;
        static const Enum::Value thresh_sesl_fe;
        static const Enum::Value thresh_sesrl_fe;
        static const Enum::Value thresh_bbel_fe;
        static const Enum::Value thresh_bberl_fe;
        static const Enum::Value thresh_uasl_fe;

};

class OcnReportEnum : public Enum
{
    public:
        static const Enum::Value report_sefss;
        static const Enum::Value report_cvs;
        static const Enum::Value report_ess;
        static const Enum::Value report_sess;
        static const Enum::Value report_cvl_ne;
        static const Enum::Value report_esl_ne;
        static const Enum::Value report_sesl_ne;
        static const Enum::Value report_uasl_ne;
        static const Enum::Value report_fcl_ne;
        static const Enum::Value report_fcl_fe;
        static const Enum::Value report_cvl_fe;
        static const Enum::Value report_esl_fe;
        static const Enum::Value report_sesl_fe;
        static const Enum::Value report_uasl_fe;

};

class EtherReportEnum : public Enum
{
    public:
        static const Enum::Value report_rx_pkt;
        static const Enum::Value report_rx_util;
        static const Enum::Value report_tx_util;
        static const Enum::Value report_stat_pkt;
        static const Enum::Value report_octet_stat;
        static const Enum::Value report_over_size_pkt;
        static const Enum::Value report_fcs_err;
        static const Enum::Value report_long_frame_s;
        static const Enum::Value report_jabber_stats;
        static const Enum::Value report_64_octet;
        static const Enum::Value report_65_127_octet;
        static const Enum::Value report_128_255_octet;
        static const Enum::Value report_256_511_octet;
        static const Enum::Value report_512_1023_octet;
        static const Enum::Value report_1024_1518_octet;
        static const Enum::Value report_in_ucast;
        static const Enum::Value report_in_mcast;
        static const Enum::Value report_in_bcast;
        static const Enum::Value report_out_ucast;
        static const Enum::Value report_out_mcast;
        static const Enum::Value report_out_bcast;
        static const Enum::Value report_tx_pkt;
        static const Enum::Value report_ifin_error_s;
        static const Enum::Value report_ifin_octets;
        static const Enum::Value report_ether_stat_multicast_pkt;
        static const Enum::Value report_ether_stat_broadcast_pkt;
        static const Enum::Value report_ether_stat_under_size_d_pkt;
        static const Enum::Value report_out_octet;
        static const Enum::Value report_in_pause_frame;
        static const Enum::Value report_in_go_od_bytes;
        static const Enum::Value report_in_802_1q_frame_s;
        static const Enum::Value report_in_pkts_1519_max_octets;
        static const Enum::Value report_in_go_od_pkts;
        static const Enum::Value report_in_drop_overrun;
        static const Enum::Value report_in_drop_abort;
        static const Enum::Value report_in_drop_invalid_vlan;
        static const Enum::Value report_in_drop_invalid_dmac;
        static const Enum::Value report_in_drop_invalid_encap;
        static const Enum::Value report_in_drop_other;
        static const Enum::Value report_in_mib_giant;
        static const Enum::Value report_in_mib_jabber;
        static const Enum::Value report_in_mib_crc;
        static const Enum::Value report_in_error_collision_s;
        static const Enum::Value report_in_error_symbol;
        static const Enum::Value report_out_go_od_bytes;
        static const Enum::Value report_out_802_1q_frame_s;
        static const Enum::Value report_out_pause_frame_s;
        static const Enum::Value report_out_pkts_1519_max_octets;
        static const Enum::Value report_out_go_od_pkts;
        static const Enum::Value report_out_drop_under_run;
        static const Enum::Value report_out_drop_abort;
        static const Enum::Value report_out_drop_other;
        static const Enum::Value report_out_error_other;
        static const Enum::Value report_in_error_giant;
        static const Enum::Value report_in_error_runt;
        static const Enum::Value report_in_error_jabbers;
        static const Enum::Value report_in_error_fragments;
        static const Enum::Value report_in_error_other;
        static const Enum::Value report_in_pkt_64_octet;
        static const Enum::Value report_in_pkts_65_127octets;
        static const Enum::Value report_in_pkts_128_255_octets;
        static const Enum::Value report_in_pkts_256_511_octets;
        static const Enum::Value report_in_pkts_512_1023_octets;
        static const Enum::Value report_in_pkts_1024_1518_octets;
        static const Enum::Value report_out_pkt_64_octet;
        static const Enum::Value report_out_pkts_65_127octets;
        static const Enum::Value report_out_pkts_128_255_octets;
        static const Enum::Value report_out_pkts_256_511_octets;
        static const Enum::Value report_out_pkts_512_1023_octets;
        static const Enum::Value report_out_pkts_1024_1518_octets;
        static const Enum::Value report_tx_under_size_d_pkt;
        static const Enum::Value report_tx_over_size_d_pkt;
        static const Enum::Value report_tx_fragments;
        static const Enum::Value report_tx_jabber;
        static const Enum::Value report_tx_bad_fcs;

};

class PathThresholdEnum : public Enum
{
    public:
        static const Enum::Value thresh_cv;
        static const Enum::Value thresh_es;
        static const Enum::Value thresh_ses;
        static const Enum::Value thresh_uas;

};

class PathReportEnum : public Enum
{
    public:
        static const Enum::Value report_cv;
        static const Enum::Value report_es;
        static const Enum::Value report_ses;
        static const Enum::Value report_uas;

};


}
}

#endif /* _CISCO_IOS_XR_PMENGINE_CFG_ */

