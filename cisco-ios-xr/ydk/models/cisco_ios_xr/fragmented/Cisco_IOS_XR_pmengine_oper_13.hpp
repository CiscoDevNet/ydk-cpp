#ifndef _CISCO_IOS_XR_PMENGINE_OPER_13_
#define _CISCO_IOS_XR_PMENGINE_OPER_13_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_pmengine_oper_12.hpp"
#include "Cisco_IOS_XR_pmengine_oper_7.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcNe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::FcNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::Lbc : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::Lbc


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesFe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesNe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesrFe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesrFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesrNe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::SesrNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::UasFe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::UasFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::UasNe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24OtnHistories::OduHour24OtnHistory::OduHour24OtnTimeLineInstances::OduHour24OtnTimeLineInstance::UasNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories : public ydk::Entity
{
    public:
        OduHour24PrbsHistories();
        ~OduHour24PrbsHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduHour24PrbsHistory; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory> > odu_hour24prbs_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory : public ydk::Entity
{
    public:
        OduHour24PrbsHistory();
        ~OduHour24PrbsHistory();

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
        class OduHour24PrbsTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory::OduHour24PrbsTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory::OduHour24PrbsTimeLineInstances> odu_hour24prbs_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory::OduHour24PrbsTimeLineInstances : public ydk::Entity
{
    public:
        OduHour24PrbsTimeLineInstances();
        ~OduHour24PrbsTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduHour24PrbsTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory::OduHour24PrbsTimeLineInstances::OduHour24PrbsTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory::OduHour24PrbsTimeLineInstances::OduHour24PrbsTimeLineInstance> > odu_hour24prbs_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory::OduHour24PrbsTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory::OduHour24PrbsTimeLineInstances::OduHour24PrbsTimeLineInstance : public ydk::Entity
{
    public:
        OduHour24PrbsTimeLineInstance();
        ~OduHour24PrbsTimeLineInstance();

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
        ydk::YLeaf ebc; //type: uint64
        ydk::YLeaf found_count; //type: uint32
        ydk::YLeaf lost_count; //type: uint32
        ydk::YLeaf found_at_time; //type: uint64
        ydk::YLeaf lost_at_time; //type: uint64
        ydk::YLeaf conf_patt; //type: PmPrbsPatternEt
        class RcvPatt; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory::OduHour24PrbsTimeLineInstances::OduHour24PrbsTimeLineInstance::RcvPatt
        class PrbsStatus; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory::OduHour24PrbsTimeLineInstances::OduHour24PrbsTimeLineInstance::PrbsStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory::OduHour24PrbsTimeLineInstances::OduHour24PrbsTimeLineInstance::PrbsStatus> prbs_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory::OduHour24PrbsTimeLineInstances::OduHour24PrbsTimeLineInstance::RcvPatt> rcv_patt;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory::OduHour24PrbsTimeLineInstances::OduHour24PrbsTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory::OduHour24PrbsTimeLineInstances::OduHour24PrbsTimeLineInstance::PrbsStatus : public ydk::Entity
{
    public:
        PrbsStatus();
        ~PrbsStatus();

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
        ydk::YLeaf prbs_status; //type: PmPrbsStatusEt

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory::OduHour24PrbsTimeLineInstances::OduHour24PrbsTimeLineInstance::PrbsStatus


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory::OduHour24PrbsTimeLineInstances::OduHour24PrbsTimeLineInstance::RcvPatt : public ydk::Entity
{
    public:
        RcvPatt();
        ~RcvPatt();

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
        ydk::YLeaf rcv_patt; //type: PmPrbsPatternEt

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduHour24History::OduHour24PrbsHistories::OduHour24PrbsHistory::OduHour24PrbsTimeLineInstances::OduHour24PrbsTimeLineInstance::RcvPatt


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History : public ydk::Entity
{
    public:
        OduMinute15History();
        ~OduMinute15History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduMinute15PrbsHistories; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories
        class OduMinute15GfpHistories; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories
        class OduMinute15OtnHistories; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories> odu_minute15gfp_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories> odu_minute15otn_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories> odu_minute15prbs_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories : public ydk::Entity
{
    public:
        OduMinute15GfpHistories();
        ~OduMinute15GfpHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduMinute15GfpHistory; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory> > odu_minute15gfp_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory : public ydk::Entity
{
    public:
        OduMinute15GfpHistory();
        ~OduMinute15GfpHistory();

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
        class OduMinute15GfpTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances> odu_minute15gfp_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances : public ydk::Entity
{
    public:
        OduMinute15GfpTimeLineInstances();
        ~OduMinute15GfpTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduMinute15GfpTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance> > odu_minute15gfp_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance : public ydk::Entity
{
    public:
        OduMinute15GfpTimeLineInstance();
        ~OduMinute15GfpTimeLineInstance();

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
        class RxBitErr; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxBitErr
        class RxInvTyp; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxInvTyp
        class RxCrc; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxCrc
        class RxLfd; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxLfd
        class RxCsf; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxCsf

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxBitErr> rx_bit_err;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxCrc> rx_crc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxCsf> rx_csf;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxInvTyp> rx_inv_typ;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxLfd> rx_lfd;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxBitErr : public ydk::Entity
{
    public:
        RxBitErr();
        ~RxBitErr();

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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxBitErr


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxCrc : public ydk::Entity
{
    public:
        RxCrc();
        ~RxCrc();

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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxCrc


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxCsf : public ydk::Entity
{
    public:
        RxCsf();
        ~RxCsf();

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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxCsf


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxInvTyp : public ydk::Entity
{
    public:
        RxInvTyp();
        ~RxInvTyp();

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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxInvTyp


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxLfd : public ydk::Entity
{
    public:
        RxLfd();
        ~RxLfd();

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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15GfpHistories::OduMinute15GfpHistory::OduMinute15GfpTimeLineInstances::OduMinute15GfpTimeLineInstance::RxLfd


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories : public ydk::Entity
{
    public:
        OduMinute15OtnHistories();
        ~OduMinute15OtnHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduMinute15OtnHistory; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory> > odu_minute15otn_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory : public ydk::Entity
{
    public:
        OduMinute15OtnHistory();
        ~OduMinute15OtnHistory();

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
        class OduMinute15OtnTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances> odu_minute15otn_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances : public ydk::Entity
{
    public:
        OduMinute15OtnTimeLineInstances();
        ~OduMinute15OtnTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduMinute15OtnTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance> > odu_minute15otn_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance : public ydk::Entity
{
    public:
        OduMinute15OtnTimeLineInstance();
        ~OduMinute15OtnTimeLineInstance();

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
        class Lbc; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::Lbc
        class EsNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsNe
        class EsrNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsrNe
        class SesNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesNe
        class SesrNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesrNe
        class UasNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::UasNe
        class BbeNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BbeNe
        class BberNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BberNe
        class FcNe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::FcNe
        class EsFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsFe
        class EsrFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsrFe
        class SesFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesFe
        class SesrFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesrFe
        class UasFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::UasFe
        class BbeFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BbeFe
        class BberFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BberFe
        class FcFe; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::FcFe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BbeFe> bbe_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BbeNe> bbe_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BberFe> bber_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BberNe> bber_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsFe> es_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsNe> es_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsrFe> esr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsrNe> esr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::FcFe> fc_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::FcNe> fc_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesFe> ses_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesNe> ses_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesrFe> sesr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesrNe> sesr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::UasFe> uas_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::UasNe> uas_ne;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BbeFe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BbeFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BbeNe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BbeNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BberFe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BberFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BberNe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::BberNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsFe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsNe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsrFe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsrFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsrNe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::EsrNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::FcFe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::FcFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::FcNe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::FcNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::Lbc : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::Lbc


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesFe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesNe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesrFe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesrFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesrNe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::SesrNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::UasFe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::UasFe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::UasNe : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15OtnHistories::OduMinute15OtnHistory::OduMinute15OtnTimeLineInstances::OduMinute15OtnTimeLineInstance::UasNe


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories : public ydk::Entity
{
    public:
        OduMinute15PrbsHistories();
        ~OduMinute15PrbsHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduMinute15PrbsHistory; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory> > odu_minute15prbs_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory : public ydk::Entity
{
    public:
        OduMinute15PrbsHistory();
        ~OduMinute15PrbsHistory();

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
        class OduMinute15PrbsTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory::OduMinute15PrbsTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory::OduMinute15PrbsTimeLineInstances> odu_minute15prbs_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory::OduMinute15PrbsTimeLineInstances : public ydk::Entity
{
    public:
        OduMinute15PrbsTimeLineInstances();
        ~OduMinute15PrbsTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduMinute15PrbsTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory::OduMinute15PrbsTimeLineInstances::OduMinute15PrbsTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory::OduMinute15PrbsTimeLineInstances::OduMinute15PrbsTimeLineInstance> > odu_minute15prbs_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory::OduMinute15PrbsTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory::OduMinute15PrbsTimeLineInstances::OduMinute15PrbsTimeLineInstance : public ydk::Entity
{
    public:
        OduMinute15PrbsTimeLineInstance();
        ~OduMinute15PrbsTimeLineInstance();

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
        ydk::YLeaf ebc; //type: uint64
        ydk::YLeaf found_count; //type: uint32
        ydk::YLeaf lost_count; //type: uint32
        ydk::YLeaf found_at_time; //type: uint64
        ydk::YLeaf lost_at_time; //type: uint64
        ydk::YLeaf conf_patt; //type: PmPrbsPatternEt
        class RcvPatt; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory::OduMinute15PrbsTimeLineInstances::OduMinute15PrbsTimeLineInstance::RcvPatt
        class PrbsStatus; //type: PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory::OduMinute15PrbsTimeLineInstances::OduMinute15PrbsTimeLineInstance::PrbsStatus

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory::OduMinute15PrbsTimeLineInstances::OduMinute15PrbsTimeLineInstance::PrbsStatus> prbs_status;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory::OduMinute15PrbsTimeLineInstances::OduMinute15PrbsTimeLineInstance::RcvPatt> rcv_patt;
        
}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory::OduMinute15PrbsTimeLineInstances::OduMinute15PrbsTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory::OduMinute15PrbsTimeLineInstances::OduMinute15PrbsTimeLineInstance::PrbsStatus : public ydk::Entity
{
    public:
        PrbsStatus();
        ~PrbsStatus();

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
        ydk::YLeaf prbs_status; //type: PmPrbsStatusEt

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory::OduMinute15PrbsTimeLineInstances::OduMinute15PrbsTimeLineInstance::PrbsStatus


class PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory::OduMinute15PrbsTimeLineInstances::OduMinute15PrbsTimeLineInstance::RcvPatt : public ydk::Entity
{
    public:
        RcvPatt();
        ~RcvPatt();

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
        ydk::YLeaf rcv_patt; //type: PmPrbsPatternEt

}; // PerformanceManagementHistory::Global::Periodic::OduHistory::OduPortHistories::OduPortHistory::OduMinute15History::OduMinute15PrbsHistories::OduMinute15PrbsHistory::OduMinute15PrbsTimeLineInstances::OduMinute15PrbsTimeLineInstance::RcvPatt


class PerformanceManagementHistory::Global::Periodic::OpticsHistory : public ydk::Entity
{
    public:
        OpticsHistory();
        ~OpticsHistory();

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

        class OpticsPortHistories; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories> optics_port_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories : public ydk::Entity
{
    public:
        OpticsPortHistories();
        ~OpticsPortHistories();

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

        class OpticsPortHistory; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory> > optics_port_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory : public ydk::Entity
{
    public:
        OpticsPortHistory();
        ~OpticsPortHistory();

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
        class OpticsHour24History; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History
        class OpticsSecond30History; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History
        class OpticsMinute15History; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History> optics_hour24_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History> optics_minute15_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History> optics_second30_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History : public ydk::Entity
{
    public:
        OpticsHour24History();
        ~OpticsHour24History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticsHour24OpticsHistories; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories
        class OpticsHour24FecHistories; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories> optics_hour24_optics_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories> optics_hour24fec_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories : public ydk::Entity
{
    public:
        OpticsHour24FecHistories();
        ~OpticsHour24FecHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticsHour24FecHistory; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory> > optics_hour24fec_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory : public ydk::Entity
{
    public:
        OpticsHour24FecHistory();
        ~OpticsHour24FecHistory();

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
        class OpticsHour24FecTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances> optics_hour24fec_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances : public ydk::Entity
{
    public:
        OpticsHour24FecTimeLineInstances();
        ~OpticsHour24FecTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticsHour24FecTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance> > optics_hour24fec_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance : public ydk::Entity
{
    public:
        OpticsHour24FecTimeLineInstance();
        ~OpticsHour24FecTimeLineInstance();

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
        class EcBits; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::EcBits
        class UcWords; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::UcWords
        class PreFecBer; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PreFecBer
        class PostFecBer; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PostFecBer
        class Q; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Q
        class Qmargin; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Qmargin

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::EcBits> ec_bits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PostFecBer> post_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PreFecBer> pre_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Q> q;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Qmargin> qmargin;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::UcWords> uc_words;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::EcBits : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::EcBits


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PostFecBer : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PostFecBer


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PreFecBer : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::PreFecBer


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Q : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Q


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Qmargin : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::Qmargin


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::UcWords : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24FecHistories::OpticsHour24FecHistory::OpticsHour24FecTimeLineInstances::OpticsHour24FecTimeLineInstance::UcWords


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories : public ydk::Entity
{
    public:
        OpticsHour24OpticsHistories();
        ~OpticsHour24OpticsHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticsHour24OpticsHistory; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory> > optics_hour24_optics_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory : public ydk::Entity
{
    public:
        OpticsHour24OpticsHistory();
        ~OpticsHour24OpticsHistory();

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
        class OpticsHour24OpticsTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances> optics_hour24_optics_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances : public ydk::Entity
{
    public:
        OpticsHour24OpticsTimeLineInstances();
        ~OpticsHour24OpticsTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticsHour24OpticsTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance> > optics_hour24_optics_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance : public ydk::Entity
{
    public:
        OpticsHour24OpticsTimeLineInstance();
        ~OpticsHour24OpticsTimeLineInstance();

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
        class Lbc; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Lbc
        class LbcPc; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LbcPc
        class Opt; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opt
        class Opr; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opr
        class Cd; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Cd
        class Dgd; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Dgd
        class Pmd; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pmd
        class Osnr; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Osnr
        class CenterWavelength; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::CenterWavelength
        class Pdl; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pdl
        class Pcr; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pcr
        class Pn; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pn
        class RxSigPow; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::RxSigPow
        class LowSigFreqOff; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LowSigFreqOff

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Cd> cd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::CenterWavelength> center_wavelength;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Dgd> dgd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LbcPc> lbc_pc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LowSigFreqOff> low_sig_freq_off;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opr> opr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opt> opt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Osnr> osnr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pcr> pcr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pdl> pdl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pmd> pmd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pn> pn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::RxSigPow> rx_sig_pow;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Cd : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Cd


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::CenterWavelength : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::CenterWavelength


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Dgd : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Dgd


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Lbc : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Lbc


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LbcPc : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LbcPc


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LowSigFreqOff : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::LowSigFreqOff


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opr : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opr


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Opt


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Osnr : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Osnr


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pcr : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pcr


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pdl : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pdl


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pmd : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pmd


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pn : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::Pn


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::RxSigPow : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsHour24History::OpticsHour24OpticsHistories::OpticsHour24OpticsHistory::OpticsHour24OpticsTimeLineInstances::OpticsHour24OpticsTimeLineInstance::RxSigPow


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History : public ydk::Entity
{
    public:
        OpticsMinute15History();
        ~OpticsMinute15History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticsMinute15OpticsHistories; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories
        class OpticsMinute15FecHistories; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories> optics_minute15_optics_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories> optics_minute15fec_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories : public ydk::Entity
{
    public:
        OpticsMinute15FecHistories();
        ~OpticsMinute15FecHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticsMinute15FecHistory; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory> > optics_minute15fec_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory : public ydk::Entity
{
    public:
        OpticsMinute15FecHistory();
        ~OpticsMinute15FecHistory();

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
        class OpticsMinute15FecTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances> optics_minute15fec_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances : public ydk::Entity
{
    public:
        OpticsMinute15FecTimeLineInstances();
        ~OpticsMinute15FecTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticsMinute15FecTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance> > optics_minute15fec_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance : public ydk::Entity
{
    public:
        OpticsMinute15FecTimeLineInstance();
        ~OpticsMinute15FecTimeLineInstance();

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
        class EcBits; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::EcBits
        class UcWords; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::UcWords
        class PreFecBer; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PreFecBer
        class PostFecBer; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PostFecBer
        class Q; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Q
        class Qmargin; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Qmargin

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::EcBits> ec_bits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PostFecBer> post_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PreFecBer> pre_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Q> q;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Qmargin> qmargin;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::UcWords> uc_words;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::EcBits : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::EcBits


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PostFecBer : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PostFecBer


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PreFecBer : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::PreFecBer


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Q : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Q


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Qmargin : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::Qmargin


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::UcWords : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15FecHistories::OpticsMinute15FecHistory::OpticsMinute15FecTimeLineInstances::OpticsMinute15FecTimeLineInstance::UcWords


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories : public ydk::Entity
{
    public:
        OpticsMinute15OpticsHistories();
        ~OpticsMinute15OpticsHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticsMinute15OpticsHistory; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory> > optics_minute15_optics_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory : public ydk::Entity
{
    public:
        OpticsMinute15OpticsHistory();
        ~OpticsMinute15OpticsHistory();

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
        class OpticsMinute15OpticsTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances> optics_minute15_optics_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances : public ydk::Entity
{
    public:
        OpticsMinute15OpticsTimeLineInstances();
        ~OpticsMinute15OpticsTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticsMinute15OpticsTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance> > optics_minute15_optics_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance : public ydk::Entity
{
    public:
        OpticsMinute15OpticsTimeLineInstance();
        ~OpticsMinute15OpticsTimeLineInstance();

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
        class Lbc; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Lbc
        class LbcPc; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LbcPc
        class Opt; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opt
        class Opr; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opr
        class Cd; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Cd
        class Dgd; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Dgd
        class Pmd; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pmd
        class Osnr; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Osnr
        class CenterWavelength; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength
        class Pdl; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl
        class Pcr; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr
        class Pn; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn
        class RxSigPow; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow
        class LowSigFreqOff; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Cd> cd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength> center_wavelength;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Dgd> dgd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LbcPc> lbc_pc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff> low_sig_freq_off;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opr> opr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opt> opt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Osnr> osnr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr> pcr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl> pdl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pmd> pmd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn> pn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow> rx_sig_pow;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Cd : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Cd


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::CenterWavelength


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Dgd : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Dgd


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Lbc : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Lbc


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LbcPc : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LbcPc


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::LowSigFreqOff


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opr : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opr


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Opt


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Osnr : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Osnr


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pcr


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pdl


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pmd : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pmd


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::Pn


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsMinute15History::OpticsMinute15OpticsHistories::OpticsMinute15OpticsHistory::OpticsMinute15OpticsTimeLineInstances::OpticsMinute15OpticsTimeLineInstance::RxSigPow


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History : public ydk::Entity
{
    public:
        OpticsSecond30History();
        ~OpticsSecond30History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticsSecond30OpticsHistories; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories
        class OpticsSecond30FecHistories; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories> optics_second30_optics_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories> optics_second30fec_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories : public ydk::Entity
{
    public:
        OpticsSecond30FecHistories();
        ~OpticsSecond30FecHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticsSecond30FecHistory; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory> > optics_second30fec_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory : public ydk::Entity
{
    public:
        OpticsSecond30FecHistory();
        ~OpticsSecond30FecHistory();

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
        class OpticsSecond30FecTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances> optics_second30fec_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances : public ydk::Entity
{
    public:
        OpticsSecond30FecTimeLineInstances();
        ~OpticsSecond30FecTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticsSecond30FecTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance> > optics_second30fec_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance : public ydk::Entity
{
    public:
        OpticsSecond30FecTimeLineInstance();
        ~OpticsSecond30FecTimeLineInstance();

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
        class EcBits; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::EcBits
        class UcWords; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::UcWords
        class PreFecBer; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PreFecBer
        class PostFecBer; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PostFecBer
        class Q; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Q
        class Qmargin; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Qmargin

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::EcBits> ec_bits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PostFecBer> post_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PreFecBer> pre_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Q> q;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Qmargin> qmargin;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::UcWords> uc_words;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::EcBits : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::EcBits


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PostFecBer : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PostFecBer


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PreFecBer : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::PreFecBer


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Q : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Q


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Qmargin : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::Qmargin


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::UcWords : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30FecHistories::OpticsSecond30FecHistory::OpticsSecond30FecTimeLineInstances::OpticsSecond30FecTimeLineInstance::UcWords


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories : public ydk::Entity
{
    public:
        OpticsSecond30OpticsHistories();
        ~OpticsSecond30OpticsHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticsSecond30OpticsHistory; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory> > optics_second30_optics_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory : public ydk::Entity
{
    public:
        OpticsSecond30OpticsHistory();
        ~OpticsSecond30OpticsHistory();

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
        class OpticsSecond30OpticsTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances> optics_second30_optics_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances : public ydk::Entity
{
    public:
        OpticsSecond30OpticsTimeLineInstances();
        ~OpticsSecond30OpticsTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticsSecond30OpticsTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance> > optics_second30_optics_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance : public ydk::Entity
{
    public:
        OpticsSecond30OpticsTimeLineInstance();
        ~OpticsSecond30OpticsTimeLineInstance();

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
        class Lbc; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Lbc
        class LbcPc; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LbcPc
        class Opt; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opt
        class Opr; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opr
        class Cd; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Cd
        class Dgd; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Dgd
        class Pmd; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pmd
        class Osnr; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Osnr
        class CenterWavelength; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::CenterWavelength
        class Pdl; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pdl
        class Pcr; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pcr
        class Pn; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pn
        class RxSigPow; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::RxSigPow
        class LowSigFreqOff; //type: PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LowSigFreqOff

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Cd> cd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::CenterWavelength> center_wavelength;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Dgd> dgd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LbcPc> lbc_pc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LowSigFreqOff> low_sig_freq_off;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opr> opr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opt> opt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Osnr> osnr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pcr> pcr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pdl> pdl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pmd> pmd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pn> pn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::RxSigPow> rx_sig_pow;
        
}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Cd : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Cd


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::CenterWavelength : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::CenterWavelength


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Dgd : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Dgd


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Lbc : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Lbc


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LbcPc : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LbcPc


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LowSigFreqOff : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::LowSigFreqOff


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opr : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opr


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Opt


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Osnr : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Osnr


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pcr : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pcr


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pdl : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pdl


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pmd : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pmd


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pn : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::Pn


class PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::RxSigPow : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OpticsHistory::OpticsPortHistories::OpticsPortHistory::OpticsSecond30History::OpticsSecond30OpticsHistories::OpticsSecond30OpticsHistory::OpticsSecond30OpticsTimeLineInstances::OpticsSecond30OpticsTimeLineInstance::RxSigPow


class PerformanceManagementHistory::Global::Periodic::OtuHistory : public ydk::Entity
{
    public:
        OtuHistory();
        ~OtuHistory();

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

        class OtuPortHistories; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories> otu_port_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories : public ydk::Entity
{
    public:
        OtuPortHistories();
        ~OtuPortHistories();

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

        class OtuPortHistory; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory> > otu_port_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory : public ydk::Entity
{
    public:
        OtuPortHistory();
        ~OtuPortHistory();

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
        class OtuSecond30History; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History
        class OtuMinute15History; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History
        class OtuHour24History; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History> otu_hour24_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuMinute15History> otu_minute15_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuSecond30History> otu_second30_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History : public ydk::Entity
{
    public:
        OtuHour24History();
        ~OtuHour24History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuHour24PrbsHistories; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories
        class OtuHour24OtnHistories; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories
        class OtuHour24FecHistories; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories> otu_hour24fec_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24OtnHistories> otu_hour24otn_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24PrbsHistories> otu_hour24prbs_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories : public ydk::Entity
{
    public:
        OtuHour24FecHistories();
        ~OtuHour24FecHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuHour24FecHistory; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory> > otu_hour24fec_history;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory : public ydk::Entity
{
    public:
        OtuHour24FecHistory();
        ~OtuHour24FecHistory();

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
        class OtuHour24FecTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances> otu_hour24fec_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances : public ydk::Entity
{
    public:
        OtuHour24FecTimeLineInstances();
        ~OtuHour24FecTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuHour24FecTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance> > otu_hour24fec_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance : public ydk::Entity
{
    public:
        OtuHour24FecTimeLineInstance();
        ~OtuHour24FecTimeLineInstance();

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
        class EcBits; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::EcBits
        class UcWords; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords
        class PreFecBer; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer
        class PostFecBer; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer
        class Q; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q
        class Qmargin; //type: PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::EcBits> ec_bits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PostFecBer> post_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::PreFecBer> pre_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Q> q;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::Qmargin> qmargin;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::UcWords> uc_words;
        
}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::EcBits : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::OtuHistory::OtuPortHistories::OtuPortHistory::OtuHour24History::OtuHour24FecHistories::OtuHour24FecHistory::OtuHour24FecTimeLineInstances::OtuHour24FecTimeLineInstance::EcBits


}
}

#endif /* _CISCO_IOS_XR_PMENGINE_OPER_13_ */

