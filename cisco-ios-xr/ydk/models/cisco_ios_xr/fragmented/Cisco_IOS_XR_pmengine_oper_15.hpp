#ifndef _CISCO_IOS_XR_PMENGINE_OPER_15_
#define _CISCO_IOS_XR_PMENGINE_OPER_15_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_pmengine_oper_14.hpp"
#include "Cisco_IOS_XR_pmengine_oper_7.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineESs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineESs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineFcLs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineFcLs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineSeSs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineSeSs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineUaSs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Line::LineUaSs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section : public ydk::Entity
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
        class SectionESs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionESs
        class SectionSeSs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSeSs
        class SectionSefSs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSefSs
        class SectionCVs; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionCVs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionCVs> section_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionESs> section_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSeSs> section_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSefSs> section_sef_ss;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionCVs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionCVs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionESs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionESs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSeSs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSeSs


class PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSefSs : public ydk::Entity
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

}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15OcnHistories::SonetMinute15OcnHistory::SonetMinute15OcnTimeLineInstances::SonetMinute15OcnTimeLineInstance::Section::SectionSefSs


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory> > sonet_minute15_path_history;
        
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

        ydk::YLeaf number; //type: int32
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance> > sonet_minute15_path_time_line_instance;
        
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

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        class Path; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path
        class FePath; //type: PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::FePath> fe_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path> path;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathCVs> path_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathESs> path_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathSeSs> path_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path::PathUaSs> path_ua_ss;
        
}; // PerformanceManagementHistory::Global::Periodic::SonetHistory::SonetPortHistories::SonetPortHistory::SonetMinute15History::SonetMinute15PathHistories::SonetMinute15PathHistory::SonetMinute15PathTimeLineInstances::SonetMinute15PathTimeLineInstance::Path


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine> fe_line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line> line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section> section;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineBbeRs> far_end_line_bbe_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEBs> far_end_line_e_bs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineESs> far_end_line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEbbEs> far_end_line_ebb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineEsRs> far_end_line_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSeSs> far_end_line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineSesRs> far_end_line_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine::FarEndLineUaSs> far_end_line_ua_ss;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::FeLine


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbEs> line_bb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineBbeRs> line_bbe_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEBs> line_e_bs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineESs> line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineEsRs> line_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSeSs> line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineSesRs> line_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line::LineUaSs> line_ua_ss;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Line


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbEs> section_bb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionBbeRs> section_bbe_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEBs> section_e_bs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionESs> section_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionEsRs> section_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSeSs> section_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionSesRs> section_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section::SectionUaSs> section_ua_ss;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmHour24History::StmHour24StmHistories::StmHour24StmHistory::StmHour24StmTimeLineInstances::StmHour24StmTimeLineInstance::Section


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine> fe_line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line> line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section> section;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineBbeRs> far_end_line_bbe_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEBs> far_end_line_e_bs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineESs> far_end_line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEbbEs> far_end_line_ebb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineEsRs> far_end_line_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSeSs> far_end_line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineSesRs> far_end_line_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine::FarEndLineUaSs> far_end_line_ua_ss;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::FeLine


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbEs> line_bb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineBbeRs> line_bbe_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEBs> line_e_bs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineESs> line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineEsRs> line_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSeSs> line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineSesRs> line_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line::LineUaSs> line_ua_ss;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Line


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbEs> section_bb_es;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionBbeRs> section_bbe_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEBs> section_e_bs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionESs> section_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionEsRs> section_es_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSeSs> section_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionSesRs> section_ses_rs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section::SectionUaSs> section_ua_ss;
        
}; // PerformanceManagementHistory::Global::Periodic::StmHistory::StmPortHistories::StmPortHistory::StmMinute15History::StmMinute15StmHistories::StmMinute15StmHistory::StmMinute15StmTimeLineInstances::StmMinute15StmTimeLineInstance::Section


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory> > sts_port_history;
        
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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History> sts_hour24_history;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History> sts_minute15_history;
        
}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory> > sts_hour24_path_history;
        
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

        ydk::YLeaf number; //type: int32
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance> > sts_hour24_path_time_line_instance;
        
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

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        class Path; //type: PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path
        class FePath; //type: PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::FePath> fe_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path> path;
        
}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathCVs> path_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathESs> path_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathSeSs> path_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path::PathUaSs> path_ua_ss;
        
}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsHour24History::StsHour24PathHistories::StsHour24PathHistory::StsHour24PathTimeLineInstances::StsHour24PathTimeLineInstance::Path


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory> > sts_minute15_path_history;
        
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

        ydk::YLeaf number; //type: int32
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance> > sts_minute15_path_time_line_instance;
        
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

        ydk::YLeaf number; //type: int32
        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf valid; //type: boolean
        ydk::YLeaf timestamp; //type: string
        ydk::YLeaf last_clear_time; //type: string
        ydk::YLeaf last_clear15_min_time; //type: string
        ydk::YLeaf last_clear24_hr_time; //type: string
        class Path; //type: PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path
        class FePath; //type: PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::FePath> fe_path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path> path;
        
}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance


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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathCVs> path_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathESs> path_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathSeSs> path_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path::PathUaSs> path_ua_ss;
        
}; // PerformanceManagementHistory::Global::Periodic::StsHistory::StsPortHistories::StsPortHistory::StsMinute15History::StsMinute15PathHistories::StsMinute15PathHistory::StsMinute15PathTimeLineInstances::StsMinute15PathTimeLineInstance::Path


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


}
}

#endif /* _CISCO_IOS_XR_PMENGINE_OPER_15_ */

