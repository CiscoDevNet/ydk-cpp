#ifndef _CISCO_IOS_XR_PMENGINE_OPER_10_
#define _CISCO_IOS_XR_PMENGINE_OPER_10_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_pmengine_oper_7.hpp"
#include "Cisco_IOS_XR_pmengine_oper_9.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::UcWords : public ydk::Entity
{
    public:
        UcWords();
        ~UcWords();

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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::UcWords


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::PreFecBer : public ydk::Entity
{
    public:
        PreFecBer();
        ~PreFecBer();

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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::PreFecBer


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::PostFecBer : public ydk::Entity
{
    public:
        PostFecBer();
        ~PostFecBer();

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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::PostFecBer


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::Q : public ydk::Entity
{
    public:
        Q();
        ~Q();

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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::Q


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::Qmargin : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15FecHistories::DwdmMinute15FecHistory::DwdmMinute15FecTimeLineInstances::DwdmMinute15FecTimeLineInstance::Qmargin


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories : public ydk::Entity
{
    public:
        DwdmMinute15OpticsHistories();
        ~DwdmMinute15OpticsHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DwdmMinute15OpticsHistory; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory> > dwdm_minute15_optics_history;
        
}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::LbcPc> lbc_pc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Opt> opt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Opr> opr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Cd> cd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Dgd> dgd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pmd> pmd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Osnr> osnr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::CenterWavelength> center_wavelength;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pdl> pdl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pcr> pcr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::Pn> pn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::RxSigPow> rx_sig_pow;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance::LowSigFreqOff> low_sig_freq_off;
        
}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmMinute15History::DwdmMinute15OpticsHistories::DwdmMinute15OpticsHistory::DwdmMinute15OpticsTimeLineInstances::DwdmMinute15OpticsTimeLineInstance


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


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History : public ydk::Entity
{
    public:
        DwdmHour24History();
        ~DwdmHour24History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DwdmHour24OtnHistories; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories
        class DwdmHour24FecHistories; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories
        class DwdmHour24OpticsHistories; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories> dwdm_hour24otn_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories> dwdm_hour24fec_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories> dwdm_hour24_optics_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories : public ydk::Entity
{
    public:
        DwdmHour24OtnHistories();
        ~DwdmHour24OtnHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DwdmHour24OtnHistory; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory> > dwdm_hour24otn_history;
        
}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory : public ydk::Entity
{
    public:
        DwdmHour24OtnHistory();
        ~DwdmHour24OtnHistory();

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
        class DwdmHour24OtnTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances> dwdm_hour24otn_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances : public ydk::Entity
{
    public:
        DwdmHour24OtnTimeLineInstances();
        ~DwdmHour24OtnTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DwdmHour24OtnTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance> > dwdm_hour24otn_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance : public ydk::Entity
{
    public:
        DwdmHour24OtnTimeLineInstance();
        ~DwdmHour24OtnTimeLineInstance();

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
        class Lbc; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::Lbc
        class EsNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsNe
        class EsrNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsrNe
        class SesNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesNe
        class SesrNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesrNe
        class UasNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::UasNe
        class BbeNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BbeNe
        class BberNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BberNe
        class FcNe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::FcNe
        class EsFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsFe
        class EsrFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsrFe
        class SesFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesFe
        class SesrFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesrFe
        class UasFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::UasFe
        class BbeFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BbeFe
        class BberFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BberFe
        class FcFe; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::FcFe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsNe> es_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsrNe> esr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesNe> ses_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesrNe> sesr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::UasNe> uas_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BbeNe> bbe_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BberNe> bber_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::FcNe> fc_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsFe> es_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsrFe> esr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesFe> ses_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesrFe> sesr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::UasFe> uas_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BbeFe> bbe_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BberFe> bber_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::FcFe> fc_fe;
        
}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::Lbc : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::Lbc


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsNe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsrNe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsrNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesNe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesrNe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesrNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::UasNe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::UasNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BbeNe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BbeNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BberNe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BberNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::FcNe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::FcNe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsFe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsrFe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::EsrFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesFe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesrFe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::SesrFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::UasFe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::UasFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BbeFe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BbeFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BberFe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::BberFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::FcFe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OtnHistories::DwdmHour24OtnHistory::DwdmHour24OtnTimeLineInstances::DwdmHour24OtnTimeLineInstance::FcFe


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories : public ydk::Entity
{
    public:
        DwdmHour24FecHistories();
        ~DwdmHour24FecHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DwdmHour24FecHistory; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory> > dwdm_hour24fec_history;
        
}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory : public ydk::Entity
{
    public:
        DwdmHour24FecHistory();
        ~DwdmHour24FecHistory();

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
        class DwdmHour24FecTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances> dwdm_hour24fec_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances : public ydk::Entity
{
    public:
        DwdmHour24FecTimeLineInstances();
        ~DwdmHour24FecTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DwdmHour24FecTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance> > dwdm_hour24fec_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance : public ydk::Entity
{
    public:
        DwdmHour24FecTimeLineInstance();
        ~DwdmHour24FecTimeLineInstance();

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
        class EcBits; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::EcBits
        class UcWords; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::UcWords
        class PreFecBer; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::PreFecBer
        class PostFecBer; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::PostFecBer
        class Q; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::Q
        class Qmargin; //type: PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::Qmargin

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::EcBits> ec_bits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::UcWords> uc_words;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::PreFecBer> pre_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::PostFecBer> post_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::Q> q;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::Qmargin> qmargin;
        
}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::EcBits : public ydk::Entity
{
    public:
        EcBits();
        ~EcBits();

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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::EcBits


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::UcWords : public ydk::Entity
{
    public:
        UcWords();
        ~UcWords();

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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::UcWords


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::PreFecBer : public ydk::Entity
{
    public:
        PreFecBer();
        ~PreFecBer();

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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::PreFecBer


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::PostFecBer : public ydk::Entity
{
    public:
        PostFecBer();
        ~PostFecBer();

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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::PostFecBer


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::Q : public ydk::Entity
{
    public:
        Q();
        ~Q();

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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::Q


class PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::Qmargin : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24FecHistories::DwdmHour24FecHistory::DwdmHour24FecTimeLineInstances::DwdmHour24FecTimeLineInstance::Qmargin


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory> > dwdm_hour24_optics_history;
        
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

        ydk::YLeaf number; //type: int32
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance> > dwdm_hour24_optics_time_line_instance;
        
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

        ydk::YLeaf number; //type: int32
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: int32
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: int32
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: int32
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::DwdmHistory::DwdmPortHistories::DwdmPortHistory::DwdmHour24History::DwdmHour24OpticsHistories::DwdmHour24OpticsHistory::DwdmHour24OpticsTimeLineInstances::DwdmHour24OpticsTimeLineInstance::LowSigFreqOff


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory> > stm_port_history;
        
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

        class StmHour24StmHistories; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories> stm_hour24stm_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories : public ydk::Entity
{
    public:
        StmHour24StmHistories();
        ~StmHour24StmHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StmHour24StmHistory; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory> > stm_hour24stm_history;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory : public ydk::Entity
{
    public:
        StmHour24StmHistory();
        ~StmHour24StmHistory();

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
        class StmHour24StmTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances> stm_hour24stm_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances : public ydk::Entity
{
    public:
        StmHour24StmTimeLineInstances();
        ~StmHour24StmTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StmHour24StmTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance> > stm_hour24stm_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance : public ydk::Entity
{
    public:
        StmHour24StmTimeLineInstance();
        ~StmHour24StmTimeLineInstance();

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
        ydk::YLeaf last_clear24_hr_time; //type: string
        class Section; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section
        class Line; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line
        class FeLine; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section> section;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line> line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine> fe_line;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section : public ydk::Entity
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
        class SectionESs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionESs
        class SectionEsRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEsRs
        class SectionBbEs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbEs
        class SectionBbeRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbeRs
        class SectionSeSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSeSs
        class SectionSesRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSesRs
        class SectionUaSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionUaSs
        class SectionEBs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEBs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionESs> section_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEsRs> section_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbEs> section_bb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbeRs> section_bbe_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSeSs> section_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSesRs> section_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionUaSs> section_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEBs> section_e_bs;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionESs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionESs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEsRs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEsRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbEs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbEs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbeRs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbeRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSeSs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSeSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSesRs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSesRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionUaSs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionUaSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEBs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEBs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line : public ydk::Entity
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
        class LineESs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineESs
        class LineEsRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEsRs
        class LineBbEs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbEs
        class LineBbeRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbeRs
        class LineSeSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSeSs
        class LineSesRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSesRs
        class LineUaSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineUaSs
        class LineEBs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEBs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineESs> line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEsRs> line_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbEs> line_bb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbeRs> line_bbe_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSeSs> line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSesRs> line_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineUaSs> line_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEBs> line_e_bs;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineESs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineESs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEsRs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEsRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbEs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbEs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbeRs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbeRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSeSs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSeSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSesRs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSesRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineUaSs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineUaSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEBs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEBs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine : public ydk::Entity
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

        class FarEndLineESs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineESs
        class FarEndLineEsRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEsRs
        class FarEndLineEbbEs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEbbEs
        class FarEndLineBbeRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineBbeRs
        class FarEndLineSeSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSeSs
        class FarEndLineSesRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSesRs
        class FarEndLineUaSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineUaSs
        class FarEndLineEBs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEBs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineESs> far_end_line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEsRs> far_end_line_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEbbEs> far_end_line_ebb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineBbeRs> far_end_line_bbe_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSeSs> far_end_line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSesRs> far_end_line_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineUaSs> far_end_line_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEBs> far_end_line_e_bs;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineESs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineESs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEsRs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEsRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEbbEs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEbbEs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineBbeRs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineBbeRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSeSs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSeSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSesRs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSesRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineUaSs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineUaSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEBs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEBs


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

        class StmMinute15StmHistories; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories> stm_minute15stm_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories : public ydk::Entity
{
    public:
        StmMinute15StmHistories();
        ~StmMinute15StmHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StmMinute15StmHistory; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory> > stm_minute15stm_history;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory : public ydk::Entity
{
    public:
        StmMinute15StmHistory();
        ~StmMinute15StmHistory();

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
        class StmMinute15StmTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances> stm_minute15stm_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances : public ydk::Entity
{
    public:
        StmMinute15StmTimeLineInstances();
        ~StmMinute15StmTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StmMinute15StmTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance> > stm_minute15stm_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance : public ydk::Entity
{
    public:
        StmMinute15StmTimeLineInstance();
        ~StmMinute15StmTimeLineInstance();

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
        ydk::YLeaf last_clear24_hr_time; //type: string
        class Section; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section
        class Line; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line
        class FeLine; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section> section;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line> line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine> fe_line;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section : public ydk::Entity
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
        class SectionESs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionESs
        class SectionEsRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEsRs
        class SectionBbEs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbEs
        class SectionBbeRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbeRs
        class SectionSeSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSeSs
        class SectionSesRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSesRs
        class SectionUaSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionUaSs
        class SectionEBs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEBs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionESs> section_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEsRs> section_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbEs> section_bb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbeRs> section_bbe_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSeSs> section_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSesRs> section_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionUaSs> section_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEBs> section_e_bs;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionESs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionESs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEsRs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEsRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbEs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbEs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbeRs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbeRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSeSs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSeSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSesRs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSesRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionUaSs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionUaSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEBs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEBs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line : public ydk::Entity
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
        class LineESs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineESs
        class LineEsRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEsRs
        class LineBbEs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbEs
        class LineBbeRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbeRs
        class LineSeSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSeSs
        class LineSesRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSesRs
        class LineUaSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineUaSs
        class LineEBs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEBs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineESs> line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEsRs> line_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbEs> line_bb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbeRs> line_bbe_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSeSs> line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSesRs> line_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineUaSs> line_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEBs> line_e_bs;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineESs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineESs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEsRs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEsRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbEs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbEs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbeRs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbeRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSeSs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSeSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSesRs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSesRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineUaSs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineUaSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEBs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEBs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine : public ydk::Entity
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

        class FarEndLineESs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineESs
        class FarEndLineEsRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEsRs
        class FarEndLineEbbEs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEbbEs
        class FarEndLineBbeRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineBbeRs
        class FarEndLineSeSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSeSs
        class FarEndLineSesRs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSesRs
        class FarEndLineUaSs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineUaSs
        class FarEndLineEBs; //type: PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEBs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineESs> far_end_line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEsRs> far_end_line_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEbbEs> far_end_line_ebb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineBbeRs> far_end_line_bbe_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSeSs> far_end_line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSesRs> far_end_line_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineUaSs> far_end_line_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEBs> far_end_line_e_bs;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineESs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineESs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEsRs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEsRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEbbEs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEbbEs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineBbeRs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineBbeRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSeSs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSeSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSesRs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSesRs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineUaSs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineUaSs


class PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEBs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEBs


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory> > macsec_port_history;
        
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

        class MacsecMinute15SecyrxHistories; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories
        class MacsecMinute15EtherHistories; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories
        class MacsecMinute15SecytxHistories; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories
        class MacsecMinute15SecyifHistories; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories> macsec_minute15secyrx_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories> macsec_minute15_ether_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories> macsec_minute15secytx_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories> macsec_minute15secyif_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories : public ydk::Entity
{
    public:
        MacsecMinute15SecyrxHistories();
        ~MacsecMinute15SecyrxHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecMinute15SecyrxHistory; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory> > macsec_minute15secyrx_history;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory : public ydk::Entity
{
    public:
        MacsecMinute15SecyrxHistory();
        ~MacsecMinute15SecyrxHistory();

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
        class MacsecMinute15SecyrxTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances> macsec_minute15secyrx_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances : public ydk::Entity
{
    public:
        MacsecMinute15SecyrxTimeLineInstances();
        ~MacsecMinute15SecyrxTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecMinute15SecyrxTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance> > macsec_minute15secyrx_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance : public ydk::Entity
{
    public:
        MacsecMinute15SecyrxTimeLineInstance();
        ~MacsecMinute15SecyrxTimeLineInstance();

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
        ydk::YLeaf sample_count; //type: uint64
        class InPktsUnchecked; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsUnchecked
        class InPktsDelayed; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsDelayed
        class InPktsLate; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsLate
        class InPktsOk; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsOk
        class InPktsInvalid; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsInvalid
        class InPktsNotValid; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsNotValid
        class InPktsNotUsingSa; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsNotUsingSa
        class InPktsUnusedSa; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsUnusedSa
        class InPktsUntaggedHit; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsUntaggedHit
        class InOctetsValidated; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InOctetsValidated
        class InOctetsDecrypted; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InOctetsDecrypted

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsUnchecked> in_pkts_unchecked;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsDelayed> in_pkts_delayed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsLate> in_pkts_late;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsOk> in_pkts_ok;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsInvalid> in_pkts_invalid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsNotValid> in_pkts_not_valid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsNotUsingSa> in_pkts_not_using_sa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsUnusedSa> in_pkts_unused_sa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsUntaggedHit> in_pkts_untagged_hit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InOctetsValidated> in_octets_validated;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InOctetsDecrypted> in_octets_decrypted;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsUnchecked : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsUnchecked


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsDelayed : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories::MacsecMinute15SecyrxHistory::MacsecMinute15SecyrxTimeLineInstances::MacsecMinute15SecyrxTimeLineInstance::InPktsDelayed


}
}

#endif /* _CISCO_IOS_XR_PMENGINE_OPER_10_ */

