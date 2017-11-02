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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Sts::StsPorts::StsPort::StsCurrent::StsHour24::StsHour24Paths::StsHour24Path> > sts_hour24_path;
        
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

        ydk::YLeaf number; //type: int32
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort> > dwdm_port;
        
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

        class DwdmMinute15Fecs; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs
        class DwdmMinute15Optics; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics
        class DwdmMinute15Otns; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs> dwdm_minute15fecs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics> dwdm_minute15_optics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns> dwdm_minute15otns;
        
}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs : public ydk::Entity
{
    public:
        DwdmMinute15Fecs();
        ~DwdmMinute15Fecs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DwdmMinute15Fec; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec> > dwdm_minute15fec;
        
}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec : public ydk::Entity
{
    public:
        DwdmMinute15Fec();
        ~DwdmMinute15Fec();

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
        class EcBits; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::EcBits
        class UcWords; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::UcWords
        class PreFecBer; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PreFecBer
        class PostFecBer; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PostFecBer
        class Q; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Q
        class Qmargin; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Qmargin

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::EcBits> ec_bits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::UcWords> uc_words;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PreFecBer> pre_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PostFecBer> post_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Q> q;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Qmargin> qmargin;
        
}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::EcBits : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::EcBits


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::UcWords : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::UcWords


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PreFecBer : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PreFecBer


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PostFecBer : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::PostFecBer


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Q : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Q


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Qmargin : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Fecs::DwdmMinute15Fec::Qmargin


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic> > dwdm_minute15_optic;
        
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

        ydk::YLeaf number; //type: int32
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: int32
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: int32
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: int32
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Optics::DwdmMinute15Optic::LowSigFreqOff


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns : public ydk::Entity
{
    public:
        DwdmMinute15Otns();
        ~DwdmMinute15Otns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DwdmMinute15Otn; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn> > dwdm_minute15otn;
        
}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn : public ydk::Entity
{
    public:
        DwdmMinute15Otn();
        ~DwdmMinute15Otn();

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
        class Lbc; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::Lbc
        class EsNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsNe
        class EsrNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrNe
        class SesNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesNe
        class SesrNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrNe
        class UasNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasNe
        class BbeNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeNe
        class BberNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberNe
        class FcNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcNe
        class EsFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsFe
        class EsrFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrFe
        class SesFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesFe
        class SesrFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrFe
        class UasFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasFe
        class BbeFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeFe
        class BberFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberFe
        class FcFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcFe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsNe> es_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrNe> esr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesNe> ses_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrNe> sesr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasNe> uas_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeNe> bbe_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberNe> bber_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcNe> fc_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsFe> es_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrFe> esr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesFe> ses_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrFe> sesr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasFe> uas_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeFe> bbe_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberFe> bber_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcFe> fc_fe;
        
}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::Lbc : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::Lbc


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::EsrFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::SesrFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::UasFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BbeFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::BberFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmMinute15::DwdmMinute15Otns::DwdmMinute15Otn::FcFe


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
        class DwdmHour24Fecs; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs
        class DwdmHour24Otns; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics> dwdm_hour24_optics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs> dwdm_hour24fecs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns> dwdm_hour24otns;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic> > dwdm_hour24_optic;
        
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

        ydk::YLeaf number; //type: int32
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: int32
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: int32
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: string
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
        ydk::YLeaf minimum_tca_report; //type: boolean
        ydk::YLeaf maximum_threshold; //type: int32
        ydk::YLeaf maximum_tca_report; //type: boolean

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Optics::DwdmHour24Optic::LowSigFreqOff


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs : public ydk::Entity
{
    public:
        DwdmHour24Fecs();
        ~DwdmHour24Fecs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DwdmHour24Fec; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec> > dwdm_hour24fec;
        
}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec : public ydk::Entity
{
    public:
        DwdmHour24Fec();
        ~DwdmHour24Fec();

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
        class EcBits; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::EcBits
        class UcWords; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::UcWords
        class PreFecBer; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PreFecBer
        class PostFecBer; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PostFecBer
        class Q; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Q
        class Qmargin; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Qmargin

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::EcBits> ec_bits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::UcWords> uc_words;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PreFecBer> pre_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PostFecBer> post_fec_ber;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Q> q;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Qmargin> qmargin;
        
}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::EcBits : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::EcBits


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::UcWords : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::UcWords


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PreFecBer : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PreFecBer


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PostFecBer : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::PostFecBer


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Q : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Q


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Qmargin : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Fecs::DwdmHour24Fec::Qmargin


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns : public ydk::Entity
{
    public:
        DwdmHour24Otns();
        ~DwdmHour24Otns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class DwdmHour24Otn; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn> > dwdm_hour24otn;
        
}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn : public ydk::Entity
{
    public:
        DwdmHour24Otn();
        ~DwdmHour24Otn();

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
        class Lbc; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::Lbc
        class EsNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsNe
        class EsrNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrNe
        class SesNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesNe
        class SesrNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrNe
        class UasNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasNe
        class BbeNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeNe
        class BberNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberNe
        class FcNe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcNe
        class EsFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsFe
        class EsrFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrFe
        class SesFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesFe
        class SesrFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrFe
        class UasFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasFe
        class BbeFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeFe
        class BberFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberFe
        class FcFe; //type: PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcFe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::Lbc> lbc;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsNe> es_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrNe> esr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesNe> ses_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrNe> sesr_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasNe> uas_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeNe> bbe_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberNe> bber_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcNe> fc_ne;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsFe> es_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrFe> esr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesFe> ses_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrFe> sesr_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasFe> uas_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeFe> bbe_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberFe> bber_fe;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcFe> fc_fe;
        
}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::Lbc : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::Lbc


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcNe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcNe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::EsrFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::SesrFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::UasFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BbeFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::BberFe


class PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcFe : public ydk::Entity
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

}; // PerformanceManagement::Dwdm::DwdmPorts::DwdmPort::DwdmCurrent::DwdmHour24::DwdmHour24Otns::DwdmHour24Otn::FcFe


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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort> > oc_port;
        
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

        class OcHour24Ocns; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns> oc_hour24ocns;
        
}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns : public ydk::Entity
{
    public:
        OcHour24Ocns();
        ~OcHour24Ocns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OcHour24Ocn; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn> > oc_hour24ocn;
        
}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn : public ydk::Entity
{
    public:
        OcHour24Ocn();
        ~OcHour24Ocn();

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
        class Section; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section
        class Line; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line
        class FeLine; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section> section;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line> line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine> fe_line;
        
}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section : public ydk::Entity
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
        class SectionESs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs
        class SectionSeSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs
        class SectionSefSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs
        class SectionCVs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs> section_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs> section_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs> section_sef_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs> section_c_vs;
        
}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionESs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSeSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionSefSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Section::SectionCVs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line : public ydk::Entity
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
        class LineESs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs
        class LineSeSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs
        class LineCVs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs
        class LineUaSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs
        class LineFcLs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs> line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs> line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs> line_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs> line_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs> line_fc_ls;
        
}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineESs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineSeSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineCVs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineUaSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::Line::LineFcLs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine : public ydk::Entity
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

        class FarEndLineESs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs
        class FarEndLineSeSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs
        class FarEndLineCVs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs
        class FarEndLineUaSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs
        class FarEndLineFcLs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs> far_end_line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs> far_end_line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs> far_end_line_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs> far_end_line_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs> far_end_line_fc_ls;
        
}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineESs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineSeSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineCVs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineUaSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcHour24::OcHour24Ocns::OcHour24Ocn::FeLine::FarEndLineFcLs


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

        class OcMinute15Ocns; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns> oc_minute15ocns;
        
}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns : public ydk::Entity
{
    public:
        OcMinute15Ocns();
        ~OcMinute15Ocns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OcMinute15Ocn; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn> > oc_minute15ocn;
        
}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn : public ydk::Entity
{
    public:
        OcMinute15Ocn();
        ~OcMinute15Ocn();

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
        class Section; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section
        class Line; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line
        class FeLine; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section> section;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line> line;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine> fe_line;
        
}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section : public ydk::Entity
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
        class SectionESs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs
        class SectionSeSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs
        class SectionSefSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs
        class SectionCVs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs> section_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs> section_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs> section_sef_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs> section_c_vs;
        
}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionESs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSeSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionSefSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Section::SectionCVs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line : public ydk::Entity
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
        class LineESs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs
        class LineSeSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs
        class LineCVs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs
        class LineUaSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs
        class LineFcLs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs> line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs> line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs> line_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs> line_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs> line_fc_ls;
        
}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineESs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineSeSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineCVs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineUaSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::Line::LineFcLs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine : public ydk::Entity
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

        class FarEndLineESs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs
        class FarEndLineSeSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs
        class FarEndLineCVs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs
        class FarEndLineUaSs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs
        class FarEndLineFcLs; //type: PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs> far_end_line_e_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs> far_end_line_se_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs> far_end_line_c_vs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs> far_end_line_ua_ss;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs> far_end_line_fc_ls;
        
}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineESs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineSeSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineCVs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineUaSs


class PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs : public ydk::Entity
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

}; // PerformanceManagement::Oc::OcPorts::OcPort::OcCurrent::OcMinute15::OcMinute15Ocns::OcMinute15Ocn::FeLine::FarEndLineFcLs


class PerformanceManagement::Ethernet : public ydk::Entity
{
    public:
        Ethernet();
        ~Ethernet();

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

        class EthernetPorts; //type: PerformanceManagement::Ethernet::EthernetPorts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts> ethernet_ports;
        
}; // PerformanceManagement::Ethernet


class PerformanceManagement::Ethernet::EthernetPorts : public ydk::Entity
{
    public:
        EthernetPorts();
        ~EthernetPorts();

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

        class EthernetPort; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort> > ethernet_port;
        
}; // PerformanceManagement::Ethernet::EthernetPorts


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort : public ydk::Entity
{
    public:
        EthernetPort();
        ~EthernetPort();

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
        class EthernetCurrent; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent> ethernet_current;
        
}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent : public ydk::Entity
{
    public:
        EthernetCurrent();
        ~EthernetCurrent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EthernetSecond30; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30
        class EthernetHour24; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24
        class Minute15; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30> ethernet_second30;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetHour24> ethernet_hour24;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::Minute15> minute15;
        
}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30 : public ydk::Entity
{
    public:
        EthernetSecond30();
        ~EthernetSecond30();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30Ethers; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers> second30_ethers;
        
}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30


class PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers : public ydk::Entity
{
    public:
        Second30Ethers();
        ~Second30Ethers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30Ether; //type: PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pmengine_oper::PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers::Second30Ether> > second30_ether;
        
}; // PerformanceManagement::Ethernet::EthernetPorts::EthernetPort::EthernetCurrent::EthernetSecond30::Second30Ethers


}
}

#endif /* _CISCO_IOS_XR_PMENGINE_OPER_5_ */

