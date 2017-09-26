#ifndef _CISCO_IOS_XR_PMENGINE_OPER_8_
#define _CISCO_IOS_XR_PMENGINE_OPER_8_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_pmengine_oper_7.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory : public ydk::Entity
{
    public:
        DwdmMinute15OpticsHistory();
        ~DwdmMinute15OpticsHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class DwdmMinute15OpticsTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances> dwdm_minute15_optics_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances : public ydk::Entity
{
    public:
        DwdmMinute15OpticsTimeLineInstances();
        ~DwdmMinute15OpticsTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DwdmMinute15OpticsTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance> > dwdm_minute15_optics_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance : public ydk::Entity
{
    public:
        DwdmMinute15OpticsTimeLineInstance();
        ~DwdmMinute15OpticsTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class Lbc; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Lbc
        class LbcPc; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::LbcPc
        class Opt; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Opt
        class Opr; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Opr
        class Cd; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Cd
        class Dgd; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Dgd
        class Pmd; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pmd
        class Osnr; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Osnr
        class CenterWavelength; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::CenterWavelength
        class Pdl; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pdl
        class Pcr; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pcr
        class Pn; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pn
        class RxSigPow; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::RxSigPow
        class LowSigFreqOff; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::LowSigFreqOff

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Cd> cd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::CenterWavelength> center_wavelength;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Dgd> dgd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::LbcPc> lbc_pc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::LowSigFreqOff> low_sig_freq_off;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Opr> opr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Opt> opt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Osnr> osnr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pcr> pcr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pdl> pdl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pmd> pmd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pn> pn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::RxSigPow> rx_sig_pow;
        
}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Cd : public ydk::Entity
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: int32
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Cd


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::CenterWavelength : public ydk::Entity
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::CenterWavelength


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Dgd : public ydk::Entity
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Dgd


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Lbc : public ydk::Entity
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: int32
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Lbc


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::LbcPc : public ydk::Entity
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::LbcPc


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::LowSigFreqOff : public ydk::Entity
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: int32
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::LowSigFreqOff


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Opr : public ydk::Entity
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Opr


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Opt : public ydk::Entity
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Opt


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Osnr : public ydk::Entity
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Osnr


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pcr : public ydk::Entity
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pcr


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pdl : public ydk::Entity
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pdl


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pmd : public ydk::Entity
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pmd


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pn : public ydk::Entity
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pn


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::RxSigPow : public ydk::Entity
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::RxSigPow


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories : public ydk::Entity
{
    public:
        DwdmMinute15OtnHistories();
        ~DwdmMinute15OtnHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DwdmMinute15OtnHistory; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory> > dwdm_minute15otn_history;
        
}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory : public ydk::Entity
{
    public:
        DwdmMinute15OtnHistory();
        ~DwdmMinute15OtnHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class DwdmMinute15OtnTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances> dwdm_minute15otn_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances : public ydk::Entity
{
    public:
        DwdmMinute15OtnTimeLineInstances();
        ~DwdmMinute15OtnTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DwdmMinute15OtnTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance> > dwdm_minute15otn_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance : public ydk::Entity
{
    public:
        DwdmMinute15OtnTimeLineInstance();
        ~DwdmMinute15OtnTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class Lbc; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::Lbc
        class EsNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsNe
        class EsrNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrNe
        class SesNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesNe
        class SesrNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrNe
        class UasNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasNe
        class BbeNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeNe
        class BberNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberNe
        class FcNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcNe
        class EsFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsFe
        class EsrFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrFe
        class SesFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesFe
        class SesrFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrFe
        class UasFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasFe
        class BbeFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeFe
        class BberFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberFe
        class FcFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcFe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeFe> bbe_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeNe> bbe_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberFe> bber_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberNe> bber_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsFe> es_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsNe> es_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrFe> esr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrNe> esr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcFe> fc_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcNe> fc_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesFe> ses_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesNe> ses_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrFe> sesr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrNe> sesr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasFe> uas_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasNe> uas_ne;
        
}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeFe : public ydk::Entity
{
    public:
        BbeFe();
        ~BbeFe();

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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeNe : public ydk::Entity
{
    public:
        BbeNe();
        ~BbeNe();

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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BbeNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberFe : public ydk::Entity
{
    public:
        BberFe();
        ~BberFe();

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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberNe : public ydk::Entity
{
    public:
        BberNe();
        ~BberNe();

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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::BberNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsFe : public ydk::Entity
{
    public:
        EsFe();
        ~EsFe();

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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsNe : public ydk::Entity
{
    public:
        EsNe();
        ~EsNe();

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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrFe : public ydk::Entity
{
    public:
        EsrFe();
        ~EsrFe();

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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrNe : public ydk::Entity
{
    public:
        EsrNe();
        ~EsrNe();

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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::EsrNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcFe : public ydk::Entity
{
    public:
        FcFe();
        ~FcFe();

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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcNe : public ydk::Entity
{
    public:
        FcNe();
        ~FcNe();

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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::FcNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::Lbc : public ydk::Entity
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

        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::Lbc


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesFe : public ydk::Entity
{
    public:
        SesFe();
        ~SesFe();

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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesNe : public ydk::Entity
{
    public:
        SesNe();
        ~SesNe();

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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrFe : public ydk::Entity
{
    public:
        SesrFe();
        ~SesrFe();

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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrNe : public ydk::Entity
{
    public:
        SesrNe();
        ~SesrNe();

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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::SesrNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasFe : public ydk::Entity
{
    public:
        UasFe();
        ~UasFe();

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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasNe : public ydk::Entity
{
    public:
        UasNe();
        ~UasNe();

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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OtnHistories::DwdmMinute15OtnHistory::DwdmMinute15OtnTimeLineInstances::DwdmMinute15OtnTimeLineInstance::UasNe


class PerformanceManagementHistory::Global::Periodic::EthernetHistory : public ydk::Entity
{
    public:
        EthernetHistory();
        ~EthernetHistory();

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

        class EthernetPortHistories; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories> ethernet_port_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories : public ydk::Entity
{
    public:
        EthernetPortHistories();
        ~EthernetPortHistories();

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

        class EthernetPortHistory; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory> > ethernet_port_history;
        
}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory : public ydk::Entity
{
    public:
        EthernetPortHistory();
        ~EthernetPortHistory();

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
        class EthernetSecond30History; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History
        class EthernetHour24History; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History
        class EthernetMinute15History; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History> ethernet_hour24_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History> ethernet_minute15_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History> ethernet_second30_history;
        
}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History : public ydk::Entity
{
    public:
        EthernetHour24History();
        ~EthernetHour24History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EthernetHour24EtherHistories; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories> ethernet_hour24_ether_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories : public ydk::Entity
{
    public:
        EthernetHour24EtherHistories();
        ~EthernetHour24EtherHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EthernetHour24EtherHistory; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory> > ethernet_hour24_ether_history;
        
}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory : public ydk::Entity
{
    public:
        EthernetHour24EtherHistory();
        ~EthernetHour24EtherHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        class EthernetHour24EtherTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances> ethernet_hour24_ether_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances : public ydk::Entity
{
    public:
        EthernetHour24EtherTimeLineInstances();
        ~EthernetHour24EtherTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EthernetHour24EtherTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance> > ethernet_hour24_ether_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance : public ydk::Entity
{
    public:
        EthernetHour24EtherTimeLineInstance();
        ~EthernetHour24EtherTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class RxPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxPkt
        class StatPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::StatPkt
        class OctetStat; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OctetStat
        class OversizePktStat; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OversizePktStat
        class FcsErrorsStat; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::FcsErrorsStat
        class LongFramesStat; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::LongFramesStat
        class JabberStat; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::JabberStat
        class Ether64Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether64Octets
        class Ether65127Octet; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether65127Octet
        class Ether128255Octet; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether128255Octet
        class Ether256511Octet; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether256511Octet
        class Ether5121023Octet; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether5121023Octet
        class Ether10241518Octet; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether10241518Octet
        class InUcastPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InUcastPkt
        class InMcastPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMcastPkt
        class InBcastPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InBcastPkt
        class OutUcastPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutUcastPkt
        class OutBcastPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutBcastPkt
        class OutMcastPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutMcastPkt
        class TxPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxPkt
        class IfInErrors; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInErrors
        class IfInOctets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInOctets
        class EtherStatMulticastPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatMulticastPkt
        class EtherStatBroadcastPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatBroadcastPkt
        class EtherStatUndersizedPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatUndersizedPkt
        class OutOctets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutOctets
        class InPauseFrame; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPauseFrame
        class InGoodBytes; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodBytes
        class In8021QFrames; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::In8021QFrames
        class InPkts1519MaxOctets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1519MaxOctets
        class InGoodPkts; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodPkts
        class InDropOverrun; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOverrun
        class InDropAbort; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropAbort
        class InDropInvalidVlan; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidVlan
        class InDropInvalidDmac; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidDmac
        class InDropInvalidEncap; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidEncap
        class InDropOther; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOther
        class InMibGiant; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibGiant
        class InMibJabber; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibJabber
        class InMibcrc; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibcrc
        class InErrorCollisions; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorCollisions
        class InErrorSymbol; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorSymbol
        class OutGoodBytes; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodBytes
        class Out8021QFrames; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Out8021QFrames
        class OutPauseFrames; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPauseFrames
        class OutPkts1519MaxOctets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts1519MaxOctets
        class OutGoodPkts; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodPkts
        class OutDropUnderrun; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropUnderrun
        class OutDropAbort; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropAbort
        class OutDropOther; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropOther
        class OutErrorOther; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutErrorOther
        class InErrorGiant; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorGiant
        class InErrorRunt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorRunt
        class InErrorJabbers; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorJabbers
        class InErrorFragments; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorFragments
        class InErrorOther; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorOther
        class InPkt64Octet; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkt64Octet
        class InPkts65To127Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts65To127Octets
        class InPkts128To255Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts128To255Octets
        class InPkts256To511Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts256To511Octets
        class InPkts512To1023Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts512To1023Octets
        class InPkts1024To1518Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1024To1518Octets
        class Outpkt64Octet; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Outpkt64Octet
        class OutPkts65127Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts65127Octets
        class OutPkts128255Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts128255Octets
        class OutPkts256511Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts256511Octets
        class OutPkts5121023Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts5121023Octets
        class OutPkts10241518Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts10241518Octets
        class RxUtil; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxUtil
        class TxUtil; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUtil
        class TxUndersizedPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUndersizedPkt
        class TxOversizedPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxOversizedPkt
        class TxFragments; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxFragments
        class TxJabber; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxJabber
        class TxBadFcs; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxBadFcs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether10241518Octet> ether10241518_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether128255Octet> ether128255_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether256511Octet> ether256511_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether5121023Octet> ether5121023_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether64Octets> ether64_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether65127Octet> ether65127_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatBroadcastPkt> ether_stat_broadcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatMulticastPkt> ether_stat_multicast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatUndersizedPkt> ether_stat_undersized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::FcsErrorsStat> fcs_errors_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInErrors> if_in_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInOctets> if_in_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::In8021QFrames> in8021q_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InBcastPkt> in_bcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropAbort> in_drop_abort;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidDmac> in_drop_invalid_dmac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidEncap> in_drop_invalid_encap;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidVlan> in_drop_invalid_vlan;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOther> in_drop_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOverrun> in_drop_overrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorCollisions> in_error_collisions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorFragments> in_error_fragments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorGiant> in_error_giant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorJabbers> in_error_jabbers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorOther> in_error_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorRunt> in_error_runt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorSymbol> in_error_symbol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodBytes> in_good_bytes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodPkts> in_good_pkts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMcastPkt> in_mcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibGiant> in_mib_giant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibJabber> in_mib_jabber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibcrc> in_mibcrc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPauseFrame> in_pause_frame;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkt64Octet> in_pkt64_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1024To1518Octets> in_pkts1024_to1518_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts128To255Octets> in_pkts128_to255_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1519MaxOctets> in_pkts1519_max_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts256To511Octets> in_pkts256_to511_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts512To1023Octets> in_pkts512_to1023_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts65To127Octets> in_pkts65_to127_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InUcastPkt> in_ucast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::JabberStat> jabber_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::LongFramesStat> long_frames_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OctetStat> octet_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Out8021QFrames> out8021q_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutBcastPkt> out_bcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropAbort> out_drop_abort;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropOther> out_drop_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropUnderrun> out_drop_underrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutErrorOther> out_error_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodBytes> out_good_bytes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodPkts> out_good_pkts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutMcastPkt> out_mcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutOctets> out_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPauseFrames> out_pause_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts10241518Octets> out_pkts10241518_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts128255Octets> out_pkts128255_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts1519MaxOctets> out_pkts1519_max_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts256511Octets> out_pkts256511_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts5121023Octets> out_pkts5121023_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts65127Octets> out_pkts65127_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutUcastPkt> out_ucast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Outpkt64Octet> outpkt64octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OversizePktStat> oversize_pkt_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxPkt> rx_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxUtil> rx_util;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::StatPkt> stat_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxBadFcs> tx_bad_fcs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxFragments> tx_fragments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxJabber> tx_jabber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxOversizedPkt> tx_oversized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxPkt> tx_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUndersizedPkt> tx_undersized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUtil> tx_util;
        
}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether10241518Octet : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether10241518Octet


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether128255Octet : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether128255Octet


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether256511Octet : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether256511Octet


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether5121023Octet : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether5121023Octet


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether64Octets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether64Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether65127Octet : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Ether65127Octet


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatBroadcastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatBroadcastPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatMulticastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatMulticastPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatUndersizedPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::EtherStatUndersizedPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::FcsErrorsStat : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::FcsErrorsStat


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInErrors : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInErrors


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInOctets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::IfInOctets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::In8021QFrames : public ydk::Entity
{
    public:
        In8021QFrames();
        ~In8021QFrames();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::In8021QFrames


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InBcastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InBcastPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropAbort : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropAbort


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidDmac : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidDmac


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidEncap : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidEncap


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidVlan : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropInvalidVlan


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOther : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOther


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOverrun : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InDropOverrun


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorCollisions : public ydk::Entity
{
    public:
        InErrorCollisions();
        ~InErrorCollisions();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorCollisions


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorFragments : public ydk::Entity
{
    public:
        InErrorFragments();
        ~InErrorFragments();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorFragments


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorGiant : public ydk::Entity
{
    public:
        InErrorGiant();
        ~InErrorGiant();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorGiant


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorJabbers : public ydk::Entity
{
    public:
        InErrorJabbers();
        ~InErrorJabbers();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorJabbers


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorOther : public ydk::Entity
{
    public:
        InErrorOther();
        ~InErrorOther();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorOther


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorRunt : public ydk::Entity
{
    public:
        InErrorRunt();
        ~InErrorRunt();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorRunt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorSymbol : public ydk::Entity
{
    public:
        InErrorSymbol();
        ~InErrorSymbol();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InErrorSymbol


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodBytes : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodBytes


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodPkts : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InGoodPkts


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMcastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMcastPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibGiant : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibGiant


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibJabber : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibJabber


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibcrc : public ydk::Entity
{
    public:
        InMibcrc();
        ~InMibcrc();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InMibcrc


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPauseFrame : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPauseFrame


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkt64Octet : public ydk::Entity
{
    public:
        InPkt64Octet();
        ~InPkt64Octet();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkt64Octet


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1024To1518Octets : public ydk::Entity
{
    public:
        InPkts1024To1518Octets();
        ~InPkts1024To1518Octets();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1024To1518Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts128To255Octets : public ydk::Entity
{
    public:
        InPkts128To255Octets();
        ~InPkts128To255Octets();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts128To255Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1519MaxOctets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts1519MaxOctets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts256To511Octets : public ydk::Entity
{
    public:
        InPkts256To511Octets();
        ~InPkts256To511Octets();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts256To511Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts512To1023Octets : public ydk::Entity
{
    public:
        InPkts512To1023Octets();
        ~InPkts512To1023Octets();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts512To1023Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts65To127Octets : public ydk::Entity
{
    public:
        InPkts65To127Octets();
        ~InPkts65To127Octets();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InPkts65To127Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InUcastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::InUcastPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::JabberStat : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::JabberStat


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::LongFramesStat : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::LongFramesStat


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OctetStat : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OctetStat


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Out8021QFrames : public ydk::Entity
{
    public:
        Out8021QFrames();
        ~Out8021QFrames();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Out8021QFrames


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutBcastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutBcastPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropAbort : public ydk::Entity
{
    public:
        OutDropAbort();
        ~OutDropAbort();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropAbort


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropOther : public ydk::Entity
{
    public:
        OutDropOther();
        ~OutDropOther();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropOther


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropUnderrun : public ydk::Entity
{
    public:
        OutDropUnderrun();
        ~OutDropUnderrun();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutDropUnderrun


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutErrorOther : public ydk::Entity
{
    public:
        OutErrorOther();
        ~OutErrorOther();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutErrorOther


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodBytes : public ydk::Entity
{
    public:
        OutGoodBytes();
        ~OutGoodBytes();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodBytes


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodPkts : public ydk::Entity
{
    public:
        OutGoodPkts();
        ~OutGoodPkts();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutGoodPkts


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutMcastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutMcastPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutOctets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutOctets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPauseFrames : public ydk::Entity
{
    public:
        OutPauseFrames();
        ~OutPauseFrames();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPauseFrames


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts10241518Octets : public ydk::Entity
{
    public:
        OutPkts10241518Octets();
        ~OutPkts10241518Octets();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts10241518Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts128255Octets : public ydk::Entity
{
    public:
        OutPkts128255Octets();
        ~OutPkts128255Octets();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts128255Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts1519MaxOctets : public ydk::Entity
{
    public:
        OutPkts1519MaxOctets();
        ~OutPkts1519MaxOctets();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts1519MaxOctets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts256511Octets : public ydk::Entity
{
    public:
        OutPkts256511Octets();
        ~OutPkts256511Octets();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts256511Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts5121023Octets : public ydk::Entity
{
    public:
        OutPkts5121023Octets();
        ~OutPkts5121023Octets();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts5121023Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts65127Octets : public ydk::Entity
{
    public:
        OutPkts65127Octets();
        ~OutPkts65127Octets();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutPkts65127Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutUcastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OutUcastPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Outpkt64Octet : public ydk::Entity
{
    public:
        Outpkt64Octet();
        ~Outpkt64Octet();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::Outpkt64Octet


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OversizePktStat : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::OversizePktStat


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxUtil : public ydk::Entity
{
    public:
        RxUtil();
        ~RxUtil();

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
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::RxUtil


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::StatPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::StatPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxBadFcs : public ydk::Entity
{
    public:
        TxBadFcs();
        ~TxBadFcs();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxBadFcs


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxFragments : public ydk::Entity
{
    public:
        TxFragments();
        ~TxFragments();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxFragments


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxJabber : public ydk::Entity
{
    public:
        TxJabber();
        ~TxJabber();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxJabber


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxOversizedPkt : public ydk::Entity
{
    public:
        TxOversizedPkt();
        ~TxOversizedPkt();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxOversizedPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUndersizedPkt : public ydk::Entity
{
    public:
        TxUndersizedPkt();
        ~TxUndersizedPkt();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUndersizedPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUtil : public ydk::Entity
{
    public:
        TxUtil();
        ~TxUtil();

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
        ydk::YLeaf valid; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History::EthernetHour24EtherHistories::EthernetHour24EtherHistory::EthernetHour24EtherTimeLineInstances::EthernetHour24EtherTimeLineInstance::TxUtil


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History : public ydk::Entity
{
    public:
        EthernetMinute15History();
        ~EthernetMinute15History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15EtherHistories; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories> minute15_ether_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories : public ydk::Entity
{
    public:
        Minute15EtherHistories();
        ~Minute15EtherHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15EtherHistory; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory> > minute15_ether_history;
        
}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory : public ydk::Entity
{
    public:
        Minute15EtherHistory();
        ~Minute15EtherHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slot_number; //type: int32
        class Minute15EtherTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances> minute15_ether_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances : public ydk::Entity
{
    public:
        Minute15EtherTimeLineInstances();
        ~Minute15EtherTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15EtherTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance> > minute15_ether_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance : public ydk::Entity
{
    public:
        Minute15EtherTimeLineInstance();
        ~Minute15EtherTimeLineInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear30_sec_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        ydk::YLeaf sec30_support; //type: boolean
        class RxPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt
        class StatPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt
        class OctetStat; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat
        class OversizePktStat; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat
        class FcsErrorsStat; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::FcsErrorsStat
        class LongFramesStat; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::LongFramesStat
        class JabberStat; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::JabberStat
        class Ether64Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether64Octets
        class Ether65127Octet; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether65127Octet
        class Ether128255Octet; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether128255Octet
        class Ether256511Octet; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether256511Octet
        class Ether5121023Octet; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether5121023Octet
        class Ether10241518Octet; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether10241518Octet
        class InUcastPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InUcastPkt
        class InMcastPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMcastPkt
        class InBcastPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InBcastPkt
        class OutUcastPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutUcastPkt
        class OutBcastPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutBcastPkt
        class OutMcastPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutMcastPkt
        class TxPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxPkt
        class IfInErrors; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInErrors
        class IfInOctets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInOctets
        class EtherStatMulticastPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatMulticastPkt
        class EtherStatBroadcastPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatBroadcastPkt
        class EtherStatUndersizedPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatUndersizedPkt
        class OutOctets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutOctets
        class InPauseFrame; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPauseFrame
        class InGoodBytes; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodBytes
        class In8021QFrames; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::In8021QFrames
        class InPkts1519MaxOctets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1519MaxOctets
        class InGoodPkts; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodPkts
        class InDropOverrun; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOverrun
        class InDropAbort; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropAbort
        class InDropInvalidVlan; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidVlan
        class InDropInvalidDmac; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidDmac
        class InDropInvalidEncap; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidEncap
        class InDropOther; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOther
        class InMibGiant; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibGiant
        class InMibJabber; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibJabber
        class InMibcrc; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibcrc
        class InErrorCollisions; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorCollisions
        class InErrorSymbol; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorSymbol
        class OutGoodBytes; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodBytes
        class Out8021QFrames; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Out8021QFrames
        class OutPauseFrames; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPauseFrames
        class OutPkts1519MaxOctets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts1519MaxOctets
        class OutGoodPkts; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodPkts
        class OutDropUnderrun; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropUnderrun
        class OutDropAbort; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropAbort
        class OutDropOther; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropOther
        class OutErrorOther; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutErrorOther
        class InErrorGiant; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorGiant
        class InErrorRunt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorRunt
        class InErrorJabbers; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorJabbers
        class InErrorFragments; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorFragments
        class InErrorOther; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorOther
        class InPkt64Octet; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkt64Octet
        class InPkts65To127Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts65To127Octets
        class InPkts128To255Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts128To255Octets
        class InPkts256To511Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts256To511Octets
        class InPkts512To1023Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts512To1023Octets
        class InPkts1024To1518Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1024To1518Octets
        class Outpkt64Octet; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Outpkt64Octet
        class OutPkts65127Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts65127Octets
        class OutPkts128255Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts128255Octets
        class OutPkts256511Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts256511Octets
        class OutPkts5121023Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts5121023Octets
        class OutPkts10241518Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts10241518Octets
        class RxUtil; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxUtil
        class TxUtil; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUtil
        class TxUndersizedPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUndersizedPkt
        class TxOversizedPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxOversizedPkt
        class TxFragments; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxFragments
        class TxJabber; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxJabber
        class TxBadFcs; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxBadFcs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether10241518Octet> ether10241518_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether128255Octet> ether128255_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether256511Octet> ether256511_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether5121023Octet> ether5121023_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether64Octets> ether64_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether65127Octet> ether65127_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatBroadcastPkt> ether_stat_broadcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatMulticastPkt> ether_stat_multicast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatUndersizedPkt> ether_stat_undersized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::FcsErrorsStat> fcs_errors_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInErrors> if_in_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInOctets> if_in_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::In8021QFrames> in8021q_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InBcastPkt> in_bcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropAbort> in_drop_abort;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidDmac> in_drop_invalid_dmac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidEncap> in_drop_invalid_encap;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidVlan> in_drop_invalid_vlan;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOther> in_drop_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOverrun> in_drop_overrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorCollisions> in_error_collisions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorFragments> in_error_fragments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorGiant> in_error_giant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorJabbers> in_error_jabbers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorOther> in_error_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorRunt> in_error_runt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorSymbol> in_error_symbol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodBytes> in_good_bytes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InGoodPkts> in_good_pkts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMcastPkt> in_mcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibGiant> in_mib_giant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibJabber> in_mib_jabber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InMibcrc> in_mibcrc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPauseFrame> in_pause_frame;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkt64Octet> in_pkt64_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1024To1518Octets> in_pkts1024_to1518_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts128To255Octets> in_pkts128_to255_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts1519MaxOctets> in_pkts1519_max_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts256To511Octets> in_pkts256_to511_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts512To1023Octets> in_pkts512_to1023_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InPkts65To127Octets> in_pkts65_to127_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InUcastPkt> in_ucast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::JabberStat> jabber_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::LongFramesStat> long_frames_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OctetStat> octet_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Out8021QFrames> out8021q_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutBcastPkt> out_bcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropAbort> out_drop_abort;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropOther> out_drop_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutDropUnderrun> out_drop_underrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutErrorOther> out_error_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodBytes> out_good_bytes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutGoodPkts> out_good_pkts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutMcastPkt> out_mcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutOctets> out_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPauseFrames> out_pause_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts10241518Octets> out_pkts10241518_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts128255Octets> out_pkts128255_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts1519MaxOctets> out_pkts1519_max_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts256511Octets> out_pkts256511_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts5121023Octets> out_pkts5121023_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutPkts65127Octets> out_pkts65127_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OutUcastPkt> out_ucast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Outpkt64Octet> outpkt64octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::OversizePktStat> oversize_pkt_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxPkt> rx_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::RxUtil> rx_util;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::StatPkt> stat_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxBadFcs> tx_bad_fcs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxFragments> tx_fragments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxJabber> tx_jabber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxOversizedPkt> tx_oversized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxPkt> tx_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUndersizedPkt> tx_undersized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::TxUtil> tx_util;
        
}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether10241518Octet : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether10241518Octet


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether128255Octet : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether128255Octet


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether256511Octet : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether256511Octet


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether5121023Octet : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether5121023Octet


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether64Octets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether64Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether65127Octet : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::Ether65127Octet


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatBroadcastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatBroadcastPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatMulticastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatMulticastPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatUndersizedPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::EtherStatUndersizedPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::FcsErrorsStat : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::FcsErrorsStat


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInErrors : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInErrors


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInOctets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::IfInOctets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::In8021QFrames : public ydk::Entity
{
    public:
        In8021QFrames();
        ~In8021QFrames();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::In8021QFrames


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InBcastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InBcastPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropAbort : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropAbort


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidDmac : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidDmac


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidEncap : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidEncap


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidVlan : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropInvalidVlan


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOther : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOther


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOverrun : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InDropOverrun


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorCollisions : public ydk::Entity
{
    public:
        InErrorCollisions();
        ~InErrorCollisions();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorCollisions


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorFragments : public ydk::Entity
{
    public:
        InErrorFragments();
        ~InErrorFragments();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorFragments


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorGiant : public ydk::Entity
{
    public:
        InErrorGiant();
        ~InErrorGiant();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorGiant


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorJabbers : public ydk::Entity
{
    public:
        InErrorJabbers();
        ~InErrorJabbers();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History::Minute15EtherHistories::Minute15EtherHistory::Minute15EtherTimeLineInstances::Minute15EtherTimeLineInstance::InErrorJabbers


}
}

#endif /* _CISCO_IOS_XR_PMENGINE_OPER_8_ */

