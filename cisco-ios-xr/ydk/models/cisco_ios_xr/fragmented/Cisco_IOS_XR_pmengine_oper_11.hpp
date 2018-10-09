#ifndef _CISCO_IOS_XR_PMENGINE_OPER_11_
#define _CISCO_IOS_XR_PMENGINE_OPER_11_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_pmengine_oper_10.hpp"
#include "Cisco_IOS_XR_pmengine_oper_7.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24fecHistories::DwdmHour24fecHistory::DwdmHour24fecTimeLineInstances::DwdmHour24fecTimeLineInstance::Qmargin : public ydk::Entity
{
    public:
        Qmargin();
        ~Qmargin();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24fecHistories::DwdmHour24fecHistory::DwdmHour24fecTimeLineInstances::DwdmHour24fecTimeLineInstance::Qmargin


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories : public ydk::Entity
{
    public:
        DwdmHour24OpticsHistories();
        ~DwdmHour24OpticsHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DwdmHour24OpticsHistory; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory

        ydk::YList dwdm_hour24_optics_history;
        
}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory : public ydk::Entity
{
    public:
        DwdmHour24OpticsHistory();
        ~DwdmHour24OpticsHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        class DwdmHour24OpticsTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances> dwdm_hour24_optics_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances : public ydk::Entity
{
    public:
        DwdmHour24OpticsTimeLineInstances();
        ~DwdmHour24OpticsTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DwdmHour24OpticsTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance

        ydk::YList dwdm_hour24_optics_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance : public ydk::Entity
{
    public:
        DwdmHour24OpticsTimeLineInstance();
        ~DwdmHour24OpticsTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class Lbc; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Lbc
        class LbcPc; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::LbcPc
        class Opt; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Opt
        class Opr; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Opr
        class Cd; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Cd
        class Dgd; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Dgd
        class Pmd; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pmd
        class Osnr; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Osnr
        class CenterWavelength; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::CenterWavelength
        class Pdl; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pdl
        class Pcr; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pcr
        class Pn; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pn
        class RxSigPow; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::RxSigPow
        class LowSigFreqOff; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::LowSigFreqOff
        class AmpliGain; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::AmpliGain
        class AmpliGainTilt; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::AmpliGainTilt

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::LbcPc> lbc_pc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Opt> opt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Opr> opr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Cd> cd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Dgd> dgd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pmd> pmd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Osnr> osnr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::CenterWavelength> center_wavelength;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pdl> pdl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pcr> pcr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pn> pn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::RxSigPow> rx_sig_pow;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::LowSigFreqOff> low_sig_freq_off;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::AmpliGain> ampli_gain;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::AmpliGainTilt> ampli_gain_tilt;
        
}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Lbc : public ydk::Entity
{
    public:
        Lbc();
        ~Lbc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf minimum; //type: int32
        ydk::YLeaf average; //type: int32
        ydk::YLeaf maximum; //type: int32
        ydk::YLeaf minimum_threshold; //type: int32
        ydk::YLeaf configured_min_thresh; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: int32
        ydk::YLeaf configured_max_thresh; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Lbc


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::LbcPc : public ydk::Entity
{
    public:
        LbcPc();
        ~LbcPc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf configured_min_thresh; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf configured_max_thresh; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::LbcPc


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Opt : public ydk::Entity
{
    public:
        Opt();
        ~Opt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf configured_min_thresh; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf configured_max_thresh; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Opt


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Opr : public ydk::Entity
{
    public:
        Opr();
        ~Opr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf configured_min_thresh; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf configured_max_thresh; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Opr


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Cd : public ydk::Entity
{
    public:
        Cd();
        ~Cd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf minimum; //type: int32
        ydk::YLeaf average; //type: int32
        ydk::YLeaf maximum; //type: int32
        ydk::YLeaf minimum_threshold; //type: int32
        ydk::YLeaf configured_min_thresh; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: int32
        ydk::YLeaf configured_max_thresh; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Cd


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Dgd : public ydk::Entity
{
    public:
        Dgd();
        ~Dgd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf configured_min_thresh; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf configured_max_thresh; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Dgd


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pmd : public ydk::Entity
{
    public:
        Pmd();
        ~Pmd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf configured_min_thresh; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf configured_max_thresh; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pmd


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Osnr : public ydk::Entity
{
    public:
        Osnr();
        ~Osnr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf configured_min_thresh; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf configured_max_thresh; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Osnr


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::CenterWavelength : public ydk::Entity
{
    public:
        CenterWavelength();
        ~CenterWavelength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf configured_min_thresh; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf configured_max_thresh; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::CenterWavelength


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pdl : public ydk::Entity
{
    public:
        Pdl();
        ~Pdl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf configured_min_thresh; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf configured_max_thresh; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pdl


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pcr : public ydk::Entity
{
    public:
        Pcr();
        ~Pcr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf configured_min_thresh; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf configured_max_thresh; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pcr


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pn : public ydk::Entity
{
    public:
        Pn();
        ~Pn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf configured_min_thresh; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf configured_max_thresh; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::Pn


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::RxSigPow : public ydk::Entity
{
    public:
        RxSigPow();
        ~RxSigPow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf configured_min_thresh; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf configured_max_thresh; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::RxSigPow


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::LowSigFreqOff : public ydk::Entity
{
    public:
        LowSigFreqOff();
        ~LowSigFreqOff();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf minimum; //type: int32
        ydk::YLeaf average; //type: int32
        ydk::YLeaf maximum; //type: int32
        ydk::YLeaf minimum_threshold; //type: int32
        ydk::YLeaf configured_min_thresh; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: int32
        ydk::YLeaf configured_max_thresh; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::LowSigFreqOff


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::AmpliGain : public ydk::Entity
{
    public:
        AmpliGain();
        ~AmpliGain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf configured_min_thresh; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf configured_max_thresh; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::AmpliGain


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::AmpliGainTilt : public ydk::Entity
{
    public:
        AmpliGainTilt();
        ~AmpliGainTilt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf minimum; //type: string
        ydk::YLeaf average; //type: string
        ydk::YLeaf maximum; //type: string
        ydk::YLeaf minimum_threshold; //type: string
        ydk::YLeaf configured_min_thresh; //type: string
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf configured_max_thresh; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::AmpliGainTilt


class PerformanceManagementHistory::Global::Periodic::StmHistory : public ydk::Entity
{
    public:
        StmHistory();
        ~StmHistory();

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

        class StmPortHistories; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories> stm_port_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories : public ydk::Entity
{
    public:
        StmPortHistories();
        ~StmPortHistories();

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

        class StmPortHistory; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory

        ydk::YList stm_port_history;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory : public ydk::Entity
{
    public:
        StmPortHistory();
        ~StmPortHistory();

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

        ydk::YLeaf name; //type: string
        class StmHour24History; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History
        class StmMinute15History; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History> stm_hour24_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History> stm_minute15_history;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History : public ydk::Entity
{
    public:
        StmHour24History();
        ~StmHour24History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StmHour24stmHistories; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories> stm_hour24stm_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories : public ydk::Entity
{
    public:
        StmHour24stmHistories();
        ~StmHour24stmHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StmHour24stmHistory; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory

        ydk::YList stm_hour24stm_history;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory : public ydk::Entity
{
    public:
        StmHour24stmHistory();
        ~StmHour24stmHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        class StmHour24stmTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances> stm_hour24stm_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances : public ydk::Entity
{
    public:
        StmHour24stmTimeLineInstances();
        ~StmHour24stmTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StmHour24stmTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance

        ydk::YList stm_hour24stm_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance : public ydk::Entity
{
    public:
        StmHour24stmTimeLineInstance();
        ~StmHour24stmTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        class Section; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section
        class Line; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line
        class FeLine; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section> section;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line> line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine> fe_line;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section : public ydk::Entity
{
    public:
        Section();
        ~Section();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf section_status; //type: int32
        class SectionESs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionESs
        class SectionEsRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionEsRs
        class SectionBbEs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionBbEs
        class SectionBbeRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionBbeRs
        class SectionSeSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionSeSs
        class SectionSesRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionSesRs
        class SectionUaSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionUaSs
        class SectionEBs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionEBs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionESs> section_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionEsRs> section_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionBbEs> section_bb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionBbeRs> section_bbe_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionSeSs> section_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionSesRs> section_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionUaSs> section_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionEBs> section_e_bs;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionESs : public ydk::Entity
{
    public:
        SectionESs();
        ~SectionESs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionESs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionEsRs : public ydk::Entity
{
    public:
        SectionEsRs();
        ~SectionEsRs();

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
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionEsRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionBbEs : public ydk::Entity
{
    public:
        SectionBbEs();
        ~SectionBbEs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionBbEs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionBbeRs : public ydk::Entity
{
    public:
        SectionBbeRs();
        ~SectionBbeRs();

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
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionBbeRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionSeSs : public ydk::Entity
{
    public:
        SectionSeSs();
        ~SectionSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionSeSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionSesRs : public ydk::Entity
{
    public:
        SectionSesRs();
        ~SectionSesRs();

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
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionSesRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionUaSs : public ydk::Entity
{
    public:
        SectionUaSs();
        ~SectionUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionUaSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionEBs : public ydk::Entity
{
    public:
        SectionEBs();
        ~SectionEBs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Section::SectionEBs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line : public ydk::Entity
{
    public:
        Line();
        ~Line();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line_status; //type: int32
        class LineESs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineESs
        class LineEsRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineEsRs
        class LineBbEs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineBbEs
        class LineBbeRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineBbeRs
        class LineSeSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineSeSs
        class LineSesRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineSesRs
        class LineUaSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineUaSs
        class LineEBs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineEBs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineESs> line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineEsRs> line_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineBbEs> line_bb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineBbeRs> line_bbe_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineSeSs> line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineSesRs> line_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineUaSs> line_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineEBs> line_e_bs;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineESs : public ydk::Entity
{
    public:
        LineESs();
        ~LineESs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineESs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineEsRs : public ydk::Entity
{
    public:
        LineEsRs();
        ~LineEsRs();

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
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineEsRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineBbEs : public ydk::Entity
{
    public:
        LineBbEs();
        ~LineBbEs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineBbEs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineBbeRs : public ydk::Entity
{
    public:
        LineBbeRs();
        ~LineBbeRs();

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
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineBbeRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineSeSs : public ydk::Entity
{
    public:
        LineSeSs();
        ~LineSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineSeSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineSesRs : public ydk::Entity
{
    public:
        LineSesRs();
        ~LineSesRs();

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
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineSesRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineUaSs : public ydk::Entity
{
    public:
        LineUaSs();
        ~LineUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineUaSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineEBs : public ydk::Entity
{
    public:
        LineEBs();
        ~LineEBs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::Line::LineEBs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine : public ydk::Entity
{
    public:
        FeLine();
        ~FeLine();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FarEndLineESs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineESs
        class FarEndLineEsRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineEsRs
        class FarEndLineEbbEs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineEbbEs
        class FarEndLineBbeRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineBbeRs
        class FarEndLineSeSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineSeSs
        class FarEndLineSesRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineSesRs
        class FarEndLineUaSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineUaSs
        class FarEndLineEBs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineEBs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineESs> far_end_line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineEsRs> far_end_line_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineEbbEs> far_end_line_ebb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineBbeRs> far_end_line_bbe_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineSeSs> far_end_line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineSesRs> far_end_line_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineUaSs> far_end_line_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineEBs> far_end_line_e_bs;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineESs : public ydk::Entity
{
    public:
        FarEndLineESs();
        ~FarEndLineESs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineESs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineEsRs : public ydk::Entity
{
    public:
        FarEndLineEsRs();
        ~FarEndLineEsRs();

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
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineEsRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineEbbEs : public ydk::Entity
{
    public:
        FarEndLineEbbEs();
        ~FarEndLineEbbEs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineEbbEs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineBbeRs : public ydk::Entity
{
    public:
        FarEndLineBbeRs();
        ~FarEndLineBbeRs();

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
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineBbeRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineSeSs : public ydk::Entity
{
    public:
        FarEndLineSeSs();
        ~FarEndLineSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineSeSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineSesRs : public ydk::Entity
{
    public:
        FarEndLineSesRs();
        ~FarEndLineSesRs();

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
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineSesRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineUaSs : public ydk::Entity
{
    public:
        FarEndLineUaSs();
        ~FarEndLineUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineUaSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineEBs : public ydk::Entity
{
    public:
        FarEndLineEBs();
        ~FarEndLineEBs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24stmHistories::StmHour24stmHistory::StmHour24stmTimeLineInstances::StmHour24stmTimeLineInstance::FeLine::FarEndLineEBs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History : public ydk::Entity
{
    public:
        StmMinute15History();
        ~StmMinute15History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StmMinute15stmHistories; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories> stm_minute15stm_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories : public ydk::Entity
{
    public:
        StmMinute15stmHistories();
        ~StmMinute15stmHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StmMinute15stmHistory; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory

        ydk::YList stm_minute15stm_history;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory : public ydk::Entity
{
    public:
        StmMinute15stmHistory();
        ~StmMinute15stmHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        class StmMinute15stmTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances> stm_minute15stm_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances : public ydk::Entity
{
    public:
        StmMinute15stmTimeLineInstances();
        ~StmMinute15stmTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StmMinute15stmTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance

        ydk::YList stm_minute15stm_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance : public ydk::Entity
{
    public:
        StmMinute15stmTimeLineInstance();
        ~StmMinute15stmTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        class Section; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section
        class Line; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line
        class FeLine; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section> section;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line> line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine> fe_line;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section : public ydk::Entity
{
    public:
        Section();
        ~Section();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf section_status; //type: int32
        class SectionESs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionESs
        class SectionEsRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionEsRs
        class SectionBbEs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionBbEs
        class SectionBbeRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionBbeRs
        class SectionSeSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionSeSs
        class SectionSesRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionSesRs
        class SectionUaSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionUaSs
        class SectionEBs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionEBs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionESs> section_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionEsRs> section_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionBbEs> section_bb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionBbeRs> section_bbe_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionSeSs> section_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionSesRs> section_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionUaSs> section_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionEBs> section_e_bs;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionESs : public ydk::Entity
{
    public:
        SectionESs();
        ~SectionESs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionESs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionEsRs : public ydk::Entity
{
    public:
        SectionEsRs();
        ~SectionEsRs();

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
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionEsRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionBbEs : public ydk::Entity
{
    public:
        SectionBbEs();
        ~SectionBbEs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionBbEs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionBbeRs : public ydk::Entity
{
    public:
        SectionBbeRs();
        ~SectionBbeRs();

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
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionBbeRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionSeSs : public ydk::Entity
{
    public:
        SectionSeSs();
        ~SectionSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionSeSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionSesRs : public ydk::Entity
{
    public:
        SectionSesRs();
        ~SectionSesRs();

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
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionSesRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionUaSs : public ydk::Entity
{
    public:
        SectionUaSs();
        ~SectionUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionUaSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionEBs : public ydk::Entity
{
    public:
        SectionEBs();
        ~SectionEBs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Section::SectionEBs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line : public ydk::Entity
{
    public:
        Line();
        ~Line();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line_status; //type: int32
        class LineESs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineESs
        class LineEsRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineEsRs
        class LineBbEs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineBbEs
        class LineBbeRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineBbeRs
        class LineSeSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineSeSs
        class LineSesRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineSesRs
        class LineUaSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineUaSs
        class LineEBs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineEBs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineESs> line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineEsRs> line_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineBbEs> line_bb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineBbeRs> line_bbe_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineSeSs> line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineSesRs> line_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineUaSs> line_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineEBs> line_e_bs;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineESs : public ydk::Entity
{
    public:
        LineESs();
        ~LineESs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineESs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineEsRs : public ydk::Entity
{
    public:
        LineEsRs();
        ~LineEsRs();

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
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineEsRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineBbEs : public ydk::Entity
{
    public:
        LineBbEs();
        ~LineBbEs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineBbEs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineBbeRs : public ydk::Entity
{
    public:
        LineBbeRs();
        ~LineBbeRs();

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
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineBbeRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineSeSs : public ydk::Entity
{
    public:
        LineSeSs();
        ~LineSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineSeSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineSesRs : public ydk::Entity
{
    public:
        LineSesRs();
        ~LineSesRs();

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
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineSesRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineUaSs : public ydk::Entity
{
    public:
        LineUaSs();
        ~LineUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineUaSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineEBs : public ydk::Entity
{
    public:
        LineEBs();
        ~LineEBs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::Line::LineEBs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine : public ydk::Entity
{
    public:
        FeLine();
        ~FeLine();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FarEndLineESs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineESs
        class FarEndLineEsRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineEsRs
        class FarEndLineEbbEs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineEbbEs
        class FarEndLineBbeRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineBbeRs
        class FarEndLineSeSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineSeSs
        class FarEndLineSesRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineSesRs
        class FarEndLineUaSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineUaSs
        class FarEndLineEBs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineEBs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineESs> far_end_line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineEsRs> far_end_line_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineEbbEs> far_end_line_ebb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineBbeRs> far_end_line_bbe_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineSeSs> far_end_line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineSesRs> far_end_line_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineUaSs> far_end_line_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineEBs> far_end_line_e_bs;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineESs : public ydk::Entity
{
    public:
        FarEndLineESs();
        ~FarEndLineESs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineESs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineEsRs : public ydk::Entity
{
    public:
        FarEndLineEsRs();
        ~FarEndLineEsRs();

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
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineEsRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineEbbEs : public ydk::Entity
{
    public:
        FarEndLineEbbEs();
        ~FarEndLineEbbEs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineEbbEs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineBbeRs : public ydk::Entity
{
    public:
        FarEndLineBbeRs();
        ~FarEndLineBbeRs();

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
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineBbeRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineSeSs : public ydk::Entity
{
    public:
        FarEndLineSeSs();
        ~FarEndLineSeSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineSeSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineSesRs : public ydk::Entity
{
    public:
        FarEndLineSesRs();
        ~FarEndLineSesRs();

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
        ydk::YLeaf threshold; //type: string
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineSesRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineUaSs : public ydk::Entity
{
    public:
        FarEndLineUaSs();
        ~FarEndLineUaSs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineUaSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineEBs : public ydk::Entity
{
    public:
        FarEndLineEBs();
        ~FarEndLineEBs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint32
        ydk::YLeaf threshold; //type: uint32
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15stmHistories::StmMinute15stmHistory::StmMinute15stmTimeLineInstances::StmMinute15stmTimeLineInstance::FeLine::FarEndLineEBs


class PerformanceManagementHistory::Global::Periodic::MacsecHistory : public ydk::Entity
{
    public:
        MacsecHistory();
        ~MacsecHistory();

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

        class MacsecPortHistories; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories> macsec_port_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories : public ydk::Entity
{
    public:
        MacsecPortHistories();
        ~MacsecPortHistories();

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

        class MacsecPortHistory; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory

        ydk::YList macsec_port_history;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory : public ydk::Entity
{
    public:
        MacsecPortHistory();
        ~MacsecPortHistory();

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

        ydk::YLeaf name; //type: string
        class MacsecMinute15History; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History
        class MacsecHour24History; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History
        class MacsecSecond30History; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History> macsec_minute15_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History> macsec_hour24_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History> macsec_second30_history;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History : public ydk::Entity
{
    public:
        MacsecMinute15History();
        ~MacsecMinute15History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecMinute15secyrxHistories; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories
        class MacsecMinute15EtherHistories; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories
        class MacsecMinute15secytxHistories; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secytxHistories
        class MacsecMinute15secyifHistories; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyifHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories> macsec_minute15secyrx_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories> macsec_minute15_ether_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secytxHistories> macsec_minute15secytx_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyifHistories> macsec_minute15secyif_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories : public ydk::Entity
{
    public:
        MacsecMinute15secyrxHistories();
        ~MacsecMinute15secyrxHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecMinute15secyrxHistory; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory

        ydk::YList macsec_minute15secyrx_history;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory : public ydk::Entity
{
    public:
        MacsecMinute15secyrxHistory();
        ~MacsecMinute15secyrxHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        class MacsecMinute15secyrxTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances> macsec_minute15secyrx_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances : public ydk::Entity
{
    public:
        MacsecMinute15secyrxTimeLineInstances();
        ~MacsecMinute15secyrxTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecMinute15secyrxTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance

        ydk::YList macsec_minute15secyrx_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance : public ydk::Entity
{
    public:
        MacsecMinute15secyrxTimeLineInstance();
        ~MacsecMinute15secyrxTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        ydk::YLeaf sample_count; //type: uint64
        class InPktsUnchecked; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsUnchecked
        class InPktsDelayed; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsDelayed
        class InPktsLate; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsLate
        class InPktsOk; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsOk
        class InPktsInvalid; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsInvalid
        class InPktsNotValid; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsNotValid
        class InPktsNotUsingSa; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsNotUsingSa
        class InPktsUnusedSa; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsUnusedSa
        class InPktsUntaggedHit; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsUntaggedHit
        class InOctetsValidated; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InOctetsValidated
        class InOctetsDecrypted; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InOctetsDecrypted

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsUnchecked> in_pkts_unchecked;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsDelayed> in_pkts_delayed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsLate> in_pkts_late;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsOk> in_pkts_ok;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsInvalid> in_pkts_invalid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsNotValid> in_pkts_not_valid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsNotUsingSa> in_pkts_not_using_sa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsUnusedSa> in_pkts_unused_sa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsUntaggedHit> in_pkts_untagged_hit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InOctetsValidated> in_octets_validated;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InOctetsDecrypted> in_octets_decrypted;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsUnchecked : public ydk::Entity
{
    public:
        InPktsUnchecked();
        ~InPktsUnchecked();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsUnchecked


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsDelayed : public ydk::Entity
{
    public:
        InPktsDelayed();
        ~InPktsDelayed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsDelayed


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsLate : public ydk::Entity
{
    public:
        InPktsLate();
        ~InPktsLate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsLate


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsOk : public ydk::Entity
{
    public:
        InPktsOk();
        ~InPktsOk();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsOk


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsInvalid : public ydk::Entity
{
    public:
        InPktsInvalid();
        ~InPktsInvalid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsInvalid


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsNotValid : public ydk::Entity
{
    public:
        InPktsNotValid();
        ~InPktsNotValid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsNotValid


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsNotUsingSa : public ydk::Entity
{
    public:
        InPktsNotUsingSa();
        ~InPktsNotUsingSa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsNotUsingSa


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsUnusedSa : public ydk::Entity
{
    public:
        InPktsUnusedSa();
        ~InPktsUnusedSa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsUnusedSa


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsUntaggedHit : public ydk::Entity
{
    public:
        InPktsUntaggedHit();
        ~InPktsUntaggedHit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InPktsUntaggedHit


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InOctetsValidated : public ydk::Entity
{
    public:
        InOctetsValidated();
        ~InOctetsValidated();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InOctetsValidated


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InOctetsDecrypted : public ydk::Entity
{
    public:
        InOctetsDecrypted();
        ~InOctetsDecrypted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15secyrxHistories::MacsecMinute15secyrxHistory::MacsecMinute15secyrxTimeLineInstances::MacsecMinute15secyrxTimeLineInstance::InOctetsDecrypted


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories : public ydk::Entity
{
    public:
        MacsecMinute15EtherHistories();
        ~MacsecMinute15EtherHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecMinute15EtherHistory; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory

        ydk::YList macsec_minute15_ether_history;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory : public ydk::Entity
{
    public:
        MacsecMinute15EtherHistory();
        ~MacsecMinute15EtherHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        class MacsecMinute15EtherTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances> macsec_minute15_ether_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances : public ydk::Entity
{
    public:
        MacsecMinute15EtherTimeLineInstances();
        ~MacsecMinute15EtherTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecMinute15EtherTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance

        ydk::YList macsec_minute15_ether_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance : public ydk::Entity
{
    public:
        MacsecMinute15EtherTimeLineInstance();
        ~MacsecMinute15EtherTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: uint32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class RxPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::RxPkt
        class StatPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::StatPkt
        class OctetStat; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OctetStat
        class OversizePktStat; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OversizePktStat
        class FcsErrorsStat; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::FcsErrorsStat
        class LongFramesStat; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::LongFramesStat
        class JabberStat; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::JabberStat
        class Ether64Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether64Octets
        class Ether65127Octet; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether65127Octet
        class Ether128255Octet; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether128255Octet
        class Ether256511Octet; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether256511Octet
        class Ether5121023Octet; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether5121023Octet
        class Ether10241518Octet; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether10241518Octet
        class InUcastPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InUcastPkt
        class InMcastPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InMcastPkt
        class InBcastPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InBcastPkt
        class OutUcastPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutUcastPkt
        class OutBcastPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutBcastPkt
        class OutMcastPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutMcastPkt
        class TxPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxPkt
        class IfInErrors; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::IfInErrors
        class IfInOctets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::IfInOctets
        class EtherStatMulticastPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::EtherStatMulticastPkt
        class EtherStatBroadcastPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::EtherStatBroadcastPkt
        class EtherStatUndersizedPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::EtherStatUndersizedPkt
        class OutOctets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutOctets
        class InPauseFrame; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPauseFrame
        class InGoodBytes; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InGoodBytes
        class In8021qFrames; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::In8021qFrames
        class InPkts1519MaxOctets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts1519MaxOctets
        class InGoodPkts; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InGoodPkts
        class InDropOverrun; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropOverrun
        class InDropAbort; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropAbort
        class InDropInvalidVlan; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropInvalidVlan
        class InDropInvalidDmac; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropInvalidDmac
        class InDropInvalidEncap; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropInvalidEncap
        class InDropOther; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropOther
        class InMibGiant; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InMibGiant
        class InMibJabber; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InMibJabber
        class InMibcrc; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InMibcrc
        class InErrorCollisions; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorCollisions
        class InErrorSymbol; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorSymbol
        class OutGoodBytes; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutGoodBytes
        class Out8021qFrames; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Out8021qFrames
        class OutPauseFrames; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPauseFrames
        class OutPkts1519MaxOctets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts1519MaxOctets
        class OutGoodPkts; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutGoodPkts
        class OutDropUnderrun; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutDropUnderrun
        class OutDropAbort; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutDropAbort
        class OutDropOther; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutDropOther
        class OutErrorOther; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutErrorOther
        class InErrorGiant; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorGiant
        class InErrorRunt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorRunt
        class InErrorJabbers; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorJabbers
        class InErrorFragments; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorFragments
        class InErrorOther; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorOther
        class InPkt64Octet; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkt64Octet
        class InPkts65To127Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts65To127Octets
        class InPkts128To255Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts128To255Octets
        class InPkts256To511Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts256To511Octets
        class InPkts512To1023Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts512To1023Octets
        class InPkts1024To1518Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts1024To1518Octets
        class Outpkt64octet; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Outpkt64octet
        class OutPkts65127Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts65127Octets
        class OutPkts128255Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts128255Octets
        class OutPkts256511Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts256511Octets
        class OutPkts5121023Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts5121023Octets
        class OutPkts10241518Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts10241518Octets
        class RxUtil; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::RxUtil
        class TxUtil; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxUtil
        class TxUndersizedPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxUndersizedPkt
        class TxOversizedPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxOversizedPkt
        class TxFragments; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxFragments
        class TxJabber; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxJabber
        class TxBadFcs; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxBadFcs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::RxPkt> rx_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::StatPkt> stat_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OctetStat> octet_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OversizePktStat> oversize_pkt_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::FcsErrorsStat> fcs_errors_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::LongFramesStat> long_frames_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::JabberStat> jabber_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether64Octets> ether64_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether65127Octet> ether65127_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether128255Octet> ether128255_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether256511Octet> ether256511_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether5121023Octet> ether5121023_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether10241518Octet> ether10241518_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InUcastPkt> in_ucast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InMcastPkt> in_mcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InBcastPkt> in_bcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutUcastPkt> out_ucast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutBcastPkt> out_bcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutMcastPkt> out_mcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxPkt> tx_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::IfInErrors> if_in_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::IfInOctets> if_in_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::EtherStatMulticastPkt> ether_stat_multicast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::EtherStatBroadcastPkt> ether_stat_broadcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::EtherStatUndersizedPkt> ether_stat_undersized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutOctets> out_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPauseFrame> in_pause_frame;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InGoodBytes> in_good_bytes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::In8021qFrames> in8021q_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts1519MaxOctets> in_pkts1519_max_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InGoodPkts> in_good_pkts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropOverrun> in_drop_overrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropAbort> in_drop_abort;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropInvalidVlan> in_drop_invalid_vlan;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropInvalidDmac> in_drop_invalid_dmac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropInvalidEncap> in_drop_invalid_encap;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropOther> in_drop_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InMibGiant> in_mib_giant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InMibJabber> in_mib_jabber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InMibcrc> in_mibcrc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorCollisions> in_error_collisions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorSymbol> in_error_symbol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutGoodBytes> out_good_bytes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Out8021qFrames> out8021q_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPauseFrames> out_pause_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts1519MaxOctets> out_pkts1519_max_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutGoodPkts> out_good_pkts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutDropUnderrun> out_drop_underrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutDropAbort> out_drop_abort;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutDropOther> out_drop_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutErrorOther> out_error_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorGiant> in_error_giant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorRunt> in_error_runt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorJabbers> in_error_jabbers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorFragments> in_error_fragments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorOther> in_error_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkt64Octet> in_pkt64_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts65To127Octets> in_pkts65_to127_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts128To255Octets> in_pkts128_to255_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts256To511Octets> in_pkts256_to511_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts512To1023Octets> in_pkts512_to1023_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts1024To1518Octets> in_pkts1024_to1518_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Outpkt64octet> outpkt64octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts65127Octets> out_pkts65127_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts128255Octets> out_pkts128255_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts256511Octets> out_pkts256511_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts5121023Octets> out_pkts5121023_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts10241518Octets> out_pkts10241518_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::RxUtil> rx_util;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxUtil> tx_util;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxUndersizedPkt> tx_undersized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxOversizedPkt> tx_oversized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxFragments> tx_fragments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxJabber> tx_jabber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxBadFcs> tx_bad_fcs;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::RxPkt : public ydk::Entity
{
    public:
        RxPkt();
        ~RxPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::RxPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::StatPkt : public ydk::Entity
{
    public:
        StatPkt();
        ~StatPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::StatPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OctetStat : public ydk::Entity
{
    public:
        OctetStat();
        ~OctetStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OctetStat


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OversizePktStat : public ydk::Entity
{
    public:
        OversizePktStat();
        ~OversizePktStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OversizePktStat


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::FcsErrorsStat : public ydk::Entity
{
    public:
        FcsErrorsStat();
        ~FcsErrorsStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::FcsErrorsStat


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::LongFramesStat : public ydk::Entity
{
    public:
        LongFramesStat();
        ~LongFramesStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::LongFramesStat


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::JabberStat : public ydk::Entity
{
    public:
        JabberStat();
        ~JabberStat();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::JabberStat


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether64Octets : public ydk::Entity
{
    public:
        Ether64Octets();
        ~Ether64Octets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether64Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether65127Octet : public ydk::Entity
{
    public:
        Ether65127Octet();
        ~Ether65127Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether65127Octet


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether128255Octet : public ydk::Entity
{
    public:
        Ether128255Octet();
        ~Ether128255Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether128255Octet


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether256511Octet : public ydk::Entity
{
    public:
        Ether256511Octet();
        ~Ether256511Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether256511Octet


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether5121023Octet : public ydk::Entity
{
    public:
        Ether5121023Octet();
        ~Ether5121023Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether5121023Octet


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether10241518Octet : public ydk::Entity
{
    public:
        Ether10241518Octet();
        ~Ether10241518Octet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether10241518Octet


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InUcastPkt : public ydk::Entity
{
    public:
        InUcastPkt();
        ~InUcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InUcastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InMcastPkt : public ydk::Entity
{
    public:
        InMcastPkt();
        ~InMcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InMcastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InBcastPkt : public ydk::Entity
{
    public:
        InBcastPkt();
        ~InBcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InBcastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutUcastPkt : public ydk::Entity
{
    public:
        OutUcastPkt();
        ~OutUcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutUcastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutBcastPkt : public ydk::Entity
{
    public:
        OutBcastPkt();
        ~OutBcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutBcastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutMcastPkt : public ydk::Entity
{
    public:
        OutMcastPkt();
        ~OutMcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutMcastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxPkt : public ydk::Entity
{
    public:
        TxPkt();
        ~TxPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::IfInErrors : public ydk::Entity
{
    public:
        IfInErrors();
        ~IfInErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::IfInErrors


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::IfInOctets : public ydk::Entity
{
    public:
        IfInOctets();
        ~IfInOctets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::IfInOctets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::EtherStatMulticastPkt : public ydk::Entity
{
    public:
        EtherStatMulticastPkt();
        ~EtherStatMulticastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::EtherStatMulticastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::EtherStatBroadcastPkt : public ydk::Entity
{
    public:
        EtherStatBroadcastPkt();
        ~EtherStatBroadcastPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::EtherStatBroadcastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::EtherStatUndersizedPkt : public ydk::Entity
{
    public:
        EtherStatUndersizedPkt();
        ~EtherStatUndersizedPkt();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::EtherStatUndersizedPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutOctets : public ydk::Entity
{
    public:
        OutOctets();
        ~OutOctets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutOctets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPauseFrame : public ydk::Entity
{
    public:
        InPauseFrame();
        ~InPauseFrame();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPauseFrame


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InGoodBytes : public ydk::Entity
{
    public:
        InGoodBytes();
        ~InGoodBytes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InGoodBytes


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::In8021qFrames : public ydk::Entity
{
    public:
        In8021qFrames();
        ~In8021qFrames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::In8021qFrames


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts1519MaxOctets : public ydk::Entity
{
    public:
        InPkts1519MaxOctets();
        ~InPkts1519MaxOctets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts1519MaxOctets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InGoodPkts : public ydk::Entity
{
    public:
        InGoodPkts();
        ~InGoodPkts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InGoodPkts


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropOverrun : public ydk::Entity
{
    public:
        InDropOverrun();
        ~InDropOverrun();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropOverrun


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropAbort : public ydk::Entity
{
    public:
        InDropAbort();
        ~InDropAbort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropAbort


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropInvalidVlan : public ydk::Entity
{
    public:
        InDropInvalidVlan();
        ~InDropInvalidVlan();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropInvalidVlan


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropInvalidDmac : public ydk::Entity
{
    public:
        InDropInvalidDmac();
        ~InDropInvalidDmac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropInvalidDmac


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropInvalidEncap : public ydk::Entity
{
    public:
        InDropInvalidEncap();
        ~InDropInvalidEncap();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropInvalidEncap


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropOther : public ydk::Entity
{
    public:
        InDropOther();
        ~InDropOther();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropOther


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InMibGiant : public ydk::Entity
{
    public:
        InMibGiant();
        ~InMibGiant();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InMibGiant


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InMibJabber : public ydk::Entity
{
    public:
        InMibJabber();
        ~InMibJabber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InMibJabber


}
}

#endif /* _CISCO_IOS_XR_PMENGINE_OPER_11_ */

