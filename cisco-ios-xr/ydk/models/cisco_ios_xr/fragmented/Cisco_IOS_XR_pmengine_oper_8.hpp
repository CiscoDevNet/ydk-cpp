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


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine : public ydk::Entity
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

        class FarEndLineESs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineESs
        class FarEndLineSeSs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs
        class FarEndLineCVs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs
        class FarEndLineUaSs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs
        class FarEndLineFcLs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineESs> far_end_line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs> far_end_line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs> far_end_line_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs> far_end_line_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs> far_end_line_fc_ls;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineESs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineESs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineSeSs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs : public ydk::Entity
{
    public:
        FarEndLineCVs();
        ~FarEndLineCVs();

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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineCVs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineUaSs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs : public ydk::Entity
{
    public:
        FarEndLineFcLs();
        ~FarEndLineFcLs();

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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15ocnHistories::SonetMinute15ocnHistory::SonetMinute15ocnTimeLineInstances::SonetMinute15ocnTimeLineInstance::FeLine::FarEndLineFcLs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories : public ydk::Entity
{
    public:
        SonetMinute15PathHistories();
        ~SonetMinute15PathHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetMinute15PathHistory; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory

        ydk::YList sonet_minute15_path_history;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory : public ydk::Entity
{
    public:
        SonetMinute15PathHistory();
        ~SonetMinute15PathHistory();

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
        class SonetMinute15PathTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances> sonet_minute15_path_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances : public ydk::Entity
{
    public:
        SonetMinute15PathTimeLineInstances();
        ~SonetMinute15PathTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetMinute15PathTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance

        ydk::YList sonet_minute15_path_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance : public ydk::Entity
{
    public:
        SonetMinute15PathTimeLineInstance();
        ~SonetMinute15PathTimeLineInstance();

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
        class Path; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path
        class FePath; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path> path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath> fe_path;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_width; //type: PmSonetPathWidthEnum
        ydk::YLeaf path_status; //type: int32
        class PathESs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathESs
        class PathSeSs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathSeSs
        class PathCVs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs
        class PathUaSs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathUaSs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathESs> path_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathSeSs> path_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs> path_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathUaSs> path_ua_ss;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathESs : public ydk::Entity
{
    public:
        PathESs();
        ~PathESs();

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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathESs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathSeSs : public ydk::Entity
{
    public:
        PathSeSs();
        ~PathSeSs();

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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathSeSs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs : public ydk::Entity
{
    public:
        PathCVs();
        ~PathCVs();

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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathUaSs : public ydk::Entity
{
    public:
        PathUaSs();
        ~PathUaSs();

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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathUaSs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath : public ydk::Entity
{
    public:
        FePath();
        ~FePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf far_end_path_e_ss; //type: uint32
        ydk::YLeaf far_end_path_se_ss; //type: uint32
        ydk::YLeaf far_end_path_c_vs; //type: uint32
        ydk::YLeaf far_end_path_ua_ss; //type: uint32

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History : public ydk::Entity
{
    public:
        SonetHour24History();
        ~SonetHour24History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetHour24PathHistories; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories
        class SonetHour24ocnHistories; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories> sonet_hour24_path_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories> sonet_hour24ocn_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories : public ydk::Entity
{
    public:
        SonetHour24PathHistories();
        ~SonetHour24PathHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetHour24PathHistory; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory

        ydk::YList sonet_hour24_path_history;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory : public ydk::Entity
{
    public:
        SonetHour24PathHistory();
        ~SonetHour24PathHistory();

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
        class SonetHour24PathTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances> sonet_hour24_path_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances : public ydk::Entity
{
    public:
        SonetHour24PathTimeLineInstances();
        ~SonetHour24PathTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetHour24PathTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance

        ydk::YList sonet_hour24_path_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance : public ydk::Entity
{
    public:
        SonetHour24PathTimeLineInstance();
        ~SonetHour24PathTimeLineInstance();

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
        class Path; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path
        class FePath; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path> path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath> fe_path;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_width; //type: PmSonetPathWidthEnum
        ydk::YLeaf path_status; //type: int32
        class PathESs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs
        class PathSeSs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs
        class PathCVs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs
        class PathUaSs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs> path_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs> path_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs> path_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs> path_ua_ss;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs : public ydk::Entity
{
    public:
        PathESs();
        ~PathESs();

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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathESs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs : public ydk::Entity
{
    public:
        PathSeSs();
        ~PathSeSs();

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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathSeSs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs : public ydk::Entity
{
    public:
        PathCVs();
        ~PathCVs();

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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathCVs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs : public ydk::Entity
{
    public:
        PathUaSs();
        ~PathUaSs();

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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::Path::PathUaSs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath : public ydk::Entity
{
    public:
        FePath();
        ~FePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf far_end_path_e_ss; //type: uint32
        ydk::YLeaf far_end_path_se_ss; //type: uint32
        ydk::YLeaf far_end_path_c_vs; //type: uint32
        ydk::YLeaf far_end_path_ua_ss; //type: uint32

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24PathHistories::SonetHour24PathHistory::SonetHour24PathTimeLineInstances::SonetHour24PathTimeLineInstance::FePath


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories : public ydk::Entity
{
    public:
        SonetHour24ocnHistories();
        ~SonetHour24ocnHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetHour24ocnHistory; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory

        ydk::YList sonet_hour24ocn_history;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory : public ydk::Entity
{
    public:
        SonetHour24ocnHistory();
        ~SonetHour24ocnHistory();

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
        class SonetHour24ocnTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances> sonet_hour24ocn_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances : public ydk::Entity
{
    public:
        SonetHour24ocnTimeLineInstances();
        ~SonetHour24ocnTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetHour24ocnTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance

        ydk::YList sonet_hour24ocn_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance : public ydk::Entity
{
    public:
        SonetHour24ocnTimeLineInstance();
        ~SonetHour24ocnTimeLineInstance();

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
        class Section; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section
        class Line; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line
        class FeLine; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section> section;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line> line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine> fe_line;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section : public ydk::Entity
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
        class SectionESs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionESs
        class SectionSeSs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSeSs
        class SectionSefSs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSefSs
        class SectionCVs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionCVs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionESs> section_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSeSs> section_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSefSs> section_sef_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionCVs> section_c_vs;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionESs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionESs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSeSs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSeSs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSefSs : public ydk::Entity
{
    public:
        SectionSefSs();
        ~SectionSefSs();

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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionSefSs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionCVs : public ydk::Entity
{
    public:
        SectionCVs();
        ~SectionCVs();

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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Section::SectionCVs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line : public ydk::Entity
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
        class LineESs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineESs
        class LineSeSs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineSeSs
        class LineCVs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineCVs
        class LineUaSs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineUaSs
        class LineFcLs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineFcLs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineESs> line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineSeSs> line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineCVs> line_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineUaSs> line_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineFcLs> line_fc_ls;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineESs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineESs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineSeSs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineSeSs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineCVs : public ydk::Entity
{
    public:
        LineCVs();
        ~LineCVs();

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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineCVs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineUaSs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineUaSs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineFcLs : public ydk::Entity
{
    public:
        LineFcLs();
        ~LineFcLs();

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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::Line::LineFcLs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine : public ydk::Entity
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

        class FarEndLineESs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineESs
        class FarEndLineSeSs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs
        class FarEndLineCVs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineCVs
        class FarEndLineUaSs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs
        class FarEndLineFcLs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineESs> far_end_line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs> far_end_line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineCVs> far_end_line_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs> far_end_line_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs> far_end_line_fc_ls;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineESs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineESs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineSeSs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineCVs : public ydk::Entity
{
    public:
        FarEndLineCVs();
        ~FarEndLineCVs();

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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineCVs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineUaSs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs : public ydk::Entity
{
    public:
        FarEndLineFcLs();
        ~FarEndLineFcLs();

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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetHour24History::SonetHour24ocnHistories::SonetHour24ocnHistory::SonetHour24ocnTimeLineInstances::SonetHour24ocnTimeLineInstance::FeLine::FarEndLineFcLs


class PerformanceManagementHistory::Global::Periodic::StsHistory : public ydk::Entity
{
    public:
        StsHistory();
        ~StsHistory();

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

        class StsPortHistories; //type: PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories> sts_port_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::StsHistory


class PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories : public ydk::Entity
{
    public:
        StsPortHistories();
        ~StsPortHistories();

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

        class StsPortHistory; //type: PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory

        ydk::YList sts_port_history;
        
}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories


class PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory : public ydk::Entity
{
    public:
        StsPortHistory();
        ~StsPortHistory();

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
        class StsMinute15History; //type: PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History
        class StsHour24History; //type: PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History> sts_minute15_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History> sts_hour24_history;
        
}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory


class PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History : public ydk::Entity
{
    public:
        StsMinute15History();
        ~StsMinute15History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StsMinute15PathHistories; //type: PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories> sts_minute15_path_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History


class PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories : public ydk::Entity
{
    public:
        StsMinute15PathHistories();
        ~StsMinute15PathHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StsMinute15PathHistory; //type: PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory

        ydk::YList sts_minute15_path_history;
        
}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories


class PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory : public ydk::Entity
{
    public:
        StsMinute15PathHistory();
        ~StsMinute15PathHistory();

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
        class StsMinute15PathTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances> sts_minute15_path_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory


class PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances : public ydk::Entity
{
    public:
        StsMinute15PathTimeLineInstances();
        ~StsMinute15PathTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StsMinute15PathTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance

        ydk::YList sts_minute15_path_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance : public ydk::Entity
{
    public:
        StsMinute15PathTimeLineInstance();
        ~StsMinute15PathTimeLineInstance();

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
        class Path; //type: PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path
        class FePath; //type: PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path> path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath> fe_path;
        
}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_width; //type: PmSonetPathWidthEnum
        ydk::YLeaf path_status; //type: int32
        class PathESs; //type: PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathESs
        class PathSeSs; //type: PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathSeSs
        class PathCVs; //type: PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs
        class PathUaSs; //type: PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathUaSs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathESs> path_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathSeSs> path_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs> path_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathUaSs> path_ua_ss;
        
}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path


class PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathESs : public ydk::Entity
{
    public:
        PathESs();
        ~PathESs();

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

}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathESs


class PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathSeSs : public ydk::Entity
{
    public:
        PathSeSs();
        ~PathSeSs();

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

}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathSeSs


class PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs : public ydk::Entity
{
    public:
        PathCVs();
        ~PathCVs();

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

}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs


class PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathUaSs : public ydk::Entity
{
    public:
        PathUaSs();
        ~PathUaSs();

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

}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathUaSs


class PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath : public ydk::Entity
{
    public:
        FePath();
        ~FePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf far_end_path_e_ss; //type: uint32
        ydk::YLeaf far_end_path_se_ss; //type: uint32
        ydk::YLeaf far_end_path_c_vs; //type: uint32
        ydk::YLeaf far_end_path_ua_ss; //type: uint32

}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath


class PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History : public ydk::Entity
{
    public:
        StsHour24History();
        ~StsHour24History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StsHour24PathHistories; //type: PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories> sts_hour24_path_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History


class PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories : public ydk::Entity
{
    public:
        StsHour24PathHistories();
        ~StsHour24PathHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StsHour24PathHistory; //type: PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory

        ydk::YList sts_hour24_path_history;
        
}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories


class PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory : public ydk::Entity
{
    public:
        StsHour24PathHistory();
        ~StsHour24PathHistory();

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
        class StsHour24PathTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances> sts_hour24_path_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory


class PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances : public ydk::Entity
{
    public:
        StsHour24PathTimeLineInstances();
        ~StsHour24PathTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StsHour24PathTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance

        ydk::YList sts_hour24_path_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance : public ydk::Entity
{
    public:
        StsHour24PathTimeLineInstance();
        ~StsHour24PathTimeLineInstance();

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
        class Path; //type: PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path
        class FePath; //type: PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path> path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath> fe_path;
        
}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path : public ydk::Entity
{
    public:
        Path();
        ~Path();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_width; //type: PmSonetPathWidthEnum
        ydk::YLeaf path_status; //type: int32
        class PathESs; //type: PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathESs
        class PathSeSs; //type: PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathSeSs
        class PathCVs; //type: PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs
        class PathUaSs; //type: PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathUaSs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathESs> path_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathSeSs> path_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs> path_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathUaSs> path_ua_ss;
        
}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path


class PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathESs : public ydk::Entity
{
    public:
        PathESs();
        ~PathESs();

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

}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathESs


class PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathSeSs : public ydk::Entity
{
    public:
        PathSeSs();
        ~PathSeSs();

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

}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathSeSs


class PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs : public ydk::Entity
{
    public:
        PathCVs();
        ~PathCVs();

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

}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs


class PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathUaSs : public ydk::Entity
{
    public:
        PathUaSs();
        ~PathUaSs();

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

}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathUaSs


class PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath : public ydk::Entity
{
    public:
        FePath();
        ~FePath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf far_end_path_e_ss; //type: uint32
        ydk::YLeaf far_end_path_se_ss; //type: uint32
        ydk::YLeaf far_end_path_c_vs; //type: uint32
        ydk::YLeaf far_end_path_ua_ss; //type: uint32

}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath


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

        ydk::YList ethernet_port_history;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History> ethernet_second30_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetHour24History> ethernet_hour24_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetMinute15History> ethernet_minute15_history;
        
}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History : public ydk::Entity
{
    public:
        EthernetSecond30History();
        ~EthernetSecond30History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30pcsHistories; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories
        class Second30EtherHistories; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories
        class Second30FecHistories; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30FecHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories> second30pcs_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories> second30_ether_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30FecHistories> second30_fec_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories : public ydk::Entity
{
    public:
        Second30pcsHistories();
        ~Second30pcsHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30pcsHistory; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory

        ydk::YList second30pcs_history;
        
}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory : public ydk::Entity
{
    public:
        Second30pcsHistory();
        ~Second30pcsHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slot_number; //type: uint32
        class Second30pcsTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances> second30pcs_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances : public ydk::Entity
{
    public:
        Second30pcsTimeLineInstances();
        ~Second30pcsTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30pcsTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance

        ydk::YList second30pcs_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance : public ydk::Entity
{
    public:
        Second30pcsTimeLineInstance();
        ~Second30pcsTimeLineInstance();

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
        class Bip; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::Bip
        class FrmErr; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::FrmErr

        ydk::YList bip;
        ydk::YList frm_err;
        
}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::Bip : public ydk::Entity
{
    public:
        Bip();
        ~Bip();

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
        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::Bip


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::FrmErr : public ydk::Entity
{
    public:
        FrmErr();
        ~FrmErr();

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
        ydk::YLeaf data; //type: uint64
        ydk::YLeaf threshold; //type: uint64
        ydk::YLeaf tca_report; //type: boolean

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30pcsHistories::Second30pcsHistory::Second30pcsTimeLineInstances::Second30pcsTimeLineInstance::FrmErr


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories : public ydk::Entity
{
    public:
        Second30EtherHistories();
        ~Second30EtherHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30EtherHistory; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory

        ydk::YList second30_ether_history;
        
}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory : public ydk::Entity
{
    public:
        Second30EtherHistory();
        ~Second30EtherHistory();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slot_number; //type: uint32
        class Second30EtherTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances> second30_ether_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances : public ydk::Entity
{
    public:
        Second30EtherTimeLineInstances();
        ~Second30EtherTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30EtherTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance

        ydk::YList second30_ether_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance : public ydk::Entity
{
    public:
        Second30EtherTimeLineInstance();
        ~Second30EtherTimeLineInstance();

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
        class RxPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxPkt
        class StatPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::StatPkt
        class OctetStat; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OctetStat
        class OversizePktStat; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OversizePktStat
        class FcsErrorsStat; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::FcsErrorsStat
        class LongFramesStat; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::LongFramesStat
        class JabberStat; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::JabberStat
        class Ether64Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether64Octets
        class Ether65127Octet; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether65127Octet
        class Ether128255Octet; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether128255Octet
        class Ether256511Octet; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether256511Octet
        class Ether5121023Octet; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether5121023Octet
        class Ether10241518Octet; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether10241518Octet
        class InUcastPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InUcastPkt
        class InMcastPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMcastPkt
        class InBcastPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt
        class OutUcastPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt
        class OutBcastPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt
        class OutMcastPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt
        class TxPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt
        class IfInErrors; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors
        class IfInOctets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets
        class EtherStatMulticastPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt
        class EtherStatBroadcastPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt
        class EtherStatUndersizedPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt
        class OutOctets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets
        class InPauseFrame; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame
        class InGoodBytes; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes
        class In8021qFrames; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021qFrames
        class InPkts1519MaxOctets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets
        class InGoodPkts; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts
        class InDropOverrun; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun
        class InDropAbort; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort
        class InDropInvalidVlan; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan
        class InDropInvalidDmac; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac
        class InDropInvalidEncap; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap
        class InDropOther; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther
        class InMibGiant; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant
        class InMibJabber; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber
        class InMibcrc; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc
        class InErrorCollisions; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions
        class InErrorSymbol; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol
        class OutGoodBytes; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes
        class Out8021qFrames; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021qFrames
        class OutPauseFrames; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames
        class OutPkts1519MaxOctets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets
        class OutGoodPkts; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts
        class OutDropUnderrun; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun
        class OutDropAbort; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort
        class OutDropOther; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther
        class OutErrorOther; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther
        class InErrorGiant; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant
        class InErrorRunt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt
        class InErrorJabbers; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers
        class InErrorFragments; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments
        class InErrorOther; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther
        class InPkt64Octet; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet
        class InPkts65To127Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets
        class InPkts128To255Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets
        class InPkts256To511Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets
        class InPkts512To1023Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets
        class InPkts1024To1518Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets
        class Outpkt64octet; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64octet
        class OutPkts65127Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts65127Octets
        class OutPkts128255Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts128255Octets
        class OutPkts256511Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts256511Octets
        class OutPkts5121023Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts5121023Octets
        class OutPkts10241518Octets; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts10241518Octets
        class RxUtil; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxUtil
        class TxUtil; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUtil
        class TxUndersizedPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUndersizedPkt
        class TxOversizedPkt; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxOversizedPkt
        class TxFragments; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxFragments
        class TxJabber; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxJabber
        class TxBadFcs; //type: PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxBadFcs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxPkt> rx_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::StatPkt> stat_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OctetStat> octet_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OversizePktStat> oversize_pkt_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::FcsErrorsStat> fcs_errors_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::LongFramesStat> long_frames_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::JabberStat> jabber_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether64Octets> ether64_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether65127Octet> ether65127_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether128255Octet> ether128255_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether256511Octet> ether256511_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether5121023Octet> ether5121023_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether10241518Octet> ether10241518_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InUcastPkt> in_ucast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMcastPkt> in_mcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt> in_bcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt> out_ucast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt> out_bcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt> out_mcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt> tx_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors> if_in_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets> if_in_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt> ether_stat_multicast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt> ether_stat_broadcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt> ether_stat_undersized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets> out_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame> in_pause_frame;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes> in_good_bytes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021qFrames> in8021q_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets> in_pkts1519_max_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts> in_good_pkts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun> in_drop_overrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort> in_drop_abort;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan> in_drop_invalid_vlan;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac> in_drop_invalid_dmac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap> in_drop_invalid_encap;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther> in_drop_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant> in_mib_giant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber> in_mib_jabber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc> in_mibcrc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions> in_error_collisions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol> in_error_symbol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes> out_good_bytes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021qFrames> out8021q_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames> out_pause_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets> out_pkts1519_max_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts> out_good_pkts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun> out_drop_underrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort> out_drop_abort;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther> out_drop_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther> out_error_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant> in_error_giant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt> in_error_runt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers> in_error_jabbers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments> in_error_fragments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther> in_error_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet> in_pkt64_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets> in_pkts65_to127_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets> in_pkts128_to255_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets> in_pkts256_to511_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets> in_pkts512_to1023_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets> in_pkts1024_to1518_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64octet> outpkt64octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts65127Octets> out_pkts65127_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts128255Octets> out_pkts128255_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts256511Octets> out_pkts256511_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts5121023Octets> out_pkts5121023_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts10241518Octets> out_pkts10241518_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxUtil> rx_util;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUtil> tx_util;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxUndersizedPkt> tx_undersized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxOversizedPkt> tx_oversized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxFragments> tx_fragments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxJabber> tx_jabber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxBadFcs> tx_bad_fcs;
        
}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::RxPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::StatPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::StatPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OctetStat : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OctetStat


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OversizePktStat : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OversizePktStat


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::FcsErrorsStat : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::FcsErrorsStat


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::LongFramesStat : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::LongFramesStat


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::JabberStat : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::JabberStat


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether64Octets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether64Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether65127Octet : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether65127Octet


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether128255Octet : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether128255Octet


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether256511Octet : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether256511Octet


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether5121023Octet : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether5121023Octet


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether10241518Octet : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Ether10241518Octet


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InUcastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InUcastPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMcastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMcastPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InBcastPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutUcastPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutBcastPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutMcastPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::TxPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInErrors


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::IfInOctets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatMulticastPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatBroadcastPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::EtherStatUndersizedPkt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutOctets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPauseFrame


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodBytes


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021qFrames : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::In8021qFrames


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1519MaxOctets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InGoodPkts


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOverrun


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropAbort


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidVlan


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidDmac


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropInvalidEncap


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InDropOther


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibGiant


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibJabber


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InMibcrc


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorCollisions


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorSymbol


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodBytes


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021qFrames : public ydk::Entity
{
    public:
        Out8021qFrames();
        ~Out8021qFrames();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Out8021qFrames


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPauseFrames


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutPkts1519MaxOctets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutGoodPkts


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropUnderrun


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropAbort


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutDropOther


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::OutErrorOther


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorGiant


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorRunt


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorJabbers


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorFragments


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InErrorOther


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkt64Octet


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts65To127Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts128To255Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts256To511Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts512To1023Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::InPkts1024To1518Octets


class PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64octet : public ydk::Entity
{
    public:
        Outpkt64octet();
        ~Outpkt64octet();

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

}; // PerformanceManagementHistory::Global::Periodic::EthernetHistory::EthernetPortHistories::EthernetPortHistory::EthernetSecond30History::Second30EtherHistories::Second30EtherHistory::Second30EtherTimeLineInstances::Second30EtherTimeLineInstance::Outpkt64octet


}
}

#endif /* _CISCO_IOS_XR_PMENGINE_OPER_8_ */

