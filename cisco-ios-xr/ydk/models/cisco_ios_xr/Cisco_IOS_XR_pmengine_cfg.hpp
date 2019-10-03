#ifndef _CISCO_IOS_XR_PMENGINE_CFG_
#define _CISCO_IOS_XR_PMENGINE_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_cfg {

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

        static int get_enum_value(const std::string & name) {
            if (name == "thresh-opt-min") return 65554;
            if (name == "thresh-opr-min") return 65555;
            if (name == "thresh-lbc-min") return 65556;
            if (name == "thresh-lbc-pc-min") return 65557;
            if (name == "thresh-cd-min") return 65561;
            if (name == "thresh-dgd-min") return 65562;
            if (name == "thresh-pmd-min") return 65563;
            if (name == "thresh-osnr-min") return 65564;
            if (name == "thresh-pdl-min") return 65565;
            if (name == "thresh-pcr-min") return 65566;
            if (name == "thresh-pn-min") return 65567;
            if (name == "thresh-rx-sig-pow-min") return 65568;
            if (name == "thresh-low-sig-freq-off-min") return 65569;
            if (name == "thresh-ampli-gain-min") return 65570;
            if (name == "thresh-ampli-gain-tilt-min") return 65571;
            if (name == "thresh-opt-max") return 65572;
            if (name == "thresh-opr-max") return 65573;
            if (name == "thresh-lbc-max") return 65574;
            if (name == "thresh-lbc-pc-max") return 65575;
            if (name == "thresh-cd-max") return 65579;
            if (name == "thresh-dgd-max") return 65580;
            if (name == "thresh-pmd-max") return 65581;
            if (name == "thresh-osnr-max") return 65582;
            if (name == "thresh-pdl-max") return 65583;
            if (name == "thresh-pcr-max") return 65584;
            if (name == "thresh-pn-max") return 65585;
            if (name == "thresh-rx-sig-pow-max") return 65586;
            if (name == "thresh-low-sig-freq-off-max") return 65587;
            if (name == "thresh-ampli-gain-max") return 65588;
            if (name == "thresh-ampli-gain-tilt-max") return 65589;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "thresh-es-sm-ne") return 262144;
            if (name == "thresh-ses-sm-ne") return 262145;
            if (name == "thresh-uas-sm-ne") return 262146;
            if (name == "thresh-bbe-sm-ne") return 262147;
            if (name == "thresh-fc-sm-ne") return 262148;
            if (name == "thresh-esr-sm-ne") return 262149;
            if (name == "thresh-sesr-sm-ne") return 262150;
            if (name == "thresh-bber-sm-ne") return 262151;
            if (name == "thresh-es-pm-ne") return 524288;
            if (name == "thresh-ses-pm-ne") return 524289;
            if (name == "thresh-uas-pm-ne") return 524290;
            if (name == "thresh-bbe-pm-ne") return 524291;
            if (name == "thresh-fc-pm-ne") return 524292;
            if (name == "thresh-esr-pm-ne") return 524293;
            if (name == "thresh-sesr-pm-ne") return 524294;
            if (name == "thresh-bber-pm-ne") return 524295;
            if (name == "thresh-es-sm-fe") return 1048584;
            if (name == "thresh-ses-sm-fe") return 1048585;
            if (name == "thresh-uas-sm-fe") return 1048586;
            if (name == "thresh-bbe-sm-fe") return 1048587;
            if (name == "thresh-fc-sm-fe") return 1048588;
            if (name == "thresh-esr-sm-fe") return 1048589;
            if (name == "thresh-sesr-sm-fe") return 1048590;
            if (name == "thresh-bber-sm-fe") return 1048591;
            if (name == "thresh-es-pm-fe") return 2097160;
            if (name == "thresh-ses-pm-fe") return 2097161;
            if (name == "thresh-uas-pm-fe") return 2097162;
            if (name == "thresh-bbe-pm-fe") return 2097163;
            if (name == "thresh-fc-pm-fe") return 2097164;
            if (name == "thresh-esr-pm-fe") return 2097165;
            if (name == "thresh-sesr-pm-fe") return 2097166;
            if (name == "thresh-bber-pm-fe") return 2097167;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "thresh-if-inpkts-untagged") return 150994944;
            if (name == "thresh-if-inpkts-not-ag") return 150994945;
            if (name == "thresh-if-inpktsbadtag") return 150994946;
            if (name == "thresh-if-inpktsunkownsci") return 150994947;
            if (name == "thresh-if-inpktsnosci") return 150994948;
            if (name == "thresh-if-inpkts-overrun") return 150994949;
            if (name == "thresh-if-inoctets-validate-d") return 150994950;
            if (name == "thresh-if-inoctetsdecrypted") return 150994951;
            if (name == "thresh-if-outpkts-untagged") return 150994952;
            if (name == "thresh-if-thresh-outpkts-too-long") return 150994953;
            if (name == "thresh-if-outoctetsprotected") return 150994954;
            if (name == "thresh-if-outoctetsencrypted") return 150994955;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "thresh-es-tcm-fe") return 16777224;
            if (name == "thresh-ses-tcm-fe") return 16777225;
            if (name == "thresh-uas-tcm-fe") return 16777226;
            if (name == "thresh-bbe-tcm-fe") return 16777227;
            if (name == "thresh-fc-tcm-fe") return 16777228;
            if (name == "thresh-esr-tcm-fe") return 16777229;
            if (name == "thresh-sesr-tcm-fe") return 16777230;
            if (name == "thresh-bber-tcm-fe") return 16777231;
            if (name == "thresh-es-tcm-ne") return 33554432;
            if (name == "thresh-ses-tcm-ne") return 33554433;
            if (name == "thresh-uas-tcm-ne") return 33554434;
            if (name == "thresh-bbe-tcm-ne") return 33554435;
            if (name == "thresh-fc-tcm-ne") return 33554436;
            if (name == "thresh-esr-tcm-ne") return 33554437;
            if (name == "thresh-sesr-tcm-ne") return 33554438;
            if (name == "thresh-bber-tcm-ne") return 33554439;
            return -1;
        }
};

class StsThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf thresh_cv;
        static const ydk::Enum::YLeaf thresh_es;
        static const ydk::Enum::YLeaf thresh_ses;
        static const ydk::Enum::YLeaf thresh_uas;

        static int get_enum_value(const std::string & name) {
            if (name == "thresh-cv") return 4194304;
            if (name == "thresh-es") return 4194305;
            if (name == "thresh-ses") return 4194306;
            if (name == "thresh-uas") return 4194307;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "report-ec-bits") return 131072;
            if (name == "report-uc-words") return 131076;
            if (name == "report-pre-fec-ber-max") return 131081;
            if (name == "report-post-fec-ber-max") return 131082;
            if (name == "report-q-max") return 131083;
            if (name == "report-q-margin-max") return 131084;
            if (name == "report-pre-fec-ber-min") return 131085;
            if (name == "report-post-fec-ber-min") return 131086;
            if (name == "report-q-min") return 131087;
            if (name == "report-q-margin-min") return 131088;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "thresh-eb") return 33554432;
            if (name == "thresh-es") return 33554433;
            if (name == "thresh-esr") return 33554434;
            if (name == "thresh-ses") return 33554435;
            if (name == "thresh-sesr") return 33554436;
            if (name == "thresh-bbe") return 33554437;
            if (name == "thresh-bber") return 33554438;
            if (name == "thresh-uass") return 33554439;
            return -1;
        }
};

class GfpThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf thresh_rx_bit_err;
        static const ydk::Enum::YLeaf thresh_rx_inv_typ;
        static const ydk::Enum::YLeaf thresh_rx_crc;
        static const ydk::Enum::YLeaf thresh_rx_lfd;
        static const ydk::Enum::YLeaf thresh_rx_csf;

        static int get_enum_value(const std::string & name) {
            if (name == "thresh-rx-bit-err") return 67108864;
            if (name == "thresh-rx-inv-typ") return 67108865;
            if (name == "thresh-rx-crc") return 67108866;
            if (name == "thresh-rx-lfd") return 67108867;
            if (name == "thresh-rx-csf") return 67108868;
            return -1;
        }
};

class PcsThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf thresh_bip;
        static const ydk::Enum::YLeaf thresh_frm_err;

        static int get_enum_value(const std::string & name) {
            if (name == "thresh-bip") return 83886080;
            if (name == "thresh-frm-err") return 83886081;
            return -1;
        }
};

class SecytxThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf thresh_tx_outpktsprotected;
        static const ydk::Enum::YLeaf thresh_tx_outpktsencrypted;
        static const ydk::Enum::YLeaf thresh_tx_outoctetsprotected;
        static const ydk::Enum::YLeaf thresh_tx_outoctetsencrypted;
        static const ydk::Enum::YLeaf thresh_tx_outpkts_too_long;

        static int get_enum_value(const std::string & name) {
            if (name == "thresh-tx-outpktsprotected") return 134217728;
            if (name == "thresh-tx-outpktsencrypted") return 134217729;
            if (name == "thresh-tx-outoctetsprotected") return 134217730;
            if (name == "thresh-tx-outoctetsencrypted") return 134217731;
            if (name == "thresh-tx-outpkts-too-long") return 134217732;
            return -1;
        }
};

class PcsReport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf report_bip;
        static const ydk::Enum::YLeaf report_frm_err;

        static int get_enum_value(const std::string & name) {
            if (name == "report-bip") return 100663296;
            if (name == "report-frm-err") return 100663297;
            return -1;
        }
};

class Report : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf false_;
        static const ydk::Enum::YLeaf true_;

        static int get_enum_value(const std::string & name) {
            if (name == "false") return 0;
            if (name == "true") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "report-es-tcm-fe") return 16777224;
            if (name == "report-ses-tcm-fe") return 16777225;
            if (name == "report-uas-tcm-fe") return 16777226;
            if (name == "report-bbe-tcm-fe") return 16777227;
            if (name == "report-fc-tcm-fe") return 16777228;
            if (name == "report-esr-tcm-fe") return 16777229;
            if (name == "report-sesr-tcm-fe") return 16777230;
            if (name == "report-bber-tcm-fe") return 16777231;
            if (name == "report-es-tcm-ne") return 33554432;
            if (name == "report-ses-tcm-ne") return 33554433;
            if (name == "report-uas-tcm-ne") return 33554434;
            if (name == "report-bbe-tcm-ne") return 33554435;
            if (name == "report-fc-tcm-ne") return 33554436;
            if (name == "report-esr-tcm-ne") return 33554437;
            if (name == "report-sesr-tcm-ne") return 33554438;
            if (name == "report-bber-tcm-ne") return 33554439;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "report-opt-min") return 65554;
            if (name == "report-opr-min") return 65555;
            if (name == "report-lbc-min") return 65556;
            if (name == "report-lbc-pc-min") return 65557;
            if (name == "report-cd-min") return 65561;
            if (name == "report-dgd-min") return 65562;
            if (name == "report-pmd-min") return 65563;
            if (name == "report-osnr-min") return 65564;
            if (name == "report-pdl-min") return 65565;
            if (name == "report-pcr-min") return 65566;
            if (name == "report-pn-min") return 65567;
            if (name == "report-rx-sig-pow-min") return 65568;
            if (name == "report-low-sig-freq-off-min") return 65569;
            if (name == "report-ampli-gain-min") return 65570;
            if (name == "report-ampli-gain-tilt-min") return 65571;
            if (name == "report-opt-max") return 65572;
            if (name == "report-opr-max") return 65573;
            if (name == "report-lbc-max") return 65574;
            if (name == "report-lbc-pc-max") return 65575;
            if (name == "report-cd-max") return 65579;
            if (name == "report-dgd-max") return 65580;
            if (name == "report-pmd-max") return 65581;
            if (name == "report-osnr-max") return 65582;
            if (name == "report-pdl-max") return 65583;
            if (name == "report-pcr-max") return 65584;
            if (name == "report-pn-max") return 65585;
            if (name == "report-rx-sig-pow-max") return 65586;
            if (name == "report-low-sig-freq-off-max") return 65587;
            if (name == "report-ampli-gain-max") return 65588;
            if (name == "report-ampli-gain-tilt-max") return 65589;
            return -1;
        }
};

class GfpReport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf report_rx_bit_err;
        static const ydk::Enum::YLeaf report_rx_inv_typ;
        static const ydk::Enum::YLeaf report_rx_crc;
        static const ydk::Enum::YLeaf report_rx_lfd;
        static const ydk::Enum::YLeaf report_rx_csf;

        static int get_enum_value(const std::string & name) {
            if (name == "report-rx-bit-err") return 6291456;
            if (name == "report-rx-inv-typ") return 6291457;
            if (name == "report-rx-crc") return 6291458;
            if (name == "report-rx-lfd") return 6291459;
            if (name == "report-rx-csf") return 6291460;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "report-eb") return 33554432;
            if (name == "report-es") return 33554433;
            if (name == "report-esr") return 33554434;
            if (name == "report-ses") return 33554435;
            if (name == "report-sesr") return 33554436;
            if (name == "report-bbe") return 33554437;
            if (name == "report-bber") return 33554438;
            if (name == "report-uass") return 33554439;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "report-ebs") return 16777217;
            if (name == "report-ess") return 16777218;
            if (name == "report-esrs") return 16777219;
            if (name == "report-sess") return 16777220;
            if (name == "report-sesrs") return 16777221;
            if (name == "report-bbes") return 16777222;
            if (name == "report-bbesr") return 16777223;
            if (name == "report-uass") return 16777224;
            if (name == "report-ebl-ne") return 16777225;
            if (name == "report-esl-ne") return 16777226;
            if (name == "report-eslr-ne") return 16777227;
            if (name == "report-sesl-ne") return 16777228;
            if (name == "report-sesrl-ne") return 16777229;
            if (name == "report-bbel-ne") return 16777230;
            if (name == "report-bberl-ne") return 16777231;
            if (name == "report-uasl-ne") return 16777232;
            if (name == "report-ebl-fe") return 16777245;
            if (name == "report-esl-fe") return 16777246;
            if (name == "report-esrl-fe") return 16777247;
            if (name == "report-sesl-fe") return 16777248;
            if (name == "report-sesrl-fe") return 16777249;
            if (name == "report-bbel-fe") return 16777250;
            if (name == "report-bberl-fe") return 16777251;
            if (name == "report-uasl-fe") return 16777252;
            return -1;
        }
};

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

        static int get_enum_value(const std::string & name) {
            if (name == "report-if-inpkts-untagged") return 134217728;
            if (name == "report-if-inpkts-not-ag") return 134217729;
            if (name == "report-if-inpktsbadtag") return 134217730;
            if (name == "report-if-inpkts-unknown-sci") return 134217731;
            if (name == "report-if-inpktsnosci") return 134217732;
            if (name == "report-if-inpkts-overrun") return 134217733;
            if (name == "report-if-inoctets-validate-d") return 134217734;
            if (name == "report-if-inoctetsdecrypted") return 134217735;
            if (name == "report-if-outpkts-untagged") return 134217736;
            if (name == "report-if-outpkts-too-long") return 134217737;
            if (name == "report-if-outoctetsprotected") return 134217738;
            if (name == "report-if-outoctetsencrypted") return 134217739;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "thresh-rx-pkt") return 8388608;
            if (name == "thresh-rx-util") return 8388609;
            if (name == "thresh-tx-util") return 8388610;
            if (name == "thresh-stat-pkt") return 8388611;
            if (name == "thresh-octet-stat") return 8388612;
            if (name == "thresh-over-size-pkt") return 8388613;
            if (name == "thresh-fcs-err") return 8388614;
            if (name == "thresh-long-frame-s") return 8388615;
            if (name == "thresh-jabber-stats") return 8388616;
            if (name == "thresh-64-octet") return 8388617;
            if (name == "thresh-65-127-octet") return 8388618;
            if (name == "thresh-128-255-octet") return 8388619;
            if (name == "thresh-256-511-octet") return 8388620;
            if (name == "thresh-512-1023-octet") return 8388621;
            if (name == "thresh-1024-1518-octet") return 8388622;
            if (name == "thresh-in-ucast") return 8388623;
            if (name == "thresh-in-mcast") return 8388624;
            if (name == "thresh-in-bcast") return 8388625;
            if (name == "thresh-out-ucast") return 8388626;
            if (name == "thresh-out-mcast") return 8388627;
            if (name == "thresh-out-bcast") return 8388628;
            if (name == "thresh-tx-pkt") return 8388629;
            if (name == "thresh-ifin-error-s") return 8388630;
            if (name == "thresh-ifin-octets") return 8388631;
            if (name == "thresh-ether-stat-multicast-pkt") return 8388632;
            if (name == "thresh-ether-stat-broadcast-pkt") return 8388633;
            if (name == "thresh-ether-stat-under-size-d-pkt") return 8388634;
            if (name == "thresh-out-octet") return 8388635;
            if (name == "thresh-in-pause-frame") return 8388636;
            if (name == "thresh-in-go-od-bytes") return 8388637;
            if (name == "thresh-in-802-1q-frame-s") return 8388638;
            if (name == "thresh-in-pkts-1519-max-octets") return 8388639;
            if (name == "thresh-in-go-od-pkts") return 8388640;
            if (name == "thresh-in-drop-overrun") return 8388641;
            if (name == "thresh-in-drop-abort") return 8388642;
            if (name == "thresh-in-drop-invalid-vlan") return 8388643;
            if (name == "thresh-in-drop-invalid-dmac") return 8388644;
            if (name == "thresh-in-drop-invalid-encap") return 8388645;
            if (name == "thresh-in-drop-other") return 8388646;
            if (name == "thresh-in-mib-giant") return 8388647;
            if (name == "thresh-in-mib-jabber") return 8388648;
            if (name == "thresh-in-mib-crc") return 8388649;
            if (name == "thresh-in-error-collision-s") return 8388650;
            if (name == "thresh-in-error-symbol") return 8388651;
            if (name == "thresh-out-go-od-bytes") return 8388652;
            if (name == "thresh-out-802-1q-frame-s") return 8388653;
            if (name == "thresh-out-pause-frame-s") return 8388654;
            if (name == "thresh-out-pkts-1519-max-octets") return 8388655;
            if (name == "thresh-out-go-od-pkts") return 8388656;
            if (name == "thresh-out-drop-under-run") return 8388657;
            if (name == "thresh-out-drop-abort") return 8388658;
            if (name == "thresh-out-drop-other") return 8388659;
            if (name == "thresh-out-error-other") return 8388660;
            if (name == "thresh-in-error-giant") return 8388661;
            if (name == "thresh-in-error-runt") return 8388662;
            if (name == "thresh-in-error-jabbers") return 8388663;
            if (name == "thresh-in-error-fragments") return 8388664;
            if (name == "thresh-in-error-other") return 8388665;
            if (name == "thresh-in-pkt-64-octet") return 8388666;
            if (name == "thresh-in-pkts-65-127octets") return 8388667;
            if (name == "thresh-in-pkts-128-255-octets") return 8388668;
            if (name == "thresh-in-pkts-256-511-octets") return 8388669;
            if (name == "thresh-in-pkts-512-1023-octets") return 8388670;
            if (name == "thresh-in-pkts-1024-1518-octets") return 8388671;
            if (name == "thresh-out-pkt-64-octet") return 8388672;
            if (name == "thresh-out-pkts-65-127octets") return 8388673;
            if (name == "thresh-out-pkts-128-255-octets") return 8388674;
            if (name == "thresh-out-pkts-256-511-octets") return 8388675;
            if (name == "thresh-out-pkts-512-1023-octets") return 8388676;
            if (name == "thresh-out-pkts-1024-1518-octets") return 8388677;
            if (name == "thresh-tx-under-size-d-pkt") return 8388678;
            if (name == "thresh-tx-over-size-d-pkt") return 8388679;
            if (name == "thresh-tx-fragments") return 8388680;
            if (name == "thresh-tx-jabber") return 8388681;
            if (name == "thresh-tx-bad-fcs") return 8388682;
            return -1;
        }
};

class SecytxReport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf report_tx_outpktsprotected;
        static const ydk::Enum::YLeaf report_tx_outpktsencrypted;
        static const ydk::Enum::YLeaf report_tx_outoctetsprotected;
        static const ydk::Enum::YLeaf report_tx_outoctetsencrypted;
        static const ydk::Enum::YLeaf report_tx_outpkts_too_long;

        static int get_enum_value(const std::string & name) {
            if (name == "report-tx-outpktsprotected") return 150994944;
            if (name == "report-tx-outpktsencrypted") return 150994945;
            if (name == "report-tx-outoctetsprotected") return 150994946;
            if (name == "report-tx-outoctetsencrypted") return 150994947;
            if (name == "report-tx-outpkts-too-long") return 150994948;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "thresh-ec-bits") return 131072;
            if (name == "thresh-uc-words") return 131076;
            if (name == "thresh-pre-fec-ber-max") return 131081;
            if (name == "thresh-post-fec-ber-max") return 131082;
            if (name == "thresh-q-max") return 131083;
            if (name == "thresh-q-margin-max") return 131084;
            if (name == "thresh-pre-fec-ber-min") return 131085;
            if (name == "thresh-post-fec-ber-min") return 131086;
            if (name == "thresh-q-min") return 131087;
            if (name == "thresh-q-margin-min") return 131088;
            return -1;
        }
};

class StsReport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf report_cv;
        static const ydk::Enum::YLeaf report_es;
        static const ydk::Enum::YLeaf report_ses;
        static const ydk::Enum::YLeaf report_uas;

        static int get_enum_value(const std::string & name) {
            if (name == "report-cv") return 4194304;
            if (name == "report-es") return 4194305;
            if (name == "report-ses") return 4194306;
            if (name == "report-uas") return 4194307;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "report-es-sm-ne") return 262144;
            if (name == "report-ses-sm-ne") return 262145;
            if (name == "report-uas-sm-ne") return 262146;
            if (name == "report-bbe-sm-ne") return 262147;
            if (name == "report-fc-sm-ne") return 262148;
            if (name == "report-esr-sm-ne") return 262149;
            if (name == "report-sesr-sm-ne") return 262150;
            if (name == "report-bber-sm-ne") return 262151;
            if (name == "report-es-pm-ne") return 524288;
            if (name == "report-ses-pm-ne") return 524289;
            if (name == "report-uas-pm-ne") return 524290;
            if (name == "report-bbe-pm-ne") return 524291;
            if (name == "report-fc-pm-ne") return 524292;
            if (name == "report-esr-pm-ne") return 524293;
            if (name == "report-sesr-pm-ne") return 524294;
            if (name == "report-bber-pm-ne") return 524295;
            if (name == "report-es-sm-fe") return 1048584;
            if (name == "report-ses-sm-fe") return 1048585;
            if (name == "report-uas-sm-fe") return 1048586;
            if (name == "report-bbe-sm-fe") return 1048587;
            if (name == "report-fc-sm-fe") return 1048588;
            if (name == "report-esr-sm-fe") return 1048589;
            if (name == "report-sesr-sm-fe") return 1048590;
            if (name == "report-bber-sm-fe") return 1048591;
            if (name == "report-es-pm-fe") return 2097160;
            if (name == "report-ses-pm-fe") return 2097161;
            if (name == "report-uas-pm-fe") return 2097162;
            if (name == "report-bbe-pm-fe") return 2097163;
            if (name == "report-fc-pm-fe") return 2097164;
            if (name == "report-esr-pm-fe") return 2097165;
            if (name == "report-sesr-pm-fe") return 2097166;
            if (name == "report-bber-pm-fe") return 2097167;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "thresh-sefss") return 3145728;
            if (name == "thresh-cvs") return 3145729;
            if (name == "thresh-ess") return 3145730;
            if (name == "thresh-sess") return 3145731;
            if (name == "thresh-cvl-ne") return 3145734;
            if (name == "thresh-esl-ne") return 3145735;
            if (name == "thresh-sesl-ne") return 3145736;
            if (name == "thresh-uasl-ne") return 3145738;
            if (name == "thresh-fcl-ne") return 3145739;
            if (name == "thresh-fcl-fe") return 3145751;
            if (name == "thresh-cvl-fe") return 3145752;
            if (name == "thresh-esl-fe") return 3145753;
            if (name == "thresh-sesl-fe") return 3145754;
            if (name == "thresh-uasl-fe") return 3145756;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "thresh-ebs") return 16777217;
            if (name == "thresh-ess") return 16777218;
            if (name == "thresh-esrs") return 16777219;
            if (name == "thresh-sess") return 16777220;
            if (name == "thresh-sesrs") return 16777221;
            if (name == "thresh-bbes") return 16777222;
            if (name == "thresh-bbesr") return 16777223;
            if (name == "thresh-uass") return 16777224;
            if (name == "thresh-ebl-ne") return 16777225;
            if (name == "thresh-esl-ne") return 16777226;
            if (name == "thresh-eslr-ne") return 16777227;
            if (name == "thresh-sesl-ne") return 16777228;
            if (name == "thresh-sesrl-ne") return 16777229;
            if (name == "thresh-bbel-ne") return 16777230;
            if (name == "thresh-bberl-ne") return 16777231;
            if (name == "thresh-uasl-ne") return 16777232;
            if (name == "thresh-ebl-fe") return 16777245;
            if (name == "thresh-esl-fe") return 16777246;
            if (name == "thresh-esrl-fe") return 16777247;
            if (name == "thresh-sesl-fe") return 16777248;
            if (name == "thresh-sesrl-fe") return 16777249;
            if (name == "thresh-bbel-fe") return 16777250;
            if (name == "thresh-bberl-fe") return 16777251;
            if (name == "thresh-uasl-fe") return 16777252;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "report-rx-inpktsun-check-ed") return 117440512;
            if (name == "report-rx-inpkts-delayed") return 117440513;
            if (name == "report-rx-inpktslate") return 117440514;
            if (name == "report-rx-inpktsok") return 117440515;
            if (name == "report-rx-inpkts-invalid") return 117440516;
            if (name == "report-rx-inpkts-not-valid") return 117440517;
            if (name == "report-rx-inpkts-not-usingsa") return 117440518;
            if (name == "report-rx-inpktsunusedsa") return 117440519;
            if (name == "report-rx-inpkts-untagged-hit") return 117440520;
            if (name == "report-rx-inoctets-validate-d") return 117440521;
            if (name == "report-rx-inoctetsdecrypted") return 117440522;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "thresh-rx-inpktsun-check-ed") return 117440512;
            if (name == "thresh-rx-inpkts-delayed") return 117440513;
            if (name == "thresh-rx-inpktslate") return 117440514;
            if (name == "thresh-rx-inpktsok") return 117440515;
            if (name == "thresh-rx-inpkts-invalid") return 117440516;
            if (name == "thresh-rx-inpkts-not-valid") return 117440517;
            if (name == "thresh-rx-inpkts-not-usingsa") return 117440518;
            if (name == "thresh-rx-inpktsunusedsa") return 117440519;
            if (name == "thresh-rx-inpkts-untagged-hit") return 117440520;
            if (name == "thresh-rx-inoctets-validate-d") return 117440521;
            if (name == "thresh-rx-inoctetsdecrypted") return 117440522;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "report-sefss") return 3145728;
            if (name == "report-cvs") return 3145729;
            if (name == "report-ess") return 3145730;
            if (name == "report-sess") return 3145731;
            if (name == "report-cvl-ne") return 3145734;
            if (name == "report-esl-ne") return 3145735;
            if (name == "report-sesl-ne") return 3145736;
            if (name == "report-uasl-ne") return 3145738;
            if (name == "report-fcl-ne") return 3145739;
            if (name == "report-fcl-fe") return 3145751;
            if (name == "report-cvl-fe") return 3145752;
            if (name == "report-esl-fe") return 3145753;
            if (name == "report-sesl-fe") return 3145754;
            if (name == "report-uasl-fe") return 3145756;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "report-rx-pkt") return 524288;
            if (name == "report-rx-util") return 524289;
            if (name == "report-tx-util") return 524290;
            if (name == "report-stat-pkt") return 524291;
            if (name == "report-octet-stat") return 524292;
            if (name == "report-over-size-pkt") return 524293;
            if (name == "report-fcs-err") return 524294;
            if (name == "report-long-frame-s") return 524295;
            if (name == "report-jabber-stats") return 524296;
            if (name == "report-64-octet") return 524297;
            if (name == "report-65-127-octet") return 524298;
            if (name == "report-128-255-octet") return 524299;
            if (name == "report-256-511-octet") return 524300;
            if (name == "report-512-1023-octet") return 524301;
            if (name == "report-1024-1518-octet") return 524302;
            if (name == "report-in-ucast") return 524303;
            if (name == "report-in-mcast") return 524304;
            if (name == "report-in-bcast") return 524305;
            if (name == "report-out-ucast") return 524306;
            if (name == "report-out-mcast") return 524307;
            if (name == "report-out-bcast") return 524308;
            if (name == "report-tx-pkt") return 524309;
            if (name == "report-ifin-error-s") return 524310;
            if (name == "report-ifin-octets") return 524311;
            if (name == "report-ether-stat-multicast-pkt") return 524312;
            if (name == "report-ether-stat-broadcast-pkt") return 524313;
            if (name == "report-ether-stat-under-size-d-pkt") return 524314;
            if (name == "report-out-octet") return 524315;
            if (name == "report-in-pause-frame") return 524316;
            if (name == "report-in-go-od-bytes") return 524317;
            if (name == "report-in-802-1q-frame-s") return 524318;
            if (name == "report-in-pkts-1519-max-octets") return 524319;
            if (name == "report-in-go-od-pkts") return 524320;
            if (name == "report-in-drop-overrun") return 524321;
            if (name == "report-in-drop-abort") return 524322;
            if (name == "report-in-drop-invalid-vlan") return 524323;
            if (name == "report-in-drop-invalid-dmac") return 524324;
            if (name == "report-in-drop-invalid-encap") return 524325;
            if (name == "report-in-drop-other") return 524326;
            if (name == "report-in-mib-giant") return 524327;
            if (name == "report-in-mib-jabber") return 524328;
            if (name == "report-in-mib-crc") return 524329;
            if (name == "report-in-error-collision-s") return 524330;
            if (name == "report-in-error-symbol") return 524331;
            if (name == "report-out-go-od-bytes") return 524332;
            if (name == "report-out-802-1q-frame-s") return 524333;
            if (name == "report-out-pause-frame-s") return 524334;
            if (name == "report-out-pkts-1519-max-octets") return 524335;
            if (name == "report-out-go-od-pkts") return 524336;
            if (name == "report-out-drop-under-run") return 524337;
            if (name == "report-out-drop-abort") return 524338;
            if (name == "report-out-drop-other") return 524339;
            if (name == "report-out-error-other") return 524340;
            if (name == "report-in-error-giant") return 524341;
            if (name == "report-in-error-runt") return 524342;
            if (name == "report-in-error-jabbers") return 524343;
            if (name == "report-in-error-fragments") return 524344;
            if (name == "report-in-error-other") return 524345;
            if (name == "report-in-pkt-64-octet") return 524346;
            if (name == "report-in-pkts-65-127octets") return 524347;
            if (name == "report-in-pkts-128-255-octets") return 524348;
            if (name == "report-in-pkts-256-511-octets") return 524349;
            if (name == "report-in-pkts-512-1023-octets") return 524350;
            if (name == "report-in-pkts-1024-1518-octets") return 524351;
            if (name == "report-out-pkt-64-octet") return 524352;
            if (name == "report-out-pkts-65-127octets") return 524353;
            if (name == "report-out-pkts-128-255-octets") return 524354;
            if (name == "report-out-pkts-256-511-octets") return 524355;
            if (name == "report-out-pkts-512-1023-octets") return 524356;
            if (name == "report-out-pkts-1024-1518-octets") return 524357;
            if (name == "report-tx-under-size-d-pkt") return 524358;
            if (name == "report-tx-over-size-d-pkt") return 524359;
            if (name == "report-tx-fragments") return 524360;
            if (name == "report-tx-jabber") return 524361;
            if (name == "report-tx-bad-fcs") return 524362;
            return -1;
        }
};

class PathThreshold : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf thresh_cv;
        static const ydk::Enum::YLeaf thresh_es;
        static const ydk::Enum::YLeaf thresh_ses;
        static const ydk::Enum::YLeaf thresh_uas;

        static int get_enum_value(const std::string & name) {
            if (name == "thresh-cv") return 5242880;
            if (name == "thresh-es") return 5242881;
            if (name == "thresh-ses") return 5242882;
            if (name == "thresh-uas") return 5242883;
            return -1;
        }
};

class PathReport : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf report_cv;
        static const ydk::Enum::YLeaf report_es;
        static const ydk::Enum::YLeaf report_ses;
        static const ydk::Enum::YLeaf report_uas;

        static int get_enum_value(const std::string & name) {
            if (name == "report-cv") return 5242880;
            if (name == "report-es") return 5242881;
            if (name == "report-ses") return 5242882;
            if (name == "report-uas") return 5242883;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_PMENGINE_CFG_ */

