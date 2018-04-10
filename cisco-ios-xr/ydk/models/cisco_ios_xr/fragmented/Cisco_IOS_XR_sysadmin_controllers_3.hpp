#ifndef _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_3_
#define _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_sysadmin_controllers_0.hpp"
#include "Cisco_IOS_XR_sysadmin_controllers_2.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_controllers {


class Controller::SfeOper::Sfe::Statistics::Location::Asic::CCS::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf rack_num; //type: uint32
        ydk::YLeaf slot_num; //type: uint32
        ydk::YLeaf asic_instance; //type: uint32
        ydk::YLeaf ccs0_unreachabledestinationcellscnt_ovf; //type: boolean
        ydk::YLeaf ccs1_unreachabledestinationcellscnt_ovf; //type: boolean
        ydk::YLeaf ccs0_capturefifodiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_capturefifodiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_cdmalpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_cdmalpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_cdmblpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_cdmblpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_crpparityerrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_crpparityerrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch1_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch2_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch3_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch0_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch1_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch2_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch3_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch0_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch1_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch2_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch3_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch0_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch1_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch2_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch3_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch0_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch1_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch2_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch3_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch0_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch1_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch2_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch3_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch0_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch1_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch2_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch3_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch0_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch1_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch2_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch3_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch0_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch1_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch2_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch3_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch0_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch1_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch2_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch3_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf eci_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf fmac0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac4_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac5_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac6_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac7_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac8_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac9_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac10_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac11_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac12_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac13_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac14_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac15_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac16_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac17_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac18_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac19_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac20_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac21_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac22_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac23_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac24_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac25_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac26_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac27_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac28_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac29_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac30_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac31_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac4_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac5_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac6_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac7_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac8_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac9_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac10_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac11_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac12_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac13_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac14_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac15_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac16_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac17_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac18_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac19_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac20_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac21_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac22_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac23_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac24_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac25_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac26_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac27_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac28_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac29_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac30_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac31_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_unreachabledestinationcellscnt; //type: uint64
        ydk::YLeaf ccs1_unreachabledestinationcellscnt; //type: uint64
        ydk::YLeaf ccs0_capturefifodiscardcnt; //type: uint64
        ydk::YLeaf ccs1_capturefifodiscardcnt; //type: uint64
        ydk::YLeaf ccs0_cdmalpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs1_cdmalpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs0_cdmblpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs1_cdmblpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs0_crpparityerrcnt; //type: uint64
        ydk::YLeaf ccs1_crpparityerrcnt; //type: uint64
        ydk::YLeaf ccs0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf ccs1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf ccs0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf ccs1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch0_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch1_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch2_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch3_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch0_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch1_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch2_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch3_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch0_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch1_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch2_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch3_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch0_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch1_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch2_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch3_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch0_unreachdestcntp; //type: uint64
        ydk::YLeaf dch1_unreachdestcntp; //type: uint64
        ydk::YLeaf dch2_unreachdestcntp; //type: uint64
        ydk::YLeaf dch3_unreachdestcntp; //type: uint64
        ydk::YLeaf dch0_unreachdestcnts; //type: uint64
        ydk::YLeaf dch1_unreachdestcnts; //type: uint64
        ydk::YLeaf dch2_unreachdestcnts; //type: uint64
        ydk::YLeaf dch3_unreachdestcnts; //type: uint64
        ydk::YLeaf dch0_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch1_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch2_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch3_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch0_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch1_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch2_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch3_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch0_errorfiltercntap; //type: uint64
        ydk::YLeaf dch1_errorfiltercntap; //type: uint64
        ydk::YLeaf dch2_errorfiltercntap; //type: uint64
        ydk::YLeaf dch3_errorfiltercntap; //type: uint64
        ydk::YLeaf dch0_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch1_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch2_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch3_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch0_errorfiltercntas; //type: uint64
        ydk::YLeaf dch1_errorfiltercntas; //type: uint64
        ydk::YLeaf dch2_errorfiltercntas; //type: uint64
        ydk::YLeaf dch3_errorfiltercntas; //type: uint64
        ydk::YLeaf dch0_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch1_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch2_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch3_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch0_droplowpricntp; //type: uint64
        ydk::YLeaf dch1_droplowpricntp; //type: uint64
        ydk::YLeaf dch2_droplowpricntp; //type: uint64
        ydk::YLeaf dch3_droplowpricntp; //type: uint64
        ydk::YLeaf dch0_droplowpricnts; //type: uint64
        ydk::YLeaf dch1_droplowpricnts; //type: uint64
        ydk::YLeaf dch2_droplowpricnts; //type: uint64
        ydk::YLeaf dch3_droplowpricnts; //type: uint64
        ydk::YLeaf dch0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch0_parityerrcnt; //type: uint64
        ydk::YLeaf dch1_parityerrcnt; //type: uint64
        ydk::YLeaf dch2_parityerrcnt; //type: uint64
        ydk::YLeaf dch3_parityerrcnt; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl0_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl1_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl2_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl3_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl0_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl1_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl2_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl3_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl0_parityerrcnt; //type: uint64
        ydk::YLeaf dcl1_parityerrcnt; //type: uint64
        ydk::YLeaf dcl2_parityerrcnt; //type: uint64
        ydk::YLeaf dcl3_parityerrcnt; //type: uint64
        ydk::YLeaf dcl0_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl1_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl2_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl3_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl0_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl1_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl2_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl3_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcma1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcma0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcma1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcma0_parityerrcnt; //type: uint64
        ydk::YLeaf dcma1_parityerrcnt; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcmb1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcmb0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcmb1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcmb0_parityerrcnt; //type: uint64
        ydk::YLeaf dcmb1_parityerrcnt; //type: uint64
        ydk::YLeaf eci_parityerrcnt; //type: uint64
        ydk::YLeaf rtp_ecc_1berrcnt; //type: uint64
        ydk::YLeaf rtp_ecc_2berrcnt; //type: uint64
        ydk::YLeaf rtp_parityerrcnt; //type: uint64
        ydk::YLeaf fmac0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac4_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac5_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac6_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac7_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac8_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac9_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac10_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac11_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac12_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac13_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac14_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac15_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac16_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac17_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac18_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac19_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac20_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac21_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac22_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac23_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac24_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac25_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac26_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac27_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac28_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac29_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac30_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac31_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac4_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac5_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac6_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac7_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac8_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac9_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac10_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac11_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac12_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac13_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac14_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac15_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac16_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac17_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac18_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac19_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac20_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac21_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac22_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac23_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac24_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac25_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac26_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac27_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac28_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac29_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac30_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac31_ecc_2berrcnt; //type: uint64
        ydk::YLeaf is_show; //type: boolean
        ydk::YLeaf show_ccs; //type: boolean
        ydk::YLeaf show_dch; //type: boolean
        ydk::YLeaf show_dcl; //type: boolean
        ydk::YLeaf show_dcma; //type: boolean
        ydk::YLeaf show_dcmb; //type: boolean
        ydk::YLeaf show_eci; //type: boolean
        ydk::YLeaf show_fmac; //type: boolean
        ydk::YLeaf show_rtp; //type: boolean

}; // Controller::SfeOper::Sfe::Statistics::Location::Asic::CCS::Instance


class Controller::SfeOper::Sfe::Statistics::Location::Asic::DCH : public ydk::Entity
{
    public:
        DCH();
        ~DCH();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::Statistics::Location::Asic::DCH::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::Statistics::Location::Asic::DCH::Instance> > instance;
        
}; // Controller::SfeOper::Sfe::Statistics::Location::Asic::DCH


class Controller::SfeOper::Sfe::Statistics::Location::Asic::DCH::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf rack_num; //type: uint32
        ydk::YLeaf slot_num; //type: uint32
        ydk::YLeaf asic_instance; //type: uint32
        ydk::YLeaf ccs0_unreachabledestinationcellscnt_ovf; //type: boolean
        ydk::YLeaf ccs1_unreachabledestinationcellscnt_ovf; //type: boolean
        ydk::YLeaf ccs0_capturefifodiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_capturefifodiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_cdmalpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_cdmalpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_cdmblpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_cdmblpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_crpparityerrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_crpparityerrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch1_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch2_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch3_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch0_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch1_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch2_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch3_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch0_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch1_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch2_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch3_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch0_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch1_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch2_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch3_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch0_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch1_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch2_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch3_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch0_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch1_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch2_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch3_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch0_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch1_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch2_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch3_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch0_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch1_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch2_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch3_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch0_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch1_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch2_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch3_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch0_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch1_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch2_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch3_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf eci_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf fmac0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac4_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac5_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac6_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac7_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac8_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac9_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac10_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac11_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac12_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac13_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac14_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac15_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac16_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac17_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac18_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac19_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac20_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac21_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac22_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac23_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac24_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac25_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac26_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac27_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac28_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac29_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac30_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac31_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac4_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac5_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac6_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac7_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac8_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac9_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac10_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac11_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac12_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac13_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac14_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac15_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac16_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac17_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac18_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac19_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac20_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac21_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac22_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac23_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac24_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac25_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac26_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac27_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac28_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac29_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac30_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac31_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_unreachabledestinationcellscnt; //type: uint64
        ydk::YLeaf ccs1_unreachabledestinationcellscnt; //type: uint64
        ydk::YLeaf ccs0_capturefifodiscardcnt; //type: uint64
        ydk::YLeaf ccs1_capturefifodiscardcnt; //type: uint64
        ydk::YLeaf ccs0_cdmalpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs1_cdmalpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs0_cdmblpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs1_cdmblpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs0_crpparityerrcnt; //type: uint64
        ydk::YLeaf ccs1_crpparityerrcnt; //type: uint64
        ydk::YLeaf ccs0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf ccs1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf ccs0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf ccs1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch0_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch1_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch2_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch3_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch0_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch1_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch2_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch3_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch0_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch1_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch2_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch3_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch0_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch1_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch2_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch3_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch0_unreachdestcntp; //type: uint64
        ydk::YLeaf dch1_unreachdestcntp; //type: uint64
        ydk::YLeaf dch2_unreachdestcntp; //type: uint64
        ydk::YLeaf dch3_unreachdestcntp; //type: uint64
        ydk::YLeaf dch0_unreachdestcnts; //type: uint64
        ydk::YLeaf dch1_unreachdestcnts; //type: uint64
        ydk::YLeaf dch2_unreachdestcnts; //type: uint64
        ydk::YLeaf dch3_unreachdestcnts; //type: uint64
        ydk::YLeaf dch0_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch1_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch2_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch3_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch0_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch1_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch2_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch3_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch0_errorfiltercntap; //type: uint64
        ydk::YLeaf dch1_errorfiltercntap; //type: uint64
        ydk::YLeaf dch2_errorfiltercntap; //type: uint64
        ydk::YLeaf dch3_errorfiltercntap; //type: uint64
        ydk::YLeaf dch0_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch1_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch2_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch3_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch0_errorfiltercntas; //type: uint64
        ydk::YLeaf dch1_errorfiltercntas; //type: uint64
        ydk::YLeaf dch2_errorfiltercntas; //type: uint64
        ydk::YLeaf dch3_errorfiltercntas; //type: uint64
        ydk::YLeaf dch0_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch1_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch2_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch3_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch0_droplowpricntp; //type: uint64
        ydk::YLeaf dch1_droplowpricntp; //type: uint64
        ydk::YLeaf dch2_droplowpricntp; //type: uint64
        ydk::YLeaf dch3_droplowpricntp; //type: uint64
        ydk::YLeaf dch0_droplowpricnts; //type: uint64
        ydk::YLeaf dch1_droplowpricnts; //type: uint64
        ydk::YLeaf dch2_droplowpricnts; //type: uint64
        ydk::YLeaf dch3_droplowpricnts; //type: uint64
        ydk::YLeaf dch0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch0_parityerrcnt; //type: uint64
        ydk::YLeaf dch1_parityerrcnt; //type: uint64
        ydk::YLeaf dch2_parityerrcnt; //type: uint64
        ydk::YLeaf dch3_parityerrcnt; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl0_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl1_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl2_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl3_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl0_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl1_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl2_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl3_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl0_parityerrcnt; //type: uint64
        ydk::YLeaf dcl1_parityerrcnt; //type: uint64
        ydk::YLeaf dcl2_parityerrcnt; //type: uint64
        ydk::YLeaf dcl3_parityerrcnt; //type: uint64
        ydk::YLeaf dcl0_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl1_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl2_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl3_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl0_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl1_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl2_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl3_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcma1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcma0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcma1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcma0_parityerrcnt; //type: uint64
        ydk::YLeaf dcma1_parityerrcnt; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcmb1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcmb0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcmb1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcmb0_parityerrcnt; //type: uint64
        ydk::YLeaf dcmb1_parityerrcnt; //type: uint64
        ydk::YLeaf eci_parityerrcnt; //type: uint64
        ydk::YLeaf rtp_ecc_1berrcnt; //type: uint64
        ydk::YLeaf rtp_ecc_2berrcnt; //type: uint64
        ydk::YLeaf rtp_parityerrcnt; //type: uint64
        ydk::YLeaf fmac0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac4_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac5_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac6_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac7_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac8_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac9_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac10_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac11_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac12_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac13_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac14_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac15_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac16_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac17_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac18_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac19_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac20_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac21_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac22_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac23_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac24_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac25_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac26_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac27_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac28_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac29_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac30_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac31_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac4_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac5_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac6_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac7_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac8_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac9_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac10_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac11_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac12_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac13_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac14_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac15_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac16_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac17_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac18_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac19_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac20_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac21_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac22_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac23_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac24_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac25_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac26_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac27_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac28_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac29_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac30_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac31_ecc_2berrcnt; //type: uint64
        ydk::YLeaf is_show; //type: boolean
        ydk::YLeaf show_ccs; //type: boolean
        ydk::YLeaf show_dch; //type: boolean
        ydk::YLeaf show_dcl; //type: boolean
        ydk::YLeaf show_dcma; //type: boolean
        ydk::YLeaf show_dcmb; //type: boolean
        ydk::YLeaf show_eci; //type: boolean
        ydk::YLeaf show_fmac; //type: boolean
        ydk::YLeaf show_rtp; //type: boolean

}; // Controller::SfeOper::Sfe::Statistics::Location::Asic::DCH::Instance


class Controller::SfeOper::Sfe::Statistics::Location::Asic::DCl : public ydk::Entity
{
    public:
        DCl();
        ~DCl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::Statistics::Location::Asic::DCl::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::Statistics::Location::Asic::DCl::Instance> > instance;
        
}; // Controller::SfeOper::Sfe::Statistics::Location::Asic::DCl


class Controller::SfeOper::Sfe::Statistics::Location::Asic::DCl::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf rack_num; //type: uint32
        ydk::YLeaf slot_num; //type: uint32
        ydk::YLeaf asic_instance; //type: uint32
        ydk::YLeaf ccs0_unreachabledestinationcellscnt_ovf; //type: boolean
        ydk::YLeaf ccs1_unreachabledestinationcellscnt_ovf; //type: boolean
        ydk::YLeaf ccs0_capturefifodiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_capturefifodiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_cdmalpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_cdmalpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_cdmblpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_cdmblpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_crpparityerrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_crpparityerrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch1_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch2_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch3_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch0_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch1_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch2_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch3_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch0_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch1_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch2_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch3_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch0_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch1_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch2_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch3_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch0_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch1_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch2_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch3_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch0_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch1_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch2_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch3_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch0_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch1_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch2_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch3_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch0_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch1_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch2_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch3_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch0_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch1_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch2_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch3_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch0_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch1_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch2_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch3_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf eci_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf fmac0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac4_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac5_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac6_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac7_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac8_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac9_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac10_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac11_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac12_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac13_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac14_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac15_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac16_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac17_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac18_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac19_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac20_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac21_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac22_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac23_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac24_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac25_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac26_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac27_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac28_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac29_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac30_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac31_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac4_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac5_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac6_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac7_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac8_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac9_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac10_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac11_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac12_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac13_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac14_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac15_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac16_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac17_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac18_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac19_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac20_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac21_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac22_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac23_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac24_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac25_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac26_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac27_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac28_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac29_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac30_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac31_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_unreachabledestinationcellscnt; //type: uint64
        ydk::YLeaf ccs1_unreachabledestinationcellscnt; //type: uint64
        ydk::YLeaf ccs0_capturefifodiscardcnt; //type: uint64
        ydk::YLeaf ccs1_capturefifodiscardcnt; //type: uint64
        ydk::YLeaf ccs0_cdmalpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs1_cdmalpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs0_cdmblpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs1_cdmblpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs0_crpparityerrcnt; //type: uint64
        ydk::YLeaf ccs1_crpparityerrcnt; //type: uint64
        ydk::YLeaf ccs0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf ccs1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf ccs0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf ccs1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch0_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch1_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch2_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch3_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch0_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch1_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch2_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch3_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch0_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch1_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch2_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch3_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch0_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch1_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch2_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch3_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch0_unreachdestcntp; //type: uint64
        ydk::YLeaf dch1_unreachdestcntp; //type: uint64
        ydk::YLeaf dch2_unreachdestcntp; //type: uint64
        ydk::YLeaf dch3_unreachdestcntp; //type: uint64
        ydk::YLeaf dch0_unreachdestcnts; //type: uint64
        ydk::YLeaf dch1_unreachdestcnts; //type: uint64
        ydk::YLeaf dch2_unreachdestcnts; //type: uint64
        ydk::YLeaf dch3_unreachdestcnts; //type: uint64
        ydk::YLeaf dch0_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch1_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch2_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch3_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch0_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch1_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch2_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch3_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch0_errorfiltercntap; //type: uint64
        ydk::YLeaf dch1_errorfiltercntap; //type: uint64
        ydk::YLeaf dch2_errorfiltercntap; //type: uint64
        ydk::YLeaf dch3_errorfiltercntap; //type: uint64
        ydk::YLeaf dch0_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch1_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch2_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch3_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch0_errorfiltercntas; //type: uint64
        ydk::YLeaf dch1_errorfiltercntas; //type: uint64
        ydk::YLeaf dch2_errorfiltercntas; //type: uint64
        ydk::YLeaf dch3_errorfiltercntas; //type: uint64
        ydk::YLeaf dch0_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch1_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch2_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch3_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch0_droplowpricntp; //type: uint64
        ydk::YLeaf dch1_droplowpricntp; //type: uint64
        ydk::YLeaf dch2_droplowpricntp; //type: uint64
        ydk::YLeaf dch3_droplowpricntp; //type: uint64
        ydk::YLeaf dch0_droplowpricnts; //type: uint64
        ydk::YLeaf dch1_droplowpricnts; //type: uint64
        ydk::YLeaf dch2_droplowpricnts; //type: uint64
        ydk::YLeaf dch3_droplowpricnts; //type: uint64
        ydk::YLeaf dch0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch0_parityerrcnt; //type: uint64
        ydk::YLeaf dch1_parityerrcnt; //type: uint64
        ydk::YLeaf dch2_parityerrcnt; //type: uint64
        ydk::YLeaf dch3_parityerrcnt; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl0_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl1_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl2_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl3_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl0_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl1_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl2_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl3_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl0_parityerrcnt; //type: uint64
        ydk::YLeaf dcl1_parityerrcnt; //type: uint64
        ydk::YLeaf dcl2_parityerrcnt; //type: uint64
        ydk::YLeaf dcl3_parityerrcnt; //type: uint64
        ydk::YLeaf dcl0_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl1_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl2_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl3_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl0_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl1_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl2_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl3_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcma1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcma0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcma1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcma0_parityerrcnt; //type: uint64
        ydk::YLeaf dcma1_parityerrcnt; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcmb1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcmb0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcmb1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcmb0_parityerrcnt; //type: uint64
        ydk::YLeaf dcmb1_parityerrcnt; //type: uint64
        ydk::YLeaf eci_parityerrcnt; //type: uint64
        ydk::YLeaf rtp_ecc_1berrcnt; //type: uint64
        ydk::YLeaf rtp_ecc_2berrcnt; //type: uint64
        ydk::YLeaf rtp_parityerrcnt; //type: uint64
        ydk::YLeaf fmac0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac4_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac5_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac6_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac7_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac8_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac9_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac10_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac11_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac12_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac13_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac14_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac15_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac16_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac17_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac18_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac19_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac20_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac21_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac22_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac23_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac24_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac25_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac26_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac27_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac28_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac29_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac30_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac31_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac4_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac5_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac6_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac7_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac8_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac9_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac10_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac11_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac12_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac13_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac14_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac15_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac16_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac17_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac18_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac19_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac20_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac21_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac22_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac23_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac24_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac25_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac26_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac27_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac28_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac29_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac30_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac31_ecc_2berrcnt; //type: uint64
        ydk::YLeaf is_show; //type: boolean
        ydk::YLeaf show_ccs; //type: boolean
        ydk::YLeaf show_dch; //type: boolean
        ydk::YLeaf show_dcl; //type: boolean
        ydk::YLeaf show_dcma; //type: boolean
        ydk::YLeaf show_dcmb; //type: boolean
        ydk::YLeaf show_eci; //type: boolean
        ydk::YLeaf show_fmac; //type: boolean
        ydk::YLeaf show_rtp; //type: boolean

}; // Controller::SfeOper::Sfe::Statistics::Location::Asic::DCl::Instance


class Controller::SfeOper::Sfe::Statistics::Location::Asic::DCMA : public ydk::Entity
{
    public:
        DCMA();
        ~DCMA();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::Statistics::Location::Asic::DCMA::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::Statistics::Location::Asic::DCMA::Instance> > instance;
        
}; // Controller::SfeOper::Sfe::Statistics::Location::Asic::DCMA


class Controller::SfeOper::Sfe::Statistics::Location::Asic::DCMA::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf rack_num; //type: uint32
        ydk::YLeaf slot_num; //type: uint32
        ydk::YLeaf asic_instance; //type: uint32
        ydk::YLeaf ccs0_unreachabledestinationcellscnt_ovf; //type: boolean
        ydk::YLeaf ccs1_unreachabledestinationcellscnt_ovf; //type: boolean
        ydk::YLeaf ccs0_capturefifodiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_capturefifodiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_cdmalpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_cdmalpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_cdmblpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_cdmblpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_crpparityerrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_crpparityerrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch1_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch2_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch3_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch0_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch1_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch2_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch3_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch0_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch1_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch2_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch3_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch0_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch1_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch2_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch3_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch0_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch1_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch2_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch3_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch0_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch1_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch2_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch3_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch0_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch1_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch2_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch3_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch0_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch1_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch2_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch3_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch0_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch1_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch2_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch3_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch0_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch1_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch2_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch3_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf eci_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf fmac0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac4_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac5_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac6_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac7_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac8_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac9_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac10_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac11_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac12_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac13_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac14_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac15_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac16_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac17_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac18_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac19_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac20_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac21_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac22_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac23_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac24_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac25_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac26_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac27_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac28_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac29_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac30_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac31_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac4_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac5_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac6_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac7_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac8_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac9_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac10_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac11_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac12_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac13_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac14_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac15_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac16_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac17_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac18_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac19_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac20_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac21_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac22_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac23_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac24_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac25_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac26_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac27_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac28_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac29_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac30_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac31_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_unreachabledestinationcellscnt; //type: uint64
        ydk::YLeaf ccs1_unreachabledestinationcellscnt; //type: uint64
        ydk::YLeaf ccs0_capturefifodiscardcnt; //type: uint64
        ydk::YLeaf ccs1_capturefifodiscardcnt; //type: uint64
        ydk::YLeaf ccs0_cdmalpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs1_cdmalpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs0_cdmblpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs1_cdmblpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs0_crpparityerrcnt; //type: uint64
        ydk::YLeaf ccs1_crpparityerrcnt; //type: uint64
        ydk::YLeaf ccs0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf ccs1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf ccs0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf ccs1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch0_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch1_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch2_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch3_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch0_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch1_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch2_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch3_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch0_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch1_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch2_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch3_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch0_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch1_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch2_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch3_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch0_unreachdestcntp; //type: uint64
        ydk::YLeaf dch1_unreachdestcntp; //type: uint64
        ydk::YLeaf dch2_unreachdestcntp; //type: uint64
        ydk::YLeaf dch3_unreachdestcntp; //type: uint64
        ydk::YLeaf dch0_unreachdestcnts; //type: uint64
        ydk::YLeaf dch1_unreachdestcnts; //type: uint64
        ydk::YLeaf dch2_unreachdestcnts; //type: uint64
        ydk::YLeaf dch3_unreachdestcnts; //type: uint64
        ydk::YLeaf dch0_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch1_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch2_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch3_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch0_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch1_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch2_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch3_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch0_errorfiltercntap; //type: uint64
        ydk::YLeaf dch1_errorfiltercntap; //type: uint64
        ydk::YLeaf dch2_errorfiltercntap; //type: uint64
        ydk::YLeaf dch3_errorfiltercntap; //type: uint64
        ydk::YLeaf dch0_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch1_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch2_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch3_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch0_errorfiltercntas; //type: uint64
        ydk::YLeaf dch1_errorfiltercntas; //type: uint64
        ydk::YLeaf dch2_errorfiltercntas; //type: uint64
        ydk::YLeaf dch3_errorfiltercntas; //type: uint64
        ydk::YLeaf dch0_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch1_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch2_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch3_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch0_droplowpricntp; //type: uint64
        ydk::YLeaf dch1_droplowpricntp; //type: uint64
        ydk::YLeaf dch2_droplowpricntp; //type: uint64
        ydk::YLeaf dch3_droplowpricntp; //type: uint64
        ydk::YLeaf dch0_droplowpricnts; //type: uint64
        ydk::YLeaf dch1_droplowpricnts; //type: uint64
        ydk::YLeaf dch2_droplowpricnts; //type: uint64
        ydk::YLeaf dch3_droplowpricnts; //type: uint64
        ydk::YLeaf dch0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch0_parityerrcnt; //type: uint64
        ydk::YLeaf dch1_parityerrcnt; //type: uint64
        ydk::YLeaf dch2_parityerrcnt; //type: uint64
        ydk::YLeaf dch3_parityerrcnt; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl0_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl1_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl2_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl3_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl0_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl1_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl2_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl3_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl0_parityerrcnt; //type: uint64
        ydk::YLeaf dcl1_parityerrcnt; //type: uint64
        ydk::YLeaf dcl2_parityerrcnt; //type: uint64
        ydk::YLeaf dcl3_parityerrcnt; //type: uint64
        ydk::YLeaf dcl0_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl1_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl2_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl3_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl0_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl1_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl2_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl3_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcma1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcma0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcma1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcma0_parityerrcnt; //type: uint64
        ydk::YLeaf dcma1_parityerrcnt; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcmb1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcmb0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcmb1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcmb0_parityerrcnt; //type: uint64
        ydk::YLeaf dcmb1_parityerrcnt; //type: uint64
        ydk::YLeaf eci_parityerrcnt; //type: uint64
        ydk::YLeaf rtp_ecc_1berrcnt; //type: uint64
        ydk::YLeaf rtp_ecc_2berrcnt; //type: uint64
        ydk::YLeaf rtp_parityerrcnt; //type: uint64
        ydk::YLeaf fmac0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac4_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac5_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac6_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac7_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac8_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac9_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac10_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac11_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac12_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac13_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac14_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac15_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac16_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac17_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac18_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac19_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac20_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac21_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac22_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac23_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac24_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac25_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac26_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac27_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac28_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac29_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac30_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac31_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac4_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac5_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac6_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac7_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac8_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac9_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac10_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac11_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac12_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac13_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac14_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac15_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac16_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac17_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac18_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac19_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac20_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac21_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac22_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac23_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac24_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac25_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac26_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac27_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac28_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac29_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac30_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac31_ecc_2berrcnt; //type: uint64
        ydk::YLeaf is_show; //type: boolean
        ydk::YLeaf show_ccs; //type: boolean
        ydk::YLeaf show_dch; //type: boolean
        ydk::YLeaf show_dcl; //type: boolean
        ydk::YLeaf show_dcma; //type: boolean
        ydk::YLeaf show_dcmb; //type: boolean
        ydk::YLeaf show_eci; //type: boolean
        ydk::YLeaf show_fmac; //type: boolean
        ydk::YLeaf show_rtp; //type: boolean

}; // Controller::SfeOper::Sfe::Statistics::Location::Asic::DCMA::Instance


class Controller::SfeOper::Sfe::Statistics::Location::Asic::DCMB : public ydk::Entity
{
    public:
        DCMB();
        ~DCMB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::Statistics::Location::Asic::DCMB::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::Statistics::Location::Asic::DCMB::Instance> > instance;
        
}; // Controller::SfeOper::Sfe::Statistics::Location::Asic::DCMB


class Controller::SfeOper::Sfe::Statistics::Location::Asic::DCMB::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf rack_num; //type: uint32
        ydk::YLeaf slot_num; //type: uint32
        ydk::YLeaf asic_instance; //type: uint32
        ydk::YLeaf ccs0_unreachabledestinationcellscnt_ovf; //type: boolean
        ydk::YLeaf ccs1_unreachabledestinationcellscnt_ovf; //type: boolean
        ydk::YLeaf ccs0_capturefifodiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_capturefifodiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_cdmalpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_cdmalpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_cdmblpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_cdmblpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_crpparityerrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_crpparityerrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch1_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch2_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch3_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch0_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch1_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch2_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch3_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch0_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch1_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch2_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch3_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch0_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch1_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch2_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch3_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch0_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch1_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch2_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch3_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch0_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch1_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch2_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch3_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch0_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch1_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch2_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch3_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch0_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch1_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch2_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch3_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch0_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch1_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch2_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch3_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch0_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch1_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch2_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch3_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf eci_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf fmac0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac4_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac5_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac6_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac7_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac8_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac9_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac10_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac11_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac12_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac13_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac14_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac15_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac16_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac17_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac18_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac19_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac20_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac21_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac22_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac23_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac24_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac25_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac26_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac27_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac28_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac29_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac30_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac31_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac4_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac5_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac6_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac7_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac8_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac9_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac10_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac11_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac12_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac13_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac14_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac15_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac16_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac17_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac18_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac19_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac20_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac21_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac22_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac23_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac24_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac25_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac26_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac27_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac28_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac29_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac30_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac31_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_unreachabledestinationcellscnt; //type: uint64
        ydk::YLeaf ccs1_unreachabledestinationcellscnt; //type: uint64
        ydk::YLeaf ccs0_capturefifodiscardcnt; //type: uint64
        ydk::YLeaf ccs1_capturefifodiscardcnt; //type: uint64
        ydk::YLeaf ccs0_cdmalpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs1_cdmalpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs0_cdmblpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs1_cdmblpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs0_crpparityerrcnt; //type: uint64
        ydk::YLeaf ccs1_crpparityerrcnt; //type: uint64
        ydk::YLeaf ccs0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf ccs1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf ccs0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf ccs1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch0_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch1_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch2_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch3_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch0_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch1_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch2_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch3_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch0_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch1_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch2_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch3_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch0_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch1_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch2_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch3_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch0_unreachdestcntp; //type: uint64
        ydk::YLeaf dch1_unreachdestcntp; //type: uint64
        ydk::YLeaf dch2_unreachdestcntp; //type: uint64
        ydk::YLeaf dch3_unreachdestcntp; //type: uint64
        ydk::YLeaf dch0_unreachdestcnts; //type: uint64
        ydk::YLeaf dch1_unreachdestcnts; //type: uint64
        ydk::YLeaf dch2_unreachdestcnts; //type: uint64
        ydk::YLeaf dch3_unreachdestcnts; //type: uint64
        ydk::YLeaf dch0_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch1_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch2_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch3_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch0_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch1_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch2_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch3_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch0_errorfiltercntap; //type: uint64
        ydk::YLeaf dch1_errorfiltercntap; //type: uint64
        ydk::YLeaf dch2_errorfiltercntap; //type: uint64
        ydk::YLeaf dch3_errorfiltercntap; //type: uint64
        ydk::YLeaf dch0_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch1_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch2_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch3_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch0_errorfiltercntas; //type: uint64
        ydk::YLeaf dch1_errorfiltercntas; //type: uint64
        ydk::YLeaf dch2_errorfiltercntas; //type: uint64
        ydk::YLeaf dch3_errorfiltercntas; //type: uint64
        ydk::YLeaf dch0_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch1_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch2_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch3_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch0_droplowpricntp; //type: uint64
        ydk::YLeaf dch1_droplowpricntp; //type: uint64
        ydk::YLeaf dch2_droplowpricntp; //type: uint64
        ydk::YLeaf dch3_droplowpricntp; //type: uint64
        ydk::YLeaf dch0_droplowpricnts; //type: uint64
        ydk::YLeaf dch1_droplowpricnts; //type: uint64
        ydk::YLeaf dch2_droplowpricnts; //type: uint64
        ydk::YLeaf dch3_droplowpricnts; //type: uint64
        ydk::YLeaf dch0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch0_parityerrcnt; //type: uint64
        ydk::YLeaf dch1_parityerrcnt; //type: uint64
        ydk::YLeaf dch2_parityerrcnt; //type: uint64
        ydk::YLeaf dch3_parityerrcnt; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl0_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl1_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl2_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl3_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl0_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl1_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl2_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl3_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl0_parityerrcnt; //type: uint64
        ydk::YLeaf dcl1_parityerrcnt; //type: uint64
        ydk::YLeaf dcl2_parityerrcnt; //type: uint64
        ydk::YLeaf dcl3_parityerrcnt; //type: uint64
        ydk::YLeaf dcl0_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl1_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl2_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl3_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl0_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl1_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl2_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl3_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcma1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcma0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcma1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcma0_parityerrcnt; //type: uint64
        ydk::YLeaf dcma1_parityerrcnt; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcmb1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcmb0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcmb1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcmb0_parityerrcnt; //type: uint64
        ydk::YLeaf dcmb1_parityerrcnt; //type: uint64
        ydk::YLeaf eci_parityerrcnt; //type: uint64
        ydk::YLeaf rtp_ecc_1berrcnt; //type: uint64
        ydk::YLeaf rtp_ecc_2berrcnt; //type: uint64
        ydk::YLeaf rtp_parityerrcnt; //type: uint64
        ydk::YLeaf fmac0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac4_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac5_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac6_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac7_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac8_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac9_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac10_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac11_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac12_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac13_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac14_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac15_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac16_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac17_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac18_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac19_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac20_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac21_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac22_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac23_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac24_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac25_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac26_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac27_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac28_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac29_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac30_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac31_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac4_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac5_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac6_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac7_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac8_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac9_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac10_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac11_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac12_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac13_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac14_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac15_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac16_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac17_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac18_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac19_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac20_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac21_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac22_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac23_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac24_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac25_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac26_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac27_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac28_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac29_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac30_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac31_ecc_2berrcnt; //type: uint64
        ydk::YLeaf is_show; //type: boolean
        ydk::YLeaf show_ccs; //type: boolean
        ydk::YLeaf show_dch; //type: boolean
        ydk::YLeaf show_dcl; //type: boolean
        ydk::YLeaf show_dcma; //type: boolean
        ydk::YLeaf show_dcmb; //type: boolean
        ydk::YLeaf show_eci; //type: boolean
        ydk::YLeaf show_fmac; //type: boolean
        ydk::YLeaf show_rtp; //type: boolean

}; // Controller::SfeOper::Sfe::Statistics::Location::Asic::DCMB::Instance


class Controller::SfeOper::Sfe::Statistics::Location::Asic::ECI : public ydk::Entity
{
    public:
        ECI();
        ~ECI();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::Statistics::Location::Asic::ECI::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::Statistics::Location::Asic::ECI::Instance> > instance;
        
}; // Controller::SfeOper::Sfe::Statistics::Location::Asic::ECI


class Controller::SfeOper::Sfe::Statistics::Location::Asic::ECI::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf rack_num; //type: uint32
        ydk::YLeaf slot_num; //type: uint32
        ydk::YLeaf asic_instance; //type: uint32
        ydk::YLeaf ccs0_unreachabledestinationcellscnt_ovf; //type: boolean
        ydk::YLeaf ccs1_unreachabledestinationcellscnt_ovf; //type: boolean
        ydk::YLeaf ccs0_capturefifodiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_capturefifodiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_cdmalpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_cdmalpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_cdmblpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_cdmblpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_crpparityerrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_crpparityerrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch1_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch2_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch3_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch0_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch1_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch2_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch3_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch0_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch1_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch2_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch3_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch0_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch1_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch2_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch3_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch0_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch1_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch2_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch3_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch0_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch1_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch2_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch3_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch0_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch1_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch2_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch3_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch0_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch1_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch2_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch3_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch0_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch1_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch2_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch3_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch0_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch1_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch2_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch3_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf eci_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf fmac0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac4_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac5_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac6_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac7_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac8_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac9_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac10_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac11_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac12_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac13_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac14_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac15_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac16_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac17_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac18_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac19_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac20_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac21_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac22_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac23_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac24_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac25_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac26_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac27_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac28_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac29_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac30_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac31_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac4_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac5_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac6_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac7_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac8_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac9_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac10_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac11_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac12_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac13_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac14_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac15_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac16_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac17_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac18_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac19_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac20_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac21_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac22_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac23_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac24_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac25_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac26_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac27_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac28_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac29_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac30_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac31_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_unreachabledestinationcellscnt; //type: uint64
        ydk::YLeaf ccs1_unreachabledestinationcellscnt; //type: uint64
        ydk::YLeaf ccs0_capturefifodiscardcnt; //type: uint64
        ydk::YLeaf ccs1_capturefifodiscardcnt; //type: uint64
        ydk::YLeaf ccs0_cdmalpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs1_cdmalpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs0_cdmblpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs1_cdmblpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs0_crpparityerrcnt; //type: uint64
        ydk::YLeaf ccs1_crpparityerrcnt; //type: uint64
        ydk::YLeaf ccs0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf ccs1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf ccs0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf ccs1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch0_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch1_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch2_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch3_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch0_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch1_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch2_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch3_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch0_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch1_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch2_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch3_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch0_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch1_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch2_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch3_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch0_unreachdestcntp; //type: uint64
        ydk::YLeaf dch1_unreachdestcntp; //type: uint64
        ydk::YLeaf dch2_unreachdestcntp; //type: uint64
        ydk::YLeaf dch3_unreachdestcntp; //type: uint64
        ydk::YLeaf dch0_unreachdestcnts; //type: uint64
        ydk::YLeaf dch1_unreachdestcnts; //type: uint64
        ydk::YLeaf dch2_unreachdestcnts; //type: uint64
        ydk::YLeaf dch3_unreachdestcnts; //type: uint64
        ydk::YLeaf dch0_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch1_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch2_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch3_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch0_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch1_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch2_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch3_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch0_errorfiltercntap; //type: uint64
        ydk::YLeaf dch1_errorfiltercntap; //type: uint64
        ydk::YLeaf dch2_errorfiltercntap; //type: uint64
        ydk::YLeaf dch3_errorfiltercntap; //type: uint64
        ydk::YLeaf dch0_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch1_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch2_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch3_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch0_errorfiltercntas; //type: uint64
        ydk::YLeaf dch1_errorfiltercntas; //type: uint64
        ydk::YLeaf dch2_errorfiltercntas; //type: uint64
        ydk::YLeaf dch3_errorfiltercntas; //type: uint64
        ydk::YLeaf dch0_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch1_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch2_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch3_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch0_droplowpricntp; //type: uint64
        ydk::YLeaf dch1_droplowpricntp; //type: uint64
        ydk::YLeaf dch2_droplowpricntp; //type: uint64
        ydk::YLeaf dch3_droplowpricntp; //type: uint64
        ydk::YLeaf dch0_droplowpricnts; //type: uint64
        ydk::YLeaf dch1_droplowpricnts; //type: uint64
        ydk::YLeaf dch2_droplowpricnts; //type: uint64
        ydk::YLeaf dch3_droplowpricnts; //type: uint64
        ydk::YLeaf dch0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch0_parityerrcnt; //type: uint64
        ydk::YLeaf dch1_parityerrcnt; //type: uint64
        ydk::YLeaf dch2_parityerrcnt; //type: uint64
        ydk::YLeaf dch3_parityerrcnt; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl0_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl1_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl2_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl3_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl0_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl1_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl2_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl3_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl0_parityerrcnt; //type: uint64
        ydk::YLeaf dcl1_parityerrcnt; //type: uint64
        ydk::YLeaf dcl2_parityerrcnt; //type: uint64
        ydk::YLeaf dcl3_parityerrcnt; //type: uint64
        ydk::YLeaf dcl0_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl1_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl2_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl3_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl0_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl1_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl2_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl3_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcma1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcma0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcma1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcma0_parityerrcnt; //type: uint64
        ydk::YLeaf dcma1_parityerrcnt; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcmb1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcmb0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcmb1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcmb0_parityerrcnt; //type: uint64
        ydk::YLeaf dcmb1_parityerrcnt; //type: uint64
        ydk::YLeaf eci_parityerrcnt; //type: uint64
        ydk::YLeaf rtp_ecc_1berrcnt; //type: uint64
        ydk::YLeaf rtp_ecc_2berrcnt; //type: uint64
        ydk::YLeaf rtp_parityerrcnt; //type: uint64
        ydk::YLeaf fmac0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac4_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac5_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac6_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac7_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac8_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac9_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac10_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac11_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac12_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac13_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac14_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac15_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac16_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac17_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac18_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac19_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac20_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac21_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac22_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac23_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac24_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac25_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac26_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac27_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac28_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac29_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac30_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac31_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac4_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac5_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac6_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac7_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac8_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac9_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac10_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac11_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac12_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac13_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac14_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac15_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac16_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac17_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac18_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac19_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac20_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac21_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac22_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac23_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac24_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac25_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac26_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac27_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac28_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac29_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac30_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac31_ecc_2berrcnt; //type: uint64
        ydk::YLeaf is_show; //type: boolean
        ydk::YLeaf show_ccs; //type: boolean
        ydk::YLeaf show_dch; //type: boolean
        ydk::YLeaf show_dcl; //type: boolean
        ydk::YLeaf show_dcma; //type: boolean
        ydk::YLeaf show_dcmb; //type: boolean
        ydk::YLeaf show_eci; //type: boolean
        ydk::YLeaf show_fmac; //type: boolean
        ydk::YLeaf show_rtp; //type: boolean

}; // Controller::SfeOper::Sfe::Statistics::Location::Asic::ECI::Instance


class Controller::SfeOper::Sfe::Statistics::Location::Asic::FMAC : public ydk::Entity
{
    public:
        FMAC();
        ~FMAC();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::Statistics::Location::Asic::FMAC::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::Statistics::Location::Asic::FMAC::Instance> > instance;
        
}; // Controller::SfeOper::Sfe::Statistics::Location::Asic::FMAC


class Controller::SfeOper::Sfe::Statistics::Location::Asic::FMAC::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf rack_num; //type: uint32
        ydk::YLeaf slot_num; //type: uint32
        ydk::YLeaf asic_instance; //type: uint32
        ydk::YLeaf ccs0_unreachabledestinationcellscnt_ovf; //type: boolean
        ydk::YLeaf ccs1_unreachabledestinationcellscnt_ovf; //type: boolean
        ydk::YLeaf ccs0_capturefifodiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_capturefifodiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_cdmalpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_cdmalpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_cdmblpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_cdmblpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_crpparityerrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_crpparityerrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch1_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch2_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch3_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch0_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch1_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch2_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch3_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch0_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch1_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch2_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch3_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch0_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch1_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch2_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch3_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch0_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch1_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch2_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch3_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch0_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch1_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch2_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch3_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch0_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch1_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch2_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch3_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch0_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch1_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch2_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch3_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch0_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch1_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch2_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch3_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch0_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch1_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch2_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch3_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf eci_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf fmac0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac4_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac5_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac6_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac7_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac8_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac9_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac10_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac11_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac12_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac13_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac14_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac15_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac16_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac17_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac18_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac19_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac20_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac21_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac22_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac23_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac24_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac25_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac26_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac27_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac28_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac29_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac30_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac31_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac4_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac5_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac6_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac7_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac8_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac9_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac10_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac11_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac12_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac13_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac14_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac15_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac16_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac17_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac18_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac19_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac20_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac21_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac22_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac23_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac24_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac25_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac26_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac27_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac28_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac29_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac30_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac31_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_unreachabledestinationcellscnt; //type: uint64
        ydk::YLeaf ccs1_unreachabledestinationcellscnt; //type: uint64
        ydk::YLeaf ccs0_capturefifodiscardcnt; //type: uint64
        ydk::YLeaf ccs1_capturefifodiscardcnt; //type: uint64
        ydk::YLeaf ccs0_cdmalpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs1_cdmalpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs0_cdmblpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs1_cdmblpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs0_crpparityerrcnt; //type: uint64
        ydk::YLeaf ccs1_crpparityerrcnt; //type: uint64
        ydk::YLeaf ccs0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf ccs1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf ccs0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf ccs1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch0_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch1_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch2_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch3_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch0_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch1_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch2_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch3_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch0_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch1_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch2_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch3_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch0_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch1_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch2_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch3_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch0_unreachdestcntp; //type: uint64
        ydk::YLeaf dch1_unreachdestcntp; //type: uint64
        ydk::YLeaf dch2_unreachdestcntp; //type: uint64
        ydk::YLeaf dch3_unreachdestcntp; //type: uint64
        ydk::YLeaf dch0_unreachdestcnts; //type: uint64
        ydk::YLeaf dch1_unreachdestcnts; //type: uint64
        ydk::YLeaf dch2_unreachdestcnts; //type: uint64
        ydk::YLeaf dch3_unreachdestcnts; //type: uint64
        ydk::YLeaf dch0_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch1_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch2_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch3_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch0_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch1_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch2_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch3_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch0_errorfiltercntap; //type: uint64
        ydk::YLeaf dch1_errorfiltercntap; //type: uint64
        ydk::YLeaf dch2_errorfiltercntap; //type: uint64
        ydk::YLeaf dch3_errorfiltercntap; //type: uint64
        ydk::YLeaf dch0_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch1_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch2_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch3_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch0_errorfiltercntas; //type: uint64
        ydk::YLeaf dch1_errorfiltercntas; //type: uint64
        ydk::YLeaf dch2_errorfiltercntas; //type: uint64
        ydk::YLeaf dch3_errorfiltercntas; //type: uint64
        ydk::YLeaf dch0_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch1_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch2_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch3_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch0_droplowpricntp; //type: uint64
        ydk::YLeaf dch1_droplowpricntp; //type: uint64
        ydk::YLeaf dch2_droplowpricntp; //type: uint64
        ydk::YLeaf dch3_droplowpricntp; //type: uint64
        ydk::YLeaf dch0_droplowpricnts; //type: uint64
        ydk::YLeaf dch1_droplowpricnts; //type: uint64
        ydk::YLeaf dch2_droplowpricnts; //type: uint64
        ydk::YLeaf dch3_droplowpricnts; //type: uint64
        ydk::YLeaf dch0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch0_parityerrcnt; //type: uint64
        ydk::YLeaf dch1_parityerrcnt; //type: uint64
        ydk::YLeaf dch2_parityerrcnt; //type: uint64
        ydk::YLeaf dch3_parityerrcnt; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl0_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl1_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl2_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl3_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl0_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl1_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl2_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl3_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl0_parityerrcnt; //type: uint64
        ydk::YLeaf dcl1_parityerrcnt; //type: uint64
        ydk::YLeaf dcl2_parityerrcnt; //type: uint64
        ydk::YLeaf dcl3_parityerrcnt; //type: uint64
        ydk::YLeaf dcl0_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl1_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl2_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl3_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl0_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl1_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl2_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl3_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcma1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcma0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcma1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcma0_parityerrcnt; //type: uint64
        ydk::YLeaf dcma1_parityerrcnt; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcmb1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcmb0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcmb1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcmb0_parityerrcnt; //type: uint64
        ydk::YLeaf dcmb1_parityerrcnt; //type: uint64
        ydk::YLeaf eci_parityerrcnt; //type: uint64
        ydk::YLeaf rtp_ecc_1berrcnt; //type: uint64
        ydk::YLeaf rtp_ecc_2berrcnt; //type: uint64
        ydk::YLeaf rtp_parityerrcnt; //type: uint64
        ydk::YLeaf fmac0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac4_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac5_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac6_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac7_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac8_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac9_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac10_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac11_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac12_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac13_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac14_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac15_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac16_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac17_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac18_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac19_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac20_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac21_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac22_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac23_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac24_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac25_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac26_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac27_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac28_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac29_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac30_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac31_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac4_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac5_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac6_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac7_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac8_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac9_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac10_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac11_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac12_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac13_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac14_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac15_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac16_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac17_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac18_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac19_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac20_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac21_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac22_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac23_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac24_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac25_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac26_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac27_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac28_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac29_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac30_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac31_ecc_2berrcnt; //type: uint64
        ydk::YLeaf is_show; //type: boolean
        ydk::YLeaf show_ccs; //type: boolean
        ydk::YLeaf show_dch; //type: boolean
        ydk::YLeaf show_dcl; //type: boolean
        ydk::YLeaf show_dcma; //type: boolean
        ydk::YLeaf show_dcmb; //type: boolean
        ydk::YLeaf show_eci; //type: boolean
        ydk::YLeaf show_fmac; //type: boolean
        ydk::YLeaf show_rtp; //type: boolean

}; // Controller::SfeOper::Sfe::Statistics::Location::Asic::FMAC::Instance


class Controller::SfeOper::Sfe::Statistics::Location::Asic::GCK : public ydk::Entity
{
    public:
        GCK();
        ~GCK();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::Statistics::Location::Asic::GCK::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::Statistics::Location::Asic::GCK::Instance> > instance;
        
}; // Controller::SfeOper::Sfe::Statistics::Location::Asic::GCK


class Controller::SfeOper::Sfe::Statistics::Location::Asic::GCK::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf rack_num; //type: uint32
        ydk::YLeaf slot_num; //type: uint32
        ydk::YLeaf asic_instance; //type: uint32
        ydk::YLeaf ccs0_unreachabledestinationcellscnt_ovf; //type: boolean
        ydk::YLeaf ccs1_unreachabledestinationcellscnt_ovf; //type: boolean
        ydk::YLeaf ccs0_capturefifodiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_capturefifodiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_cdmalpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_cdmalpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_cdmblpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_cdmblpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_crpparityerrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_crpparityerrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch1_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch2_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch3_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch0_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch1_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch2_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch3_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch0_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch1_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch2_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch3_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch0_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch1_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch2_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch3_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch0_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch1_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch2_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch3_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch0_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch1_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch2_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch3_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch0_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch1_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch2_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch3_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch0_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch1_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch2_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch3_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch0_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch1_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch2_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch3_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch0_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch1_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch2_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch3_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf eci_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf fmac0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac4_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac5_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac6_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac7_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac8_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac9_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac10_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac11_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac12_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac13_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac14_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac15_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac16_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac17_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac18_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac19_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac20_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac21_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac22_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac23_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac24_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac25_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac26_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac27_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac28_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac29_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac30_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac31_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac4_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac5_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac6_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac7_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac8_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac9_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac10_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac11_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac12_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac13_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac14_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac15_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac16_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac17_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac18_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac19_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac20_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac21_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac22_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac23_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac24_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac25_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac26_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac27_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac28_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac29_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac30_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac31_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_unreachabledestinationcellscnt; //type: uint64
        ydk::YLeaf ccs1_unreachabledestinationcellscnt; //type: uint64
        ydk::YLeaf ccs0_capturefifodiscardcnt; //type: uint64
        ydk::YLeaf ccs1_capturefifodiscardcnt; //type: uint64
        ydk::YLeaf ccs0_cdmalpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs1_cdmalpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs0_cdmblpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs1_cdmblpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs0_crpparityerrcnt; //type: uint64
        ydk::YLeaf ccs1_crpparityerrcnt; //type: uint64
        ydk::YLeaf ccs0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf ccs1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf ccs0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf ccs1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch0_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch1_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch2_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch3_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch0_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch1_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch2_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch3_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch0_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch1_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch2_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch3_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch0_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch1_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch2_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch3_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch0_unreachdestcntp; //type: uint64
        ydk::YLeaf dch1_unreachdestcntp; //type: uint64
        ydk::YLeaf dch2_unreachdestcntp; //type: uint64
        ydk::YLeaf dch3_unreachdestcntp; //type: uint64
        ydk::YLeaf dch0_unreachdestcnts; //type: uint64
        ydk::YLeaf dch1_unreachdestcnts; //type: uint64
        ydk::YLeaf dch2_unreachdestcnts; //type: uint64
        ydk::YLeaf dch3_unreachdestcnts; //type: uint64
        ydk::YLeaf dch0_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch1_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch2_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch3_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch0_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch1_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch2_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch3_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch0_errorfiltercntap; //type: uint64
        ydk::YLeaf dch1_errorfiltercntap; //type: uint64
        ydk::YLeaf dch2_errorfiltercntap; //type: uint64
        ydk::YLeaf dch3_errorfiltercntap; //type: uint64
        ydk::YLeaf dch0_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch1_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch2_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch3_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch0_errorfiltercntas; //type: uint64
        ydk::YLeaf dch1_errorfiltercntas; //type: uint64
        ydk::YLeaf dch2_errorfiltercntas; //type: uint64
        ydk::YLeaf dch3_errorfiltercntas; //type: uint64
        ydk::YLeaf dch0_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch1_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch2_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch3_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch0_droplowpricntp; //type: uint64
        ydk::YLeaf dch1_droplowpricntp; //type: uint64
        ydk::YLeaf dch2_droplowpricntp; //type: uint64
        ydk::YLeaf dch3_droplowpricntp; //type: uint64
        ydk::YLeaf dch0_droplowpricnts; //type: uint64
        ydk::YLeaf dch1_droplowpricnts; //type: uint64
        ydk::YLeaf dch2_droplowpricnts; //type: uint64
        ydk::YLeaf dch3_droplowpricnts; //type: uint64
        ydk::YLeaf dch0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch0_parityerrcnt; //type: uint64
        ydk::YLeaf dch1_parityerrcnt; //type: uint64
        ydk::YLeaf dch2_parityerrcnt; //type: uint64
        ydk::YLeaf dch3_parityerrcnt; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl0_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl1_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl2_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl3_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl0_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl1_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl2_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl3_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl0_parityerrcnt; //type: uint64
        ydk::YLeaf dcl1_parityerrcnt; //type: uint64
        ydk::YLeaf dcl2_parityerrcnt; //type: uint64
        ydk::YLeaf dcl3_parityerrcnt; //type: uint64
        ydk::YLeaf dcl0_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl1_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl2_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl3_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl0_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl1_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl2_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl3_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcma1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcma0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcma1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcma0_parityerrcnt; //type: uint64
        ydk::YLeaf dcma1_parityerrcnt; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcmb1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcmb0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcmb1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcmb0_parityerrcnt; //type: uint64
        ydk::YLeaf dcmb1_parityerrcnt; //type: uint64
        ydk::YLeaf eci_parityerrcnt; //type: uint64
        ydk::YLeaf rtp_ecc_1berrcnt; //type: uint64
        ydk::YLeaf rtp_ecc_2berrcnt; //type: uint64
        ydk::YLeaf rtp_parityerrcnt; //type: uint64
        ydk::YLeaf fmac0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac4_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac5_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac6_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac7_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac8_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac9_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac10_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac11_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac12_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac13_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac14_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac15_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac16_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac17_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac18_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac19_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac20_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac21_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac22_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac23_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac24_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac25_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac26_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac27_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac28_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac29_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac30_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac31_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac4_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac5_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac6_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac7_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac8_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac9_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac10_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac11_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac12_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac13_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac14_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac15_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac16_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac17_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac18_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac19_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac20_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac21_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac22_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac23_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac24_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac25_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac26_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac27_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac28_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac29_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac30_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac31_ecc_2berrcnt; //type: uint64
        ydk::YLeaf is_show; //type: boolean
        ydk::YLeaf show_ccs; //type: boolean
        ydk::YLeaf show_dch; //type: boolean
        ydk::YLeaf show_dcl; //type: boolean
        ydk::YLeaf show_dcma; //type: boolean
        ydk::YLeaf show_dcmb; //type: boolean
        ydk::YLeaf show_eci; //type: boolean
        ydk::YLeaf show_fmac; //type: boolean
        ydk::YLeaf show_rtp; //type: boolean

}; // Controller::SfeOper::Sfe::Statistics::Location::Asic::GCK::Instance


class Controller::SfeOper::Sfe::Statistics::Location::Asic::RTP : public ydk::Entity
{
    public:
        RTP();
        ~RTP();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::Statistics::Location::Asic::RTP::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::Statistics::Location::Asic::RTP::Instance> > instance;
        
}; // Controller::SfeOper::Sfe::Statistics::Location::Asic::RTP


class Controller::SfeOper::Sfe::Statistics::Location::Asic::RTP::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf rack_num; //type: uint32
        ydk::YLeaf slot_num; //type: uint32
        ydk::YLeaf asic_instance; //type: uint32
        ydk::YLeaf ccs0_unreachabledestinationcellscnt_ovf; //type: boolean
        ydk::YLeaf ccs1_unreachabledestinationcellscnt_ovf; //type: boolean
        ydk::YLeaf ccs0_capturefifodiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_capturefifodiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_cdmalpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_cdmalpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_cdmblpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_cdmblpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_crpparityerrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_crpparityerrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch1_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch2_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch3_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch0_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch1_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch2_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch3_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch0_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch1_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch2_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch3_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch0_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch1_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch2_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch3_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch0_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch1_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch2_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch3_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch0_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch1_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch2_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch3_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch0_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch1_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch2_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch3_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch0_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch1_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch2_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch3_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch0_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch1_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch2_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch3_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch0_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch1_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch2_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch3_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf eci_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf fmac0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac4_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac5_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac6_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac7_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac8_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac9_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac10_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac11_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac12_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac13_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac14_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac15_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac16_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac17_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac18_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac19_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac20_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac21_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac22_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac23_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac24_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac25_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac26_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac27_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac28_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac29_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac30_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac31_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac4_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac5_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac6_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac7_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac8_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac9_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac10_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac11_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac12_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac13_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac14_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac15_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac16_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac17_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac18_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac19_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac20_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac21_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac22_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac23_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac24_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac25_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac26_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac27_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac28_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac29_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac30_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac31_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_unreachabledestinationcellscnt; //type: uint64
        ydk::YLeaf ccs1_unreachabledestinationcellscnt; //type: uint64
        ydk::YLeaf ccs0_capturefifodiscardcnt; //type: uint64
        ydk::YLeaf ccs1_capturefifodiscardcnt; //type: uint64
        ydk::YLeaf ccs0_cdmalpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs1_cdmalpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs0_cdmblpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs1_cdmblpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs0_crpparityerrcnt; //type: uint64
        ydk::YLeaf ccs1_crpparityerrcnt; //type: uint64
        ydk::YLeaf ccs0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf ccs1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf ccs0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf ccs1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch0_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch1_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch2_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch3_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch0_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch1_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch2_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch3_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch0_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch1_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch2_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch3_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch0_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch1_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch2_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch3_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch0_unreachdestcntp; //type: uint64
        ydk::YLeaf dch1_unreachdestcntp; //type: uint64
        ydk::YLeaf dch2_unreachdestcntp; //type: uint64
        ydk::YLeaf dch3_unreachdestcntp; //type: uint64
        ydk::YLeaf dch0_unreachdestcnts; //type: uint64
        ydk::YLeaf dch1_unreachdestcnts; //type: uint64
        ydk::YLeaf dch2_unreachdestcnts; //type: uint64
        ydk::YLeaf dch3_unreachdestcnts; //type: uint64
        ydk::YLeaf dch0_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch1_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch2_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch3_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch0_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch1_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch2_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch3_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch0_errorfiltercntap; //type: uint64
        ydk::YLeaf dch1_errorfiltercntap; //type: uint64
        ydk::YLeaf dch2_errorfiltercntap; //type: uint64
        ydk::YLeaf dch3_errorfiltercntap; //type: uint64
        ydk::YLeaf dch0_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch1_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch2_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch3_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch0_errorfiltercntas; //type: uint64
        ydk::YLeaf dch1_errorfiltercntas; //type: uint64
        ydk::YLeaf dch2_errorfiltercntas; //type: uint64
        ydk::YLeaf dch3_errorfiltercntas; //type: uint64
        ydk::YLeaf dch0_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch1_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch2_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch3_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch0_droplowpricntp; //type: uint64
        ydk::YLeaf dch1_droplowpricntp; //type: uint64
        ydk::YLeaf dch2_droplowpricntp; //type: uint64
        ydk::YLeaf dch3_droplowpricntp; //type: uint64
        ydk::YLeaf dch0_droplowpricnts; //type: uint64
        ydk::YLeaf dch1_droplowpricnts; //type: uint64
        ydk::YLeaf dch2_droplowpricnts; //type: uint64
        ydk::YLeaf dch3_droplowpricnts; //type: uint64
        ydk::YLeaf dch0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch0_parityerrcnt; //type: uint64
        ydk::YLeaf dch1_parityerrcnt; //type: uint64
        ydk::YLeaf dch2_parityerrcnt; //type: uint64
        ydk::YLeaf dch3_parityerrcnt; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl0_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl1_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl2_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl3_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl0_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl1_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl2_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl3_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl0_parityerrcnt; //type: uint64
        ydk::YLeaf dcl1_parityerrcnt; //type: uint64
        ydk::YLeaf dcl2_parityerrcnt; //type: uint64
        ydk::YLeaf dcl3_parityerrcnt; //type: uint64
        ydk::YLeaf dcl0_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl1_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl2_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl3_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl0_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl1_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl2_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl3_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcma1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcma0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcma1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcma0_parityerrcnt; //type: uint64
        ydk::YLeaf dcma1_parityerrcnt; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcmb1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcmb0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcmb1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcmb0_parityerrcnt; //type: uint64
        ydk::YLeaf dcmb1_parityerrcnt; //type: uint64
        ydk::YLeaf eci_parityerrcnt; //type: uint64
        ydk::YLeaf rtp_ecc_1berrcnt; //type: uint64
        ydk::YLeaf rtp_ecc_2berrcnt; //type: uint64
        ydk::YLeaf rtp_parityerrcnt; //type: uint64
        ydk::YLeaf fmac0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac4_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac5_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac6_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac7_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac8_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac9_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac10_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac11_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac12_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac13_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac14_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac15_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac16_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac17_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac18_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac19_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac20_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac21_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac22_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac23_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac24_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac25_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac26_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac27_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac28_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac29_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac30_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac31_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac4_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac5_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac6_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac7_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac8_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac9_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac10_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac11_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac12_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac13_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac14_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac15_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac16_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac17_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac18_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac19_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac20_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac21_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac22_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac23_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac24_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac25_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac26_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac27_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac28_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac29_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac30_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac31_ecc_2berrcnt; //type: uint64
        ydk::YLeaf is_show; //type: boolean
        ydk::YLeaf show_ccs; //type: boolean
        ydk::YLeaf show_dch; //type: boolean
        ydk::YLeaf show_dcl; //type: boolean
        ydk::YLeaf show_dcma; //type: boolean
        ydk::YLeaf show_dcmb; //type: boolean
        ydk::YLeaf show_eci; //type: boolean
        ydk::YLeaf show_fmac; //type: boolean
        ydk::YLeaf show_rtp; //type: boolean

}; // Controller::SfeOper::Sfe::Statistics::Location::Asic::RTP::Instance


class Controller::SfeOper::Sfe::Statistics::Location::Asic::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::Statistics::Location::Asic::All::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::Statistics::Location::Asic::All::Instance> > instance;
        
}; // Controller::SfeOper::Sfe::Statistics::Location::Asic::All


class Controller::SfeOper::Sfe::Statistics::Location::Asic::All::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf rack_num; //type: uint32
        ydk::YLeaf slot_num; //type: uint32
        ydk::YLeaf asic_instance; //type: uint32
        ydk::YLeaf ccs0_unreachabledestinationcellscnt_ovf; //type: boolean
        ydk::YLeaf ccs1_unreachabledestinationcellscnt_ovf; //type: boolean
        ydk::YLeaf ccs0_capturefifodiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_capturefifodiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_cdmalpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_cdmalpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_cdmblpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_cdmblpcellsdiscardcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_crpparityerrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_crpparityerrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch1_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch2_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch3_fifodiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch0_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch1_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch2_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch3_dchreorddiscardcounterp_ovf; //type: boolean
        ydk::YLeaf dch0_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch1_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch2_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch3_fifodiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch0_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch1_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch2_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch3_dchreorddiscardcounters_ovf; //type: boolean
        ydk::YLeaf dch0_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch1_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch2_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch3_unreachdestcntp_ovf; //type: boolean
        ydk::YLeaf dch0_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch1_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch2_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch3_unreachdestcnts_ovf; //type: boolean
        ydk::YLeaf dch0_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch1_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch2_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch3_dchdroppedlowmulcntp_ovf; //type: boolean
        ydk::YLeaf dch0_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch1_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch2_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch3_dchdroppedlowmulcnts_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntap_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntbp_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntas_ovf; //type: boolean
        ydk::YLeaf dch0_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch1_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch2_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch3_errorfiltercntbs_ovf; //type: boolean
        ydk::YLeaf dch0_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch1_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch2_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch3_droplowpricntp_ovf; //type: boolean
        ydk::YLeaf dch0_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch1_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch2_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch3_droplowpricnts_ovf; //type: boolean
        ydk::YLeaf dch0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dch0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch2_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dch3_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp0cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp1cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp2cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp3cntp_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp0cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp1cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp2cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl1_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl2_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl3_dcldroppedp3cnts_ovf; //type: boolean
        ydk::YLeaf dcl0_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ccp0cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ccp1cifdscrdcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_tagparerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl0_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl1_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl2_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcl3_datacrcerrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcma0_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcma0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcma1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmmdroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip0_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip1_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip2_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedip3_ovf; //type: boolean
        ydk::YLeaf dcmb0_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_dcmudroppedtotalcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb0_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf dcmb1_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf eci_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf rtp_parityerrcnt_ovf; //type: boolean
        ydk::YLeaf fmac0_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac1_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac2_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac3_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac4_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac5_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac6_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac7_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac8_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac9_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac10_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac11_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac12_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac13_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac14_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac15_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac16_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac17_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac18_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac19_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac20_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac21_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac22_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac23_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac24_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac25_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac26_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac27_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac28_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac29_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac30_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac31_ecc_1berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac0_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac1_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac2_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac3_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac4_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac5_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac6_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac7_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac8_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac9_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac10_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac11_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac12_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac13_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac14_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac15_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac16_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac17_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac18_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac19_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac20_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac21_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac22_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac23_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac24_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac25_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac26_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac27_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac28_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac29_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac30_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf fmac31_ecc_2berrcnt_ovf; //type: boolean
        ydk::YLeaf ccs0_unreachabledestinationcellscnt; //type: uint64
        ydk::YLeaf ccs1_unreachabledestinationcellscnt; //type: uint64
        ydk::YLeaf ccs0_capturefifodiscardcnt; //type: uint64
        ydk::YLeaf ccs1_capturefifodiscardcnt; //type: uint64
        ydk::YLeaf ccs0_cdmalpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs1_cdmalpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs0_cdmblpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs1_cdmblpcellsdiscardcnt; //type: uint64
        ydk::YLeaf ccs0_crpparityerrcnt; //type: uint64
        ydk::YLeaf ccs1_crpparityerrcnt; //type: uint64
        ydk::YLeaf ccs0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf ccs1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf ccs0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf ccs1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch0_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch1_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch2_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch3_fifodiscardcounterp; //type: uint64
        ydk::YLeaf dch0_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch1_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch2_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch3_dchreorddiscardcounterp; //type: uint64
        ydk::YLeaf dch0_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch1_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch2_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch3_fifodiscardcounters; //type: uint64
        ydk::YLeaf dch0_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch1_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch2_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch3_dchreorddiscardcounters; //type: uint64
        ydk::YLeaf dch0_unreachdestcntp; //type: uint64
        ydk::YLeaf dch1_unreachdestcntp; //type: uint64
        ydk::YLeaf dch2_unreachdestcntp; //type: uint64
        ydk::YLeaf dch3_unreachdestcntp; //type: uint64
        ydk::YLeaf dch0_unreachdestcnts; //type: uint64
        ydk::YLeaf dch1_unreachdestcnts; //type: uint64
        ydk::YLeaf dch2_unreachdestcnts; //type: uint64
        ydk::YLeaf dch3_unreachdestcnts; //type: uint64
        ydk::YLeaf dch0_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch1_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch2_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch3_dchdroppedlowmulcntp; //type: uint64
        ydk::YLeaf dch0_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch1_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch2_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch3_dchdroppedlowmulcnts; //type: uint64
        ydk::YLeaf dch0_errorfiltercntap; //type: uint64
        ydk::YLeaf dch1_errorfiltercntap; //type: uint64
        ydk::YLeaf dch2_errorfiltercntap; //type: uint64
        ydk::YLeaf dch3_errorfiltercntap; //type: uint64
        ydk::YLeaf dch0_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch1_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch2_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch3_errorfiltercntbp; //type: uint64
        ydk::YLeaf dch0_errorfiltercntas; //type: uint64
        ydk::YLeaf dch1_errorfiltercntas; //type: uint64
        ydk::YLeaf dch2_errorfiltercntas; //type: uint64
        ydk::YLeaf dch3_errorfiltercntas; //type: uint64
        ydk::YLeaf dch0_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch1_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch2_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch3_errorfiltercntbs; //type: uint64
        ydk::YLeaf dch0_droplowpricntp; //type: uint64
        ydk::YLeaf dch1_droplowpricntp; //type: uint64
        ydk::YLeaf dch2_droplowpricntp; //type: uint64
        ydk::YLeaf dch3_droplowpricntp; //type: uint64
        ydk::YLeaf dch0_droplowpricnts; //type: uint64
        ydk::YLeaf dch1_droplowpricnts; //type: uint64
        ydk::YLeaf dch2_droplowpricnts; //type: uint64
        ydk::YLeaf dch3_droplowpricnts; //type: uint64
        ydk::YLeaf dch0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dch0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dch0_parityerrcnt; //type: uint64
        ydk::YLeaf dch1_parityerrcnt; //type: uint64
        ydk::YLeaf dch2_parityerrcnt; //type: uint64
        ydk::YLeaf dch3_parityerrcnt; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp0cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp1cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp2cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp3cntp; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp0cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp1cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp2cnts; //type: uint64
        ydk::YLeaf dcl0_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl1_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl2_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl3_dcldroppedp3cnts; //type: uint64
        ydk::YLeaf dcl0_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl1_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl2_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl3_ccp0cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl0_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl1_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl2_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl3_ccp1cifdscrdcnt; //type: uint64
        ydk::YLeaf dcl0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcl0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcl0_parityerrcnt; //type: uint64
        ydk::YLeaf dcl1_parityerrcnt; //type: uint64
        ydk::YLeaf dcl2_parityerrcnt; //type: uint64
        ydk::YLeaf dcl3_parityerrcnt; //type: uint64
        ydk::YLeaf dcl0_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl1_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl2_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl3_tagparerrcnt; //type: uint64
        ydk::YLeaf dcl0_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl1_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl2_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcl3_datacrcerrcnt; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcma0_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma1_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcma0_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma1_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcma0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcma1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcma0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcma1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcma0_parityerrcnt; //type: uint64
        ydk::YLeaf dcma1_parityerrcnt; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip0; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip1; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip2; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedip3; //type: uint64
        ydk::YLeaf dcmb0_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb1_dcmmdroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip0; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip1; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip2; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedip3; //type: uint64
        ydk::YLeaf dcmb0_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb1_dcmudroppedtotalcnt; //type: uint64
        ydk::YLeaf dcmb0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcmb1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf dcmb0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcmb1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf dcmb0_parityerrcnt; //type: uint64
        ydk::YLeaf dcmb1_parityerrcnt; //type: uint64
        ydk::YLeaf eci_parityerrcnt; //type: uint64
        ydk::YLeaf rtp_ecc_1berrcnt; //type: uint64
        ydk::YLeaf rtp_ecc_2berrcnt; //type: uint64
        ydk::YLeaf rtp_parityerrcnt; //type: uint64
        ydk::YLeaf fmac0_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac1_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac2_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac3_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac4_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac5_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac6_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac7_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac8_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac9_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac10_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac11_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac12_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac13_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac14_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac15_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac16_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac17_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac18_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac19_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac20_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac21_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac22_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac23_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac24_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac25_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac26_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac27_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac28_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac29_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac30_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac31_ecc_1berrcnt; //type: uint64
        ydk::YLeaf fmac0_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac1_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac2_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac3_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac4_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac5_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac6_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac7_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac8_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac9_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac10_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac11_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac12_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac13_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac14_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac15_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac16_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac17_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac18_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac19_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac20_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac21_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac22_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac23_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac24_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac25_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac26_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac27_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac28_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac29_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac30_ecc_2berrcnt; //type: uint64
        ydk::YLeaf fmac31_ecc_2berrcnt; //type: uint64
        ydk::YLeaf is_show; //type: boolean
        ydk::YLeaf show_ccs; //type: boolean
        ydk::YLeaf show_dch; //type: boolean
        ydk::YLeaf show_dcl; //type: boolean
        ydk::YLeaf show_dcma; //type: boolean
        ydk::YLeaf show_dcmb; //type: boolean
        ydk::YLeaf show_eci; //type: boolean
        ydk::YLeaf show_fmac; //type: boolean
        ydk::YLeaf show_rtp; //type: boolean

}; // Controller::SfeOper::Sfe::Statistics::Location::Asic::All::Instance


class Controller::SfeOper::Sfe::LinkInfo : public ydk::Entity
{
    public:
        LinkInfo();
        ~LinkInfo();

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

        class Location; //type: Controller::SfeOper::Sfe::LinkInfo::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location> > location;
        
}; // Controller::SfeOper::Sfe::LinkInfo


class Controller::SfeOper::Sfe::LinkInfo::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf loc_str; //type: string
        ydk::YLeaf description; //type: string
        class Rx; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx
        class Tx; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx> > rx;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Tx> > tx;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx : public ydk::Entity
{
    public:
        Rx();
        ~Rx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: int32
        ydk::YLeaf end; //type: int32
        class Detail; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail
        class Topo; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo
        class Flap; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap
        class Stats; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail> detail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo> topo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap> flap;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats> stats;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Topo; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo
        class Flap; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo> topo;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap> flap;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo : public ydk::Entity
{
    public:
        Topo();
        ~Topo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance> > instance;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf nodeid_str; //type: string
        ydk::YLeaf is_show; //type: boolean
        class LinkIdxList; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList> > link_idx_list;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList : public ydk::Entity
{
    public:
        LinkIdxList();
        ~LinkIdxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_idx; //type: int64
        ydk::YLeaf link_id_str; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf stage; //type: string
        ydk::YLeaf fab_plane; //type: uint32
        ydk::YLeaf fab_group; //type: uint32
        ydk::YLeaf flap_cnt; //type: uint32
        ydk::YLeaf num_admin_shuts; //type: uint32
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf far_end_link_fsdb; //type: string
        ydk::YLeaf far_end_link_hw; //type: string
        ydk::YLeaf coeff1; //type: uint32
        ydk::YLeaf coeff2; //type: uint32
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf tx_bec_retransmit; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_bec_retransmit; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf fsm_state; //type: string
        class History; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::History> > history;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string
        ydk::YLeaf down_reasons; //type: string

}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Topo::Instance::LinkIdxList::History


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap : public ydk::Entity
{
    public:
        Flap();
        ~Flap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance> > instance;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf nodeid_str; //type: string
        ydk::YLeaf is_show; //type: boolean
        class LinkIdxList; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList> > link_idx_list;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList : public ydk::Entity
{
    public:
        LinkIdxList();
        ~LinkIdxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_idx; //type: int64
        ydk::YLeaf link_id_str; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf stage; //type: string
        ydk::YLeaf fab_plane; //type: uint32
        ydk::YLeaf fab_group; //type: uint32
        ydk::YLeaf flap_cnt; //type: uint32
        ydk::YLeaf num_admin_shuts; //type: uint32
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf far_end_link_fsdb; //type: string
        ydk::YLeaf far_end_link_hw; //type: string
        ydk::YLeaf coeff1; //type: uint32
        ydk::YLeaf coeff2; //type: uint32
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf tx_bec_retransmit; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_bec_retransmit; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf fsm_state; //type: string
        class History; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::History> > history;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string
        ydk::YLeaf down_reasons; //type: string

}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Detail::Flap::Instance::LinkIdxList::History


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo : public ydk::Entity
{
    public:
        Topo();
        ~Topo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance> > instance;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf nodeid_str; //type: string
        ydk::YLeaf is_show; //type: boolean
        class LinkIdxList; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList> > link_idx_list;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList : public ydk::Entity
{
    public:
        LinkIdxList();
        ~LinkIdxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_idx; //type: int64
        ydk::YLeaf link_id_str; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf stage; //type: string
        ydk::YLeaf fab_plane; //type: uint32
        ydk::YLeaf fab_group; //type: uint32
        ydk::YLeaf flap_cnt; //type: uint32
        ydk::YLeaf num_admin_shuts; //type: uint32
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf far_end_link_fsdb; //type: string
        ydk::YLeaf far_end_link_hw; //type: string
        ydk::YLeaf coeff1; //type: uint32
        ydk::YLeaf coeff2; //type: uint32
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf tx_bec_retransmit; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_bec_retransmit; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf fsm_state; //type: string
        class History; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::History> > history;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string
        ydk::YLeaf down_reasons; //type: string

}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Topo::Instance::LinkIdxList::History


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap : public ydk::Entity
{
    public:
        Flap();
        ~Flap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance> > instance;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf nodeid_str; //type: string
        ydk::YLeaf is_show; //type: boolean
        class LinkIdxList; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList> > link_idx_list;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList : public ydk::Entity
{
    public:
        LinkIdxList();
        ~LinkIdxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_idx; //type: int64
        ydk::YLeaf link_id_str; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf stage; //type: string
        ydk::YLeaf fab_plane; //type: uint32
        ydk::YLeaf fab_group; //type: uint32
        ydk::YLeaf flap_cnt; //type: uint32
        ydk::YLeaf num_admin_shuts; //type: uint32
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf far_end_link_fsdb; //type: string
        ydk::YLeaf far_end_link_hw; //type: string
        ydk::YLeaf coeff1; //type: uint32
        ydk::YLeaf coeff2; //type: uint32
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf tx_bec_retransmit; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_bec_retransmit; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf fsm_state; //type: string
        class History; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::History> > history;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string
        ydk::YLeaf down_reasons; //type: string

}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Flap::Instance::LinkIdxList::History


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats : public ydk::Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Data; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data
        class Ctrl; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl
        class All; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data> data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl> ctrl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All> all;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance> > instance;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf nodeid_str; //type: string
        ydk::YLeaf is_show; //type: boolean
        class LinkIdxList; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList> > link_idx_list;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList : public ydk::Entity
{
    public:
        LinkIdxList();
        ~LinkIdxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_idx; //type: int64
        ydk::YLeaf link_id_str; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf stage; //type: string
        ydk::YLeaf fab_plane; //type: uint32
        ydk::YLeaf fab_group; //type: uint32
        ydk::YLeaf flap_cnt; //type: uint32
        ydk::YLeaf num_admin_shuts; //type: uint32
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf far_end_link_fsdb; //type: string
        ydk::YLeaf far_end_link_hw; //type: string
        ydk::YLeaf coeff1; //type: uint32
        ydk::YLeaf coeff2; //type: uint32
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf tx_bec_retransmit; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_bec_retransmit; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf fsm_state; //type: string
        class History; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::History> > history;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string
        ydk::YLeaf down_reasons; //type: string

}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Data::Instance::LinkIdxList::History


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl : public ydk::Entity
{
    public:
        Ctrl();
        ~Ctrl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance> > instance;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf nodeid_str; //type: string
        ydk::YLeaf is_show; //type: boolean
        class LinkIdxList; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList> > link_idx_list;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList : public ydk::Entity
{
    public:
        LinkIdxList();
        ~LinkIdxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_idx; //type: int64
        ydk::YLeaf link_id_str; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf stage; //type: string
        ydk::YLeaf fab_plane; //type: uint32
        ydk::YLeaf fab_group; //type: uint32
        ydk::YLeaf flap_cnt; //type: uint32
        ydk::YLeaf num_admin_shuts; //type: uint32
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf far_end_link_fsdb; //type: string
        ydk::YLeaf far_end_link_hw; //type: string
        ydk::YLeaf coeff1; //type: uint32
        ydk::YLeaf coeff2; //type: uint32
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf tx_bec_retransmit; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_bec_retransmit; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf fsm_state; //type: string
        class History; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::History> > history;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string
        ydk::YLeaf down_reasons; //type: string

}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::Ctrl::Instance::LinkIdxList::History


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance> > instance;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf nodeid_str; //type: string
        ydk::YLeaf is_show; //type: boolean
        class LinkIdxList; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList> > link_idx_list;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList : public ydk::Entity
{
    public:
        LinkIdxList();
        ~LinkIdxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_idx; //type: int64
        ydk::YLeaf link_id_str; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf stage; //type: string
        ydk::YLeaf fab_plane; //type: uint32
        ydk::YLeaf fab_group; //type: uint32
        ydk::YLeaf flap_cnt; //type: uint32
        ydk::YLeaf num_admin_shuts; //type: uint32
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf far_end_link_fsdb; //type: string
        ydk::YLeaf far_end_link_hw; //type: string
        ydk::YLeaf coeff1; //type: uint32
        ydk::YLeaf coeff2; //type: uint32
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf tx_bec_retransmit; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_bec_retransmit; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf fsm_state; //type: string
        class History; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::History> > history;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList


class Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string
        ydk::YLeaf down_reasons; //type: string

}; // Controller::SfeOper::Sfe::LinkInfo::Location::Rx::Stats::All::Instance::LinkIdxList::History


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx : public ydk::Entity
{
    public:
        Tx();
        ~Tx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: int32
        ydk::YLeaf end; //type: int32
        class Detail; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail
        class Instance; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance
        class Stats; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail> detail;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance> > instance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats> stats;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail : public ydk::Entity
{
    public:
        Detail();
        ~Detail();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance> > instance;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf nodeid_str; //type: string
        ydk::YLeaf is_show; //type: boolean
        class LinkIdxList; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList> > link_idx_list;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList : public ydk::Entity
{
    public:
        LinkIdxList();
        ~LinkIdxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_idx; //type: int64
        ydk::YLeaf link_id_str; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf stage; //type: string
        ydk::YLeaf fab_plane; //type: uint32
        ydk::YLeaf fab_group; //type: uint32
        ydk::YLeaf flap_cnt; //type: uint32
        ydk::YLeaf num_admin_shuts; //type: uint32
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf far_end_link_fsdb; //type: string
        ydk::YLeaf far_end_link_hw; //type: string
        ydk::YLeaf coeff1; //type: uint32
        ydk::YLeaf coeff2; //type: uint32
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf tx_bec_retransmit; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_bec_retransmit; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf fsm_state; //type: string
        class History; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::History> > history;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string
        ydk::YLeaf down_reasons; //type: string

}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Detail::Instance::LinkIdxList::History


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf nodeid_str; //type: string
        ydk::YLeaf is_show; //type: boolean
        class LinkIdxList; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList> > link_idx_list;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList : public ydk::Entity
{
    public:
        LinkIdxList();
        ~LinkIdxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_idx; //type: int64
        ydk::YLeaf link_id_str; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf stage; //type: string
        ydk::YLeaf fab_plane; //type: uint32
        ydk::YLeaf fab_group; //type: uint32
        ydk::YLeaf flap_cnt; //type: uint32
        ydk::YLeaf num_admin_shuts; //type: uint32
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf far_end_link_fsdb; //type: string
        ydk::YLeaf far_end_link_hw; //type: string
        ydk::YLeaf coeff1; //type: uint32
        ydk::YLeaf coeff2; //type: uint32
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf tx_bec_retransmit; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_bec_retransmit; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf fsm_state; //type: string
        class History; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::History> > history;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string
        ydk::YLeaf down_reasons; //type: string

}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Instance::LinkIdxList::History


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats : public ydk::Entity
{
    public:
        Stats();
        ~Stats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Data; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data
        class Ctrl; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl
        class All; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data> data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl> ctrl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All> all;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance> > instance;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf nodeid_str; //type: string
        ydk::YLeaf is_show; //type: boolean
        class LinkIdxList; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList> > link_idx_list;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList : public ydk::Entity
{
    public:
        LinkIdxList();
        ~LinkIdxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_idx; //type: int64
        ydk::YLeaf link_id_str; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf stage; //type: string
        ydk::YLeaf fab_plane; //type: uint32
        ydk::YLeaf fab_group; //type: uint32
        ydk::YLeaf flap_cnt; //type: uint32
        ydk::YLeaf num_admin_shuts; //type: uint32
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf far_end_link_fsdb; //type: string
        ydk::YLeaf far_end_link_hw; //type: string
        ydk::YLeaf coeff1; //type: uint32
        ydk::YLeaf coeff2; //type: uint32
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf tx_bec_retransmit; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_bec_retransmit; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf fsm_state; //type: string
        class History; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::History> > history;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string
        ydk::YLeaf down_reasons; //type: string

}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Data::Instance::LinkIdxList::History


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl : public ydk::Entity
{
    public:
        Ctrl();
        ~Ctrl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance> > instance;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf nodeid_str; //type: string
        ydk::YLeaf is_show; //type: boolean
        class LinkIdxList; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList> > link_idx_list;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList : public ydk::Entity
{
    public:
        LinkIdxList();
        ~LinkIdxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_idx; //type: int64
        ydk::YLeaf link_id_str; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf stage; //type: string
        ydk::YLeaf fab_plane; //type: uint32
        ydk::YLeaf fab_group; //type: uint32
        ydk::YLeaf flap_cnt; //type: uint32
        ydk::YLeaf num_admin_shuts; //type: uint32
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf far_end_link_fsdb; //type: string
        ydk::YLeaf far_end_link_hw; //type: string
        ydk::YLeaf coeff1; //type: uint32
        ydk::YLeaf coeff2; //type: uint32
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf tx_bec_retransmit; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_bec_retransmit; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf fsm_state; //type: string
        class History; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::History> > history;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string
        ydk::YLeaf down_reasons; //type: string

}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::Ctrl::Instance::LinkIdxList::History


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All : public ydk::Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Instance; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance> > instance;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf nodeid_str; //type: string
        ydk::YLeaf is_show; //type: boolean
        class LinkIdxList; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList> > link_idx_list;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList : public ydk::Entity
{
    public:
        LinkIdxList();
        ~LinkIdxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_idx; //type: int64
        ydk::YLeaf link_id_str; //type: string
        ydk::YLeaf speed; //type: string
        ydk::YLeaf stage; //type: string
        ydk::YLeaf fab_plane; //type: uint32
        ydk::YLeaf fab_group; //type: uint32
        ydk::YLeaf flap_cnt; //type: uint32
        ydk::YLeaf num_admin_shuts; //type: uint32
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf flags; //type: string
        ydk::YLeaf far_end_link_fsdb; //type: string
        ydk::YLeaf far_end_link_hw; //type: string
        ydk::YLeaf coeff1; //type: uint32
        ydk::YLeaf coeff2; //type: uint32
        ydk::YLeaf tx_control_cells_counter; //type: uint64
        ydk::YLeaf tx_data_cell_counter; //type: uint64
        ydk::YLeaf tx_data_byte_counter; //type: uint64
        ydk::YLeaf tx_bec_retransmit; //type: uint64
        ydk::YLeaf tx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_control_cells_counter; //type: uint64
        ydk::YLeaf rx_data_cell_counter; //type: uint64
        ydk::YLeaf rx_data_byte_counter; //type: uint64
        ydk::YLeaf rx_bec_retransmit; //type: uint64
        ydk::YLeaf rx_asyn_fifo_rate; //type: uint64
        ydk::YLeaf rx_crc_errors_counter; //type: uint64
        ydk::YLeaf rx_lfec_fec_correctable_error; //type: uint64
        ydk::YLeaf rx_lfec_fec_uncorrectable_errors; //type: uint64
        ydk::YLeaf rx_dropped_retransmitted_control; //type: uint64
        ydk::YLeaf fsm_state; //type: string
        class History; //type: Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::History

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::History> > history;
        
}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList


class Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::History : public ydk::Entity
{
    public:
        History();
        ~History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf history_idx; //type: int32
        ydk::YLeaf time_stamp; //type: string
        ydk::YLeaf admin_state; //type: string
        ydk::YLeaf oper_state; //type: string
        ydk::YLeaf error_state; //type: string
        ydk::YLeaf down_reasons; //type: string

}; // Controller::SfeOper::Sfe::LinkInfo::Location::Tx::Stats::All::Instance::LinkIdxList::History


class Controller::SfeOper::Sfe::Diagshell : public ydk::Entity
{
    public:
        Diagshell();
        ~Diagshell();

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

        class Location; //type: Controller::SfeOper::Sfe::Diagshell::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::Diagshell::Location> > location;
        
}; // Controller::SfeOper::Sfe::Diagshell


class Controller::SfeOper::Sfe::Diagshell::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf loc_str; //type: string
        ydk::YLeaf description; //type: string
        class Instance; //type: Controller::SfeOper::Sfe::Diagshell::Location::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::Diagshell::Location::Instance> > instance;
        
}; // Controller::SfeOper::Sfe::Diagshell::Location


class Controller::SfeOper::Sfe::Diagshell::Location::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_num; //type: int32
        class DiagCmd; //type: Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd> > diag_cmd;
        
}; // Controller::SfeOper::Sfe::Diagshell::Location::Instance


class Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd : public ydk::Entity
{
    public:
        DiagCmd();
        ~DiagCmd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cmd_str; //type: string
        class Bytes; //type: Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::Bytes

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::Bytes> > bytes;
        
}; // Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd


class Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::Bytes : public ydk::Entity
{
    public:
        Bytes();
        ~Bytes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf byte_idx; //type: int64
        ydk::YLeaf data; //type: string

}; // Controller::SfeOper::Sfe::Diagshell::Location::Instance::DiagCmd::Bytes


class Controller::SfeOper::Sfe::Register : public ydk::Entity
{
    public:
        Register();
        ~Register();

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

        class Location; //type: Controller::SfeOper::Sfe::Register::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::Register::Location> > location;
        
}; // Controller::SfeOper::Sfe::Register


class Controller::SfeOper::Sfe::Register::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf loc_str; //type: string
        ydk::YLeaf description; //type: string
        class Instance; //type: Controller::SfeOper::Sfe::Register::Location::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::Register::Location::Instance> > instance;
        
}; // Controller::SfeOper::Sfe::Register::Location


class Controller::SfeOper::Sfe::Register::Location::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_num; //type: int32
        class Bytes; //type: Controller::SfeOper::Sfe::Register::Location::Instance::Bytes

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::Register::Location::Instance::Bytes> > bytes;
        
}; // Controller::SfeOper::Sfe::Register::Location::Instance


class Controller::SfeOper::Sfe::Register::Location::Instance::Bytes : public ydk::Entity
{
    public:
        Bytes();
        ~Bytes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf byte_idx; //type: int64
        ydk::YLeaf data; //type: string

}; // Controller::SfeOper::Sfe::Register::Location::Instance::Bytes


class Controller::SfeOper::Sfe::DumpFile : public ydk::Entity
{
    public:
        DumpFile();
        ~DumpFile();

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

        class Location; //type: Controller::SfeOper::Sfe::DumpFile::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::DumpFile::Location> > location;
        
}; // Controller::SfeOper::Sfe::DumpFile


class Controller::SfeOper::Sfe::DumpFile::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf loc_str; //type: string
        ydk::YLeaf description; //type: string
        class File; //type: Controller::SfeOper::Sfe::DumpFile::Location::File

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::DumpFile::Location::File> > file;
        
}; // Controller::SfeOper::Sfe::DumpFile::Location


class Controller::SfeOper::Sfe::DumpFile::Location::File : public ydk::Entity
{
    public:
        File();
        ~File();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf file_name; //type: string
        class Bytes; //type: Controller::SfeOper::Sfe::DumpFile::Location::File::Bytes

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::DumpFile::Location::File::Bytes> > bytes;
        
}; // Controller::SfeOper::Sfe::DumpFile::Location::File


class Controller::SfeOper::Sfe::DumpFile::Location::File::Bytes : public ydk::Entity
{
    public:
        Bytes();
        ~Bytes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf byte_idx; //type: int64
        ydk::YLeaf data; //type: string

}; // Controller::SfeOper::Sfe::DumpFile::Location::File::Bytes


class Controller::SfeOper::Sfe::Parse : public ydk::Entity
{
    public:
        Parse();
        ~Parse();

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

        class Location; //type: Controller::SfeOper::Sfe::Parse::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::Parse::Location> > location;
        
}; // Controller::SfeOper::Sfe::Parse


class Controller::SfeOper::Sfe::Parse::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

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

        ydk::YLeaf loc_str; //type: string
        ydk::YLeaf description; //type: string
        class Link; //type: Controller::SfeOper::Sfe::Parse::Location::Link

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::Parse::Location::Link> > link;
        
}; // Controller::SfeOper::Sfe::Parse::Location


class Controller::SfeOper::Sfe::Parse::Location::Link : public ydk::Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start; //type: int32
        ydk::YLeaf end; //type: int32
        class Instance; //type: Controller::SfeOper::Sfe::Parse::Location::Link::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::Parse::Location::Link::Instance> > instance;
        
}; // Controller::SfeOper::Sfe::Parse::Location::Link


class Controller::SfeOper::Sfe::Parse::Location::Link::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: string
        ydk::YLeaf is_show; //type: boolean
        class LinkIdxList; //type: Controller::SfeOper::Sfe::Parse::Location::Link::Instance::LinkIdxList

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::Sfe::Parse::Location::Link::Instance::LinkIdxList> > link_idx_list;
        
}; // Controller::SfeOper::Sfe::Parse::Location::Link::Instance


class Controller::SfeOper::Sfe::Parse::Location::Link::Instance::LinkIdxList : public ydk::Entity
{
    public:
        LinkIdxList();
        ~LinkIdxList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf link_idx; //type: int64
        ydk::YLeaf rack_id_str; //type: string
        ydk::YLeaf slot_id_str; //type: string
        ydk::YLeaf asic_inst_id; //type: uint32
        ydk::YLeaf link_num_id; //type: uint32
        ydk::YLeaf log_slot; //type: uint32
        ydk::YLeaf phy_slot; //type: uint32
        ydk::YLeaf fap_id; //type: uint32
        ydk::YLeaf unit; //type: uint32
        ydk::YLeaf sfi_id; //type: uint32
        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf driver_run; //type: string

}; // Controller::SfeOper::Sfe::Parse::Location::Link::Instance::LinkIdxList


class Controller::SfeOper::SfeTrace : public ydk::Entity
{
    public:
        SfeTrace();
        ~SfeTrace();

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

        class SfeDriver; //type: Controller::SfeOper::SfeTrace::SfeDriver

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::SfeTrace::SfeDriver> sfe_driver;
        
}; // Controller::SfeOper::SfeTrace


class Controller::SfeOper::SfeTrace::SfeDriver : public ydk::Entity
{
    public:
        SfeDriver();
        ~SfeDriver();

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

        class Trace; //type: Controller::SfeOper::SfeTrace::SfeDriver::Trace

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::SfeTrace::SfeDriver::Trace> > trace;
        
}; // Controller::SfeOper::SfeTrace::SfeDriver


class Controller::SfeOper::SfeTrace::SfeDriver::Trace : public ydk::Entity
{
    public:
        Trace();
        ~Trace();

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

        ydk::YLeaf buffer; //type: string
        class Location; //type: Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location> > location;
        
}; // Controller::SfeOper::SfeTrace::SfeDriver::Trace


class Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location_name; //type: string
        class AllOptions; //type: Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions> > all_options;
        
}; // Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location


class Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions : public ydk::Entity
{
    public:
        AllOptions();
        ~AllOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf option; //type: string
        class TraceBlocks; //type: Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::TraceBlocks

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::TraceBlocks> > trace_blocks;
        
}; // Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions


class Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::TraceBlocks : public ydk::Entity
{
    public:
        TraceBlocks();
        ~TraceBlocks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: string

}; // Controller::SfeOper::SfeTrace::SfeDriver::Trace::Location::AllOptions::TraceBlocks


class Controller::Asic : public ydk::Entity
{
    public:
        Asic();
        ~Asic();

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

        ydk::YLeaf asic_name; //type: string
        class Instance; //type: Controller::Asic::Instance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Asic::Instance> > instance;
        
}; // Controller::Asic


class Controller::Asic::Instance : public ydk::Entity
{
    public:
        Instance();
        ~Instance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf instance_id; //type: uint32
        ydk::YLeaf instance_name; //type: string
        class Address; //type: Controller::Asic::Instance::Address
        class BlockName; //type: Controller::Asic::Instance::BlockName
        class BlockNumber; //type: Controller::Asic::Instance::BlockNumber

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Asic::Instance::Address> > address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Asic::Instance::BlockName> > block_name;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Asic::Instance::BlockNumber> > block_number;
        
}; // Controller::Asic::Instance


class Controller::Asic::Instance::Address : public ydk::Entity
{
    public:
        Address();
        ~Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf addr; //type: string
        ydk::YLeaf size; //type: uint32
        ydk::YLeaf entries; //type: uint32
        ydk::YLeaf width; //type: uint32
        class Location; //type: Controller::Asic::Instance::Address::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Asic::Instance::Address::Location> > location;
        
}; // Controller::Asic::Instance::Address


class Controller::Asic::Instance::Address::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location_name; //type: string
        class DirectData; //type: Controller::Asic::Instance::Address::Location::DirectData

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Asic::Instance::Address::Location::DirectData> > direct_data;
        
}; // Controller::Asic::Instance::Address::Location


class Controller::Asic::Instance::Address::Location::DirectData : public ydk::Entity
{
    public:
        DirectData();
        ~DirectData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: uint64
        ydk::YLeaf name; //type: string
        ydk::YLeaf value_; //type: string
        ydk::YLeaf size; //type: uint32

}; // Controller::Asic::Instance::Address::Location::DirectData


class Controller::Asic::Instance::BlockName : public ydk::Entity
{
    public:
        BlockName();
        ~BlockName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf block_nm; //type: string
        ydk::YLeaf block_num; //type: uint32
        class RegisterName; //type: Controller::Asic::Instance::BlockName::RegisterName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Asic::Instance::BlockName::RegisterName> > register_name;
        
}; // Controller::Asic::Instance::BlockName


class Controller::Asic::Instance::BlockName::RegisterName : public ydk::Entity
{
    public:
        RegisterName();
        ~RegisterName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf register_; //type: uint32
        class Data; //type: Controller::Asic::Instance::BlockName::RegisterName::Data

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Asic::Instance::BlockName::RegisterName::Data> > data;
        
}; // Controller::Asic::Instance::BlockName::RegisterName


class Controller::Asic::Instance::BlockName::RegisterName::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: uint64
        ydk::YLeaf name; //type: string
        ydk::YLeaf value_; //type: string
        ydk::YLeaf size; //type: uint32

}; // Controller::Asic::Instance::BlockName::RegisterName::Data


class Controller::Asic::Instance::BlockNumber : public ydk::Entity
{
    public:
        BlockNumber();
        ~BlockNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf block_num; //type: uint32
        ydk::YLeaf block_nm; //type: string
        class RegisterNumber; //type: Controller::Asic::Instance::BlockNumber::RegisterNumber

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Asic::Instance::BlockNumber::RegisterNumber> > register_number;
        
}; // Controller::Asic::Instance::BlockNumber


class Controller::Asic::Instance::BlockNumber::RegisterNumber : public ydk::Entity
{
    public:
        RegisterNumber();
        ~RegisterNumber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf register_; //type: uint32
        ydk::YLeaf register_name; //type: string
        class RegisterOffsets; //type: Controller::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets
        class Location; //type: Controller::Asic::Instance::BlockNumber::RegisterNumber::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets> > register_offsets;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Asic::Instance::BlockNumber::RegisterNumber::Location> > location;
        
}; // Controller::Asic::Instance::BlockNumber::RegisterNumber


class Controller::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets : public ydk::Entity
{
    public:
        RegisterOffsets();
        ~RegisterOffsets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reg_start; //type: uint32
        ydk::YLeaf num_entries; //type: uint32
        class Location; //type: Controller::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location> > location;
        
}; // Controller::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets


class Controller::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location_name; //type: string
        class Data; //type: Controller::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::Data

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::Data> > data;
        
}; // Controller::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location


class Controller::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: uint64
        ydk::YLeaf name; //type: string
        ydk::YLeaf value_; //type: string
        ydk::YLeaf size; //type: uint32

}; // Controller::Asic::Instance::BlockNumber::RegisterNumber::RegisterOffsets::Location::Data


class Controller::Asic::Instance::BlockNumber::RegisterNumber::Location : public ydk::Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf location_name; //type: string
        class Data; //type: Controller::Asic::Instance::BlockNumber::RegisterNumber::Location::Data

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Asic::Instance::BlockNumber::RegisterNumber::Location::Data> > data;
        
}; // Controller::Asic::Instance::BlockNumber::RegisterNumber::Location


class Controller::Asic::Instance::BlockNumber::RegisterNumber::Location::Data : public ydk::Entity
{
    public:
        Data();
        ~Data();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: uint64
        ydk::YLeaf name; //type: string
        ydk::YLeaf value_; //type: string
        ydk::YLeaf size; //type: uint32

}; // Controller::Asic::Instance::BlockNumber::RegisterNumber::Location::Data


class Controller::Oper : public ydk::Entity
{
    public:
        Oper();
        ~Oper();

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

        class SliceControl; //type: Controller::Oper::SliceControl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl> slice_control;
        
}; // Controller::Oper


class Controller::Oper::SliceControl : public ydk::Entity
{
    public:
        SliceControl();
        ~SliceControl();

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

        class LocationList; //type: Controller::Oper::SliceControl::LocationList

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList> > location_list;
        
}; // Controller::Oper::SliceControl


class Controller::Oper::SliceControl::LocationList : public ydk::Entity
{
    public:
        LocationList();
        ~LocationList();

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

        ydk::YLeaf loc_str; //type: string
        ydk::YLeaf description; //type: string
        class ManagerContextInfo; //type: Controller::Oper::SliceControl::LocationList::ManagerContextInfo
        class FPGA; //type: Controller::Oper::SliceControl::LocationList::FPGA

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::ManagerContextInfo> > manager_context_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA> > fpga;
        
}; // Controller::Oper::SliceControl::LocationList


class Controller::Oper::SliceControl::LocationList::ManagerContextInfo : public ydk::Entity
{
    public:
        ManagerContextInfo();
        ~ManagerContextInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf num_controllers; //type: uint8
        ydk::YLeaf levm; //type: string
        ydk::YLeaf ccc_hdl; //type: string
        ydk::YLeaf trace; //type: string
        ydk::YLeaf xm_hdl; //type: string
        ydk::YLeaf fm_hdl; //type: string
        ydk::YLeaf sim; //type: boolean
        ydk::YLeaf debug; //type: boolean
        ydk::YLeaf card_type; //type: uint32
        ydk::YLeaf slot_num; //type: uint32

}; // Controller::Oper::SliceControl::LocationList::ManagerContextInfo


class Controller::Oper::SliceControl::LocationList::FPGA : public ydk::Entity
{
    public:
        FPGA();
        ~FPGA();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slice_controller_id; //type: string
        class SliceContextInfo; //type: Controller::Oper::SliceControl::LocationList::FPGA::SliceContextInfo
        class ClockingDevices; //type: Controller::Oper::SliceControl::LocationList::FPGA::ClockingDevices
        class Slice; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::SliceContextInfo> > slice_context_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::ClockingDevices> > clocking_devices;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice> > slice;
        
}; // Controller::Oper::SliceControl::LocationList::FPGA


class Controller::Oper::SliceControl::LocationList::FPGA::SliceContextInfo : public ydk::Entity
{
    public:
        SliceContextInfo();
        ~SliceContextInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id; //type: string
        ydk::YLeaf slice_controller_id; //type: string
        ydk::YLeaf slices; //type: uint8
        ydk::YLeaf oper_state; //type: int32
        ydk::YLeaf pci_status; //type: int32
        ydk::YLeaf bao_desc; //type: string
        ydk::YLeaf handle; //type: string
        ydk::YLeaf irq; //type: string
        ydk::YLeaf msi; //type: int32
        ydk::YLeaf regs; //type: string
        ydk::YLeaf num_pll; //type: uint8
        ydk::YLeaf c_hd; //type: string
        ydk::YLeaf d_hd; //type: string
        ydk::YLeaf i_hd; //type: string
        ydk::YLeaf fm_hdl; //type: string
        ydk::YLeaf trace; //type: string
        ydk::YLeaf levm; //type: string
        ydk::YLeaf hw_ver; //type: string
        ydk::YLeaf pca_ver; //type: string
        ydk::YLeaf tcam_vendor; //type: string
        ydk::YLeaf is_data_available; //type: boolean

}; // Controller::Oper::SliceControl::LocationList::FPGA::SliceContextInfo


class Controller::Oper::SliceControl::LocationList::FPGA::ClockingDevices : public ydk::Entity
{
    public:
        ClockingDevices();
        ~ClockingDevices();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pll_device_id; //type: string
        ydk::YLeaf is_data_available; //type: boolean
        class Pll; //type: Controller::Oper::SliceControl::LocationList::FPGA::ClockingDevices::Pll

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::ClockingDevices::Pll> > pll;
        
}; // Controller::Oper::SliceControl::LocationList::FPGA::ClockingDevices


class Controller::Oper::SliceControl::LocationList::FPGA::ClockingDevices::Pll : public ydk::Entity
{
    public:
        Pll();
        ~Pll();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pll_id; //type: string
        ydk::YLeaf clocking_bus; //type: string
        ydk::YLeaf clocking_mode; //type: string
        ydk::YLeaf clocking_dev_addr; //type: string
        ydk::YLeaf clocking_i2c_regs; //type: string

}; // Controller::Oper::SliceControl::LocationList::FPGA::ClockingDevices::Pll


class Controller::Oper::SliceControl::LocationList::FPGA::Slice : public ydk::Entity
{
    public:
        Slice();
        ~Slice();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slice_id; //type: string
        class Summary; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Summary
        class CurrSensor; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::CurrSensor
        class Eeprom; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Eeprom
        class OpticsSummary; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::OpticsSummary
        class Optics; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics
        class Phy; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Phy
        class TempSensor; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::TempSensor
        class VoltSensor; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::VoltSensor
        class GearboxSummary; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::GearboxSummary
        class Gearbox2Summary; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox2Summary
        class DualGearboxSummary; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::DualGearboxSummary
        class Gearbox; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox
        class Gearbox2; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox2
        class DualGearbox; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::DualGearbox
        class Cpak; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Cpak
        class ModenaSummary; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::ModenaSummary
        class Modena; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Modena

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice::Summary> summary;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice::CurrSensor> > curr_sensor;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice::Eeprom> > eeprom;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice::OpticsSummary> > optics_summary;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics> > optics;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice::Phy> > phy;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice::TempSensor> > temp_sensor;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice::VoltSensor> > volt_sensor;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice::GearboxSummary> > gearbox_summary;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox2Summary> > gearbox2_summary;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice::DualGearboxSummary> > dual_gearbox_summary;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox> > gearbox;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox2> > gearbox2;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice::DualGearbox> > dual_gearbox;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice::Cpak> > cpak;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice::ModenaSummary> > modena_summary;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice::Modena> > modena;
        
}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Summary : public ydk::Entity
{
    public:
        Summary();
        ~Summary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SliceSummary; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Summary::SliceSummary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice::Summary::SliceSummary> > slice_summary;
        
}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Summary


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Summary::SliceSummary : public ydk::Entity
{
    public:
        SliceSummary();
        ~SliceSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slice_summ_id; //type: string
        ydk::YLeaf slice_id; //type: string
        ydk::YLeaf num_phy; //type: uint8
        ydk::YLeaf num_optics; //type: uint8
        ydk::YLeaf num_eeprom; //type: uint8
        ydk::YLeaf num_temp_sensors; //type: uint8
        ydk::YLeaf num_volt_sensors; //type: uint8
        ydk::YLeaf num_curr_sensors; //type: uint8
        ydk::YLeaf is_data_available; //type: boolean

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Summary::SliceSummary


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::CurrSensor : public ydk::Entity
{
    public:
        CurrSensor();
        ~CurrSensor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sensor_id; //type: string
        ydk::YLeaf curr_sensor_id; //type: string
        ydk::YLeaf curr_dev_addr; //type: uint32
        ydk::YLeaf curr_poll_intvl; //type: uint32
        ydk::YLeaf curr_delta; //type: uint32
        ydk::YLeaf curr_raw_data; //type: uint32
        ydk::YLeaf curr_sensor_value; //type: int32
        ydk::YLeaf curr_unit; //type: int32
        ydk::YLeaf curr_last_value; //type: uint32
        ydk::YLeaf curr_send_update; //type: boolean
        ydk::YLeaf curr_num_1sec_intervals; //type: int32
        ydk::YLeaf is_data_available; //type: boolean

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::CurrSensor


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Eeprom : public ydk::Entity
{
    public:
        Eeprom();
        ~Eeprom();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eeprom_id; //type: string
        ydk::YLeaf eeprom_type; //type: string
        ydk::YLeaf eeprom_bus; //type: string
        ydk::YLeaf eeprom_i2c_regs; //type: string
        ydk::YLeaf is_data_available; //type: boolean

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Eeprom


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::OpticsSummary : public ydk::Entity
{
    public:
        OpticsSummary();
        ~OpticsSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf optics_id; //type: string
        ydk::YLeaf optics_type; //type: string
        ydk::YLeaf optics_bus; //type: string
        ydk::YLeaf optics_i2c_regs; //type: string
        ydk::YLeaf is_data_available; //type: boolean

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::OpticsSummary


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics : public ydk::Entity
{
    public:
        Optics();
        ~Optics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf optics_id; //type: string
        class Cxp; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::Cxp
        class TxInfo; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::TxInfo
        class RxInfo; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::RxInfo
        class TxCoefficients; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::TxCoefficients
        class RxCoefficients; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::RxCoefficients

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::Cxp> > cxp;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::TxInfo> > tx_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::RxInfo> > rx_info;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::TxCoefficients> > tx_coefficients;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::RxCoefficients> > rx_coefficients;
        
}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::Cxp : public ydk::Entity
{
    public:
        Cxp();
        ~Cxp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cxp_id; //type: string
        ydk::YLeaf signature; //type: string
        ydk::YLeaf cxp_port_ready; //type: boolean
        ydk::YLeaf opaque; //type: string
        ydk::YLeaf nodeid; //type: string
        ydk::YLeaf slice; //type: uint32
        ydk::YLeaf capabilities; //type: string
        ydk::YLeaf vendor_name; //type: string
        ydk::YLeaf vendor_part_num; //type: string
        ydk::YLeaf vendor_rev_num; //type: string
        ydk::YLeaf vendor_serial_num; //type: string
        ydk::YLeaf passive; //type: boolean
        ydk::YLeaf is_data_available; //type: boolean

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::Cxp


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::TxInfo : public ydk::Entity
{
    public:
        TxInfo();
        ~TxInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tx_channel_id; //type: string
        ydk::YLeaf tx_status_flag; //type: string
        ydk::YLeaf tx_error_flag; //type: string
        ydk::YLeaf is_data_available; //type: boolean

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::TxInfo


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::RxInfo : public ydk::Entity
{
    public:
        RxInfo();
        ~RxInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rx_channel_id; //type: string
        ydk::YLeaf rx_status_flag; //type: string
        ydk::YLeaf rx_error_flag; //type: string
        ydk::YLeaf is_data_available; //type: boolean

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::RxInfo


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::TxCoefficients : public ydk::Entity
{
    public:
        TxCoefficients();
        ~TxCoefficients();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tx_channel_id; //type: string
        ydk::YLeaf equalization; //type: string
        ydk::YLeaf is_data_available; //type: boolean

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::TxCoefficients


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::RxCoefficients : public ydk::Entity
{
    public:
        RxCoefficients();
        ~RxCoefficients();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rx_channel_id; //type: string
        ydk::YLeaf amplitude; //type: string
        ydk::YLeaf de_emphasis; //type: string
        ydk::YLeaf is_data_available; //type: boolean

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Optics::RxCoefficients


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Phy : public ydk::Entity
{
    public:
        Phy();
        ~Phy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf phy_id; //type: string
        ydk::YLeaf phy_type; //type: string
        ydk::YLeaf phy_bus; //type: string
        ydk::YLeaf phy_i2c_regs; //type: string
        ydk::YLeaf is_data_available; //type: boolean

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Phy


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::TempSensor : public ydk::Entity
{
    public:
        TempSensor();
        ~TempSensor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sensor_id; //type: string
        ydk::YLeaf temp_sensor_id; //type: string
        ydk::YLeaf temp_dev_addr; //type: uint32
        ydk::YLeaf temp_poll_intvl; //type: uint32
        ydk::YLeaf temp_delta; //type: uint32
        ydk::YLeaf temp_raw_data; //type: uint32
        ydk::YLeaf temp_sensor_value; //type: int32
        ydk::YLeaf temp_unit; //type: int32
        ydk::YLeaf temp_last_value; //type: uint32
        ydk::YLeaf temp_send_update; //type: boolean
        ydk::YLeaf temp_num_1sec_intervals; //type: int32
        ydk::YLeaf is_data_available; //type: boolean

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::TempSensor


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::VoltSensor : public ydk::Entity
{
    public:
        VoltSensor();
        ~VoltSensor();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sensor_id; //type: string
        ydk::YLeaf volt_sensor_id; //type: string
        ydk::YLeaf volt_dev_addr; //type: uint32
        ydk::YLeaf volt_poll_intvl; //type: uint32
        ydk::YLeaf volt_delta; //type: uint32
        ydk::YLeaf volt_raw_data; //type: uint32
        ydk::YLeaf volt_sensor_value; //type: int32
        ydk::YLeaf volt_unit; //type: int32
        ydk::YLeaf volt_last_value; //type: uint32
        ydk::YLeaf volt_send_update; //type: boolean
        ydk::YLeaf volt_num_1sec_intervals; //type: int32
        ydk::YLeaf is_data_available; //type: boolean

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::VoltSensor


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::GearboxSummary : public ydk::Entity
{
    public:
        GearboxSummary();
        ~GearboxSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gearbox_id; //type: string
        ydk::YLeaf is_data_available; //type: boolean
        ydk::YLeaf inited; //type: boolean
        ydk::YLeaf gopaque; //type: string
        ydk::YLeaf gnodeid; //type: string
        ydk::YLeaf gslice; //type: uint32
        ydk::YLeaf gport; //type: uint32
        ydk::YLeaf gdev_addr; //type: uint8
        ydk::YLeaf gdev_type; //type: uint8
        ydk::YLeaf gctrace_err_hdl; //type: string
        ydk::YLeaf gctrace_evt_hdl; //type: string
        ydk::YLeaf gctrace_intr_hdl; //type: string
        ydk::YLeaf gnext; //type: string
        ydk::YLeaf gparent; //type: string
        ydk::YLeaf syslanelosmask; //type: string
        ydk::YLeaf linelanelosmask; //type: string
        ydk::YLeaf syslaneenablemask; //type: string
        ydk::YLeaf linelaneenablemask; //type: string
        ydk::YLeaf line_lane_cnt; //type: string
        ydk::YLeaf sys_lane_cnt; //type: string
        ydk::YLeaf verbose; //type: boolean
        ydk::YLeaf dwnld_done; //type: boolean
        ydk::YLeaf chip_version; //type: string
        ydk::YLeaf reversion; //type: string
        ydk::YLeaf firmware_version; //type: string
        ydk::YLeaf ucode_checksum; //type: string
        ydk::YLeaf chip_modesel; //type: string
        ydk::YLeaf chip_ref_clocksel; //type: string
        ydk::YLeaf line_side_tx_pll; //type: string
        ydk::YLeaf line_tx_vco; //type: string
        ydk::YLeaf line_tx_vco_state; //type: string
        ydk::YLeaf line_side_rx_pll; //type: string
        ydk::YLeaf line_rx_vco; //type: string
        ydk::YLeaf line_rx_vco_state; //type: string

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::GearboxSummary


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox2Summary : public ydk::Entity
{
    public:
        Gearbox2Summary();
        ~Gearbox2Summary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gearbox2_id; //type: string
        ydk::YLeaf is_data_available; //type: boolean
        ydk::YLeaf inited; //type: boolean
        ydk::YLeaf gopaque; //type: string
        ydk::YLeaf gnodeid; //type: string
        ydk::YLeaf gslice; //type: uint32
        ydk::YLeaf gport; //type: uint32
        ydk::YLeaf gdev_addr; //type: uint8
        ydk::YLeaf gdev_type; //type: uint8
        ydk::YLeaf gctrace_err_hdl; //type: string
        ydk::YLeaf gctrace_evt_hdl; //type: string
        ydk::YLeaf gctrace_intr_hdl; //type: string
        ydk::YLeaf gparent; //type: string
        ydk::YLeaf line_lane_cnt; //type: string
        ydk::YLeaf sys_lane_cnt; //type: string
        ydk::YLeaf verbose; //type: boolean
        ydk::YLeaf dwnld_done; //type: boolean
        ydk::YLeaf chip_version; //type: string
        ydk::YLeaf reversion; //type: string
        ydk::YLeaf firmware_version; //type: string
        ydk::YLeaf ucode_checksum; //type: string
        ydk::YLeaf chip_modesel; //type: string
        ydk::YLeaf chip_ref_clocksel; //type: string

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox2Summary


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::DualGearboxSummary : public ydk::Entity
{
    public:
        DualGearboxSummary();
        ~DualGearboxSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dual_gearbox_id; //type: string
        ydk::YLeaf is_data_available; //type: boolean
        ydk::YLeaf inited; //type: boolean
        ydk::YLeaf gopaque; //type: string
        ydk::YLeaf gnodeid; //type: string
        ydk::YLeaf gslice; //type: uint32
        ydk::YLeaf gport; //type: uint32
        ydk::YLeaf gdev_addr; //type: uint8
        ydk::YLeaf gdev_type; //type: uint8
        ydk::YLeaf gctrace_err_hdl; //type: string
        ydk::YLeaf gctrace_evt_hdl; //type: string
        ydk::YLeaf gctrace_intr_hdl; //type: string
        ydk::YLeaf gnext; //type: string
        ydk::YLeaf gparent; //type: string
        ydk::YLeaf syslanelosmask; //type: string
        ydk::YLeaf linelanelosmask; //type: string
        ydk::YLeaf syslaneenablemask; //type: string
        ydk::YLeaf linelaneenablemask; //type: string
        ydk::YLeaf line_lane_cnt; //type: string
        ydk::YLeaf sys_lane_cnt; //type: string
        ydk::YLeaf verbose; //type: boolean
        ydk::YLeaf dwnld_done; //type: boolean
        ydk::YLeaf chip_version; //type: string
        ydk::YLeaf reversion; //type: string
        ydk::YLeaf firmware_version; //type: string
        ydk::YLeaf ucode_checksum; //type: string
        ydk::YLeaf chip_modesel; //type: string
        ydk::YLeaf chip_ref_clocksel; //type: string
        ydk::YLeaf line_side_tx_pll; //type: string
        ydk::YLeaf line_tx_vco; //type: string
        ydk::YLeaf line_tx_vco_state; //type: string
        ydk::YLeaf line_side_rx_pll; //type: string
        ydk::YLeaf line_rx_vco; //type: string
        ydk::YLeaf line_rx_vco_state; //type: string

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::DualGearboxSummary


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox : public ydk::Entity
{
    public:
        Gearbox();
        ~Gearbox();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gearbox_id; //type: string
        class GearboxLane; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox::GearboxLane

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox::GearboxLane> > gearbox_lane;
        
}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox::GearboxLane : public ydk::Entity
{
    public:
        GearboxLane();
        ~GearboxLane();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gearbox_lane_id; //type: string
        ydk::YLeaf is_data_available; //type: boolean
        ydk::YLeaf system_side_lanes; //type: string
        ydk::YLeaf cdr_lock_status_caui; //type: string
        ydk::YLeaf line_side_lanes; //type: string
        ydk::YLeaf lane_status_cdr; //type: string
        ydk::YLeaf lane_status_sig; //type: string
        ydk::YLeaf los_status; //type: string
        ydk::YLeaf system_side_loopback; //type: string
        ydk::YLeaf lane_side_loopback; //type: string

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox::GearboxLane


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox2 : public ydk::Entity
{
    public:
        Gearbox2();
        ~Gearbox2();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gearbox2_id; //type: string
        class Gearbox2Lane; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox2::Gearbox2Lane

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox2::Gearbox2Lane> > gearbox2_lane;
        
}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox2


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox2::Gearbox2Lane : public ydk::Entity
{
    public:
        Gearbox2Lane();
        ~Gearbox2Lane();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gearbox2_lane_id; //type: string
        ydk::YLeaf is_data_available; //type: boolean
        ydk::YLeaf system_side_lanes; //type: string
        ydk::YLeaf cdr_lock_status_caui; //type: string
        ydk::YLeaf line_side_lanes; //type: string
        ydk::YLeaf lane_status_cdr; //type: string
        ydk::YLeaf lane_status_sig; //type: string
        ydk::YLeaf los_status; //type: string
        ydk::YLeaf system_side_loopback; //type: string
        ydk::YLeaf lane_side_loopback; //type: string

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Gearbox2::Gearbox2Lane


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::DualGearbox : public ydk::Entity
{
    public:
        DualGearbox();
        ~DualGearbox();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dual_gearbox_id; //type: string
        class DualGearboxLane; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::DualGearbox::DualGearboxLane

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice::DualGearbox::DualGearboxLane> > dual_gearbox_lane;
        
}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::DualGearbox


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::DualGearbox::DualGearboxLane : public ydk::Entity
{
    public:
        DualGearboxLane();
        ~DualGearboxLane();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dual_gearbox_lane_id; //type: string
        ydk::YLeaf is_data_available; //type: boolean
        ydk::YLeaf system_side_lanes; //type: string
        ydk::YLeaf cdr_lock_status_caui; //type: string
        ydk::YLeaf line_side_lanes; //type: string
        ydk::YLeaf lane_status_cdr; //type: string
        ydk::YLeaf lane_status_sig; //type: string
        ydk::YLeaf los_status; //type: string
        ydk::YLeaf system_side_loopback; //type: string
        ydk::YLeaf lane_side_loopback; //type: string

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::DualGearbox::DualGearboxLane


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Cpak : public ydk::Entity
{
    public:
        Cpak();
        ~Cpak();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cpak_id; //type: string
        ydk::YLeaf is_data_available; //type: boolean
        ydk::YLeaf csignature; //type: string
        ydk::YLeaf cready; //type: boolean
        ydk::YLeaf cpassive; //type: boolean
        ydk::YLeaf chw_ver_major; //type: uint8
        ydk::YLeaf chw_ver_minor; //type: uint8
        ydk::YLeaf copaque; //type: string
        ydk::YLeaf cnodeid; //type: string
        ydk::YLeaf cslice; //type: uint32
        ydk::YLeaf cport; //type: uint32
        ydk::YLeaf cprt_addr; //type: uint8
        ydk::YLeaf cdev_addr; //type: uint8
        ydk::YLeaf cdev_sel; //type: uint8
        ydk::YLeaf cupgrade_inprogress; //type: uint8
        ydk::YLeaf coptics_type; //type: string
        ydk::YLeaf cctrace_err_hdl; //type: string
        ydk::YLeaf cctrace_evt_hdl; //type: string
        ydk::YLeaf cnext; //type: string
        ydk::YLeaf cparent; //type: string
        ydk::YLeaf crunning_image; //type: string
        ydk::YLeaf ccommitted_image; //type: string

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Cpak


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::ModenaSummary : public ydk::Entity
{
    public:
        ModenaSummary();
        ~ModenaSummary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf modena_id; //type: string
        ydk::YLeaf is_data_available; //type: boolean
        ydk::YLeaf mready; //type: boolean
        ydk::YLeaf mport_ctx_p; //type: string
        ydk::YLeaf mlevm; //type: string
        ydk::YLeaf mctrace_err_hdl; //type: string
        ydk::YLeaf mctrace_evt_hdl; //type: string
        ydk::YLeaf msignature; //type: string
        ydk::YLeaf mlpc_ready; //type: boolean
        ydk::YLeaf mopaque; //type: string
        ydk::YLeaf mnodeid; //type: string
        ydk::YLeaf mslice; //type: uint32
        ydk::YLeaf mport; //type: uint32
        ydk::YLeaf mdev_addr; //type: uint8
        ydk::YLeaf mrd_func; //type: string
        ydk::YLeaf mwr_func; //type: string
        ydk::YLeaf mnext; //type: string

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::ModenaSummary


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Modena : public ydk::Entity
{
    public:
        Modena();
        ~Modena();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf modena_id; //type: string
        class ModenaLane; //type: Controller::Oper::SliceControl::LocationList::FPGA::Slice::Modena::ModenaLane

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Oper::SliceControl::LocationList::FPGA::Slice::Modena::ModenaLane> > modena_lane;
        
}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Modena


class Controller::Oper::SliceControl::LocationList::FPGA::Slice::Modena::ModenaLane : public ydk::Entity
{
    public:
        ModenaLane();
        ~ModenaLane();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf modena_lane_id; //type: string
        ydk::YLeaf is_data_available; //type: boolean
        ydk::YLeaf oper_mode; //type: string

}; // Controller::Oper::SliceControl::LocationList::FPGA::Slice::Modena::ModenaLane


class Controller::Zen : public ydk::Entity
{
    public:
        Zen();
        ~Zen();

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

        class ZenOper; //type: Controller::Zen::ZenOper
        class Trace; //type: Controller::Zen::Trace

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Zen::ZenOper> zen_oper;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Zen::Trace> > trace;
        
}; // Controller::Zen


class Controller::Zen::ZenOper : public ydk::Entity
{
    public:
        ZenOper();
        ~ZenOper();

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

        class ZenLocation; //type: Controller::Zen::ZenOper::ZenLocation

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_sysadmin_controllers::Controller::Zen::ZenOper::ZenLocation> > zen_location;
        
}; // Controller::Zen::ZenOper


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_CONTROLLERS_3_ */

