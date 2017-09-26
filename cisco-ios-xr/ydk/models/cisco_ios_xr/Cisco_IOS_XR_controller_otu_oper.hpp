#ifndef _CISCO_IOS_XR_CONTROLLER_OTU_OPER_
#define _CISCO_IOS_XR_CONTROLLER_OTU_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_controller_otu_oper {

class Otu : public ydk::Entity
{
    public:
        Otu();
        ~Otu();

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

        class Controllers; //type: Otu::Controllers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers> controllers;
        
}; // Otu


class Otu::Controllers : public ydk::Entity
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

        class Controller; //type: Otu::Controllers::Controller

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller> > controller;
        
}; // Otu::Controllers


class Otu::Controllers::Controller : public ydk::Entity
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
        class Prbs; //type: Otu::Controllers::Controller::Prbs
        class Info; //type: Otu::Controllers::Controller::Info

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info> info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Prbs> prbs;
        
}; // Otu::Controllers::Controller


class Otu::Controllers::Controller::Info : public ydk::Entity
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

        ydk::YLeaf state; //type: OtuStateEt
        ydk::YLeaf name; //type: string
        ydk::YLeaf sf; //type: uint8
        ydk::YLeaf sd; //type: uint8
        ydk::YLeaf loopback_mode; //type: OtuLoopBackMode
        ydk::YLeaf fec_mode; //type: OtuG709FecMode
        ydk::YLeaf derivedstate_mode; //type: OtuDerState
        ydk::YLeaf inherit_sec_state; //type: OtuSecState
        ydk::YLeaf config_sec_state; //type: OtuSecState
        ydk::YLeaf gcc_mode; //type: boolean
        ydk::YLeaf q; //type: uint64
        ydk::YLeaf q_margin; //type: uint64
        ydk::YLeaf performance_monitoring; //type: OtuPerMon
        ydk::YLeaf ec; //type: uint64
        ydk::YLeaf uc; //type: uint64
        ydk::YLeaf pre_fec_val; //type: int32
        ydk::YLeaf pre_fec_mantissa; //type: int8
        ydk::YLeaf ec_value; //type: boolean
        ydk::YLeaf uc_value; //type: boolean
        ydk::YLeaf pre_fec_ber_value; //type: boolean
        ydk::YLeaf pre_fec_ber_mantissa; //type: boolean
        ydk::YLeaf nv_optical_support; //type: boolean
        ydk::YLeaf gmpls_tti_mode; //type: GmplsOtuTtiMode
        ydk::YLeaf gmpls_tvm_id; //type: uint8
        ydk::YLeaf auto_tti_flag; //type: boolean
        ydk::YLeaf description; //type: string
        class Local; //type: Otu::Controllers::Controller::Info::Local
        class Remote; //type: Otu::Controllers::Controller::Info::Remote
        class TtiMode; //type: Otu::Controllers::Controller::Info::TtiMode
        class NetworkSrlg; //type: Otu::Controllers::Controller::Info::NetworkSrlg
        class OtuAlarmInfo; //type: Otu::Controllers::Controller::Info::OtuAlarmInfo
        class Proactive; //type: Otu::Controllers::Controller::Info::Proactive
        class OtuFecSatistics; //type: Otu::Controllers::Controller::Info::OtuFecSatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::Local> local;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::NetworkSrlg> network_srlg;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo> otu_alarm_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuFecSatistics> otu_fec_satistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::Proactive> proactive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::Remote> remote;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::TtiMode> tti_mode;
        
}; // Otu::Controllers::Controller::Info


class Otu::Controllers::Controller::Info::Local : public ydk::Entity
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

}; // Otu::Controllers::Controller::Info::Local


class Otu::Controllers::Controller::Info::NetworkSrlg : public ydk::Entity
{
    public:
        NetworkSrlg();
        ~NetworkSrlg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrlgInfo; //type: Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo> > srlg_info;
        
}; // Otu::Controllers::Controller::Info::NetworkSrlg


class Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo : public ydk::Entity
{
    public:
        SrlgInfo();
        ~SrlgInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_id; //type: uint32
        ydk::YLeafList srlg; //type: list of  uint32

}; // Otu::Controllers::Controller::Info::NetworkSrlg::SrlgInfo


class Otu::Controllers::Controller::Info::OtuAlarmInfo : public ydk::Entity
{
    public:
        OtuAlarmInfo();
        ~OtuAlarmInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Los; //type: Otu::Controllers::Controller::Info::OtuAlarmInfo::Los
        class Lof; //type: Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof
        class Lom; //type: Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom
        class Oof; //type: Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof
        class Oom; //type: Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom
        class Ais; //type: Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais
        class Iae; //type: Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae
        class Biae; //type: Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae
        class Bdi; //type: Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi
        class Tim; //type: Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim
        class Eoc; //type: Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc
        class FecMismatch; //type: Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch
        class SfBer; //type: Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer
        class SdBer; //type: Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer
        class Ec; //type: Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec
        class Uc; //type: Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc
        class Fecunc; //type: Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais> ais;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi> bdi;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae> biae;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec> ec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc> eoc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch> fec_mismatch;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc> fecunc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae> iae;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof> lof;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom> lom;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::Los> los;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof> oof;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom> oom;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer> sd_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer> sf_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim> tim;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc> uc;
        
}; // Otu::Controllers::Controller::Info::OtuAlarmInfo


class Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais : public ydk::Entity
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

}; // Otu::Controllers::Controller::Info::OtuAlarmInfo::Ais


class Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi : public ydk::Entity
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

}; // Otu::Controllers::Controller::Info::OtuAlarmInfo::Bdi


class Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae : public ydk::Entity
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

}; // Otu::Controllers::Controller::Info::OtuAlarmInfo::Biae


class Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec : public ydk::Entity
{
    public:
        Ec();
        ~Ec();

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

}; // Otu::Controllers::Controller::Info::OtuAlarmInfo::Ec


class Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc : public ydk::Entity
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

}; // Otu::Controllers::Controller::Info::OtuAlarmInfo::Eoc


class Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch : public ydk::Entity
{
    public:
        FecMismatch();
        ~FecMismatch();

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

}; // Otu::Controllers::Controller::Info::OtuAlarmInfo::FecMismatch


class Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc : public ydk::Entity
{
    public:
        Fecunc();
        ~Fecunc();

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

}; // Otu::Controllers::Controller::Info::OtuAlarmInfo::Fecunc


class Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae : public ydk::Entity
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

}; // Otu::Controllers::Controller::Info::OtuAlarmInfo::Iae


class Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof : public ydk::Entity
{
    public:
        Lof();
        ~Lof();

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

}; // Otu::Controllers::Controller::Info::OtuAlarmInfo::Lof


class Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom : public ydk::Entity
{
    public:
        Lom();
        ~Lom();

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

}; // Otu::Controllers::Controller::Info::OtuAlarmInfo::Lom


class Otu::Controllers::Controller::Info::OtuAlarmInfo::Los : public ydk::Entity
{
    public:
        Los();
        ~Los();

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

}; // Otu::Controllers::Controller::Info::OtuAlarmInfo::Los


class Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof : public ydk::Entity
{
    public:
        Oof();
        ~Oof();

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

}; // Otu::Controllers::Controller::Info::OtuAlarmInfo::Oof


class Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom : public ydk::Entity
{
    public:
        Oom();
        ~Oom();

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

}; // Otu::Controllers::Controller::Info::OtuAlarmInfo::Oom


class Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer : public ydk::Entity
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

}; // Otu::Controllers::Controller::Info::OtuAlarmInfo::SdBer


class Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer : public ydk::Entity
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

}; // Otu::Controllers::Controller::Info::OtuAlarmInfo::SfBer


class Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim : public ydk::Entity
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

}; // Otu::Controllers::Controller::Info::OtuAlarmInfo::Tim


class Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc : public ydk::Entity
{
    public:
        Uc();
        ~Uc();

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

}; // Otu::Controllers::Controller::Info::OtuAlarmInfo::Uc


class Otu::Controllers::Controller::Info::OtuFecSatistics : public ydk::Entity
{
    public:
        OtuFecSatistics();
        ~OtuFecSatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf post_fec_ber; //type: string
        ydk::YLeaf pre_fec_ber; //type: string

}; // Otu::Controllers::Controller::Info::OtuFecSatistics


class Otu::Controllers::Controller::Info::Proactive : public ydk::Entity
{
    public:
        Proactive();
        ~Proactive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proactive_status; //type: boolean
        ydk::YLeaf inherit_sec_state; //type: OtuSecState
        ydk::YLeaf config_sec_state; //type: OtuSecState
        ydk::YLeaf proactive_fsm_state; //type: OtuPpFsmState
        ydk::YLeaf proactive_fsm_if_state; //type: OtuPpIntfState
        ydk::YLeaf trig_thresh_coeff; //type: uint8
        ydk::YLeaf trig_thresh_power; //type: uint8
        ydk::YLeaf rvrt_thresh_coeff; //type: uint8
        ydk::YLeaf rvrt_thresh_power; //type: uint8
        ydk::YLeaf trigger_window; //type: uint32
        ydk::YLeaf revert_window; //type: uint32

}; // Otu::Controllers::Controller::Info::Proactive


class Otu::Controllers::Controller::Info::Remote : public ydk::Entity
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

}; // Otu::Controllers::Controller::Info::Remote


class Otu::Controllers::Controller::Info::TtiMode : public ydk::Entity
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

        ydk::YLeaf g709tti_sent_mode; //type: OtuTtiEt
        ydk::YLeaf g709tti_exp_mode; //type: OtuTtiEt
        ydk::YLeaf g709tti_rec_mode; //type: OtuTtiEt
        ydk::YLeaf remote_interface; //type: string
        ydk::YLeaf remote_host_name; //type: string
        ydk::YLeaf remote_ip_addr; //type: string
        class Tx; //type: Otu::Controllers::Controller::Info::TtiMode::Tx
        class Exp; //type: Otu::Controllers::Controller::Info::TtiMode::Exp
        class Rec; //type: Otu::Controllers::Controller::Info::TtiMode::Rec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::TtiMode::Exp> exp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::TtiMode::Rec> rec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_controller_otu_oper::Otu::Controllers::Controller::Info::TtiMode::Tx> tx;
        
}; // Otu::Controllers::Controller::Info::TtiMode


class Otu::Controllers::Controller::Info::TtiMode::Exp : public ydk::Entity
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

        ydk::YLeaf full_tti_ascii_string; //type: string
        ydk::YLeafList sapi; //type: list of  uint8
        ydk::YLeafList dapi; //type: list of  uint8
        ydk::YLeafList operator_specific; //type: list of  uint8

}; // Otu::Controllers::Controller::Info::TtiMode::Exp


class Otu::Controllers::Controller::Info::TtiMode::Rec : public ydk::Entity
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

        ydk::YLeaf full_tti_ascii_string; //type: string
        ydk::YLeafList sapi; //type: list of  uint8
        ydk::YLeafList dapi; //type: list of  uint8
        ydk::YLeafList operator_specific; //type: list of  uint8

}; // Otu::Controllers::Controller::Info::TtiMode::Rec


class Otu::Controllers::Controller::Info::TtiMode::Tx : public ydk::Entity
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

        ydk::YLeaf full_tti_ascii_string; //type: string
        ydk::YLeafList sapi; //type: list of  uint8
        ydk::YLeafList dapi; //type: list of  uint8
        ydk::YLeafList operator_specific; //type: list of  uint8

}; // Otu::Controllers::Controller::Info::TtiMode::Tx


class Otu::Controllers::Controller::Prbs : public ydk::Entity
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

        ydk::YLeaf otu_prbs_test; //type: OtuPrbsTest
        ydk::YLeaf otu_prbs_mode; //type: OtuPrbsMode
        ydk::YLeaf otu_prbs_pattern; //type: OtuPrbsPattern
        ydk::YLeaf otu_prbs_status; //type: OtuPrbsStatus

}; // Otu::Controllers::Controller::Prbs

class OtuDerState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf out_of_service;
        static const ydk::Enum::YLeaf in_service;
        static const ydk::Enum::YLeaf maintenance;
        static const ydk::Enum::YLeaf ais;

};

class OtuPrbsStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf locked;
        static const ydk::Enum::YLeaf unlocked;
        static const ydk::Enum::YLeaf not_applicable;

};

class OtuPpFsmState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf otu_in_active;
        static const ydk::Enum::YLeaf otu_disabled;
        static const ydk::Enum::YLeaf otu_normal_state;
        static const ydk::Enum::YLeaf otu_local_failing;
        static const ydk::Enum::YLeaf otu_remote_failing;
        static const ydk::Enum::YLeaf otu_main_t_failing;
        static const ydk::Enum::YLeaf otu_regen_failing;
        static const ydk::Enum::YLeaf otu_local_failed;
        static const ydk::Enum::YLeaf otu_remote_failed;
        static const ydk::Enum::YLeaf otu_main_t_failed;
        static const ydk::Enum::YLeaf otu_regen_failed;

};

class OtuLoopBackMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf line;
        static const ydk::Enum::YLeaf internal;

};

class OtuSecState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf maintenance;
        static const ydk::Enum::YLeaf ais;

};

class OtuPrbsPattern : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_applicable;
        static const ydk::Enum::YLeaf pn31;
        static const ydk::Enum::YLeaf pn23;
        static const ydk::Enum::YLeaf pn11;
        static const ydk::Enum::YLeaf inverted_pn31;
        static const ydk::Enum::YLeaf inverted_pn11;
        static const ydk::Enum::YLeaf pn15;

};

class GmplsOtuTtiMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf gmpls_otu_tti_mode_none;
        static const ydk::Enum::YLeaf gmpls_otu_tti_mode_sm;
        static const ydk::Enum::YLeaf gmpls_otu_tti_mode_pm;
        static const ydk::Enum::YLeaf gmpls_otu_tti_mode_tcm;

};

class OtuPpIntfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf otu_pp_intf_up;
        static const ydk::Enum::YLeaf otu_pp_intf_failing;
        static const ydk::Enum::YLeaf otu_pp_intf_down;

};

class OtuStateEt : public ydk::Enum
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

class OtuPerMon : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};

class OtuTtiEt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ascii;
        static const ydk::Enum::YLeaf hex;
        static const ydk::Enum::YLeaf full_ascii;
        static const ydk::Enum::YLeaf full_hex;

};

class OtuPrbsTest : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};

class OtuPrbsMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_applicable;
        static const ydk::Enum::YLeaf source;
        static const ydk::Enum::YLeaf sink;
        static const ydk::Enum::YLeaf source_sink;

};

class OtuG709FecMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf otu_bag_none_fec;
        static const ydk::Enum::YLeaf otu_bag_standard_fec;
        static const ydk::Enum::YLeaf otu_bag_1_i_7_fec;
        static const ydk::Enum::YLeaf otu_bag_1_i_4_fec;
        static const ydk::Enum::YLeaf otu_bag_swizzle_fec;
        static const ydk::Enum::YLeaf otu_bag_hg20_fec;
        static const ydk::Enum::YLeaf otu_bag_enhanced_hg7_fec;
        static const ydk::Enum::YLeaf otu_bag_sd20_fec;
        static const ydk::Enum::YLeaf otu_bag_sd7_fec;
        static const ydk::Enum::YLeaf otu_bag_all_fec;

};


}
}

#endif /* _CISCO_IOS_XR_CONTROLLER_OTU_OPER_ */

