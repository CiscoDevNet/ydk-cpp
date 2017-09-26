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


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories : public ydk::Entity
{
    public:
        HoVcMinute15PathHistories();
        ~HoVcMinute15PathHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HoVcMinute15PathHistory; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory> > ho_vc_minute15_path_history;
        
}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory : public ydk::Entity
{
    public:
        HoVcMinute15PathHistory();
        ~HoVcMinute15PathHistory();

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
        class HoVcMinute15PathTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances> ho_vc_minute15_path_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances : public ydk::Entity
{
    public:
        HoVcMinute15PathTimeLineInstances();
        ~HoVcMinute15PathTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HoVcMinute15PathTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance> > ho_vc_minute15_path_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance : public ydk::Entity
{
    public:
        HoVcMinute15PathTimeLineInstance();
        ~HoVcMinute15PathTimeLineInstance();

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
        class Path; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path
        class FePath; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::FePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::FePath> fe_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path> path;
        
}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::FePath : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::FePath


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path : public ydk::Entity
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

        ydk::YLeaf path_status; //type: int32
        class PathESs; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathESs
        class PathEsRs; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEsRs
        class PathSeSs; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSeSs
        class PathSesRs; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSesRs
        class PathEBs; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEBs
        class PathUaSs; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathUaSs
        class PathBbEs; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbEs
        class PathBbeRs; //type: PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbeRs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbEs> path_bb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbeRs> path_bbe_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEBs> path_e_bs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathESs> path_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEsRs> path_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSeSs> path_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSesRs> path_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathUaSs> path_ua_ss;
        
}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbEs : public ydk::Entity
{
    public:
        PathBbEs();
        ~PathBbEs();

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

}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbEs


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbeRs : public ydk::Entity
{
    public:
        PathBbeRs();
        ~PathBbeRs();

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

}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathBbeRs


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEBs : public ydk::Entity
{
    public:
        PathEBs();
        ~PathEBs();

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

}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEBs


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathESs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathESs


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEsRs : public ydk::Entity
{
    public:
        PathEsRs();
        ~PathEsRs();

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

}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathEsRs


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSeSs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSeSs


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSesRs : public ydk::Entity
{
    public:
        PathSesRs();
        ~PathSesRs();

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

}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathSesRs


class PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathUaSs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::HoVcHistory::HoVcPortHistories::HoVcPortHistory::HoVcMinute15History::HoVcMinute15PathHistories::HoVcMinute15PathHistory::HoVcMinute15PathTimeLineInstances::HoVcMinute15PathTimeLineInstance::Path::PathUaSs


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History> macsec_hour24_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History> macsec_minute15_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecSecond30History> macsec_second30_history;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History : public ydk::Entity
{
    public:
        MacsecHour24History();
        ~MacsecHour24History();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecHour24EtherHistories; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories
        class MacsecHour24SecytxHistories; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories
        class MacsecHour24SecyifHistories; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories
        class MacsecHour24SecyrxHistories; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories> macsec_hour24_ether_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories> macsec_hour24secyif_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories> macsec_hour24secyrx_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories> macsec_hour24secytx_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories : public ydk::Entity
{
    public:
        MacsecHour24EtherHistories();
        ~MacsecHour24EtherHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecHour24EtherHistory; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory> > macsec_hour24_ether_history;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory : public ydk::Entity
{
    public:
        MacsecHour24EtherHistory();
        ~MacsecHour24EtherHistory();

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
        class MacsecHour24EtherTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances> macsec_hour24_ether_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances : public ydk::Entity
{
    public:
        MacsecHour24EtherTimeLineInstances();
        ~MacsecHour24EtherTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecHour24EtherTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance> > macsec_hour24_ether_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance : public ydk::Entity
{
    public:
        MacsecHour24EtherTimeLineInstance();
        ~MacsecHour24EtherTimeLineInstance();

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
        class RxPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::RxPkt
        class StatPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::StatPkt
        class OctetStat; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OctetStat
        class OversizePktStat; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OversizePktStat
        class FcsErrorsStat; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::FcsErrorsStat
        class LongFramesStat; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::LongFramesStat
        class JabberStat; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::JabberStat
        class Ether64Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Ether64Octets
        class Ether65127Octet; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Ether65127Octet
        class Ether128255Octet; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Ether128255Octet
        class Ether256511Octet; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Ether256511Octet
        class Ether5121023Octet; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Ether5121023Octet
        class Ether10241518Octet; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Ether10241518Octet
        class InUcastPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InUcastPkt
        class InMcastPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InMcastPkt
        class InBcastPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InBcastPkt
        class OutUcastPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutUcastPkt
        class OutBcastPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutBcastPkt
        class OutMcastPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutMcastPkt
        class TxPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::TxPkt
        class IfInErrors; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::IfInErrors
        class IfInOctets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::IfInOctets
        class EtherStatMulticastPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::EtherStatMulticastPkt
        class EtherStatBroadcastPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::EtherStatBroadcastPkt
        class EtherStatUndersizedPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::EtherStatUndersizedPkt
        class OutOctets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutOctets
        class InPauseFrame; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPauseFrame
        class InGoodBytes; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InGoodBytes
        class In8021QFrames; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::In8021QFrames
        class InPkts1519MaxOctets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPkts1519MaxOctets
        class InGoodPkts; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InGoodPkts
        class InDropOverrun; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InDropOverrun
        class InDropAbort; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InDropAbort
        class InDropInvalidVlan; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InDropInvalidVlan
        class InDropInvalidDmac; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InDropInvalidDmac
        class InDropInvalidEncap; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InDropInvalidEncap
        class InDropOther; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InDropOther
        class InMibGiant; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InMibGiant
        class InMibJabber; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InMibJabber
        class InMibcrc; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InMibcrc
        class InErrorCollisions; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InErrorCollisions
        class InErrorSymbol; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InErrorSymbol
        class OutGoodBytes; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutGoodBytes
        class Out8021QFrames; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Out8021QFrames
        class OutPauseFrames; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutPauseFrames
        class OutPkts1519MaxOctets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutPkts1519MaxOctets
        class OutGoodPkts; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutGoodPkts
        class OutDropUnderrun; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutDropUnderrun
        class OutDropAbort; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutDropAbort
        class OutDropOther; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutDropOther
        class OutErrorOther; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutErrorOther
        class InErrorGiant; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InErrorGiant
        class InErrorRunt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InErrorRunt
        class InErrorJabbers; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InErrorJabbers
        class InErrorFragments; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InErrorFragments
        class InErrorOther; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InErrorOther
        class InPkt64Octet; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPkt64Octet
        class InPkts65To127Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPkts65To127Octets
        class InPkts128To255Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPkts128To255Octets
        class InPkts256To511Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPkts256To511Octets
        class InPkts512To1023Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPkts512To1023Octets
        class InPkts1024To1518Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPkts1024To1518Octets
        class Outpkt64Octet; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Outpkt64Octet
        class OutPkts65127Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutPkts65127Octets
        class OutPkts128255Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutPkts128255Octets
        class OutPkts256511Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutPkts256511Octets
        class OutPkts5121023Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutPkts5121023Octets
        class OutPkts10241518Octets; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutPkts10241518Octets
        class RxUtil; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::RxUtil
        class TxUtil; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::TxUtil
        class TxUndersizedPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::TxUndersizedPkt
        class TxOversizedPkt; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::TxOversizedPkt
        class TxFragments; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::TxFragments
        class TxJabber; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::TxJabber
        class TxBadFcs; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::TxBadFcs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Ether10241518Octet> ether10241518_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Ether128255Octet> ether128255_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Ether256511Octet> ether256511_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Ether5121023Octet> ether5121023_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Ether64Octets> ether64_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Ether65127Octet> ether65127_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::EtherStatBroadcastPkt> ether_stat_broadcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::EtherStatMulticastPkt> ether_stat_multicast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::EtherStatUndersizedPkt> ether_stat_undersized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::FcsErrorsStat> fcs_errors_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::IfInErrors> if_in_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::IfInOctets> if_in_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::In8021QFrames> in8021q_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InBcastPkt> in_bcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InDropAbort> in_drop_abort;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InDropInvalidDmac> in_drop_invalid_dmac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InDropInvalidEncap> in_drop_invalid_encap;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InDropInvalidVlan> in_drop_invalid_vlan;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InDropOther> in_drop_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InDropOverrun> in_drop_overrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InErrorCollisions> in_error_collisions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InErrorFragments> in_error_fragments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InErrorGiant> in_error_giant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InErrorJabbers> in_error_jabbers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InErrorOther> in_error_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InErrorRunt> in_error_runt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InErrorSymbol> in_error_symbol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InGoodBytes> in_good_bytes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InGoodPkts> in_good_pkts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InMcastPkt> in_mcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InMibGiant> in_mib_giant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InMibJabber> in_mib_jabber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InMibcrc> in_mibcrc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPauseFrame> in_pause_frame;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPkt64Octet> in_pkt64_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPkts1024To1518Octets> in_pkts1024_to1518_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPkts128To255Octets> in_pkts128_to255_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPkts1519MaxOctets> in_pkts1519_max_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPkts256To511Octets> in_pkts256_to511_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPkts512To1023Octets> in_pkts512_to1023_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPkts65To127Octets> in_pkts65_to127_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InUcastPkt> in_ucast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::JabberStat> jabber_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::LongFramesStat> long_frames_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OctetStat> octet_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Out8021QFrames> out8021q_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutBcastPkt> out_bcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutDropAbort> out_drop_abort;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutDropOther> out_drop_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutDropUnderrun> out_drop_underrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutErrorOther> out_error_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutGoodBytes> out_good_bytes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutGoodPkts> out_good_pkts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutMcastPkt> out_mcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutOctets> out_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutPauseFrames> out_pause_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutPkts10241518Octets> out_pkts10241518_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutPkts128255Octets> out_pkts128255_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutPkts1519MaxOctets> out_pkts1519_max_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutPkts256511Octets> out_pkts256511_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutPkts5121023Octets> out_pkts5121023_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutPkts65127Octets> out_pkts65127_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutUcastPkt> out_ucast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Outpkt64Octet> outpkt64octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OversizePktStat> oversize_pkt_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::RxPkt> rx_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::RxUtil> rx_util;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::StatPkt> stat_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::TxBadFcs> tx_bad_fcs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::TxFragments> tx_fragments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::TxJabber> tx_jabber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::TxOversizedPkt> tx_oversized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::TxPkt> tx_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::TxUndersizedPkt> tx_undersized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::TxUtil> tx_util;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Ether10241518Octet : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Ether10241518Octet


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Ether128255Octet : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Ether128255Octet


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Ether256511Octet : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Ether256511Octet


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Ether5121023Octet : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Ether5121023Octet


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Ether64Octets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Ether64Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Ether65127Octet : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Ether65127Octet


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::EtherStatBroadcastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::EtherStatBroadcastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::EtherStatMulticastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::EtherStatMulticastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::EtherStatUndersizedPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::EtherStatUndersizedPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::FcsErrorsStat : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::FcsErrorsStat


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::IfInErrors : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::IfInErrors


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::IfInOctets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::IfInOctets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::In8021QFrames : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::In8021QFrames


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InBcastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InBcastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InDropAbort : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InDropAbort


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InDropInvalidDmac : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InDropInvalidDmac


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InDropInvalidEncap : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InDropInvalidEncap


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InDropInvalidVlan : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InDropInvalidVlan


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InDropOther : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InDropOther


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InDropOverrun : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InDropOverrun


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InErrorCollisions : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InErrorCollisions


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InErrorFragments : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InErrorFragments


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InErrorGiant : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InErrorGiant


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InErrorJabbers : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InErrorJabbers


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InErrorOther : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InErrorOther


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InErrorRunt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InErrorRunt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InErrorSymbol : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InErrorSymbol


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InGoodBytes : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InGoodBytes


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InGoodPkts : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InGoodPkts


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InMcastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InMcastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InMibGiant : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InMibGiant


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InMibJabber : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InMibJabber


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InMibcrc : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InMibcrc


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPauseFrame : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPauseFrame


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPkt64Octet : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPkt64Octet


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPkts1024To1518Octets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPkts1024To1518Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPkts128To255Octets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPkts128To255Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPkts1519MaxOctets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPkts1519MaxOctets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPkts256To511Octets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPkts256To511Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPkts512To1023Octets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPkts512To1023Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPkts65To127Octets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InPkts65To127Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InUcastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::InUcastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::JabberStat : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::JabberStat


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::LongFramesStat : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::LongFramesStat


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OctetStat : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OctetStat


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Out8021QFrames : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Out8021QFrames


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutBcastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutBcastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutDropAbort : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutDropAbort


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutDropOther : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutDropOther


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutDropUnderrun : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutDropUnderrun


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutErrorOther : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutErrorOther


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutGoodBytes : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutGoodBytes


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutGoodPkts : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutGoodPkts


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutMcastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutMcastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutOctets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutOctets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutPauseFrames : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutPauseFrames


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutPkts10241518Octets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutPkts10241518Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutPkts128255Octets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutPkts128255Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutPkts1519MaxOctets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutPkts1519MaxOctets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutPkts256511Octets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutPkts256511Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutPkts5121023Octets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutPkts5121023Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutPkts65127Octets : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutPkts65127Octets


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutUcastPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OutUcastPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Outpkt64Octet : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::Outpkt64Octet


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OversizePktStat : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::OversizePktStat


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::RxPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::RxPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::RxUtil : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::RxUtil


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::StatPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::StatPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::TxBadFcs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::TxBadFcs


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::TxFragments : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::TxFragments


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::TxJabber : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::TxJabber


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::TxOversizedPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::TxOversizedPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::TxPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::TxPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::TxUndersizedPkt : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::TxUndersizedPkt


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::TxUtil : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24EtherHistories::MacsecHour24EtherHistory::MacsecHour24EtherTimeLineInstances::MacsecHour24EtherTimeLineInstance::TxUtil


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories : public ydk::Entity
{
    public:
        MacsecHour24SecyifHistories();
        ~MacsecHour24SecyifHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecHour24SecyifHistory; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory> > macsec_hour24secyif_history;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory : public ydk::Entity
{
    public:
        MacsecHour24SecyifHistory();
        ~MacsecHour24SecyifHistory();

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
        class MacsecHour24SecyifTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances> macsec_hour24secyif_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances : public ydk::Entity
{
    public:
        MacsecHour24SecyifTimeLineInstances();
        ~MacsecHour24SecyifTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecHour24SecyifTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance> > macsec_hour24secyif_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance : public ydk::Entity
{
    public:
        MacsecHour24SecyifTimeLineInstance();
        ~MacsecHour24SecyifTimeLineInstance();

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
        class InPktsUntagged; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InPktsUntagged
        class InPktsNoTag; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InPktsNoTag
        class InPktsBadTag; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InPktsBadTag
        class InPktsUnknownSci; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InPktsUnknownSci
        class InPktsNoSci; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InPktsNoSci
        class InPktsOverrun; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InPktsOverrun
        class InOctetsValidated; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InOctetsValidated
        class InOctetsDecrypted; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InOctetsDecrypted
        class OutPktsUntagged; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::OutPktsUntagged
        class OutPktsTooLong; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::OutPktsTooLong
        class OutOctetsProtected; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::OutOctetsProtected
        class OutOctetsEncrypted; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::OutOctetsEncrypted

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InOctetsDecrypted> in_octets_decrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InOctetsValidated> in_octets_validated;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InPktsBadTag> in_pkts_bad_tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InPktsNoSci> in_pkts_no_sci;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InPktsNoTag> in_pkts_no_tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InPktsOverrun> in_pkts_overrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InPktsUnknownSci> in_pkts_unknown_sci;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InPktsUntagged> in_pkts_untagged;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::OutOctetsEncrypted> out_octets_encrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::OutOctetsProtected> out_octets_protected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::OutPktsTooLong> out_pkts_too_long;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::OutPktsUntagged> out_pkts_untagged;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InOctetsDecrypted : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InOctetsDecrypted


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InOctetsValidated : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InOctetsValidated


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InPktsBadTag : public ydk::Entity
{
    public:
        InPktsBadTag();
        ~InPktsBadTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InPktsBadTag


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InPktsNoSci : public ydk::Entity
{
    public:
        InPktsNoSci();
        ~InPktsNoSci();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InPktsNoSci


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InPktsNoTag : public ydk::Entity
{
    public:
        InPktsNoTag();
        ~InPktsNoTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InPktsNoTag


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InPktsOverrun : public ydk::Entity
{
    public:
        InPktsOverrun();
        ~InPktsOverrun();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InPktsOverrun


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InPktsUnknownSci : public ydk::Entity
{
    public:
        InPktsUnknownSci();
        ~InPktsUnknownSci();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InPktsUnknownSci


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InPktsUntagged : public ydk::Entity
{
    public:
        InPktsUntagged();
        ~InPktsUntagged();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::InPktsUntagged


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::OutOctetsEncrypted : public ydk::Entity
{
    public:
        OutOctetsEncrypted();
        ~OutOctetsEncrypted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::OutOctetsEncrypted


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::OutOctetsProtected : public ydk::Entity
{
    public:
        OutOctetsProtected();
        ~OutOctetsProtected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::OutOctetsProtected


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::OutPktsTooLong : public ydk::Entity
{
    public:
        OutPktsTooLong();
        ~OutPktsTooLong();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::OutPktsTooLong


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::OutPktsUntagged : public ydk::Entity
{
    public:
        OutPktsUntagged();
        ~OutPktsUntagged();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyifHistories::MacsecHour24SecyifHistory::MacsecHour24SecyifTimeLineInstances::MacsecHour24SecyifTimeLineInstance::OutPktsUntagged


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories : public ydk::Entity
{
    public:
        MacsecHour24SecyrxHistories();
        ~MacsecHour24SecyrxHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecHour24SecyrxHistory; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory> > macsec_hour24secyrx_history;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory : public ydk::Entity
{
    public:
        MacsecHour24SecyrxHistory();
        ~MacsecHour24SecyrxHistory();

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
        class MacsecHour24SecyrxTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances> macsec_hour24secyrx_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances : public ydk::Entity
{
    public:
        MacsecHour24SecyrxTimeLineInstances();
        ~MacsecHour24SecyrxTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecHour24SecyrxTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance> > macsec_hour24secyrx_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance : public ydk::Entity
{
    public:
        MacsecHour24SecyrxTimeLineInstance();
        ~MacsecHour24SecyrxTimeLineInstance();

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
        class InPktsUnchecked; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsUnchecked
        class InPktsDelayed; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsDelayed
        class InPktsLate; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsLate
        class InPktsOk; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsOk
        class InPktsInvalid; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsInvalid
        class InPktsNotValid; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsNotValid
        class InPktsNotUsingSa; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsNotUsingSa
        class InPktsUnusedSa; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsUnusedSa
        class InPktsUntaggedHit; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsUntaggedHit
        class InOctetsValidated; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InOctetsValidated
        class InOctetsDecrypted; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InOctetsDecrypted

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InOctetsDecrypted> in_octets_decrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InOctetsValidated> in_octets_validated;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsDelayed> in_pkts_delayed;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsInvalid> in_pkts_invalid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsLate> in_pkts_late;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsNotUsingSa> in_pkts_not_using_sa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsNotValid> in_pkts_not_valid;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsOk> in_pkts_ok;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsUnchecked> in_pkts_unchecked;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsUntaggedHit> in_pkts_untagged_hit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsUnusedSa> in_pkts_unused_sa;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InOctetsDecrypted : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InOctetsDecrypted


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InOctetsValidated : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InOctetsValidated


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsDelayed : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsDelayed


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsInvalid : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsInvalid


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsLate : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsLate


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsNotUsingSa : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsNotUsingSa


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsNotValid : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsNotValid


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsOk : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsOk


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsUnchecked : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsUnchecked


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsUntaggedHit : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsUntaggedHit


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsUnusedSa : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecyrxHistories::MacsecHour24SecyrxHistory::MacsecHour24SecyrxTimeLineInstances::MacsecHour24SecyrxTimeLineInstance::InPktsUnusedSa


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories : public ydk::Entity
{
    public:
        MacsecHour24SecytxHistories();
        ~MacsecHour24SecytxHistories();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecHour24SecytxHistory; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory> > macsec_hour24secytx_history;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory : public ydk::Entity
{
    public:
        MacsecHour24SecytxHistory();
        ~MacsecHour24SecytxHistory();

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
        class MacsecHour24SecytxTimeLineInstances; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory::MacsecHour24SecytxTimeLineInstances

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory::MacsecHour24SecytxTimeLineInstances> macsec_hour24secytx_time_line_instances;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory::MacsecHour24SecytxTimeLineInstances : public ydk::Entity
{
    public:
        MacsecHour24SecytxTimeLineInstances();
        ~MacsecHour24SecytxTimeLineInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MacsecHour24SecytxTimeLineInstance; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory::MacsecHour24SecytxTimeLineInstances::MacsecHour24SecytxTimeLineInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory::MacsecHour24SecytxTimeLineInstances::MacsecHour24SecytxTimeLineInstance> > macsec_hour24secytx_time_line_instance;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory::MacsecHour24SecytxTimeLineInstances


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory::MacsecHour24SecytxTimeLineInstances::MacsecHour24SecytxTimeLineInstance : public ydk::Entity
{
    public:
        MacsecHour24SecytxTimeLineInstance();
        ~MacsecHour24SecytxTimeLineInstance();

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
        class OutPktsProtected; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory::MacsecHour24SecytxTimeLineInstances::MacsecHour24SecytxTimeLineInstance::OutPktsProtected
        class OutPktsEncrypted; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory::MacsecHour24SecytxTimeLineInstances::MacsecHour24SecytxTimeLineInstance::OutPktsEncrypted
        class OutOctetsProtected; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory::MacsecHour24SecytxTimeLineInstances::MacsecHour24SecytxTimeLineInstance::OutOctetsProtected
        class OutOctetsEncrypted; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory::MacsecHour24SecytxTimeLineInstances::MacsecHour24SecytxTimeLineInstance::OutOctetsEncrypted
        class OutPktsTooLong; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory::MacsecHour24SecytxTimeLineInstances::MacsecHour24SecytxTimeLineInstance::OutPktsTooLong

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory::MacsecHour24SecytxTimeLineInstances::MacsecHour24SecytxTimeLineInstance::OutOctetsEncrypted> out_octets_encrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory::MacsecHour24SecytxTimeLineInstances::MacsecHour24SecytxTimeLineInstance::OutOctetsProtected> out_octets_protected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory::MacsecHour24SecytxTimeLineInstances::MacsecHour24SecytxTimeLineInstance::OutPktsEncrypted> out_pkts_encrypted;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory::MacsecHour24SecytxTimeLineInstances::MacsecHour24SecytxTimeLineInstance::OutPktsProtected> out_pkts_protected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory::MacsecHour24SecytxTimeLineInstances::MacsecHour24SecytxTimeLineInstance::OutPktsTooLong> out_pkts_too_long;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory::MacsecHour24SecytxTimeLineInstances::MacsecHour24SecytxTimeLineInstance


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory::MacsecHour24SecytxTimeLineInstances::MacsecHour24SecytxTimeLineInstance::OutOctetsEncrypted : public ydk::Entity
{
    public:
        OutOctetsEncrypted();
        ~OutOctetsEncrypted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory::MacsecHour24SecytxTimeLineInstances::MacsecHour24SecytxTimeLineInstance::OutOctetsEncrypted


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory::MacsecHour24SecytxTimeLineInstances::MacsecHour24SecytxTimeLineInstance::OutOctetsProtected : public ydk::Entity
{
    public:
        OutOctetsProtected();
        ~OutOctetsProtected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory::MacsecHour24SecytxTimeLineInstances::MacsecHour24SecytxTimeLineInstance::OutOctetsProtected


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory::MacsecHour24SecytxTimeLineInstances::MacsecHour24SecytxTimeLineInstance::OutPktsEncrypted : public ydk::Entity
{
    public:
        OutPktsEncrypted();
        ~OutPktsEncrypted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory::MacsecHour24SecytxTimeLineInstances::MacsecHour24SecytxTimeLineInstance::OutPktsEncrypted


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory::MacsecHour24SecytxTimeLineInstances::MacsecHour24SecytxTimeLineInstance::OutPktsProtected : public ydk::Entity
{
    public:
        OutPktsProtected();
        ~OutPktsProtected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory::MacsecHour24SecytxTimeLineInstances::MacsecHour24SecytxTimeLineInstance::OutPktsProtected


class PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory::MacsecHour24SecytxTimeLineInstances::MacsecHour24SecytxTimeLineInstance::OutPktsTooLong : public ydk::Entity
{
    public:
        OutPktsTooLong();
        ~OutPktsTooLong();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
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

}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecHour24History::MacsecHour24SecytxHistories::MacsecHour24SecytxHistory::MacsecHour24SecytxTimeLineInstances::MacsecHour24SecytxTimeLineInstance::OutPktsTooLong


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories> macsec_minute15_ether_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyifHistories> macsec_minute15secyif_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecyrxHistories> macsec_minute15secyrx_histories;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15SecytxHistories> macsec_minute15secytx_histories;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory> > macsec_minute15_ether_history;
        
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

        ydk::YLeaf number; //type: int32
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance> > macsec_minute15_ether_time_line_instance;
        
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

        ydk::YLeaf number; //type: int32
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
        class In8021QFrames; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::In8021QFrames
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
        class Out8021QFrames; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Out8021QFrames
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
        class Outpkt64Octet; //type: PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Outpkt64Octet
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether10241518Octet> ether10241518_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether128255Octet> ether128255_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether256511Octet> ether256511_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether5121023Octet> ether5121023_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether64Octets> ether64_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Ether65127Octet> ether65127_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::EtherStatBroadcastPkt> ether_stat_broadcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::EtherStatMulticastPkt> ether_stat_multicast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::EtherStatUndersizedPkt> ether_stat_undersized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::FcsErrorsStat> fcs_errors_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::IfInErrors> if_in_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::IfInOctets> if_in_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::In8021QFrames> in8021q_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InBcastPkt> in_bcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropAbort> in_drop_abort;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropInvalidDmac> in_drop_invalid_dmac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropInvalidEncap> in_drop_invalid_encap;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropInvalidVlan> in_drop_invalid_vlan;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropOther> in_drop_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InDropOverrun> in_drop_overrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorCollisions> in_error_collisions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorFragments> in_error_fragments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorGiant> in_error_giant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorJabbers> in_error_jabbers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorOther> in_error_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorRunt> in_error_runt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InErrorSymbol> in_error_symbol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InGoodBytes> in_good_bytes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InGoodPkts> in_good_pkts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InMcastPkt> in_mcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InMibGiant> in_mib_giant;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InMibJabber> in_mib_jabber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InMibcrc> in_mibcrc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPauseFrame> in_pause_frame;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkt64Octet> in_pkt64_octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts1024To1518Octets> in_pkts1024_to1518_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts128To255Octets> in_pkts128_to255_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts1519MaxOctets> in_pkts1519_max_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts256To511Octets> in_pkts256_to511_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts512To1023Octets> in_pkts512_to1023_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InPkts65To127Octets> in_pkts65_to127_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::InUcastPkt> in_ucast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::JabberStat> jabber_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::LongFramesStat> long_frames_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OctetStat> octet_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Out8021QFrames> out8021q_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutBcastPkt> out_bcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutDropAbort> out_drop_abort;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutDropOther> out_drop_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutDropUnderrun> out_drop_underrun;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutErrorOther> out_error_other;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutGoodBytes> out_good_bytes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutGoodPkts> out_good_pkts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutMcastPkt> out_mcast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutOctets> out_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPauseFrames> out_pause_frames;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts10241518Octets> out_pkts10241518_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts128255Octets> out_pkts128255_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts1519MaxOctets> out_pkts1519_max_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts256511Octets> out_pkts256511_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts5121023Octets> out_pkts5121023_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutPkts65127Octets> out_pkts65127_octets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OutUcastPkt> out_ucast_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::Outpkt64Octet> outpkt64octet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::OversizePktStat> oversize_pkt_stat;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::RxPkt> rx_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::RxUtil> rx_util;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::StatPkt> stat_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxBadFcs> tx_bad_fcs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxFragments> tx_fragments;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxJabber> tx_jabber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxOversizedPkt> tx_oversized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxPkt> tx_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxUndersizedPkt> tx_undersized_pkt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance::TxUtil> tx_util;
        
}; // PerformanceManagementHistory::Global::Periodic::MacsecHistory::MacsecPortHistories::MacsecPortHistory::MacsecMinute15History::MacsecMinute15EtherHistories::MacsecMinute15EtherHistory::MacsecMinute15EtherTimeLineInstances::MacsecMinute15EtherTimeLineInstance


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


}
}

#endif /* _CISCO_IOS_XR_PMENGINE_OPER_10_ */

