#ifndef _CISCO_IOS_XR_IFMGR_CFG_2_
#define _CISCO_IOS_XR_IFMGR_CFG_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ifmgr_cfg_0.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_1.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ifmgr_cfg {


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn : public ydk::Entity
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

        class OcMinute15OcnReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports
        class OcMinute15OcnThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports> oc_minute15_ocn_reports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds> oc_minute15_ocn_thresholds;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports : public ydk::Entity
{
    public:
        OcMinute15OcnReports();
        ~OcMinute15OcnReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OcMinute15OcnReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport

        ydk::YList oc_minute15_ocn_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport : public ydk::Entity
{
    public:
        OcMinute15OcnReport();
        ~OcMinute15OcnReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ocn_report; //type: OcnReport
        ydk::YLeaf enable; //type: Report

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnReports::OcMinute15OcnReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds : public ydk::Entity
{
    public:
        OcMinute15OcnThresholds();
        ~OcMinute15OcnThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OcMinute15OcnThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold

        ydk::YList oc_minute15_ocn_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold : public ydk::Entity
{
    public:
        OcMinute15OcnThreshold();
        ~OcMinute15OcnThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ocn_threshold; //type: OcnThreshold
        ydk::YLeaf ocn_threshold_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::OcMinute15::OcMinute15Ocn::OcMinute15OcnThresholds::OcMinute15OcnThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30 : public ydk::Entity
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

        class Second30Ether; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether> second30_ether;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether : public ydk::Entity
{
    public:
        Second30Ether();
        ~Second30Ether();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30EtherThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds
        class Second30EtherReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds> second30_ether_thresholds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports> second30_ether_reports;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds : public ydk::Entity
{
    public:
        Second30EtherThresholds();
        ~Second30EtherThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30EtherThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold

        ydk::YList second30_ether_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold : public ydk::Entity
{
    public:
        Second30EtherThreshold();
        ~Second30EtherThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ether_threshold; //type: EtherThreshold
        ydk::YLeaf ether_threshold_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherThresholds::Second30EtherThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports : public ydk::Entity
{
    public:
        Second30EtherReports();
        ~Second30EtherReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Second30EtherReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport

        ydk::YList second30_ether_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport : public ydk::Entity
{
    public:
        Second30EtherReport();
        ~Second30EtherReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ether_report; //type: EtherReport

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::EthernetSecond30::Second30Ether::Second30EtherReports::Second30EtherReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path : public ydk::Entity
{
    public:
        Hour24Path();
        ~Hour24Path();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hour24otnPath; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath> hour24otn_path;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath : public ydk::Entity
{
    public:
        Hour24otnPath();
        ~Hour24otnPath();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hour24otnPathReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports
        class Hour24otnPathThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports> hour24otn_path_reports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds> hour24otn_path_thresholds;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports : public ydk::Entity
{
    public:
        Hour24otnPathReports();
        ~Hour24otnPathReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hour24otnPathReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::Hour24otnPathReport

        ydk::YList hour24otn_path_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::Hour24otnPathReport : public ydk::Entity
{
    public:
        Hour24otnPathReport();
        ~Hour24otnPathReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf otn_report; //type: OtnReport
        ydk::YLeaf enable; //type: Report

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathReports::Hour24otnPathReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds : public ydk::Entity
{
    public:
        Hour24otnPathThresholds();
        ~Hour24otnPathThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hour24otnPathThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds::Hour24otnPathThreshold

        ydk::YList hour24otn_path_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds::Hour24otnPathThreshold : public ydk::Entity
{
    public:
        Hour24otnPathThreshold();
        ~Hour24otnPathThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf otn_threshold; //type: OtnThreshold
        ydk::YLeaf otn_threshold_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Hour24Path::Hour24otnPath::Hour24otnPathThresholds::Hour24otnPathThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15 : public ydk::Entity
{
    public:
        Minute15();
        ~Minute15();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15Optics; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics
        class Minute15secyif; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif
        class Minute15secyrx; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx
        class Minute15pcs; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs
        class Minute15fec; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec
        class Minute15secytx; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx
        class Minute15otn; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics> minute15_optics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif> minute15secyif;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx> minute15secyrx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs> minute15pcs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec> minute15fec;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx> minute15secytx;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn> minute15otn;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics : public ydk::Entity
{
    public:
        Minute15Optics();
        ~Minute15Optics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15OpticsThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds
        class Minute15OpticsReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds> minute15_optics_thresholds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports> minute15_optics_reports;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds : public ydk::Entity
{
    public:
        Minute15OpticsThresholds();
        ~Minute15OpticsThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15OpticsThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold

        ydk::YList minute15_optics_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold : public ydk::Entity
{
    public:
        Minute15OpticsThreshold();
        ~Minute15OpticsThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf optics_threshold; //type: OpticsThreshold
        ydk::YLeaf optics_threshold_value; //type: int32
        ydk::YLeaf dbm; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsThresholds::Minute15OpticsThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports : public ydk::Entity
{
    public:
        Minute15OpticsReports();
        ~Minute15OpticsReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15OpticsReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport

        ydk::YList minute15_optics_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport : public ydk::Entity
{
    public:
        Minute15OpticsReport();
        ~Minute15OpticsReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf optics_report; //type: OpticsReport

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15Optics::Minute15OpticsReports::Minute15OpticsReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif : public ydk::Entity
{
    public:
        Minute15secyif();
        ~Minute15secyif();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15secyifReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports
        class Minute15secyifThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports> minute15secyif_reports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds> minute15secyif_thresholds;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports : public ydk::Entity
{
    public:
        Minute15secyifReports();
        ~Minute15secyifReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15secyifReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports::Minute15secyifReport

        ydk::YList minute15secyif_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports::Minute15secyifReport : public ydk::Entity
{
    public:
        Minute15secyifReport();
        ~Minute15secyifReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secyif_report; //type: SecyifReport
        ydk::YLeaf enable; //type: Report

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifReports::Minute15secyifReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds : public ydk::Entity
{
    public:
        Minute15secyifThresholds();
        ~Minute15secyifThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15secyifThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds::Minute15secyifThreshold

        ydk::YList minute15secyif_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds::Minute15secyifThreshold : public ydk::Entity
{
    public:
        Minute15secyifThreshold();
        ~Minute15secyifThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secyif_threshold; //type: SecyifThreshold
        ydk::YLeaf secyif_threshold_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyif::Minute15secyifThresholds::Minute15secyifThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx : public ydk::Entity
{
    public:
        Minute15secyrx();
        ~Minute15secyrx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15secyrxReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports
        class Minute15secyrxThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports> minute15secyrx_reports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds> minute15secyrx_thresholds;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports : public ydk::Entity
{
    public:
        Minute15secyrxReports();
        ~Minute15secyrxReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15secyrxReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports::Minute15secyrxReport

        ydk::YList minute15secyrx_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports::Minute15secyrxReport : public ydk::Entity
{
    public:
        Minute15secyrxReport();
        ~Minute15secyrxReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secyrx_report; //type: SecyrxReport
        ydk::YLeaf enable; //type: Report

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxReports::Minute15secyrxReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds : public ydk::Entity
{
    public:
        Minute15secyrxThresholds();
        ~Minute15secyrxThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15secyrxThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::Minute15secyrxThreshold

        ydk::YList minute15secyrx_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::Minute15secyrxThreshold : public ydk::Entity
{
    public:
        Minute15secyrxThreshold();
        ~Minute15secyrxThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secyrx_threshold; //type: SecyrxThreshold
        ydk::YLeaf secyrx_threshold_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secyrx::Minute15secyrxThresholds::Minute15secyrxThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs : public ydk::Entity
{
    public:
        Minute15pcs();
        ~Minute15pcs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15pcsReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports
        class Minute15pcsThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports> minute15pcs_reports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds> minute15pcs_thresholds;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports : public ydk::Entity
{
    public:
        Minute15pcsReports();
        ~Minute15pcsReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15pcsReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::Minute15pcsReport

        ydk::YList minute15pcs_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::Minute15pcsReport : public ydk::Entity
{
    public:
        Minute15pcsReport();
        ~Minute15pcsReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcs_report; //type: PcsReport
        ydk::YLeaf enable; //type: Report

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsReports::Minute15pcsReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds : public ydk::Entity
{
    public:
        Minute15pcsThresholds();
        ~Minute15pcsThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15pcsThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::Minute15pcsThreshold

        ydk::YList minute15pcs_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::Minute15pcsThreshold : public ydk::Entity
{
    public:
        Minute15pcsThreshold();
        ~Minute15pcsThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pcs_threshold; //type: PcsThreshold
        ydk::YLeaf pcs_threshold_value; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15pcs::Minute15pcsThresholds::Minute15pcsThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec : public ydk::Entity
{
    public:
        Minute15fec();
        ~Minute15fec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15fecThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds
        class Minute15fecReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds> minute15fec_thresholds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports> minute15fec_reports;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds : public ydk::Entity
{
    public:
        Minute15fecThresholds();
        ~Minute15fecThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15fecThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::Minute15fecThreshold

        ydk::YList minute15fec_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::Minute15fecThreshold : public ydk::Entity
{
    public:
        Minute15fecThreshold();
        ~Minute15fecThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_threshold; //type: FecThreshold
        ydk::YLeaf fec_threshold_value; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecThresholds::Minute15fecThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports : public ydk::Entity
{
    public:
        Minute15fecReports();
        ~Minute15fecReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15fecReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::Minute15fecReport

        ydk::YList minute15fec_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::Minute15fecReport : public ydk::Entity
{
    public:
        Minute15fecReport();
        ~Minute15fecReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_report; //type: FecReport
        ydk::YLeaf enable; //type: Report

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15fec::Minute15fecReports::Minute15fecReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx : public ydk::Entity
{
    public:
        Minute15secytx();
        ~Minute15secytx();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15secytxReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports
        class Minute15secytxThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports> minute15secytx_reports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds> minute15secytx_thresholds;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports : public ydk::Entity
{
    public:
        Minute15secytxReports();
        ~Minute15secytxReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15secytxReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::Minute15secytxReport

        ydk::YList minute15secytx_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::Minute15secytxReport : public ydk::Entity
{
    public:
        Minute15secytxReport();
        ~Minute15secytxReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secytx_report; //type: SecytxReport
        ydk::YLeaf enable; //type: Report

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxReports::Minute15secytxReport


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds : public ydk::Entity
{
    public:
        Minute15secytxThresholds();
        ~Minute15secytxThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15secytxThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::Minute15secytxThreshold

        ydk::YList minute15secytx_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::Minute15secytxThreshold : public ydk::Entity
{
    public:
        Minute15secytxThreshold();
        ~Minute15secytxThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf secytx_threshold; //type: SecytxThreshold
        ydk::YLeaf secytx_threshold_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15secytx::Minute15secytxThresholds::Minute15secytxThreshold


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn : public ydk::Entity
{
    public:
        Minute15otn();
        ~Minute15otn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Min15OtnThreshes; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes
        class Minute15otnReports; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes> min15_otn_threshes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports> minute15otn_reports;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes : public ydk::Entity
{
    public:
        Min15OtnThreshes();
        ~Min15OtnThreshes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Min15OtnThresh; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::Min15OtnThresh

        ydk::YList min15_otn_thresh;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::Min15OtnThresh : public ydk::Entity
{
    public:
        Min15OtnThresh();
        ~Min15OtnThresh();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf otn_threshold; //type: OtnThreshold
        ydk::YLeaf otn_threshold_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Min15OtnThreshes::Min15OtnThresh


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports : public ydk::Entity
{
    public:
        Minute15otnReports();
        ~Minute15otnReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Minute15otnReport; //type: InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::Minute15otnReport

        ydk::YList minute15otn_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports


class InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::Minute15otnReport : public ydk::Entity
{
    public:
        Minute15otnReport();
        ~Minute15otnReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf otn_report; //type: OtnReport
        ydk::YLeaf enable; //type: Report

}; // InterfaceConfigurations::InterfaceConfiguration::PerformanceManagement::Minute15::Minute15otn::Minute15otnReports::Minute15otnReport


class InterfaceConfigurations::InterfaceConfiguration::Ptp : public ydk::Entity
{
    public:
        Ptp();
        ~Ptp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sync_grant_duration; //type: uint32
        ydk::YLeaf general_cos; //type: uint32
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf sync_timeout; //type: uint32
        ydk::YLeaf transport; //type: PtpEncap
        ydk::YLeaf profile; //type: string
        ydk::YLeaf announce_timeout; //type: uint32
        ydk::YLeaf cos; //type: uint32
        ydk::YLeaf ipv4ttl; //type: uint32
        ydk::YLeaf port_state; //type: PtpPortState
        ydk::YLeaf delay_response_timeout; //type: uint32
        ydk::YLeaf local_priority; //type: uint32
        ydk::YLeaf delay_response_grant_duration; //type: uint32
        ydk::YLeaf event_cos; //type: uint32
        ydk::YLeaf dscp; //type: uint32
        ydk::YLeaf ipv6_hop_limit; //type: uint32
        ydk::YLeaf general_dscp; //type: uint32
        ydk::YLeaf clock_operation; //type: PtpClockOperation
        ydk::YLeaf announce_grant_duration; //type: uint32
        ydk::YLeaf unicast_grant_invalid_request; //type: PtpInvalidUnicastGrantRequestResponse
        ydk::YLeaf event_dscp; //type: uint32
        class SourceIpv6Address; //type: InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address
        class AnnounceInterval; //type: InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval
        class Interop; //type: InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop
        class SourceIpv4Address; //type: InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address
        class Slaves; //type: InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves
        class SyncInterval; //type: InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval
        class Masters; //type: InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters
        class Communication; //type: InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication
        class DelayRequestMinimumInterval; //type: InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address> source_ipv6_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval> announce_interval;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop> interop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address> source_ipv4_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves> slaves;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval> sync_interval;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters> masters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication> communication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval> delay_request_minimum_interval;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ptp


class InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address : public ydk::Entity
{
    public:
        SourceIpv6Address();
        ~SourceIpv6Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf source_ipv6; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv6Address


class InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval : public ydk::Entity
{
    public:
        AnnounceInterval();
        ~AnnounceInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_type; //type: PtpTime
        ydk::YLeaf time_period; //type: PtpTimePeriod

}; // InterfaceConfigurations::InterfaceConfiguration::Ptp::AnnounceInterval


class InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop : public ydk::Entity
{
    public:
        Interop();
        ~Interop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile; //type: PtpClockProfile
        ydk::YLeaf domain; //type: uint32
        class EgressConversion; //type: InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion
        class IngressConversion; //type: InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion> egress_conversion;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion> ingress_conversion;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop


class InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion : public ydk::Entity
{
    public:
        EgressConversion();
        ~EgressConversion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clock_accuracy; //type: uint32
        ydk::YLeaf priority2; //type: uint32
        ydk::YLeaf clock_class_default; //type: uint32
        ydk::YLeaf offset_scaled_log_variance; //type: uint32
        ydk::YLeaf priority1; //type: uint32
        class ClockClassMappings; //type: InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings> clock_class_mappings;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion


class InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings : public ydk::Entity
{
    public:
        ClockClassMappings();
        ~ClockClassMappings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClockClassMapping; //type: InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMapping

        ydk::YList clock_class_mapping;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings


class InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMapping : public ydk::Entity
{
    public:
        ClockClassMapping();
        ~ClockClassMapping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clock_class_from; //type: uint32
        ydk::YLeaf clock_class_to; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::EgressConversion::ClockClassMappings::ClockClassMapping


class InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion : public ydk::Entity
{
    public:
        IngressConversion();
        ~IngressConversion();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clock_accuracy; //type: uint32
        ydk::YLeaf priority2; //type: uint32
        ydk::YLeaf clock_class_default; //type: uint32
        ydk::YLeaf offset_scaled_log_variance; //type: uint32
        ydk::YLeaf priority1; //type: uint32
        class ClockClassMappings; //type: InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings> clock_class_mappings;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion


class InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings : public ydk::Entity
{
    public:
        ClockClassMappings();
        ~ClockClassMappings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ClockClassMapping; //type: InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMapping

        ydk::YList clock_class_mapping;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings


class InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMapping : public ydk::Entity
{
    public:
        ClockClassMapping();
        ~ClockClassMapping();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf clock_class_from; //type: uint32
        ydk::YLeaf clock_class_to; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Ptp::Interop::IngressConversion::ClockClassMappings::ClockClassMapping


class InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address : public ydk::Entity
{
    public:
        SourceIpv4Address();
        ~SourceIpv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf source_ip; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::Ptp::SourceIpv4Address


class InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves : public ydk::Entity
{
    public:
        Slaves();
        ~Slaves();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Slave; //type: InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave

        ydk::YList slave;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves


class InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave : public ydk::Entity
{
    public:
        Slave();
        ~Slave();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transport; //type: PtpEncap
        class Ethernet; //type: InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet
        class Ipv4OrIpv6; //type: InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6

        ydk::YList ethernet;
        ydk::YList ipv4_or_ipv6;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave


class InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet : public ydk::Entity
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

        ydk::YLeaf slave_mac_address; //type: string
        ydk::YLeaf non_negotiated; //type: boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ethernet


class InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6 : public ydk::Entity
{
    public:
        Ipv4OrIpv6();
        ~Ipv4OrIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf slave_ip_address; //type: string
        ydk::YLeaf non_negotiated; //type: boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Ptp::Slaves::Slave::Ipv4OrIpv6


class InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval : public ydk::Entity
{
    public:
        SyncInterval();
        ~SyncInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_type; //type: PtpTime
        ydk::YLeaf time_period; //type: PtpTimePeriod

}; // InterfaceConfigurations::InterfaceConfiguration::Ptp::SyncInterval


class InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters : public ydk::Entity
{
    public:
        Masters();
        ~Masters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Master; //type: InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master

        ydk::YList master;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters


class InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master : public ydk::Entity
{
    public:
        Master();
        ~Master();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transport; //type: PtpEncap
        class Ethernet; //type: InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet
        class Ipv4OrIpv6; //type: InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6

        ydk::YList ethernet;
        ydk::YList ipv4_or_ipv6;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master


class InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet : public ydk::Entity
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

        ydk::YLeaf master_mac_address; //type: string
        ydk::YLeaf master_clock_class; //type: uint32
        ydk::YLeaf non_negotiated; //type: boolean
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf communication; //type: PtpTransport
        class DelayAsymmetry; //type: InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry> delay_asymmetry; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet


class InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry : public ydk::Entity
{
    public:
        DelayAsymmetry();
        ~DelayAsymmetry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf magnitude; //type: int32
        ydk::YLeaf units; //type: PtpDelayAsymmetryUnits

}; // InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ethernet::DelayAsymmetry


class InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6 : public ydk::Entity
{
    public:
        Ipv4OrIpv6();
        ~Ipv4OrIpv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf master_ip_address; //type: string
        ydk::YLeaf master_clock_class; //type: uint32
        ydk::YLeaf non_negotiated; //type: boolean
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf communication; //type: PtpTransport
        class DelayAsymmetry; //type: InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry> delay_asymmetry; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6


class InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry : public ydk::Entity
{
    public:
        DelayAsymmetry();
        ~DelayAsymmetry();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf magnitude; //type: int32
        ydk::YLeaf units; //type: PtpDelayAsymmetryUnits

}; // InterfaceConfigurations::InterfaceConfiguration::Ptp::Masters::Master::Ipv4OrIpv6::DelayAsymmetry


class InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication : public ydk::Entity
{
    public:
        Communication();
        ~Communication();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf model; //type: PtpTransport
        ydk::YLeaf target_address_set; //type: boolean
        ydk::YLeaf target_address; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::Ptp::Communication


class InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval : public ydk::Entity
{
    public:
        DelayRequestMinimumInterval();
        ~DelayRequestMinimumInterval();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_type; //type: PtpTime
        ydk::YLeaf time_period; //type: PtpTimePeriod

}; // InterfaceConfigurations::InterfaceConfiguration::Ptp::DelayRequestMinimumInterval


class InterfaceConfigurations::InterfaceConfiguration::EthernetControl : public ydk::Entity
{
    public:
        EthernetControl();
        ~EthernetControl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transport_mode; //type: EtherCtrlTransportMode
        ydk::YLeaf small_frame_padding; //type: empty
        class Transceiver; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver> transceiver;
        
}; // InterfaceConfigurations::InterfaceConfiguration::EthernetControl


class InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver : public ydk::Entity
{
    public:
        Transceiver();
        ~Transceiver();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Permit; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit> permit;
        
}; // InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver


class InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit : public ydk::Entity
{
    public:
        Permit();
        ~Permit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: PermitPluggable
        ydk::YLeaf pid; //type: PermitPluggablePid

}; // InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit


class InterfaceConfigurations::InterfaceConfiguration::Pbr : public ydk::Entity
{
    public:
        Pbr();
        ~Pbr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service_policy_in; //type: string
        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy> service_policy;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Pbr


class InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy : public ydk::Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf input; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::Pbr::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::TunnelIp : public ydk::Entity
{
    public:
        TunnelIp();
        ~TunnelIp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf allow_key; //type: empty
        ydk::YLeaf ttl; //type: uint32
        ydk::YLeaf tunnel_vrf; //type: string
        ydk::YLeaf tos; //type: uint32
        ydk::YLeaf disable; //type: uint32
        class Mode; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode
        class Source; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source
        class Key; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key
        class Keepalive; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive
        class Bfd; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd
        class Destination; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode> mode;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source> source;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key> key;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive> keepalive;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd> bfd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination> destination;
        
}; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp


class InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf mode_direction; //type: TunnelModeDirection

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Mode


class InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source : public ydk::Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Source


class InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entropy; //type: empty
        ydk::YLeaf value_; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Key


class InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive : public ydk::Entity
{
    public:
        Keepalive();
        ~Keepalive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf keep_alive_period; //type: uint32
        ydk::YLeaf keep_alive_retries; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Keepalive


class InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd : public ydk::Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf minimum_interval; //type: uint32
        ydk::YLeaf keepalive_period; //type: uint32
        ydk::YLeaf retry; //type: uint32
        ydk::YLeaf multiplier; //type: uint32
        class Destination; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd::Destination

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd::Destination> destination;
        
}; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd


class InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Bfd::Destination


class InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination : public ydk::Entity
{
    public:
        Destination();
        ~Destination();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf address_mask; //type: string
        ydk::YLeaf prefix_list_name; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelIp::Destination


class InterfaceConfigurations::InterfaceConfiguration::Optics : public ydk::Entity
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

        ydk::YLeaf optics_transmit_power; //type: int32
        ydk::YLeaf optics_ots_channel_power_max_delta; //type: int32
        ydk::YLeaf optics_loopback; //type: OpticsLoopback
        ydk::YLeaf optics_ots_osri; //type: boolean
        ydk::YLeaf optics_ots_amplifier_gain_degrade_high_threshold; //type: uint32
        ydk::YLeaf optics_ots_rx_voa_attenuation; //type: uint32
        ydk::YLeaf optics_fec; //type: OpticsFec
        ydk::YLeaf optics_dgd_high_threshold; //type: uint32
        ydk::YLeaf optics_ots_amplifier_channel_power; //type: int32
        ydk::YLeaf optics_ots_amplifier_control_mode; //type: OpticsOtsAmpliControlMode
        ydk::YLeaf optics_ots_amplifier_gain; //type: uint32
        ydk::YLeaf optics_ots_amplifier_gain_range; //type: OpticsOtsAmpliGainRange
        ydk::YLeaf optics_ots_safety_control_mode; //type: OpticsOtsSafetyControlMode
        ydk::YLeaf optics_cd_min; //type: int32
        ydk::YLeaf optics_ots_tx_voa_attenuation; //type: uint32
        ydk::YLeaf optics_ots_amplifier_tilt; //type: int32
        ydk::YLeaf optics_transmit_shutdown; //type: boolean
        ydk::YLeaf optics_baud_rate; //type: string
        ydk::YLeaf optics_performance_monitoring; //type: boolean
        ydk::YLeaf optics_cd_max; //type: int32
        ydk::YLeaf optics_bits_per_symbol; //type: string
        ydk::YLeaf optics_lbc_high_threshold; //type: uint32
        ydk::YLeaf optics_cd_high_threshold; //type: int32
        ydk::YLeaf optics_osnr_low_threshold; //type: uint32
        ydk::YLeaf optics_ots_amplifier_gain_degrade_low_threshold; //type: uint32
        ydk::YLeaf optics_cd_low_threshold; //type: int32
        ydk::YLeaf breakout; //type: string
        class RxThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds
        class OpticsNetworkSrlgs; //type: InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs
        class OpticsDwdmCarrier; //type: InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier
        class OpticsLanes; //type: InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes
        class TxThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds> rx_thresholds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs> optics_network_srlgs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier> optics_dwdm_carrier; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes> optics_lanes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds> tx_thresholds;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Optics


class InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds : public ydk::Entity
{
    public:
        RxThresholds();
        ~RxThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RxThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold

        ydk::YList rx_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds


class InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold : public ydk::Entity
{
    public:
        RxThreshold();
        ~RxThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rx_threshold_type; //type: Threshold
        ydk::YLeaf rx_threshold; //type: int32

}; // InterfaceConfigurations::InterfaceConfiguration::Optics::RxThresholds::RxThreshold


class InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs : public ydk::Entity
{
    public:
        OpticsNetworkSrlgs();
        ~OpticsNetworkSrlgs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticsNetworkSrlg; //type: InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg

        ydk::YList optics_network_srlg;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs


class InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg : public ydk::Entity
{
    public:
        OpticsNetworkSrlg();
        ~OpticsNetworkSrlg();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf set_id; //type: uint32
        ydk::YLeaf srlg1; //type: uint32
        ydk::YLeaf srlg2; //type: uint32
        ydk::YLeaf srlg3; //type: uint32
        ydk::YLeaf srlg4; //type: uint32
        ydk::YLeaf srlg5; //type: uint32
        ydk::YLeaf srlg6; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsNetworkSrlgs::OpticsNetworkSrlg


class InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier : public ydk::Entity
{
    public:
        OpticsDwdmCarrier();
        ~OpticsDwdmCarrier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf grid_type; //type: OpticsDwdmCarrierGrid
        ydk::YLeaf param_type; //type: OpticsDwdmCarrierParam
        ydk::YLeaf param_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsDwdmCarrier


class InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes : public ydk::Entity
{
    public:
        OpticsLanes();
        ~OpticsLanes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OpticsLane; //type: InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane

        ydk::YList optics_lane;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes


class InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane : public ydk::Entity
{
    public:
        OpticsLane();
        ~OpticsLane();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf index_; //type: uint32
        ydk::YLeaf description; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::Optics::OpticsLanes::OpticsLane


class InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds : public ydk::Entity
{
    public:
        TxThresholds();
        ~TxThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TxThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold

        ydk::YList tx_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds


class InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold : public ydk::Entity
{
    public:
        TxThreshold();
        ~TxThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tx_threshold_type; //type: Threshold
        ydk::YLeaf tx_threshold; //type: int32

}; // InterfaceConfigurations::InterfaceConfiguration::Optics::TxThresholds::TxThreshold


class InterfaceConfigurations::InterfaceConfiguration::Loopbacks : public ydk::Entity
{
    public:
        Loopbacks();
        ~Loopbacks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Loopback; //type: InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback

        ydk::YList loopback;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Loopbacks


class InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback : public ydk::Entity
{
    public:
        Loopback();
        ~Loopback();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf level; //type: uint32
        ydk::YLeaf loopback; //type: ExtendedEthernetLoopback

}; // InterfaceConfigurations::InterfaceConfiguration::Loopbacks::Loopback


class InterfaceConfigurations::InterfaceConfiguration::Subscriber : public ydk::Entity
{
    public:
        Subscriber();
        ~Subscriber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpSubscriber; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber> ip_subscriber;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber : public ydk::Entity
{
    public:
        IpSubscriber();
        ~IpSubscriber();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscriber_templates; //type: uint32
        ydk::YLeaf interface; //type: empty
        class Ipv4; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4
        class SessionLimit; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit
        class Ipv6; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit> session_limit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6> ipv6;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2Connected; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected
        class Routed; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected> l2_connected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed> routed;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected : public ydk::Entity
{
    public:
        L2Connected();
        ~L2Connected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Initiator; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator> initiator;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator : public ydk::Entity
{
    public:
        Initiator();
        ~Initiator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dhcp; //type: empty
        class UnclassifiedSourceFsol; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol> unclassified_source_fsol; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol : public ydk::Entity
{
    public:
        UnclassifiedSourceFsol();
        ~UnclassifiedSourceFsol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf address_unique; //type: boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::L2Connected::Initiator::UnclassifiedSourceFsol


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed : public ydk::Entity
{
    public:
        Routed();
        ~Routed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Initiator; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator> initiator;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator : public ydk::Entity
{
    public:
        Initiator();
        ~Initiator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unclassified_ip; //type: empty
        ydk::YLeaf dhcp; //type: empty
        ydk::YLeaf dhcp_snoop; //type: empty

}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv4::Routed::Initiator


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit : public ydk::Entity
{
    public:
        SessionLimit();
        ~SessionLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Total; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total
        class UnclassifiedSource; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total> total;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource> unclassified_source;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total : public ydk::Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf per_vlan; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::Total


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource : public ydk::Entity
{
    public:
        UnclassifiedSource();
        ~UnclassifiedSource();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf per_vlan; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::SessionLimit::UnclassifiedSource


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class L2Connected; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected
        class Routed; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected> l2_connected;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed> routed;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected : public ydk::Entity
{
    public:
        L2Connected();
        ~L2Connected();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Initiator; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator> initiator;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator : public ydk::Entity
{
    public:
        Initiator();
        ~Initiator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dhcp; //type: empty
        class UnclassifiedSourceFsol; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol> unclassified_source_fsol; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol : public ydk::Entity
{
    public:
        UnclassifiedSourceFsol();
        ~UnclassifiedSourceFsol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf address_unique; //type: boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::L2Connected::Initiator::UnclassifiedSourceFsol


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed : public ydk::Entity
{
    public:
        Routed();
        ~Routed();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Initiator; //type: InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator> initiator;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed


class InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator : public ydk::Entity
{
    public:
        Initiator();
        ~Initiator();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unclassified_ip; //type: uint32
        ydk::YLeaf dhcp; //type: uint32
        ydk::YLeaf dhcp_snoop; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Subscriber::IpSubscriber::Ipv6::Routed::Initiator


class InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration : public ydk::Entity
{
    public:
        VlanSubConfiguration();
        ~VlanSubConfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VlanIdentifier; //type: InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier> vlan_identifier; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration


class InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier : public ydk::Entity
{
    public:
        VlanIdentifier();
        ~VlanIdentifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_type; //type: Vlan
        ydk::YLeaf first_tag; //type: uint32
        ydk::YLeaf second_tag; //type: one of uint32, enumeration

}; // InterfaceConfigurations::InterfaceConfiguration::VlanSubConfiguration::VlanIdentifier


class InterfaceConfigurations::InterfaceConfiguration::EthernetService : public ydk::Entity
{
    public:
        EthernetService();
        ~EthernetService();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocalTrafficDefaultEncapsulation; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation
        class Encapsulation; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation
        class Rewrite; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation> local_traffic_default_encapsulation; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation> encapsulation; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite> rewrite; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::EthernetService


class InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation : public ydk::Entity
{
    public:
        LocalTrafficDefaultEncapsulation();
        ~LocalTrafficDefaultEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outer_tag_type; //type: Vlan
        ydk::YLeaf outer_vlan_id; //type: uint32
        ydk::YLeaf inner_vlan_id; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::EthernetService::LocalTrafficDefaultEncapsulation


class InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation : public ydk::Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outer_tag_type; //type: Match
        ydk::YLeaf outer_range1_low; //type: one of uint32, enumeration
        ydk::YLeaf outer_range1_high; //type: one of uint32, enumeration
        ydk::YLeaf inner_tag_type; //type: Match
        ydk::YLeaf inner_range1_low; //type: one of uint32, enumeration
        ydk::YLeaf inner_range1_high; //type: uint32
        ydk::YLeaf additional_range1_low; //type: one of uint32, enumeration
        ydk::YLeaf additional_range1_high; //type: uint32
        ydk::YLeaf additional_range2_low; //type: one of uint32, enumeration
        ydk::YLeaf additional_range2_high; //type: uint32
        ydk::YLeaf additional_range3_low; //type: one of uint32, enumeration
        ydk::YLeaf additional_range3_high; //type: uint32
        ydk::YLeaf additional_range4_low; //type: one of uint32, enumeration
        ydk::YLeaf additional_range4_high; //type: uint32
        ydk::YLeaf additional_range5_low; //type: one of uint32, enumeration
        ydk::YLeaf additional_range5_high; //type: uint32
        ydk::YLeaf additional_range6_low; //type: one of uint32, enumeration
        ydk::YLeaf additional_range6_high; //type: uint32
        ydk::YLeaf additional_range7_low; //type: one of uint32, enumeration
        ydk::YLeaf additional_range7_high; //type: uint32
        ydk::YLeaf additional_range8_low; //type: one of uint32, enumeration
        ydk::YLeaf additional_range8_high; //type: uint32
        ydk::YLeaf outer_class_of_service; //type: uint32
        ydk::YLeaf inner_class_of_service; //type: uint32
        ydk::YLeaf payload_ethertype_match; //type: EthertypeMatch
        ydk::YLeaf ingress_source_mac; //type: string
        ydk::YLeaf ingress_destination_mac; //type: string
        ydk::YLeaf exact; //type: empty

}; // InterfaceConfigurations::InterfaceConfiguration::EthernetService::Encapsulation


class InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite : public ydk::Entity
{
    public:
        Rewrite();
        ~Rewrite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rewrite_type; //type: Rewrite
        ydk::YLeaf outer_tag_type; //type: Match
        ydk::YLeaf outer_tag_value; //type: uint32
        ydk::YLeaf inner_tag_type; //type: Match
        ydk::YLeaf inner_tag_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::EthernetService::Rewrite


class InterfaceConfigurations::InterfaceConfiguration::EthernetBng : public ydk::Entity
{
    public:
        EthernetBng();
        ~EthernetBng();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AmbiguousEncapsulation; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation> ambiguous_encapsulation; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::EthernetBng


class InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation : public ydk::Entity
{
    public:
        AmbiguousEncapsulation();
        ~AmbiguousEncapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outer_tag_type; //type: Match
        ydk::YLeaf outer_range1_low; //type: one of uint32, enumeration
        ydk::YLeaf outer_range1_high; //type: one of uint32, enumeration
        ydk::YLeaf inner_tag_type; //type: Match
        ydk::YLeaf inner_range1_low; //type: one of uint32, enumeration
        ydk::YLeaf inner_range1_high; //type: uint32
        ydk::YLeaf additional_range1_low; //type: one of uint32, enumeration
        ydk::YLeaf additional_range1_high; //type: uint32
        ydk::YLeaf additional_range2_low; //type: one of uint32, enumeration
        ydk::YLeaf additional_range2_high; //type: uint32
        ydk::YLeaf additional_range3_low; //type: one of uint32, enumeration
        ydk::YLeaf additional_range3_high; //type: uint32
        ydk::YLeaf additional_range4_low; //type: one of uint32, enumeration
        ydk::YLeaf additional_range4_high; //type: uint32
        ydk::YLeaf additional_range5_low; //type: one of uint32, enumeration
        ydk::YLeaf additional_range5_high; //type: uint32
        ydk::YLeaf additional_range6_low; //type: one of uint32, enumeration
        ydk::YLeaf additional_range6_high; //type: uint32
        ydk::YLeaf additional_range7_low; //type: one of uint32, enumeration
        ydk::YLeaf additional_range7_high; //type: uint32
        ydk::YLeaf additional_range8_low; //type: one of uint32, enumeration
        ydk::YLeaf additional_range8_high; //type: uint32
        ydk::YLeaf outer_class_of_service; //type: uint32
        ydk::YLeaf inner_class_of_service; //type: uint32
        ydk::YLeaf payload_ethertype_match; //type: EthertypeMatch
        ydk::YLeaf ingress_source_mac; //type: string
        ydk::YLeaf ingress_destination_mac; //type: string
        ydk::YLeaf exact; //type: empty

}; // InterfaceConfigurations::InterfaceConfiguration::EthernetBng::AmbiguousEncapsulation


class InterfaceConfigurations::InterfaceConfiguration::MacAccounting : public ydk::Entity
{
    public:
        MacAccounting();
        ~MacAccounting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ingress; //type: empty
        ydk::YLeaf egress; //type: empty

}; // InterfaceConfigurations::InterfaceConfiguration::MacAccounting


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures : public ydk::Entity
{
    public:
        EthernetFeatures();
        ~EthernetFeatures();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf filtering; //type: Filtering
        ydk::YLeaf ether_link_oam_enable; //type: empty
        class Cfm; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm
        class EtherLinkOam; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm> cfm;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam> ether_link_oam;
        
}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm : public ydk::Entity
{
    public:
        Cfm();
        ~Cfm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Domains; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains
        class AisUp; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains> domains;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp> ais_up;
        
}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains : public ydk::Entity
{
    public:
        Domains();
        ~Domains();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Domain; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain

        ydk::YList domain;
        
}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain : public ydk::Entity
{
    public:
        Domain();
        ~Domain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain; //type: string
        class Mep; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep> mep;
        
}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep : public ydk::Entity
{
    public:
        Mep();
        ~Mep();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cos; //type: uint32
        class SlaProfileTargetMepIds; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds
        class MepProperties; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties
        class LossMeasurementCounters; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds> sla_profile_target_mep_ids;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties> mep_properties; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters> loss_measurement_counters; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds : public ydk::Entity
{
    public:
        SlaProfileTargetMepIds();
        ~SlaProfileTargetMepIds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SlaProfileTargetMepId; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId
        class SlaProfileTargetMacAddress; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress

        ydk::YList sla_profile_target_mep_id;
        ydk::YList sla_profile_target_mac_address;
        
}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId : public ydk::Entity
{
    public:
        SlaProfileTargetMepId();
        ~SlaProfileTargetMepId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile; //type: string
        ydk::YLeaf target_mep_id; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress : public ydk::Entity
{
    public:
        SlaProfileTargetMacAddress();
        ~SlaProfileTargetMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile; //type: string
        ydk::YLeaf target_mac_address; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties : public ydk::Entity
{
    public:
        MepProperties();
        ~MepProperties();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf service; //type: string
        ydk::YLeaf mep_id; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::MepProperties


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters : public ydk::Entity
{
    public:
        LossMeasurementCounters();
        ~LossMeasurementCounters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cfg_type; //type: CfmLmCountersCfg
        ydk::YLeaf cos0; //type: uint32
        ydk::YLeaf cos1; //type: uint32
        ydk::YLeaf cos2; //type: uint32
        ydk::YLeaf cos3; //type: uint32
        ydk::YLeaf cos4; //type: uint32
        ydk::YLeaf cos5; //type: uint32
        ydk::YLeaf cos6; //type: uint32
        ydk::YLeaf cos7; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::LossMeasurementCounters


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp : public ydk::Entity
{
    public:
        AisUp();
        ~AisUp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Transmission; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission> transmission; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission : public ydk::Entity
{
    public:
        Transmission();
        ~Transmission();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ais_interval; //type: CfmAisInterval
        ydk::YLeaf cos; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::AisUp::Transmission


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam : public ydk::Entity
{
    public:
        EtherLinkOam();
        ~EtherLinkOam();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeout; //type: uint32
        ydk::YLeaf mode; //type: EtherLinkOamModeEnum
        ydk::YLeaf mib_retrieval; //type: boolean
        ydk::YLeaf profile_name; //type: string
        ydk::YLeaf remote_loopback; //type: boolean
        ydk::YLeaf hello_interval; //type: EtherLinkOamHelloIntervalEnum
        ydk::YLeaf udlf; //type: boolean
        class Action; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action
        class RequireRemote; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote
        class LinkMonitoring; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action> action;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote> require_remote;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring> link_monitoring;
        
}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action : public ydk::Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dying_gasp; //type: EtherLinkOamEventActionEnum
        ydk::YLeaf link_fault; //type: EtherLinkOamEventActionEnumEfd
        ydk::YLeaf capabilities_conflict; //type: EtherLinkOamEventActionEnumEfd
        ydk::YLeaf session_up; //type: EtherLinkOamEventActionPrimEnum
        ydk::YLeaf critical_event; //type: EtherLinkOamEventActionEnum
        ydk::YLeaf remote_loopback; //type: EtherLinkOamEventActionPrimEnum
        ydk::YLeaf wiring_conflict; //type: EtherLinkOamEventActionEnumEfd
        ydk::YLeaf high_threshold; //type: EtherLinkOamEventActionEnum
        ydk::YLeaf discovery_timeout; //type: EtherLinkOamEventActionEnumEfd
        ydk::YLeaf session_down; //type: EtherLinkOamEventActionEnumEfd

}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::Action


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote : public ydk::Entity
{
    public:
        RequireRemote();
        ~RequireRemote();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mode; //type: EtherLinkOamRequireModeEnum
        ydk::YLeaf mib_retrieval; //type: boolean
        ydk::YLeaf remote_loopback; //type: boolean
        ydk::YLeaf link_monitoring; //type: boolean

}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::RequireRemote


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring : public ydk::Entity
{
    public:
        LinkMonitoring();
        ~LinkMonitoring();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf monitoring; //type: boolean
        class SymbolPeriod; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod
        class FramePeriod; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod
        class FrameSeconds; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds
        class Frame; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod> symbol_period;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod> frame_period;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds> frame_seconds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame> frame;
        
}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod : public ydk::Entity
{
    public:
        SymbolPeriod();
        ~SymbolPeriod();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Window; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window
        class Threshold; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window> window; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold> threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window : public ydk::Entity
{
    public:
        Window();
        ~Window();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window; //type: uint32
        ydk::YLeaf units; //type: EtherLinkOamWindowUnitsSymbolsEnum
        ydk::YLeaf multiplier; //type: EtherLinkOamThresholdWindowMultiplierEnum

}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Window


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_low; //type: uint32
        ydk::YLeaf threshold_high; //type: uint32
        ydk::YLeaf units; //type: EtherLinkOamThresholdUnitsSymbolsEnum
        ydk::YLeaf multiplier_low; //type: EtherLinkOamThresholdWindowMultiplierEnum
        ydk::YLeaf multiplier_high; //type: EtherLinkOamThresholdWindowMultiplierEnum

}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::SymbolPeriod::Threshold


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod : public ydk::Entity
{
    public:
        FramePeriod();
        ~FramePeriod();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Window; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window
        class Threshold; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window> window; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold> threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window : public ydk::Entity
{
    public:
        Window();
        ~Window();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf window; //type: uint32
        ydk::YLeaf units; //type: EtherLinkOamWindowUnitsFramesEnum
        ydk::YLeaf multiplier; //type: EtherLinkOamThresholdWindowMultiplierEnum

}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Window


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold : public ydk::Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold_low; //type: uint32
        ydk::YLeaf threshold_high; //type: uint32
        ydk::YLeaf units; //type: EtherLinkOamThresholdUnitsFramesEnum
        ydk::YLeaf multiplier_low; //type: EtherLinkOamThresholdWindowMultiplierEnum
        ydk::YLeaf multiplier_high; //type: EtherLinkOamThresholdWindowMultiplierEnum

}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FramePeriod::Threshold


}
}

#endif /* _CISCO_IOS_XR_IFMGR_CFG_2_ */

