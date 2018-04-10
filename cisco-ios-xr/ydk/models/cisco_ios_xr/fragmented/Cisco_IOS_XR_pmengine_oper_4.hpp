#ifndef _CISCO_IOS_XR_PMENGINE_OPER_4_
#define _CISCO_IOS_XR_PMENGINE_OPER_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_pmengine_oper_0.hpp"
#include "Cisco_IOS_XR_pmengine_oper_3.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent : public ydk::Entity
{
    public:
        SonetCurrent();
        ~SonetCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetMinute15; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15
        class SonetHour24; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15> sonet_minute15;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24> sonet_hour24;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15 : public ydk::Entity
{
    public:
        SonetMinute15();
        ~SonetMinute15();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetMinute15Paths; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths
        class SonetMinute15Ocns; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths> sonet_minute15_paths;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns> sonet_minute15ocns;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths : public ydk::Entity
{
    public:
        SonetMinute15Paths();
        ~SonetMinute15Paths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetMinute15Path; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path> > sonet_minute15_path;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path : public ydk::Entity
{
    public:
        SonetMinute15Path();
        ~SonetMinute15Path();

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
        class Path; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path
        class FePath; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path> path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath> fe_path;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path : public ydk::Entity
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
        class PathESs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs
        class PathSeSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs
        class PathCVs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs
        class PathUaSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs> path_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs> path_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs> path_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs> path_ua_ss;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathESs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathSeSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathCVs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::Path::PathUaSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Paths::SonetMinute15Path::FePath


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns : public ydk::Entity
{
    public:
        SonetMinute15Ocns();
        ~SonetMinute15Ocns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetMinute15Ocn; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn> > sonet_minute15ocn;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn : public ydk::Entity
{
    public:
        SonetMinute15Ocn();
        ~SonetMinute15Ocn();

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
        class Section; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section
        class Line; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line
        class FeLine; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section> section;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line> line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine> fe_line;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section : public ydk::Entity
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
        class SectionESs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs
        class SectionSeSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs
        class SectionSefSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs
        class SectionCVs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs> section_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs> section_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs> section_sef_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs> section_c_vs;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionESs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSeSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionSefSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Section::SectionCVs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line : public ydk::Entity
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
        class LineESs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs
        class LineSeSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs
        class LineCVs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs
        class LineUaSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs
        class LineFcLs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs> line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs> line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs> line_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs> line_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs> line_fc_ls;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineESs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineSeSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineCVs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineUaSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::Line::LineFcLs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine : public ydk::Entity
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

        class FarEndLineESs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs
        class FarEndLineSeSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs
        class FarEndLineCVs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs
        class FarEndLineUaSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs
        class FarEndLineFcLs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs> far_end_line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs> far_end_line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs> far_end_line_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs> far_end_line_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs> far_end_line_fc_ls;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineESs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineSeSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineCVs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineUaSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetMinute15::SonetMinute15Ocns::SonetMinute15Ocn::FeLine::FarEndLineFcLs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24 : public ydk::Entity
{
    public:
        SonetHour24();
        ~SonetHour24();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetHour24Ocns; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns
        class SonetHour24Paths; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns> sonet_hour24ocns;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths> sonet_hour24_paths;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns : public ydk::Entity
{
    public:
        SonetHour24Ocns();
        ~SonetHour24Ocns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetHour24Ocn; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn> > sonet_hour24ocn;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn : public ydk::Entity
{
    public:
        SonetHour24Ocn();
        ~SonetHour24Ocn();

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
        class Section; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section
        class Line; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line
        class FeLine; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section> section;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line> line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine> fe_line;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section : public ydk::Entity
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
        class SectionESs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs
        class SectionSeSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs
        class SectionSefSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs
        class SectionCVs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs> section_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs> section_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs> section_sef_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs> section_c_vs;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionESs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSeSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionSefSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Section::SectionCVs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line : public ydk::Entity
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
        class LineESs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs
        class LineSeSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs
        class LineCVs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs
        class LineUaSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs
        class LineFcLs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs> line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs> line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs> line_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs> line_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs> line_fc_ls;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineESs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineSeSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineCVs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineUaSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::Line::LineFcLs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine : public ydk::Entity
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

        class FarEndLineESs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs
        class FarEndLineSeSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs
        class FarEndLineCVs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs
        class FarEndLineUaSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs
        class FarEndLineFcLs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs> far_end_line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs> far_end_line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs> far_end_line_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs> far_end_line_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs> far_end_line_fc_ls;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineESs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineSeSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineCVs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineUaSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Ocns::SonetHour24Ocn::FeLine::FarEndLineFcLs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths : public ydk::Entity
{
    public:
        SonetHour24Paths();
        ~SonetHour24Paths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SonetHour24Path; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path> > sonet_hour24_path;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path : public ydk::Entity
{
    public:
        SonetHour24Path();
        ~SonetHour24Path();

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
        class Path; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path
        class FePath; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path> path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath> fe_path;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path : public ydk::Entity
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
        class PathESs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs
        class PathSeSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs
        class PathCVs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs
        class PathUaSs; //type: PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs> path_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs> path_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs> path_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs> path_ua_ss;
        
}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathESs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathSeSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathCVs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::Path::PathUaSs


class PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath : public ydk::Entity
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

}; // PerformanceManagement::Sonet::SonetPorts::SonetPort::SonetCurrent::SonetHour24::SonetHour24Paths::SonetHour24Path::FePath


class PerformanceManagement::Optics : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class OpticsPorts; //type: PerformanceManagement::Optics::OpticsPorts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts> optics_ports;
        
}; // PerformanceManagement::Optics


class PerformanceManagement::Optics::OpticsPorts : public ydk::Entity
{
    public:
        OpticsPorts();
        ~OpticsPorts();

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

        class OpticsPort; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort> > optics_port;
        
}; // PerformanceManagement::Optics::OpticsPorts


class PerformanceManagement::Optics::OpticsPorts::OpticsPort : public ydk::Entity
{
    public:
        OpticsPort();
        ~OpticsPort();

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
        class OpticsCurrent; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent> optics_current;
        
}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent : public ydk::Entity
{
    public:
        OpticsCurrent();
        ~OpticsCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticsHour24; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24
        class OpticsMinute15; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15
        class OpticsSecond30; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24> optics_hour24;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15> optics_minute15;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30> optics_second30;
        
}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24 : public ydk::Entity
{
    public:
        OpticsHour24();
        ~OpticsHour24();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticsHour24Optics; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics
        class OpticsHour24Fecs; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics> optics_hour24_optics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs> optics_hour24fecs;
        
}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics : public ydk::Entity
{
    public:
        OpticsHour24Optics();
        ~OpticsHour24Optics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticsHour24Optic; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic> > optics_hour24_optic;
        
}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic : public ydk::Entity
{
    public:
        OpticsHour24Optic();
        ~OpticsHour24Optic();

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
        class Lbc; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc
        class LbcPc; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc
        class Opt; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt
        class Opr; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr
        class Cd; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd
        class Dgd; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd
        class Pmd; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd
        class Osnr; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr
        class CenterWavelength; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength
        class Pdl; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl
        class Pcr; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr
        class Pn; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn
        class RxSigPow; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow
        class LowSigFreqOff; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff
        class AmpliGain; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::AmpliGain
        class AmpliGainTilt; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::AmpliGainTilt

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc> lbc_pc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt> opt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr> opr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd> cd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd> dgd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd> pmd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr> osnr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength> center_wavelength;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl> pdl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr> pcr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn> pn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow> rx_sig_pow;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff> low_sig_freq_off;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::AmpliGain> ampli_gain;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::AmpliGainTilt> ampli_gain_tilt;
        
}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Lbc


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LbcPc


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opt


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Opr


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Cd


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Dgd


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pmd


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Osnr


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::CenterWavelength


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pdl


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pcr


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::Pn


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::RxSigPow


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::LowSigFreqOff


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::AmpliGain : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::AmpliGain


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::AmpliGainTilt : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Optics::OpticsHour24Optic::AmpliGainTilt


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs : public ydk::Entity
{
    public:
        OpticsHour24Fecs();
        ~OpticsHour24Fecs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticsHour24Fec; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec> > optics_hour24fec;
        
}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec : public ydk::Entity
{
    public:
        OpticsHour24Fec();
        ~OpticsHour24Fec();

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
        class EcBits; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits
        class UcWords; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords
        class PreFecBer; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer
        class PostFecBer; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer
        class Q; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q
        class Qmargin; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits> ec_bits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords> uc_words;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer> pre_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer> post_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q> q;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin> qmargin;
        
}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::EcBits


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::UcWords


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PreFecBer


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::PostFecBer


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Q


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsHour24::OpticsHour24Fecs::OpticsHour24Fec::Qmargin


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15 : public ydk::Entity
{
    public:
        OpticsMinute15();
        ~OpticsMinute15();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticsMinute15Optics; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics
        class OpticsMinute15Fecs; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics> optics_minute15_optics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs> optics_minute15fecs;
        
}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics : public ydk::Entity
{
    public:
        OpticsMinute15Optics();
        ~OpticsMinute15Optics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticsMinute15Optic; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic> > optics_minute15_optic;
        
}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic : public ydk::Entity
{
    public:
        OpticsMinute15Optic();
        ~OpticsMinute15Optic();

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
        class Lbc; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc
        class LbcPc; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc
        class Opt; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt
        class Opr; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr
        class Cd; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd
        class Dgd; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd
        class Pmd; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd
        class Osnr; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr
        class CenterWavelength; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength
        class Pdl; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl
        class Pcr; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr
        class Pn; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn
        class RxSigPow; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow
        class LowSigFreqOff; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff
        class AmpliGain; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::AmpliGain
        class AmpliGainTilt; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::AmpliGainTilt

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc> lbc_pc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt> opt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr> opr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd> cd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd> dgd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd> pmd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr> osnr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength> center_wavelength;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl> pdl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr> pcr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn> pn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow> rx_sig_pow;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff> low_sig_freq_off;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::AmpliGain> ampli_gain;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::AmpliGainTilt> ampli_gain_tilt;
        
}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Lbc


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LbcPc


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opt


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Opr


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Cd


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Dgd


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pmd


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Osnr


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::CenterWavelength


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pdl


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pcr


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::Pn


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::RxSigPow


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::LowSigFreqOff


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::AmpliGain : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::AmpliGain


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::AmpliGainTilt : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Optics::OpticsMinute15Optic::AmpliGainTilt


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs : public ydk::Entity
{
    public:
        OpticsMinute15Fecs();
        ~OpticsMinute15Fecs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticsMinute15Fec; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec> > optics_minute15fec;
        
}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec : public ydk::Entity
{
    public:
        OpticsMinute15Fec();
        ~OpticsMinute15Fec();

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
        class EcBits; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits
        class UcWords; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords
        class PreFecBer; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer
        class PostFecBer; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer
        class Q; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q
        class Qmargin; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits> ec_bits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords> uc_words;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer> pre_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer> post_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q> q;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin> qmargin;
        
}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::EcBits


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::UcWords


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PreFecBer


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::PostFecBer


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Q


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsMinute15::OpticsMinute15Fecs::OpticsMinute15Fec::Qmargin


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30 : public ydk::Entity
{
    public:
        OpticsSecond30();
        ~OpticsSecond30();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticsSecond30Fecs; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs
        class OpticsSecond30Optics; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs> optics_second30fecs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics> optics_second30_optics;
        
}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs : public ydk::Entity
{
    public:
        OpticsSecond30Fecs();
        ~OpticsSecond30Fecs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticsSecond30Fec; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec> > optics_second30fec;
        
}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec : public ydk::Entity
{
    public:
        OpticsSecond30Fec();
        ~OpticsSecond30Fec();

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
        class EcBits; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits
        class UcWords; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords
        class PreFecBer; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer
        class PostFecBer; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer
        class Q; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q
        class Qmargin; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits> ec_bits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords> uc_words;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer> pre_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer> post_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q> q;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin> qmargin;
        
}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::EcBits


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::UcWords


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PreFecBer


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::PostFecBer


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Q


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Fecs::OpticsSecond30Fec::Qmargin


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics : public ydk::Entity
{
    public:
        OpticsSecond30Optics();
        ~OpticsSecond30Optics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticsSecond30Optic; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic> > optics_second30_optic;
        
}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic : public ydk::Entity
{
    public:
        OpticsSecond30Optic();
        ~OpticsSecond30Optic();

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
        class Lbc; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc
        class LbcPc; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc
        class Opt; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt
        class Opr; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr
        class Cd; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd
        class Dgd; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd
        class Pmd; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd
        class Osnr; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr
        class CenterWavelength; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength
        class Pdl; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl
        class Pcr; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr
        class Pn; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn
        class RxSigPow; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow
        class LowSigFreqOff; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff
        class AmpliGain; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::AmpliGain
        class AmpliGainTilt; //type: PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::AmpliGainTilt

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc> lbc_pc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt> opt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr> opr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd> cd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd> dgd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd> pmd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr> osnr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength> center_wavelength;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl> pdl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr> pcr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn> pn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow> rx_sig_pow;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff> low_sig_freq_off;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::AmpliGain> ampli_gain;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::AmpliGainTilt> ampli_gain_tilt;
        
}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Lbc


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LbcPc


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opt


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Opr


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Cd


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Dgd


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pmd


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Osnr


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::CenterWavelength


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pdl


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pcr


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::Pn


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::RxSigPow


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::LowSigFreqOff


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::AmpliGain : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::AmpliGain


class PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::AmpliGainTilt : public ydk::Entity
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

}; // PerformanceManagement::Optics::OpticsPorts::OpticsPort::OpticsCurrent::OpticsSecond30::OpticsSecond30Optics::OpticsSecond30Optic::AmpliGainTilt


class PerformanceManagement::Sts : public ydk::Entity
{
    public:
        Sts();
        ~Sts();

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

        class StsPorts; //type: PerformanceManagement::Sts::StsPorts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sts::StsPorts> sts_ports;
        
}; // PerformanceManagement::Sts


class PerformanceManagement::Sts::StsPorts : public ydk::Entity
{
    public:
        StsPorts();
        ~StsPorts();

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

        class StsPort; //type: PerformanceManagement::Sts::StsPorts::StsPort

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sts::StsPorts::StsPort> > sts_port;
        
}; // PerformanceManagement::Sts::StsPorts


class PerformanceManagement::Sts::StsPorts::StsPort : public ydk::Entity
{
    public:
        StsPort();
        ~StsPort();

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
        class StsCurrent; //type: PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent> sts_current;
        
}; // PerformanceManagement::Sts::StsPorts::StsPort


class PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent : public ydk::Entity
{
    public:
        StsCurrent();
        ~StsCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StsMinute15; //type: PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15
        class StsHour24; //type: PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15> sts_minute15;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24> sts_hour24;
        
}; // PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent


class PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15 : public ydk::Entity
{
    public:
        StsMinute15();
        ~StsMinute15();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StsMinute15Paths; //type: PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths> sts_minute15_paths;
        
}; // PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15


class PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths : public ydk::Entity
{
    public:
        StsMinute15Paths();
        ~StsMinute15Paths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StsMinute15Path; //type: PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path> > sts_minute15_path;
        
}; // PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths


class PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path : public ydk::Entity
{
    public:
        StsMinute15Path();
        ~StsMinute15Path();

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
        class Path; //type: PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path
        class FePath; //type: PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::FePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path> path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::FePath> fe_path;
        
}; // PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path


class PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path : public ydk::Entity
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
        class PathESs; //type: PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathESs
        class PathSeSs; //type: PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathSeSs
        class PathCVs; //type: PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathCVs
        class PathUaSs; //type: PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathUaSs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathESs> path_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathSeSs> path_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathCVs> path_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathUaSs> path_ua_ss;
        
}; // PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path


}
}

#endif /* _CISCO_IOS_XR_PMENGINE_OPER_4_ */

