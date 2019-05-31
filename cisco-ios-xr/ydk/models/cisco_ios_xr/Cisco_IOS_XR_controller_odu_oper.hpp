#ifndef _CISCO_IOS_XR_CONTROLLER_ODU_OPER_
#define _CISCO_IOS_XR_CONTROLLER_ODU_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_controller_odu_oper {

class Odu : public ydk::Entity
{
    public:
        Odu();
        ~Odu();

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

        class Controllers; //type: Odu::Controllers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers> controllers;
        
}; // Odu


class Odu::Controllers : public ydk::Entity
{
    public:
        Controllers();
        ~Controllers();

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

        class Controller; //type: Odu::Controllers::Controller

        ydk::YList controller;
        
}; // Odu::Controllers


class Odu::Controllers::Controller : public ydk::Entity
{
    public:
        Controller();
        ~Controller();

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

        ydk::YLeaf controller_name; //type: string
        class Prbs; //type: Odu::Controllers::Controller::Prbs
        class Info; //type: Odu::Controllers::Controller::Info

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Prbs> prbs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info> info;
        
}; // Odu::Controllers::Controller


class Odu::Controllers::Controller::Prbs : public ydk::Entity
{
    public:
        Prbs();
        ~Prbs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf odu_prbs_test; //type: OduPrbsTest
        ydk::YLeaf odu_prbs_mode; //type: OduPrbsMode
        ydk::YLeaf odu_prbs_pattern; //type: OduPrbsPattern
        ydk::YLeaf odu_prbs_status; //type: OduPrbsStatus

}; // Odu::Controllers::Controller::Prbs


class Odu::Controllers::Controller::Info : public ydk::Entity
{
    public:
        Info();
        ~Info();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf state; //type: OduStateEt
        ydk::YLeaf sf; //type: uint8
        ydk::YLeaf sd; //type: uint8
        ydk::YLeaf loopback_mode; //type: OduLoopBackMode
        ydk::YLeaf derived_mode; //type: OduDerState
        ydk::YLeaf inherit_sec_state; //type: OduSecState
        ydk::YLeaf config_sec_state; //type: OduSecState
        ydk::YLeaf gcc_mode; //type: boolean
        ydk::YLeaf child_name; //type: string
        ydk::YLeaf max_odu_child; //type: uint8
        ydk::YLeaf od_uuser; //type: OduUserEt
        ydk::YLeaf resource_state; //type: OduResourceEt
        ydk::YLeaf pt_type; //type: OduPtTypeEt
        ydk::YLeaf flex_type; //type: OduFlexTypeEt
        ydk::YLeaf flex_bw; //type: uint32
        ydk::YLeaf flex_tolerence; //type: uint16
        ydk::YLeaf option; //type: uint8
        ydk::YLeaf tpn_value; //type: uint8
        ydk::YLeaf num_ts; //type: uint8
        ydk::YLeaf ts_g; //type: OduTsGEt
        ydk::YLeaf ts_b; //type: string
        ydk::YLeaf tpn_b; //type: string
        ydk::YLeaf pts_b; //type: string
        ydk::YLeaf fwd_ref; //type: string
        ydk::YLeaf xc_id; //type: uint32
        ydk::YLeaf xconnect_name; //type: string
        ydk::YLeaf fwd_ref_ifhandle; //type: uint32
        ydk::YLeaf no_parent_slot; //type: uint32
        ydk::YLeaf xc_resp_code; //type: DpProgrammed
        ydk::YLeaf performance_monitoring; //type: OduPerMon
        ydk::YLeaf pmtimca; //type: OduPmCaEt
        ydk::YLeaf pm_mode; //type: OduPmMode
        ydk::YLeaf nv_optical_support; //type: boolean
        ydk::YLeaf gmpls_tti_mode; //type: GmplsTtiMode
        ydk::YLeaf gmpls_tcm_id; //type: uint8
        class Local; //type: Odu::Controllers::Controller::Info::Local
        class Remote; //type: Odu::Controllers::Controller::Info::Remote
        class TtiMode; //type: Odu::Controllers::Controller::Info::TtiMode
        class OduFwdRef; //type: Odu::Controllers::Controller::Info::OduFwdRef
        class Alarm; //type: Odu::Controllers::Controller::Info::Alarm
        class TeCtxData; //type: Odu::Controllers::Controller::Info::TeCtxData
        class XcAddCtxData; //type: Odu::Controllers::Controller::Info::XcAddCtxData
        class XcRemCtxData; //type: Odu::Controllers::Controller::Info::XcRemCtxData
        class OduDelay; //type: Odu::Controllers::Controller::Info::OduDelay
        class OduTerminateEther; //type: Odu::Controllers::Controller::Info::OduTerminateEther
        class AinsInfo; //type: Odu::Controllers::Controller::Info::AinsInfo
        class Odu_; //type: Odu::Controllers::Controller::Info::Odu_
        class Odutcm; //type: Odu::Controllers::Controller::Info::Odutcm

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Remote> remote;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::TtiMode> tti_mode;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::OduFwdRef> odu_fwd_ref;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm> alarm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::TeCtxData> te_ctx_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::XcAddCtxData> xc_add_ctx_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::XcRemCtxData> xc_rem_ctx_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::OduDelay> odu_delay;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::OduTerminateEther> odu_terminate_ether;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::AinsInfo> ains_info;
        ydk::YList odu;
        ydk::YList odutcm;
        
}; // Odu::Controllers::Controller::Info


class Odu::Controllers::Controller::Info::Local : public ydk::Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: uint32
        ydk::YLeaf if_index; //type: uint32

}; // Odu::Controllers::Controller::Info::Local


class Odu::Controllers::Controller::Info::Remote : public ydk::Entity
{
    public:
        Remote();
        ~Remote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf router_id; //type: uint32
        ydk::YLeaf if_index; //type: uint32

}; // Odu::Controllers::Controller::Info::Remote


class Odu::Controllers::Controller::Info::TtiMode : public ydk::Entity
{
    public:
        TtiMode();
        ~TtiMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf g709tti_sent_mode; //type: OduTtiEt
        ydk::YLeaf g709tti_exp_mode; //type: OduTtiEt
        ydk::YLeaf g709tti_rec_mode; //type: OduTtiEt
        class Tx; //type: Odu::Controllers::Controller::Info::TtiMode::Tx
        class Exp; //type: Odu::Controllers::Controller::Info::TtiMode::Exp
        class Rec; //type: Odu::Controllers::Controller::Info::TtiMode::Rec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::TtiMode::Tx> tx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::TtiMode::Exp> exp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::TtiMode::Rec> rec;
        
}; // Odu::Controllers::Controller::Info::TtiMode


class Odu::Controllers::Controller::Info::TtiMode::Tx : public ydk::Entity
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

        ydk::YLeafList sapi; //type: list of  uint8
        ydk::YLeafList dapi; //type: list of  uint8
        ydk::YLeafList operator_specific; //type: list of  uint8

}; // Odu::Controllers::Controller::Info::TtiMode::Tx


class Odu::Controllers::Controller::Info::TtiMode::Exp : public ydk::Entity
{
    public:
        Exp();
        ~Exp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList sapi; //type: list of  uint8
        ydk::YLeafList dapi; //type: list of  uint8
        ydk::YLeafList operator_specific; //type: list of  uint8

}; // Odu::Controllers::Controller::Info::TtiMode::Exp


class Odu::Controllers::Controller::Info::TtiMode::Rec : public ydk::Entity
{
    public:
        Rec();
        ~Rec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList sapi; //type: list of  uint8
        ydk::YLeafList dapi; //type: list of  uint8
        ydk::YLeafList operator_specific; //type: list of  uint8

}; // Odu::Controllers::Controller::Info::TtiMode::Rec


class Odu::Controllers::Controller::Info::OduFwdRef : public ydk::Entity
{
    public:
        OduFwdRef();
        ~OduFwdRef();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf od_uuser; //type: OduUserEt
        ydk::YLeaf resource_state; //type: OduResourceEt

}; // Odu::Controllers::Controller::Info::OduFwdRef


class Odu::Controllers::Controller::Info::Alarm : public ydk::Entity
{
    public:
        Alarm();
        ~Alarm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Oci; //type: Odu::Controllers::Controller::Info::Alarm::Oci
        class Ais; //type: Odu::Controllers::Controller::Info::Alarm::Ais
        class Lck; //type: Odu::Controllers::Controller::Info::Alarm::Lck
        class Bdi; //type: Odu::Controllers::Controller::Info::Alarm::Bdi
        class Eoc; //type: Odu::Controllers::Controller::Info::Alarm::Eoc
        class Ptim; //type: Odu::Controllers::Controller::Info::Alarm::Ptim
        class Tim; //type: Odu::Controllers::Controller::Info::Alarm::Tim
        class Iae; //type: Odu::Controllers::Controller::Info::Alarm::Iae
        class Biae; //type: Odu::Controllers::Controller::Info::Alarm::Biae
        class SfBer; //type: Odu::Controllers::Controller::Info::Alarm::SfBer
        class SdBer; //type: Odu::Controllers::Controller::Info::Alarm::SdBer
        class Csf; //type: Odu::Controllers::Controller::Info::Alarm::Csf
        class Tcm1Ais; //type: Odu::Controllers::Controller::Info::Alarm::Tcm1Ais
        class Tcm1Ltc; //type: Odu::Controllers::Controller::Info::Alarm::Tcm1Ltc
        class Tcm1Oci; //type: Odu::Controllers::Controller::Info::Alarm::Tcm1Oci
        class Tcm1Lck; //type: Odu::Controllers::Controller::Info::Alarm::Tcm1Lck
        class Tcm1Iae; //type: Odu::Controllers::Controller::Info::Alarm::Tcm1Iae
        class Tcm1Biae; //type: Odu::Controllers::Controller::Info::Alarm::Tcm1Biae
        class Tcm1Bdi; //type: Odu::Controllers::Controller::Info::Alarm::Tcm1Bdi
        class Tcm1Tim; //type: Odu::Controllers::Controller::Info::Alarm::Tcm1Tim
        class Tcm1SfBer; //type: Odu::Controllers::Controller::Info::Alarm::Tcm1SfBer
        class Tcm1SdBer; //type: Odu::Controllers::Controller::Info::Alarm::Tcm1SdBer
        class Tcm2Ais; //type: Odu::Controllers::Controller::Info::Alarm::Tcm2Ais
        class Tcm2Ltc; //type: Odu::Controllers::Controller::Info::Alarm::Tcm2Ltc
        class Tcm2Oci; //type: Odu::Controllers::Controller::Info::Alarm::Tcm2Oci
        class Tcm2Lck; //type: Odu::Controllers::Controller::Info::Alarm::Tcm2Lck
        class Tcm2Iae; //type: Odu::Controllers::Controller::Info::Alarm::Tcm2Iae
        class Tcm2Biae; //type: Odu::Controllers::Controller::Info::Alarm::Tcm2Biae
        class Tcm2Bdi; //type: Odu::Controllers::Controller::Info::Alarm::Tcm2Bdi
        class Tcm2Tim; //type: Odu::Controllers::Controller::Info::Alarm::Tcm2Tim
        class Tcm2SfBer; //type: Odu::Controllers::Controller::Info::Alarm::Tcm2SfBer
        class Tcm2SdBer; //type: Odu::Controllers::Controller::Info::Alarm::Tcm2SdBer
        class Tcm3Ais; //type: Odu::Controllers::Controller::Info::Alarm::Tcm3Ais
        class Tcm3Ltc; //type: Odu::Controllers::Controller::Info::Alarm::Tcm3Ltc
        class Tcm3Oci; //type: Odu::Controllers::Controller::Info::Alarm::Tcm3Oci
        class Tcm3Lck; //type: Odu::Controllers::Controller::Info::Alarm::Tcm3Lck
        class Tcm3Iae; //type: Odu::Controllers::Controller::Info::Alarm::Tcm3Iae
        class Tcm3Biae; //type: Odu::Controllers::Controller::Info::Alarm::Tcm3Biae
        class Tcm3Bdi; //type: Odu::Controllers::Controller::Info::Alarm::Tcm3Bdi
        class Tcm3Tim; //type: Odu::Controllers::Controller::Info::Alarm::Tcm3Tim
        class Tcm3SfBer; //type: Odu::Controllers::Controller::Info::Alarm::Tcm3SfBer
        class Tcm3SdBer; //type: Odu::Controllers::Controller::Info::Alarm::Tcm3SdBer
        class Tcm4Ais; //type: Odu::Controllers::Controller::Info::Alarm::Tcm4Ais
        class Tcm4Ltc; //type: Odu::Controllers::Controller::Info::Alarm::Tcm4Ltc
        class Tcm4Oci; //type: Odu::Controllers::Controller::Info::Alarm::Tcm4Oci
        class Tcm4Lck; //type: Odu::Controllers::Controller::Info::Alarm::Tcm4Lck
        class Tcm4Iae; //type: Odu::Controllers::Controller::Info::Alarm::Tcm4Iae
        class Tcm4Biae; //type: Odu::Controllers::Controller::Info::Alarm::Tcm4Biae
        class Tcm4Bdi; //type: Odu::Controllers::Controller::Info::Alarm::Tcm4Bdi
        class Tcm4Tim; //type: Odu::Controllers::Controller::Info::Alarm::Tcm4Tim
        class Tcm4SfBer; //type: Odu::Controllers::Controller::Info::Alarm::Tcm4SfBer
        class Tcm4SdBer; //type: Odu::Controllers::Controller::Info::Alarm::Tcm4SdBer
        class Tcm5Ais; //type: Odu::Controllers::Controller::Info::Alarm::Tcm5Ais
        class Tcm5Ltc; //type: Odu::Controllers::Controller::Info::Alarm::Tcm5Ltc
        class Tcm5Oci; //type: Odu::Controllers::Controller::Info::Alarm::Tcm5Oci
        class Tcm5Lck; //type: Odu::Controllers::Controller::Info::Alarm::Tcm5Lck
        class Tcm5Iae; //type: Odu::Controllers::Controller::Info::Alarm::Tcm5Iae
        class Tcm5Biae; //type: Odu::Controllers::Controller::Info::Alarm::Tcm5Biae
        class Tcm5Bdi; //type: Odu::Controllers::Controller::Info::Alarm::Tcm5Bdi
        class Tcm5Tim; //type: Odu::Controllers::Controller::Info::Alarm::Tcm5Tim
        class Tcm5SfBer; //type: Odu::Controllers::Controller::Info::Alarm::Tcm5SfBer
        class Tcm5SdBer; //type: Odu::Controllers::Controller::Info::Alarm::Tcm5SdBer
        class Tcm6Ais; //type: Odu::Controllers::Controller::Info::Alarm::Tcm6Ais
        class Tcm6Ltc; //type: Odu::Controllers::Controller::Info::Alarm::Tcm6Ltc
        class Tcm6Oci; //type: Odu::Controllers::Controller::Info::Alarm::Tcm6Oci
        class Tcm6Lck; //type: Odu::Controllers::Controller::Info::Alarm::Tcm6Lck
        class Tcm6Iae; //type: Odu::Controllers::Controller::Info::Alarm::Tcm6Iae
        class Tcm6Biae; //type: Odu::Controllers::Controller::Info::Alarm::Tcm6Biae
        class Tcm6Bdi; //type: Odu::Controllers::Controller::Info::Alarm::Tcm6Bdi
        class Tcm6Tim; //type: Odu::Controllers::Controller::Info::Alarm::Tcm6Tim
        class Tcm6SfBer; //type: Odu::Controllers::Controller::Info::Alarm::Tcm6SfBer
        class Tcm6SdBer; //type: Odu::Controllers::Controller::Info::Alarm::Tcm6SdBer
        class GfpLfd; //type: Odu::Controllers::Controller::Info::Alarm::GfpLfd
        class GfpLocs; //type: Odu::Controllers::Controller::Info::Alarm::GfpLocs
        class GfpLoccs; //type: Odu::Controllers::Controller::Info::Alarm::GfpLoccs
        class GfpUpm; //type: Odu::Controllers::Controller::Info::Alarm::GfpUpm

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Oci> oci;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Ais> ais;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Lck> lck;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Bdi> bdi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Eoc> eoc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Ptim> ptim;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tim> tim;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Iae> iae;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Biae> biae;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::SfBer> sf_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::SdBer> sd_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Csf> csf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm1Ais> tcm1_ais;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm1Ltc> tcm1_ltc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm1Oci> tcm1_oci;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm1Lck> tcm1_lck;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm1Iae> tcm1_iae;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm1Biae> tcm1_biae;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm1Bdi> tcm1_bdi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm1Tim> tcm1_tim;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm1SfBer> tcm1_sf_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm1SdBer> tcm1_sd_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm2Ais> tcm2_ais;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm2Ltc> tcm2_ltc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm2Oci> tcm2_oci;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm2Lck> tcm2_lck;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm2Iae> tcm2_iae;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm2Biae> tcm2_biae;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm2Bdi> tcm2_bdi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm2Tim> tcm2_tim;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm2SfBer> tcm2_sf_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm2SdBer> tcm2_sd_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm3Ais> tcm3_ais;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm3Ltc> tcm3_ltc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm3Oci> tcm3_oci;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm3Lck> tcm3_lck;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm3Iae> tcm3_iae;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm3Biae> tcm3_biae;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm3Bdi> tcm3_bdi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm3Tim> tcm3_tim;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm3SfBer> tcm3_sf_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm3SdBer> tcm3_sd_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm4Ais> tcm4_ais;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm4Ltc> tcm4_ltc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm4Oci> tcm4_oci;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm4Lck> tcm4_lck;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm4Iae> tcm4_iae;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm4Biae> tcm4_biae;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm4Bdi> tcm4_bdi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm4Tim> tcm4_tim;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm4SfBer> tcm4_sf_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm4SdBer> tcm4_sd_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm5Ais> tcm5_ais;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm5Ltc> tcm5_ltc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm5Oci> tcm5_oci;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm5Lck> tcm5_lck;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm5Iae> tcm5_iae;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm5Biae> tcm5_biae;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm5Bdi> tcm5_bdi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm5Tim> tcm5_tim;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm5SfBer> tcm5_sf_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm5SdBer> tcm5_sd_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm6Ais> tcm6_ais;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm6Ltc> tcm6_ltc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm6Oci> tcm6_oci;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm6Lck> tcm6_lck;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm6Iae> tcm6_iae;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm6Biae> tcm6_biae;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm6Bdi> tcm6_bdi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm6Tim> tcm6_tim;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm6SfBer> tcm6_sf_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::Tcm6SdBer> tcm6_sd_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::GfpLfd> gfp_lfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::GfpLocs> gfp_locs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::GfpLoccs> gfp_loccs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Alarm::GfpUpm> gfp_upm;
        
}; // Odu::Controllers::Controller::Info::Alarm


class Odu::Controllers::Controller::Info::Alarm::Oci : public ydk::Entity
{
    public:
        Oci();
        ~Oci();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Oci


class Odu::Controllers::Controller::Info::Alarm::Ais : public ydk::Entity
{
    public:
        Ais();
        ~Ais();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Ais


class Odu::Controllers::Controller::Info::Alarm::Lck : public ydk::Entity
{
    public:
        Lck();
        ~Lck();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Lck


class Odu::Controllers::Controller::Info::Alarm::Bdi : public ydk::Entity
{
    public:
        Bdi();
        ~Bdi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Bdi


class Odu::Controllers::Controller::Info::Alarm::Eoc : public ydk::Entity
{
    public:
        Eoc();
        ~Eoc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Eoc


class Odu::Controllers::Controller::Info::Alarm::Ptim : public ydk::Entity
{
    public:
        Ptim();
        ~Ptim();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Ptim


class Odu::Controllers::Controller::Info::Alarm::Tim : public ydk::Entity
{
    public:
        Tim();
        ~Tim();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tim


class Odu::Controllers::Controller::Info::Alarm::Iae : public ydk::Entity
{
    public:
        Iae();
        ~Iae();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Iae


class Odu::Controllers::Controller::Info::Alarm::Biae : public ydk::Entity
{
    public:
        Biae();
        ~Biae();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Biae


class Odu::Controllers::Controller::Info::Alarm::SfBer : public ydk::Entity
{
    public:
        SfBer();
        ~SfBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::SfBer


class Odu::Controllers::Controller::Info::Alarm::SdBer : public ydk::Entity
{
    public:
        SdBer();
        ~SdBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::SdBer


class Odu::Controllers::Controller::Info::Alarm::Csf : public ydk::Entity
{
    public:
        Csf();
        ~Csf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Csf


class Odu::Controllers::Controller::Info::Alarm::Tcm1Ais : public ydk::Entity
{
    public:
        Tcm1Ais();
        ~Tcm1Ais();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm1Ais


class Odu::Controllers::Controller::Info::Alarm::Tcm1Ltc : public ydk::Entity
{
    public:
        Tcm1Ltc();
        ~Tcm1Ltc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm1Ltc


class Odu::Controllers::Controller::Info::Alarm::Tcm1Oci : public ydk::Entity
{
    public:
        Tcm1Oci();
        ~Tcm1Oci();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm1Oci


class Odu::Controllers::Controller::Info::Alarm::Tcm1Lck : public ydk::Entity
{
    public:
        Tcm1Lck();
        ~Tcm1Lck();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm1Lck


class Odu::Controllers::Controller::Info::Alarm::Tcm1Iae : public ydk::Entity
{
    public:
        Tcm1Iae();
        ~Tcm1Iae();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm1Iae


class Odu::Controllers::Controller::Info::Alarm::Tcm1Biae : public ydk::Entity
{
    public:
        Tcm1Biae();
        ~Tcm1Biae();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm1Biae


class Odu::Controllers::Controller::Info::Alarm::Tcm1Bdi : public ydk::Entity
{
    public:
        Tcm1Bdi();
        ~Tcm1Bdi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm1Bdi


class Odu::Controllers::Controller::Info::Alarm::Tcm1Tim : public ydk::Entity
{
    public:
        Tcm1Tim();
        ~Tcm1Tim();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm1Tim


class Odu::Controllers::Controller::Info::Alarm::Tcm1SfBer : public ydk::Entity
{
    public:
        Tcm1SfBer();
        ~Tcm1SfBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm1SfBer


class Odu::Controllers::Controller::Info::Alarm::Tcm1SdBer : public ydk::Entity
{
    public:
        Tcm1SdBer();
        ~Tcm1SdBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm1SdBer


class Odu::Controllers::Controller::Info::Alarm::Tcm2Ais : public ydk::Entity
{
    public:
        Tcm2Ais();
        ~Tcm2Ais();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm2Ais


class Odu::Controllers::Controller::Info::Alarm::Tcm2Ltc : public ydk::Entity
{
    public:
        Tcm2Ltc();
        ~Tcm2Ltc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm2Ltc


class Odu::Controllers::Controller::Info::Alarm::Tcm2Oci : public ydk::Entity
{
    public:
        Tcm2Oci();
        ~Tcm2Oci();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm2Oci


class Odu::Controllers::Controller::Info::Alarm::Tcm2Lck : public ydk::Entity
{
    public:
        Tcm2Lck();
        ~Tcm2Lck();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm2Lck


class Odu::Controllers::Controller::Info::Alarm::Tcm2Iae : public ydk::Entity
{
    public:
        Tcm2Iae();
        ~Tcm2Iae();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm2Iae


class Odu::Controllers::Controller::Info::Alarm::Tcm2Biae : public ydk::Entity
{
    public:
        Tcm2Biae();
        ~Tcm2Biae();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm2Biae


class Odu::Controllers::Controller::Info::Alarm::Tcm2Bdi : public ydk::Entity
{
    public:
        Tcm2Bdi();
        ~Tcm2Bdi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm2Bdi


class Odu::Controllers::Controller::Info::Alarm::Tcm2Tim : public ydk::Entity
{
    public:
        Tcm2Tim();
        ~Tcm2Tim();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm2Tim


class Odu::Controllers::Controller::Info::Alarm::Tcm2SfBer : public ydk::Entity
{
    public:
        Tcm2SfBer();
        ~Tcm2SfBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm2SfBer


class Odu::Controllers::Controller::Info::Alarm::Tcm2SdBer : public ydk::Entity
{
    public:
        Tcm2SdBer();
        ~Tcm2SdBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm2SdBer


class Odu::Controllers::Controller::Info::Alarm::Tcm3Ais : public ydk::Entity
{
    public:
        Tcm3Ais();
        ~Tcm3Ais();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm3Ais


class Odu::Controllers::Controller::Info::Alarm::Tcm3Ltc : public ydk::Entity
{
    public:
        Tcm3Ltc();
        ~Tcm3Ltc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm3Ltc


class Odu::Controllers::Controller::Info::Alarm::Tcm3Oci : public ydk::Entity
{
    public:
        Tcm3Oci();
        ~Tcm3Oci();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm3Oci


class Odu::Controllers::Controller::Info::Alarm::Tcm3Lck : public ydk::Entity
{
    public:
        Tcm3Lck();
        ~Tcm3Lck();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm3Lck


class Odu::Controllers::Controller::Info::Alarm::Tcm3Iae : public ydk::Entity
{
    public:
        Tcm3Iae();
        ~Tcm3Iae();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm3Iae


class Odu::Controllers::Controller::Info::Alarm::Tcm3Biae : public ydk::Entity
{
    public:
        Tcm3Biae();
        ~Tcm3Biae();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm3Biae


class Odu::Controllers::Controller::Info::Alarm::Tcm3Bdi : public ydk::Entity
{
    public:
        Tcm3Bdi();
        ~Tcm3Bdi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm3Bdi


class Odu::Controllers::Controller::Info::Alarm::Tcm3Tim : public ydk::Entity
{
    public:
        Tcm3Tim();
        ~Tcm3Tim();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm3Tim


class Odu::Controllers::Controller::Info::Alarm::Tcm3SfBer : public ydk::Entity
{
    public:
        Tcm3SfBer();
        ~Tcm3SfBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm3SfBer


class Odu::Controllers::Controller::Info::Alarm::Tcm3SdBer : public ydk::Entity
{
    public:
        Tcm3SdBer();
        ~Tcm3SdBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm3SdBer


class Odu::Controllers::Controller::Info::Alarm::Tcm4Ais : public ydk::Entity
{
    public:
        Tcm4Ais();
        ~Tcm4Ais();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm4Ais


class Odu::Controllers::Controller::Info::Alarm::Tcm4Ltc : public ydk::Entity
{
    public:
        Tcm4Ltc();
        ~Tcm4Ltc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm4Ltc


class Odu::Controllers::Controller::Info::Alarm::Tcm4Oci : public ydk::Entity
{
    public:
        Tcm4Oci();
        ~Tcm4Oci();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm4Oci


class Odu::Controllers::Controller::Info::Alarm::Tcm4Lck : public ydk::Entity
{
    public:
        Tcm4Lck();
        ~Tcm4Lck();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm4Lck


class Odu::Controllers::Controller::Info::Alarm::Tcm4Iae : public ydk::Entity
{
    public:
        Tcm4Iae();
        ~Tcm4Iae();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm4Iae


class Odu::Controllers::Controller::Info::Alarm::Tcm4Biae : public ydk::Entity
{
    public:
        Tcm4Biae();
        ~Tcm4Biae();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm4Biae


class Odu::Controllers::Controller::Info::Alarm::Tcm4Bdi : public ydk::Entity
{
    public:
        Tcm4Bdi();
        ~Tcm4Bdi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm4Bdi


class Odu::Controllers::Controller::Info::Alarm::Tcm4Tim : public ydk::Entity
{
    public:
        Tcm4Tim();
        ~Tcm4Tim();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm4Tim


class Odu::Controllers::Controller::Info::Alarm::Tcm4SfBer : public ydk::Entity
{
    public:
        Tcm4SfBer();
        ~Tcm4SfBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm4SfBer


class Odu::Controllers::Controller::Info::Alarm::Tcm4SdBer : public ydk::Entity
{
    public:
        Tcm4SdBer();
        ~Tcm4SdBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm4SdBer


class Odu::Controllers::Controller::Info::Alarm::Tcm5Ais : public ydk::Entity
{
    public:
        Tcm5Ais();
        ~Tcm5Ais();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm5Ais


class Odu::Controllers::Controller::Info::Alarm::Tcm5Ltc : public ydk::Entity
{
    public:
        Tcm5Ltc();
        ~Tcm5Ltc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm5Ltc


class Odu::Controllers::Controller::Info::Alarm::Tcm5Oci : public ydk::Entity
{
    public:
        Tcm5Oci();
        ~Tcm5Oci();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm5Oci


class Odu::Controllers::Controller::Info::Alarm::Tcm5Lck : public ydk::Entity
{
    public:
        Tcm5Lck();
        ~Tcm5Lck();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm5Lck


class Odu::Controllers::Controller::Info::Alarm::Tcm5Iae : public ydk::Entity
{
    public:
        Tcm5Iae();
        ~Tcm5Iae();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm5Iae


class Odu::Controllers::Controller::Info::Alarm::Tcm5Biae : public ydk::Entity
{
    public:
        Tcm5Biae();
        ~Tcm5Biae();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm5Biae


class Odu::Controllers::Controller::Info::Alarm::Tcm5Bdi : public ydk::Entity
{
    public:
        Tcm5Bdi();
        ~Tcm5Bdi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm5Bdi


class Odu::Controllers::Controller::Info::Alarm::Tcm5Tim : public ydk::Entity
{
    public:
        Tcm5Tim();
        ~Tcm5Tim();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm5Tim


class Odu::Controllers::Controller::Info::Alarm::Tcm5SfBer : public ydk::Entity
{
    public:
        Tcm5SfBer();
        ~Tcm5SfBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm5SfBer


class Odu::Controllers::Controller::Info::Alarm::Tcm5SdBer : public ydk::Entity
{
    public:
        Tcm5SdBer();
        ~Tcm5SdBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm5SdBer


class Odu::Controllers::Controller::Info::Alarm::Tcm6Ais : public ydk::Entity
{
    public:
        Tcm6Ais();
        ~Tcm6Ais();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm6Ais


class Odu::Controllers::Controller::Info::Alarm::Tcm6Ltc : public ydk::Entity
{
    public:
        Tcm6Ltc();
        ~Tcm6Ltc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm6Ltc


class Odu::Controllers::Controller::Info::Alarm::Tcm6Oci : public ydk::Entity
{
    public:
        Tcm6Oci();
        ~Tcm6Oci();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm6Oci


class Odu::Controllers::Controller::Info::Alarm::Tcm6Lck : public ydk::Entity
{
    public:
        Tcm6Lck();
        ~Tcm6Lck();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm6Lck


class Odu::Controllers::Controller::Info::Alarm::Tcm6Iae : public ydk::Entity
{
    public:
        Tcm6Iae();
        ~Tcm6Iae();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm6Iae


class Odu::Controllers::Controller::Info::Alarm::Tcm6Biae : public ydk::Entity
{
    public:
        Tcm6Biae();
        ~Tcm6Biae();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm6Biae


class Odu::Controllers::Controller::Info::Alarm::Tcm6Bdi : public ydk::Entity
{
    public:
        Tcm6Bdi();
        ~Tcm6Bdi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm6Bdi


class Odu::Controllers::Controller::Info::Alarm::Tcm6Tim : public ydk::Entity
{
    public:
        Tcm6Tim();
        ~Tcm6Tim();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm6Tim


class Odu::Controllers::Controller::Info::Alarm::Tcm6SfBer : public ydk::Entity
{
    public:
        Tcm6SfBer();
        ~Tcm6SfBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm6SfBer


class Odu::Controllers::Controller::Info::Alarm::Tcm6SdBer : public ydk::Entity
{
    public:
        Tcm6SdBer();
        ~Tcm6SdBer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::Tcm6SdBer


class Odu::Controllers::Controller::Info::Alarm::GfpLfd : public ydk::Entity
{
    public:
        GfpLfd();
        ~GfpLfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::GfpLfd


class Odu::Controllers::Controller::Info::Alarm::GfpLocs : public ydk::Entity
{
    public:
        GfpLocs();
        ~GfpLocs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::GfpLocs


class Odu::Controllers::Controller::Info::Alarm::GfpLoccs : public ydk::Entity
{
    public:
        GfpLoccs();
        ~GfpLoccs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::GfpLoccs


class Odu::Controllers::Controller::Info::Alarm::GfpUpm : public ydk::Entity
{
    public:
        GfpUpm();
        ~GfpUpm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reporting_enabled; //type: boolean
        ydk::YLeaf is_detected; //type: boolean
        ydk::YLeaf is_asserted; //type: boolean
        ydk::YLeaf counter; //type: uint64

}; // Odu::Controllers::Controller::Info::Alarm::GfpUpm


class Odu::Controllers::Controller::Info::TeCtxData : public ydk::Entity
{
    public:
        TeCtxData();
        ~TeCtxData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gmpls_req_time; //type: uint32
        ydk::YLeaf ctxt_type; //type: OtmOpticalRmCtxt
        ydk::YLeaf rm_type; //type: OtmOpticalRmCtxtRm
        class TeTunnelInfo; //type: Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo> te_tunnel_info;
        
}; // Odu::Controllers::Controller::Info::TeCtxData


class Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo : public ydk::Entity
{
    public:
        TeTunnelInfo();
        ~TeTunnelInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf info_type; //type: OtmTeTunnelInfo
        ydk::YLeaf tunnel_id; //type: uint32
        class LbCtxt; //type: Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::LbCtxt
        class PassiveMatch; //type: Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::PassiveMatch

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::LbCtxt> lb_ctxt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::PassiveMatch> passive_match;
        
}; // Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo


class Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::LbCtxt : public ydk::Entity
{
    public:
        LbCtxt();
        ~LbCtxt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf s2l_fec_sub_group_id; //type: uint16
        ydk::YLeaf s2l_fec_lsp_id; //type: uint16
        ydk::YLeaf s2l_fec_tunnel_id; //type: uint16
        ydk::YLeaf ext_tunnel_id; //type: uint32
        ydk::YLeaf fec_source; //type: uint32
        ydk::YLeaf fec_dest; //type: uint32
        ydk::YLeaf s2l_fec_p2mp_id; //type: uint32
        ydk::YLeaf sub_group_origin_ator; //type: uint32
        ydk::YLeaf fec_c_type; //type: OtmMplsLibC

}; // Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::LbCtxt


class Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::PassiveMatch : public ydk::Entity
{
    public:
        PassiveMatch();
        ~PassiveMatch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf src_tid; //type: uint16
        ydk::YLeaf src_rid; //type: uint32

}; // Odu::Controllers::Controller::Info::TeCtxData::TeTunnelInfo::PassiveMatch


class Odu::Controllers::Controller::Info::XcAddCtxData : public ydk::Entity
{
    public:
        XcAddCtxData();
        ~XcAddCtxData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gmpls_req_time; //type: uint32
        ydk::YLeaf ctxt_type; //type: OtmOpticalRmCtxt
        ydk::YLeaf rm_type; //type: OtmOpticalRmCtxtRm
        class TeTunnelInfo; //type: Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo> te_tunnel_info;
        
}; // Odu::Controllers::Controller::Info::XcAddCtxData


class Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo : public ydk::Entity
{
    public:
        TeTunnelInfo();
        ~TeTunnelInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf info_type; //type: OtmTeTunnelInfo
        ydk::YLeaf tunnel_id; //type: uint32
        class LbCtxt; //type: Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::LbCtxt
        class PassiveMatch; //type: Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::PassiveMatch

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::LbCtxt> lb_ctxt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::PassiveMatch> passive_match;
        
}; // Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo


class Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::LbCtxt : public ydk::Entity
{
    public:
        LbCtxt();
        ~LbCtxt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf s2l_fec_sub_group_id; //type: uint16
        ydk::YLeaf s2l_fec_lsp_id; //type: uint16
        ydk::YLeaf s2l_fec_tunnel_id; //type: uint16
        ydk::YLeaf ext_tunnel_id; //type: uint32
        ydk::YLeaf fec_source; //type: uint32
        ydk::YLeaf fec_dest; //type: uint32
        ydk::YLeaf s2l_fec_p2mp_id; //type: uint32
        ydk::YLeaf sub_group_origin_ator; //type: uint32
        ydk::YLeaf fec_c_type; //type: OtmMplsLibC

}; // Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::LbCtxt


class Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::PassiveMatch : public ydk::Entity
{
    public:
        PassiveMatch();
        ~PassiveMatch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf src_tid; //type: uint16
        ydk::YLeaf src_rid; //type: uint32

}; // Odu::Controllers::Controller::Info::XcAddCtxData::TeTunnelInfo::PassiveMatch


class Odu::Controllers::Controller::Info::XcRemCtxData : public ydk::Entity
{
    public:
        XcRemCtxData();
        ~XcRemCtxData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gmpls_req_time; //type: uint32
        ydk::YLeaf ctxt_type; //type: OtmOpticalRmCtxt
        ydk::YLeaf rm_type; //type: OtmOpticalRmCtxtRm
        class TeTunnelInfo; //type: Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo> te_tunnel_info;
        
}; // Odu::Controllers::Controller::Info::XcRemCtxData


class Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo : public ydk::Entity
{
    public:
        TeTunnelInfo();
        ~TeTunnelInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf info_type; //type: OtmTeTunnelInfo
        ydk::YLeaf tunnel_id; //type: uint32
        class LbCtxt; //type: Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::LbCtxt
        class PassiveMatch; //type: Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::PassiveMatch

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::LbCtxt> lb_ctxt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::PassiveMatch> passive_match;
        
}; // Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo


class Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::LbCtxt : public ydk::Entity
{
    public:
        LbCtxt();
        ~LbCtxt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf s2l_fec_sub_group_id; //type: uint16
        ydk::YLeaf s2l_fec_lsp_id; //type: uint16
        ydk::YLeaf s2l_fec_tunnel_id; //type: uint16
        ydk::YLeaf ext_tunnel_id; //type: uint32
        ydk::YLeaf fec_source; //type: uint32
        ydk::YLeaf fec_dest; //type: uint32
        ydk::YLeaf s2l_fec_p2mp_id; //type: uint32
        ydk::YLeaf sub_group_origin_ator; //type: uint32
        ydk::YLeaf fec_c_type; //type: OtmMplsLibC

}; // Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::LbCtxt


class Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::PassiveMatch : public ydk::Entity
{
    public:
        PassiveMatch();
        ~PassiveMatch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf src_tid; //type: uint16
        ydk::YLeaf src_rid; //type: uint32

}; // Odu::Controllers::Controller::Info::XcRemCtxData::TeTunnelInfo::PassiveMatch


class Odu::Controllers::Controller::Info::OduDelay : public ydk::Entity
{
    public:
        OduDelay();
        ~OduDelay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mode; //type: uint8
        ydk::YLeaf delay; //type: uint32

}; // Odu::Controllers::Controller::Info::OduDelay


class Odu::Controllers::Controller::Info::OduTerminateEther : public ydk::Entity
{
    public:
        OduTerminateEther();
        ~OduTerminateEther();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vether_ifhandle; //type: uint32
        ydk::YLeaf ethernet_mapping; //type: OduEtherMapPingEt
        ydk::YLeaf ethernet_interface; //type: string

}; // Odu::Controllers::Controller::Info::OduTerminateEther


class Odu::Controllers::Controller::Info::AinsInfo : public ydk::Entity
{
    public:
        AinsInfo();
        ~AinsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ains_state; //type: OduAinsStateEt
        ydk::YLeaf ains_timer_minutes; //type: uint32
        ydk::YLeaf ains_remaining_secs; //type: uint32

}; // Odu::Controllers::Controller::Info::AinsInfo


class Odu::Controllers::Controller::Info::Odu_ : public ydk::Entity
{
    public:
        Odu_();
        ~Odu_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf intf_name; //type: string
        ydk::YLeaf tpn_value; //type: uint8
        ydk::YLeaf ts_bitmap; //type: string

}; // Odu::Controllers::Controller::Info::Odu_


class Odu::Controllers::Controller::Info::Odutcm : public ydk::Entity
{
    public:
        Odutcm();
        ~Odutcm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tcmsf; //type: uint8
        ydk::YLeaf tcmsd; //type: uint8
        ydk::YLeaf tcm_state; //type: OduTcmStateEt
        ydk::YLeaf tcmper_mon; //type: OduTcmPerMon
        ydk::YLeaf tcm_mode; //type: OduTcmMode
        ydk::YLeaf actual_tcm_mode; //type: OduTcmMode
        ydk::YLeaf tcmltc_state; //type: OduTcmStateEt
        ydk::YLeaf tcmtim_state; //type: OduTcmStateEt
        ydk::YLeaf tcm_delay; //type: uint32
        class TcmttiMode; //type: Odu::Controllers::Controller::Info::Odutcm::TcmttiMode

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Odutcm::TcmttiMode> tcmtti_mode;
        
}; // Odu::Controllers::Controller::Info::Odutcm


class Odu::Controllers::Controller::Info::Odutcm::TcmttiMode : public ydk::Entity
{
    public:
        TcmttiMode();
        ~TcmttiMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf g709tti_sent_mode; //type: OduTtiEt
        ydk::YLeaf g709tti_exp_mode; //type: OduTtiEt
        ydk::YLeaf g709tti_rec_mode; //type: OduTtiEt
        class Tx; //type: Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Tx
        class Exp; //type: Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Exp
        class Rec; //type: Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Rec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Tx> tx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Exp> exp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_odu_oper::Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Rec> rec;
        
}; // Odu::Controllers::Controller::Info::Odutcm::TcmttiMode


class Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Tx : public ydk::Entity
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

        ydk::YLeafList sapi; //type: list of  uint8
        ydk::YLeafList dapi; //type: list of  uint8
        ydk::YLeafList operator_specific; //type: list of  uint8

}; // Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Tx


class Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Exp : public ydk::Entity
{
    public:
        Exp();
        ~Exp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList sapi; //type: list of  uint8
        ydk::YLeafList dapi; //type: list of  uint8
        ydk::YLeafList operator_specific; //type: list of  uint8

}; // Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Exp


class Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Rec : public ydk::Entity
{
    public:
        Rec();
        ~Rec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList sapi; //type: list of  uint8
        ydk::YLeafList dapi; //type: list of  uint8
        ydk::YLeafList operator_specific; //type: list of  uint8

}; // Odu::Controllers::Controller::Info::Odutcm::TcmttiMode::Rec

class OduAinsStateEt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf active_running;
        static const ydk::Enum::YLeaf active_pending;

};

class OduEtherMapPingEt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf gfp;
        static const ydk::Enum::YLeaf amp;
        static const ydk::Enum::YLeaf bmp;
        static const ydk::Enum::YLeaf gmp;
        static const ydk::Enum::YLeaf wis;
        static const ydk::Enum::YLeaf gfp_ext;

};

class OduTcmMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf odu_tcm_mode_trans_parent;
        static const ydk::Enum::YLeaf nim;
        static const ydk::Enum::YLeaf oper;

};

class OduTcmPerMon : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};

class OduTcmStateEt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};

class GmplsTtiMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf gmpls_odu_tti_mode_none;
        static const ydk::Enum::YLeaf gmpls_odu_tti_mode_sm;
        static const ydk::Enum::YLeaf gmpls_odu_tti_mode_pm;
        static const ydk::Enum::YLeaf gmpls_odu_tti_mode_tcm;

};

class OduPmMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf nim;
        static const ydk::Enum::YLeaf oper;

};

class OduPmCaEt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};

class OduPerMon : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};

class DpProgrammed : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dp_not_programmed;
        static const ydk::Enum::YLeaf dp_programmed_success;
        static const ydk::Enum::YLeaf end_pt_first_channel_ized;
        static const ydk::Enum::YLeaf end_pt_se_cond_channel_ized;
        static const ydk::Enum::YLeaf end_pt_first_cross_connected;
        static const ydk::Enum::YLeaf end_pt_se_cond_cross_connected;
        static const ydk::Enum::YLeaf end_pt_first_open_connected;
        static const ydk::Enum::YLeaf end_pt_se_cond_open_connected;
        static const ydk::Enum::YLeaf end_pt_first_loop_back_ed;
        static const ydk::Enum::YLeaf end_pt_se_cond_loop_back_ed;
        static const ydk::Enum::YLeaf end_pt_odu_type_mismatch;
        static const ydk::Enum::YLeaf xc_not_set;

};

class OtmMplsLibC : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf otm_mpls_lib_c_type_null;
        static const ydk::Enum::YLeaf otm_mpls_lib_c_type_ipv4;
        static const ydk::Enum::YLeaf otm_mpls_lib_c_type_ipv4_p2p_tunnel;
        static const ydk::Enum::YLeaf otm_mpls_lib_c_type_ipv6_p2p_tunnel;
        static const ydk::Enum::YLeaf otm_mpls_lib_c_type_ipv4_uni;
        static const ydk::Enum::YLeaf otm_mpls_lib_c_type_ipv4_p2mp_tunnel;
        static const ydk::Enum::YLeaf otm_mpls_lib_c_type_ipv6_p2mp_tunnel;
        static const ydk::Enum::YLeaf otm_mpls_lib_c_type_ipv4_tp_tunnel;
        static const ydk::Enum::YLeaf otm_mpls_lib_c_type_ipv6_tp_tunnel;

};

class OtmTeTunnelInfo : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf otm_te_info_none;
        static const ydk::Enum::YLeaf otm_te_info_s2l;
        static const ydk::Enum::YLeaf otm_te_info_tunnel_id;
        static const ydk::Enum::YLeaf otm_te_info_passive_match;

};

class OtmOpticalRmCtxtRm : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf otm_opt_rm_ctxt_rm_none;
        static const ydk::Enum::YLeaf otm_opt_rm_ctxt_rm_wdm;
        static const ydk::Enum::YLeaf otm_opt_rm_ctxt_rm_fsc;
        static const ydk::Enum::YLeaf otm_opt_rm_ctxt_rm_tdm;
        static const ydk::Enum::YLeaf otm_opt_rm_ctxt_rm_g709_otn;
        static const ydk::Enum::YLeaf otm_optical_rm_ctxt_rm_last;

};

class OtmOpticalRmCtxt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf otm_opt_rm_ctxt_type_none;
        static const ydk::Enum::YLeaf otm_opt_rm_ctxt_type_down_stream_rw_add;
        static const ydk::Enum::YLeaf otm_opt_rm_ctxt_type_up_stream_rw_add;
        static const ydk::Enum::YLeaf otm_opt_rm_ctxt_type_down_stream_rw_del;
        static const ydk::Enum::YLeaf otm_opt_rm_ctxt_type_up_stream_rw_del;
        static const ydk::Enum::YLeaf otm_opt_rm_ctxt_type_down_stream_lbl_get;
        static const ydk::Enum::YLeaf otm_opt_rm_ctxt_type_up_stream_lbl_get;
        static const ydk::Enum::YLeaf otm_opt_rm_ctxt_type_down_stream_lbl_rel;
        static const ydk::Enum::YLeaf otm_opt_rm_ctxt_type_up_stream_lbl_rel;
        static const ydk::Enum::YLeaf otm_opt_rm_ctxt_type_end_point_rw_add;
        static const ydk::Enum::YLeaf otm_opt_rm_ctxt_type_end_point_rw_del;
        static const ydk::Enum::YLeaf otm_opt_rm_ctxt_type_odu_group_add;
        static const ydk::Enum::YLeaf otm_opt_rm_ctxt_type_odu_group_del;
        static const ydk::Enum::YLeaf otm_optical_rm_ctxt_type_last;

};

class OduTsGEt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf one_dot_two_five_g;
        static const ydk::Enum::YLeaf two_dot_five_g;
        static const ydk::Enum::YLeaf tsg_not_applicable;

};

class OduFlexTypeEt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf na;
        static const ydk::Enum::YLeaf cbr;
        static const ydk::Enum::YLeaf gfp_resizable;
        static const ydk::Enum::YLeaf gfp_fix;

};

class OduPtTypeEt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf na;
        static const ydk::Enum::YLeaf two_asynchronous_cbr_mapping;
        static const ydk::Enum::YLeaf three_bit_synchronous_cbr_mapping;
        static const ydk::Enum::YLeaf five_gfp_mapping;
        static const ydk::Enum::YLeaf six_virtual_concatenated_signal;
        static const ydk::Enum::YLeaf seven_pcs_codeword_transparent_ethernet_mapping;
        static const ydk::Enum::YLeaf nine_gfp_mapping_into_opu2;
        static const ydk::Enum::YLeaf zero_astm1_mapping_into_opu0;
        static const ydk::Enum::YLeaf zero_bstm4_mapping_into_opu0;
        static const ydk::Enum::YLeaf twenty_odu_multiplex_structure_supporting_odt_ujk;
        static const ydk::Enum::YLeaf twenty_one_odu_multiplex_structure_supporting_odt_ujk_and_odt_ukts;

};

class OduResourceEt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf resource_free;
        static const ydk::Enum::YLeaf open_connection;
        static const ydk::Enum::YLeaf cross_connection;
        static const ydk::Enum::YLeaf channelized;
        static const ydk::Enum::YLeaf loopbacked;
        static const ydk::Enum::YLeaf cross_connected_and_loopbacked;
        static const ydk::Enum::YLeaf terminated;
        static const ydk::Enum::YLeaf invalid;

};

class OduUserEt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mp;
        static const ydk::Enum::YLeaf gmpls;
        static const ydk::Enum::YLeaf all;

};

class OduSecState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf maintenance;
        static const ydk::Enum::YLeaf ains;

};

class OduDerState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out_of_service;
        static const ydk::Enum::YLeaf in_service;
        static const ydk::Enum::YLeaf maintenance;
        static const ydk::Enum::YLeaf ains;

};

class OduTtiEt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ascii;
        static const ydk::Enum::YLeaf hex;
        static const ydk::Enum::YLeaf full_ascii;
        static const ydk::Enum::YLeaf full_hex;

};

class OduLoopBackMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf line;
        static const ydk::Enum::YLeaf internal;

};

class OduStateEt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_ready;
        static const ydk::Enum::YLeaf admin_down;
        static const ydk::Enum::YLeaf down;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf shutdown;
        static const ydk::Enum::YLeaf error_disable;
        static const ydk::Enum::YLeaf down_immediate;
        static const ydk::Enum::YLeaf down_immediate_admin;
        static const ydk::Enum::YLeaf down_graceful;
        static const ydk::Enum::YLeaf begin_shutdown;
        static const ydk::Enum::YLeaf end_shutdown;
        static const ydk::Enum::YLeaf begin_error_disable;
        static const ydk::Enum::YLeaf end_error_disable;
        static const ydk::Enum::YLeaf begin_down_graceful;
        static const ydk::Enum::YLeaf reset;
        static const ydk::Enum::YLeaf operational;
        static const ydk::Enum::YLeaf not_operational;
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf last;

};

class OduPrbsStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf locked;
        static const ydk::Enum::YLeaf unlocked;
        static const ydk::Enum::YLeaf not_applicable;

};

class OduPrbsPattern : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pn_none;
        static const ydk::Enum::YLeaf pn31;
        static const ydk::Enum::YLeaf pn23;
        static const ydk::Enum::YLeaf pn11;
        static const ydk::Enum::YLeaf inverted_pn31;
        static const ydk::Enum::YLeaf inverted_pn11;

};

class OduPrbsMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf invalid;
        static const ydk::Enum::YLeaf source;
        static const ydk::Enum::YLeaf sink;
        static const ydk::Enum::YLeaf source_sink;

};

class OduPrbsTest : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};


}
}

#endif /* _CISCO_IOS_XR_CONTROLLER_ODU_OPER_ */

