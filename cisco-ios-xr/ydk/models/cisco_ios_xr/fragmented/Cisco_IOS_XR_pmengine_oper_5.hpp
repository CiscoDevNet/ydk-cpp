#ifndef _CISCO_IOS_XR_PMENGINE_OPER_5_
#define _CISCO_IOS_XR_PMENGINE_OPER_5_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_pmengine_oper_0.hpp"
#include "Cisco_IOS_XR_pmengine_oper_4.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pmengine_oper {


class PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathESs : public ydk::Entity
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

}; // PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathESs


class PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathSeSs : public ydk::Entity
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

}; // PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathSeSs


class PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathCVs : public ydk::Entity
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

}; // PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathCVs


class PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathUaSs : public ydk::Entity
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

}; // PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::Path::PathUaSs


class PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::FePath : public ydk::Entity
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

}; // PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsMinute15::StsMinute15Paths::StsMinute15Path::FePath


class PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24 : public ydk::Entity
{
    public:
        StsHour24();
        ~StsHour24();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StsHour24Paths; //type: PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths> sts_hour24_paths;
        
}; // PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24


class PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths : public ydk::Entity
{
    public:
        StsHour24Paths();
        ~StsHour24Paths();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StsHour24Path; //type: PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path

        ydk::YList sts_hour24_path;
        
}; // PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths


class PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path : public ydk::Entity
{
    public:
        StsHour24Path();
        ~StsHour24Path();

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
        class Path; //type: PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path
        class FePath; //type: PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::FePath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path> path;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::FePath> fe_path;
        
}; // PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path


class PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path : public ydk::Entity
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
        class PathESs; //type: PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathESs
        class PathSeSs; //type: PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathSeSs
        class PathCVs; //type: PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathCVs
        class PathUaSs; //type: PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathUaSs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathESs> path_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathSeSs> path_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathCVs> path_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathUaSs> path_ua_ss;
        
}; // PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path


class PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathESs : public ydk::Entity
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

}; // PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathESs


class PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathSeSs : public ydk::Entity
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

}; // PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathSeSs


class PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathCVs : public ydk::Entity
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

}; // PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathCVs


class PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathUaSs : public ydk::Entity
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

}; // PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::Path::PathUaSs


class PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::FePath : public ydk::Entity
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

}; // PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path::FePath


class PerformanceManagement::Dwdm : public ydk::Entity
{
    public:
        Dwdm();
        ~Dwdm();

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

        class DwdmPorts; //type: PerformanceManagement::Dwdm::DwdmPorts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts> dwdm_ports;
        
}; // PerformanceManagement::Dwdm


class PerformanceManagement::Dwdm::DwdmPorts : public ydk::Entity
{
    public:
        DwdmPorts();
        ~DwdmPorts();

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

        class DwdmPort; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort

        ydk::YList dwdm_port;
        
}; // PerformanceManagement::Dwdm::DwdmPorts


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort : public ydk::Entity
{
    public:
        DwdmPort();
        ~DwdmPort();

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
        class DwdmCurrent; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent> dwdm_current;
        
}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent : public ydk::Entity
{
    public:
        DwdmCurrent();
        ~DwdmCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DwdmMinute15; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15
        class DwdmHour24; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15> dwdm_minute15;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24> dwdm_hour24;
        
}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15 : public ydk::Entity
{
    public:
        DwdmMinute15();
        ~DwdmMinute15();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DwdmMinute15fecs; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs
        class DwdmMinute15Optics; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics
        class DwdmMinute15otns; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs> dwdm_minute15fecs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics> dwdm_minute15_optics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns> dwdm_minute15otns;
        
}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs : public ydk::Entity
{
    public:
        DwdmMinute15fecs();
        ~DwdmMinute15fecs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DwdmMinute15fec; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs::DwdmMinute15fec

        ydk::YList dwdm_minute15fec;
        
}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs::DwdmMinute15fec : public ydk::Entity
{
    public:
        DwdmMinute15fec();
        ~DwdmMinute15fec();

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
        class EcBits; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs::DwdmMinute15fec::EcBits
        class UcWords; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs::DwdmMinute15fec::UcWords
        class PreFecBer; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs::DwdmMinute15fec::PreFecBer
        class PostFecBer; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs::DwdmMinute15fec::PostFecBer
        class Q; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs::DwdmMinute15fec::Q
        class Qmargin; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs::DwdmMinute15fec::Qmargin

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs::DwdmMinute15fec::EcBits> ec_bits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs::DwdmMinute15fec::UcWords> uc_words;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs::DwdmMinute15fec::PreFecBer> pre_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs::DwdmMinute15fec::PostFecBer> post_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs::DwdmMinute15fec::Q> q;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs::DwdmMinute15fec::Qmargin> qmargin;
        
}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs::DwdmMinute15fec


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs::DwdmMinute15fec::EcBits : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs::DwdmMinute15fec::EcBits


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs::DwdmMinute15fec::UcWords : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs::DwdmMinute15fec::UcWords


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs::DwdmMinute15fec::PreFecBer : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs::DwdmMinute15fec::PreFecBer


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs::DwdmMinute15fec::PostFecBer : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs::DwdmMinute15fec::PostFecBer


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs::DwdmMinute15fec::Q : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs::DwdmMinute15fec::Q


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs::DwdmMinute15fec::Qmargin : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15fecs::DwdmMinute15fec::Qmargin


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics : public ydk::Entity
{
    public:
        DwdmMinute15Optics();
        ~DwdmMinute15Optics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DwdmMinute15Optic; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic

        ydk::YList dwdm_minute15_optic;
        
}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic : public ydk::Entity
{
    public:
        DwdmMinute15Optic();
        ~DwdmMinute15Optic();

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
        class Lbc; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Lbc
        class LbcPc; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LbcPc
        class Opt; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opt
        class Opr; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opr
        class Cd; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Cd
        class Dgd; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Dgd
        class Pmd; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pmd
        class Osnr; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Osnr
        class CenterWavelength; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::CenterWavelength
        class Pdl; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pdl
        class Pcr; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pcr
        class Pn; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pn
        class RxSigPow; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::RxSigPow
        class LowSigFreqOff; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LowSigFreqOff
        class AmpliGain; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::AmpliGain
        class AmpliGainTilt; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::AmpliGainTilt

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LbcPc> lbc_pc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opt> opt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opr> opr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Cd> cd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Dgd> dgd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pmd> pmd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Osnr> osnr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::CenterWavelength> center_wavelength;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pdl> pdl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pcr> pcr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pn> pn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::RxSigPow> rx_sig_pow;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LowSigFreqOff> low_sig_freq_off;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::AmpliGain> ampli_gain;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::AmpliGainTilt> ampli_gain_tilt;
        
}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Lbc : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Lbc


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LbcPc : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LbcPc


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opt : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opt


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opr : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Opr


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Cd : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Cd


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Dgd : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Dgd


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pmd : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pmd


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Osnr : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Osnr


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::CenterWavelength : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::CenterWavelength


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pdl : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pdl


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pcr : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pcr


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pn : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::Pn


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::RxSigPow : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::RxSigPow


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LowSigFreqOff : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LowSigFreqOff


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::AmpliGain : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::AmpliGain


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::AmpliGainTilt : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::AmpliGainTilt


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns : public ydk::Entity
{
    public:
        DwdmMinute15otns();
        ~DwdmMinute15otns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DwdmMinute15otn; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn

        ydk::YList dwdm_minute15otn;
        
}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn : public ydk::Entity
{
    public:
        DwdmMinute15otn();
        ~DwdmMinute15otn();

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
        class Lbc; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::Lbc
        class EsNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::EsNe
        class EsrNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::EsrNe
        class SesNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::SesNe
        class SesrNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::SesrNe
        class UasNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::UasNe
        class BbeNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::BbeNe
        class BberNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::BberNe
        class FcNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::FcNe
        class EsFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::EsFe
        class EsrFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::EsrFe
        class SesFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::SesFe
        class SesrFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::SesrFe
        class UasFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::UasFe
        class BbeFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::BbeFe
        class BberFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::BberFe
        class FcFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::FcFe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::EsNe> es_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::EsrNe> esr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::SesNe> ses_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::SesrNe> sesr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::UasNe> uas_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::BbeNe> bbe_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::BberNe> bber_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::FcNe> fc_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::EsFe> es_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::EsrFe> esr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::SesFe> ses_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::SesrFe> sesr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::UasFe> uas_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::BbeFe> bbe_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::BberFe> bber_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::FcFe> fc_fe;
        
}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::Lbc : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::Lbc


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::EsNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::EsNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::EsrNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::EsrNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::SesNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::SesNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::SesrNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::SesrNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::UasNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::UasNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::BbeNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::BbeNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::BberNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::BberNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::FcNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::FcNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::EsFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::EsFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::EsrFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::EsrFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::SesFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::SesFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::SesrFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::SesrFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::UasFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::UasFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::BbeFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::BbeFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::BberFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::BberFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::FcFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15otns::DwdmMinute15otn::FcFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24 : public ydk::Entity
{
    public:
        DwdmHour24();
        ~DwdmHour24();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DwdmHour24Optics; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics
        class DwdmHour24fecs; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs
        class DwdmHour24otns; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics> dwdm_hour24_optics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs> dwdm_hour24fecs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns> dwdm_hour24otns;
        
}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics : public ydk::Entity
{
    public:
        DwdmHour24Optics();
        ~DwdmHour24Optics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DwdmHour24Optic; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic

        ydk::YList dwdm_hour24_optic;
        
}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic : public ydk::Entity
{
    public:
        DwdmHour24Optic();
        ~DwdmHour24Optic();

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
        class Lbc; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Lbc
        class LbcPc; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LbcPc
        class Opt; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opt
        class Opr; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opr
        class Cd; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Cd
        class Dgd; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Dgd
        class Pmd; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pmd
        class Osnr; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Osnr
        class CenterWavelength; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::CenterWavelength
        class Pdl; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pdl
        class Pcr; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pcr
        class Pn; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pn
        class RxSigPow; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::RxSigPow
        class LowSigFreqOff; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LowSigFreqOff
        class AmpliGain; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::AmpliGain
        class AmpliGainTilt; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::AmpliGainTilt

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LbcPc> lbc_pc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opt> opt;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opr> opr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Cd> cd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Dgd> dgd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pmd> pmd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Osnr> osnr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::CenterWavelength> center_wavelength;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pdl> pdl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pcr> pcr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pn> pn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::RxSigPow> rx_sig_pow;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LowSigFreqOff> low_sig_freq_off;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::AmpliGain> ampli_gain;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::AmpliGainTilt> ampli_gain_tilt;
        
}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Lbc : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Lbc


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LbcPc : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LbcPc


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opt : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opt


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opr : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Opr


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Cd : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Cd


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Dgd : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Dgd


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pmd : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pmd


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Osnr : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Osnr


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::CenterWavelength : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::CenterWavelength


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pdl : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pdl


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pcr : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pcr


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pn : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::Pn


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::RxSigPow : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::RxSigPow


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LowSigFreqOff : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LowSigFreqOff


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::AmpliGain : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::AmpliGain


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::AmpliGainTilt : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::AmpliGainTilt


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs : public ydk::Entity
{
    public:
        DwdmHour24fecs();
        ~DwdmHour24fecs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DwdmHour24fec; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs::DwdmHour24fec

        ydk::YList dwdm_hour24fec;
        
}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs::DwdmHour24fec : public ydk::Entity
{
    public:
        DwdmHour24fec();
        ~DwdmHour24fec();

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
        class EcBits; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs::DwdmHour24fec::EcBits
        class UcWords; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs::DwdmHour24fec::UcWords
        class PreFecBer; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs::DwdmHour24fec::PreFecBer
        class PostFecBer; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs::DwdmHour24fec::PostFecBer
        class Q; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs::DwdmHour24fec::Q
        class Qmargin; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs::DwdmHour24fec::Qmargin

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs::DwdmHour24fec::EcBits> ec_bits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs::DwdmHour24fec::UcWords> uc_words;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs::DwdmHour24fec::PreFecBer> pre_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs::DwdmHour24fec::PostFecBer> post_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs::DwdmHour24fec::Q> q;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs::DwdmHour24fec::Qmargin> qmargin;
        
}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs::DwdmHour24fec


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs::DwdmHour24fec::EcBits : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs::DwdmHour24fec::EcBits


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs::DwdmHour24fec::UcWords : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs::DwdmHour24fec::UcWords


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs::DwdmHour24fec::PreFecBer : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs::DwdmHour24fec::PreFecBer


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs::DwdmHour24fec::PostFecBer : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs::DwdmHour24fec::PostFecBer


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs::DwdmHour24fec::Q : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs::DwdmHour24fec::Q


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs::DwdmHour24fec::Qmargin : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24fecs::DwdmHour24fec::Qmargin


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns : public ydk::Entity
{
    public:
        DwdmHour24otns();
        ~DwdmHour24otns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DwdmHour24otn; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn

        ydk::YList dwdm_hour24otn;
        
}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn : public ydk::Entity
{
    public:
        DwdmHour24otn();
        ~DwdmHour24otn();

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
        class Lbc; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::Lbc
        class EsNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::EsNe
        class EsrNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::EsrNe
        class SesNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::SesNe
        class SesrNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::SesrNe
        class UasNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::UasNe
        class BbeNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::BbeNe
        class BberNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::BberNe
        class FcNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::FcNe
        class EsFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::EsFe
        class EsrFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::EsrFe
        class SesFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::SesFe
        class SesrFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::SesrFe
        class UasFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::UasFe
        class BbeFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::BbeFe
        class BberFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::BberFe
        class FcFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::FcFe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::EsNe> es_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::EsrNe> esr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::SesNe> ses_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::SesrNe> sesr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::UasNe> uas_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::BbeNe> bbe_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::BberNe> bber_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::FcNe> fc_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::EsFe> es_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::EsrFe> esr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::SesFe> ses_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::SesrFe> sesr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::UasFe> uas_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::BbeFe> bbe_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::BberFe> bber_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::FcFe> fc_fe;
        
}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::Lbc : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::Lbc


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::EsNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::EsNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::EsrNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::EsrNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::SesNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::SesNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::SesrNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::SesrNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::UasNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::UasNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::BbeNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::BbeNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::BberNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::BberNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::FcNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::FcNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::EsFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::EsFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::EsrFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::EsrFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::SesFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::SesFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::SesrFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::SesrFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::UasFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::UasFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::BbeFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::BbeFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::BberFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::BberFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::FcFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24otns::DwdmHour24otn::FcFe


class PerformanceManagement::Oc : public ydk::Entity
{
    public:
        Oc();
        ~Oc();

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

        class OcPorts; //type: PerformanceManagement::Oc::OcPorts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts> oc_ports;
        
}; // PerformanceManagement::Oc


class PerformanceManagement::Oc::OcPorts : public ydk::Entity
{
    public:
        OcPorts();
        ~OcPorts();

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

        class OcPort; //type: PerformanceManagement::Oc::OcPorts::OcPort

        ydk::YList oc_port;
        
}; // PerformanceManagement::Oc::OcPorts


class PerformanceManagement::Oc::OcPorts::OcPort : public ydk::Entity
{
    public:
        OcPort();
        ~OcPort();

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
        class OcCurrent; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent> oc_current;
        
}; // PerformanceManagement::Oc::OcPorts::OcPort


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent : public ydk::Entity
{
    public:
        OcCurrent();
        ~OcCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OcHour24; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24
        class OcMinute15; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24> oc_hour24;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15> oc_minute15;
        
}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24 : public ydk::Entity
{
    public:
        OcHour24();
        ~OcHour24();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OcHour24ocns; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns> oc_hour24ocns;
        
}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns : public ydk::Entity
{
    public:
        OcHour24ocns();
        ~OcHour24ocns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OcHour24ocn; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn

        ydk::YList oc_hour24ocn;
        
}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn : public ydk::Entity
{
    public:
        OcHour24ocn();
        ~OcHour24ocn();

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
        class Section; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Section
        class Line; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Line
        class FeLine; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::FeLine

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Section> section;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Line> line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::FeLine> fe_line;
        
}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Section : public ydk::Entity
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
        class SectionESs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Section::SectionESs
        class SectionSeSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Section::SectionSeSs
        class SectionSefSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Section::SectionSefSs
        class SectionCVs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Section::SectionCVs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Section::SectionESs> section_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Section::SectionSeSs> section_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Section::SectionSefSs> section_sef_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Section::SectionCVs> section_c_vs;
        
}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Section


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Section::SectionESs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Section::SectionESs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Section::SectionSeSs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Section::SectionSeSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Section::SectionSefSs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Section::SectionSefSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Section::SectionCVs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Section::SectionCVs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Line : public ydk::Entity
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
        class LineESs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Line::LineESs
        class LineSeSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Line::LineSeSs
        class LineCVs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Line::LineCVs
        class LineUaSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Line::LineUaSs
        class LineFcLs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Line::LineFcLs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Line::LineESs> line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Line::LineSeSs> line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Line::LineCVs> line_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Line::LineUaSs> line_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Line::LineFcLs> line_fc_ls;
        
}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Line


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Line::LineESs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Line::LineESs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Line::LineSeSs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Line::LineSeSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Line::LineCVs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Line::LineCVs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Line::LineUaSs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Line::LineUaSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Line::LineFcLs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::Line::LineFcLs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::FeLine : public ydk::Entity
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

        class FarEndLineESs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::FeLine::FarEndLineESs
        class FarEndLineSeSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::FeLine::FarEndLineSeSs
        class FarEndLineCVs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::FeLine::FarEndLineCVs
        class FarEndLineUaSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::FeLine::FarEndLineUaSs
        class FarEndLineFcLs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::FeLine::FarEndLineFcLs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::FeLine::FarEndLineESs> far_end_line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::FeLine::FarEndLineSeSs> far_end_line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::FeLine::FarEndLineCVs> far_end_line_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::FeLine::FarEndLineUaSs> far_end_line_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::FeLine::FarEndLineFcLs> far_end_line_fc_ls;
        
}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::FeLine


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::FeLine::FarEndLineESs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::FeLine::FarEndLineESs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::FeLine::FarEndLineSeSs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::FeLine::FarEndLineSeSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::FeLine::FarEndLineCVs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::FeLine::FarEndLineCVs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::FeLine::FarEndLineUaSs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::FeLine::FarEndLineUaSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::FeLine::FarEndLineFcLs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24ocns::OcHour24ocn::FeLine::FarEndLineFcLs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15 : public ydk::Entity
{
    public:
        OcMinute15();
        ~OcMinute15();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OcMinute15ocns; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns> oc_minute15ocns;
        
}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns : public ydk::Entity
{
    public:
        OcMinute15ocns();
        ~OcMinute15ocns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OcMinute15ocn; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn

        ydk::YList oc_minute15ocn;
        
}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn : public ydk::Entity
{
    public:
        OcMinute15ocn();
        ~OcMinute15ocn();

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
        class Section; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Section
        class Line; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Line
        class FeLine; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::FeLine

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Section> section;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Line> line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::FeLine> fe_line;
        
}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Section : public ydk::Entity
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
        class SectionESs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Section::SectionESs
        class SectionSeSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Section::SectionSeSs
        class SectionSefSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Section::SectionSefSs
        class SectionCVs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Section::SectionCVs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Section::SectionESs> section_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Section::SectionSeSs> section_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Section::SectionSefSs> section_sef_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Section::SectionCVs> section_c_vs;
        
}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Section


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Section::SectionESs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Section::SectionESs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Section::SectionSeSs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Section::SectionSeSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Section::SectionSefSs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Section::SectionSefSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Section::SectionCVs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Section::SectionCVs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Line : public ydk::Entity
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
        class LineESs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Line::LineESs
        class LineSeSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Line::LineSeSs
        class LineCVs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Line::LineCVs
        class LineUaSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Line::LineUaSs
        class LineFcLs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Line::LineFcLs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Line::LineESs> line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Line::LineSeSs> line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Line::LineCVs> line_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Line::LineUaSs> line_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Line::LineFcLs> line_fc_ls;
        
}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Line


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Line::LineESs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Line::LineESs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Line::LineSeSs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Line::LineSeSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Line::LineCVs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Line::LineCVs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Line::LineUaSs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Line::LineUaSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Line::LineFcLs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::Line::LineFcLs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::FeLine : public ydk::Entity
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

        class FarEndLineESs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::FeLine::FarEndLineESs
        class FarEndLineSeSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::FeLine::FarEndLineSeSs
        class FarEndLineCVs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::FeLine::FarEndLineCVs
        class FarEndLineUaSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::FeLine::FarEndLineUaSs
        class FarEndLineFcLs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::FeLine::FarEndLineFcLs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::FeLine::FarEndLineESs> far_end_line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::FeLine::FarEndLineSeSs> far_end_line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::FeLine::FarEndLineCVs> far_end_line_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::FeLine::FarEndLineUaSs> far_end_line_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::FeLine::FarEndLineFcLs> far_end_line_fc_ls;
        
}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::FeLine


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::FeLine::FarEndLineESs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15ocns::OcMinute15ocn::FeLine::FarEndLineESs


}
}

#endif /* _CISCO_IOS_XR_PMENGINE_OPER_5_ */

