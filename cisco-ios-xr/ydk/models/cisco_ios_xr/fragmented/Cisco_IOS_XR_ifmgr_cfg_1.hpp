#ifndef _CISCO_IOS_XR_IFMGR_CFG_1_
#define _CISCO_IOS_XR_IFMGR_CFG_1_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ifmgr_cfg_0.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ifmgr_cfg {


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu : public ydk::Entity
{
    public:
        Odu();
        ~Odu();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduReports; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports
        class OduThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds
        class OduExpectedTti; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti
        class OduTxTti; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports> odu_reports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds> odu_thresholds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti> odu_expected_tti;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti> odu_tx_tti;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports : public ydk::Entity
{
    public:
        OduReports();
        ~OduReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduReport; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport> > odu_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport : public ydk::Entity
{
    public:
        OduReport();
        ~OduReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf alarm; //type: OduAlarm

}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduReports::OduReport


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds : public ydk::Entity
{
    public:
        OduThresholds();
        ~OduThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OduThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold> > odu_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold : public ydk::Entity
{
    public:
        OduThreshold();
        ~OduThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: OduThreshold
        ydk::YLeaf threshold_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduThresholds::OduThreshold


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti : public ydk::Entity
{
    public:
        OduExpectedTti();
        ~OduExpectedTti();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf string_type; //type: ExpectedTti
        ydk::YLeaf ascii_string; //type: string
        ydk::YLeaf hex_string; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduExpectedTti


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti : public ydk::Entity
{
    public:
        OduTxTti();
        ~OduTxTti();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf string_type; //type: TxTti
        ydk::YLeaf ascii_string; //type: string
        ydk::YLeaf hex_string; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu::OduTxTti


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu : public ydk::Entity
{
    public:
        Otu();
        ~Otu();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuExpectedTti; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti
        class OtuThresholds; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds
        class Frr; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr
        class OtuReports; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports
        class OtuTxTti; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti> otu_expected_tti;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds> otu_thresholds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr> frr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports> otu_reports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti> otu_tx_tti;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti : public ydk::Entity
{
    public:
        OtuExpectedTti();
        ~OtuExpectedTti();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf string_type; //type: ExpectedTti
        ydk::YLeaf ascii_string; //type: string
        ydk::YLeaf hex_string; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuExpectedTti


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds : public ydk::Entity
{
    public:
        OtuThresholds();
        ~OtuThresholds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold> > otu_threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold : public ydk::Entity
{
    public:
        OtuThreshold();
        ~OtuThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf threshold; //type: OtuThreshold
        ydk::YLeaf threshold_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuThresholds::OtuThreshold


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr : public ydk::Entity
{
    public:
        Frr();
        ~Frr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TriggerWindow; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow
        class RevertThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold
        class TriggerThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold
        class RevertWindow; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow> trigger_window; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold> revert_threshold; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold> trigger_threshold; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow> revert_window; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow : public ydk::Entity
{
    public:
        TriggerWindow();
        ~TriggerWindow();

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
        ydk::YLeaf dummy; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerWindow


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold : public ydk::Entity
{
    public:
        RevertThreshold();
        ~RevertThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ber_base; //type: uint32
        ydk::YLeaf ber_power; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertThreshold


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold : public ydk::Entity
{
    public:
        TriggerThreshold();
        ~TriggerThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ber_base; //type: uint32
        ydk::YLeaf ber_power; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::TriggerThreshold


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow : public ydk::Entity
{
    public:
        RevertWindow();
        ~RevertWindow();

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
        ydk::YLeaf dummy; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::Frr::RevertWindow


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports : public ydk::Entity
{
    public:
        OtuReports();
        ~OtuReports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class OtuReport; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport> > otu_report;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport : public ydk::Entity
{
    public:
        OtuReport();
        ~OtuReport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf alarm; //type: OtuAlarm

}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuReports::OtuReport


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti : public ydk::Entity
{
    public:
        OtuTxTti();
        ~OtuTxTti();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf string_type; //type: TxTti
        ydk::YLeaf ascii_string; //type: string
        ydk::YLeaf hex_string; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu::OtuTxTti


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs : public ydk::Entity
{
    public:
        Prbs();
        ~Prbs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prbs_mode; //type: PrbsMode
        ydk::YLeaf prbs_pattern; //type: PrbsPattern

}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec : public ydk::Entity
{
    public:
        Fec();
        ~Fec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fec_mode; //type: Fec
        ydk::YLeaf efec_mode; //type: Efec

}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength : public ydk::Entity
{
    public:
        Wavelength();
        ~Wavelength();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wave_channel; //type: uint32
        ydk::YLeaf wave_channel_number; //type: WaveChannelNum
        ydk::YLeaf prog_frequency; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength


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
        ydk::YLeaf second_tag; //type: one of enumeration, uint32

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
        ydk::YLeaf outer_range1_low; //type: one of enumeration, uint32
        ydk::YLeaf outer_range1_high; //type: one of enumeration, uint32
        ydk::YLeaf inner_tag_type; //type: Match
        ydk::YLeaf inner_range1_low; //type: one of enumeration, uint32
        ydk::YLeaf inner_range1_high; //type: uint32
        ydk::YLeaf additional_range1_low; //type: one of enumeration, uint32
        ydk::YLeaf additional_range1_high; //type: uint32
        ydk::YLeaf additional_range2_low; //type: one of enumeration, uint32
        ydk::YLeaf additional_range2_high; //type: uint32
        ydk::YLeaf additional_range3_low; //type: one of enumeration, uint32
        ydk::YLeaf additional_range3_high; //type: uint32
        ydk::YLeaf additional_range4_low; //type: one of enumeration, uint32
        ydk::YLeaf additional_range4_high; //type: uint32
        ydk::YLeaf additional_range5_low; //type: one of enumeration, uint32
        ydk::YLeaf additional_range5_high; //type: uint32
        ydk::YLeaf additional_range6_low; //type: one of enumeration, uint32
        ydk::YLeaf additional_range6_high; //type: uint32
        ydk::YLeaf additional_range7_low; //type: one of enumeration, uint32
        ydk::YLeaf additional_range7_high; //type: uint32
        ydk::YLeaf additional_range8_low; //type: one of enumeration, uint32
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
        ydk::YLeaf outer_range1_low; //type: one of enumeration, uint32
        ydk::YLeaf outer_range1_high; //type: one of enumeration, uint32
        ydk::YLeaf inner_tag_type; //type: Match
        ydk::YLeaf inner_range1_low; //type: one of enumeration, uint32
        ydk::YLeaf inner_range1_high; //type: uint32
        ydk::YLeaf additional_range1_low; //type: one of enumeration, uint32
        ydk::YLeaf additional_range1_high; //type: uint32
        ydk::YLeaf additional_range2_low; //type: one of enumeration, uint32
        ydk::YLeaf additional_range2_high; //type: uint32
        ydk::YLeaf additional_range3_low; //type: one of enumeration, uint32
        ydk::YLeaf additional_range3_high; //type: uint32
        ydk::YLeaf additional_range4_low; //type: one of enumeration, uint32
        ydk::YLeaf additional_range4_high; //type: uint32
        ydk::YLeaf additional_range5_low; //type: one of enumeration, uint32
        ydk::YLeaf additional_range5_high; //type: uint32
        ydk::YLeaf additional_range6_low; //type: one of enumeration, uint32
        ydk::YLeaf additional_range6_high; //type: uint32
        ydk::YLeaf additional_range7_low; //type: one of enumeration, uint32
        ydk::YLeaf additional_range7_high; //type: uint32
        ydk::YLeaf additional_range8_low; //type: one of enumeration, uint32
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain> > domain;
        
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

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMepId> > sla_profile_target_mep_id;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::Cfm::Domains::Domain::Mep::SlaProfileTargetMepIds::SlaProfileTargetMacAddress> > sla_profile_target_mac_address;
        
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


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds : public ydk::Entity
{
    public:
        FrameSeconds();
        ~FrameSeconds();

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
        class Threshold; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold> threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold : public ydk::Entity
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

}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::FrameSeconds::Threshold


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame : public ydk::Entity
{
    public:
        Frame();
        ~Frame();

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
        class Threshold; //type: InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold> threshold;
        
}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame


class InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold : public ydk::Entity
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
        ydk::YLeaf multiplier_low; //type: EtherLinkOamThresholdWindowMultiplierEnum
        ydk::YLeaf multiplier_high; //type: EtherLinkOamThresholdWindowMultiplierEnum

}; // InterfaceConfigurations::InterfaceConfiguration::EthernetFeatures::EtherLinkOam::LinkMonitoring::Frame::Threshold


class InterfaceConfigurations::InterfaceConfiguration::CarrierDelay : public ydk::Entity
{
    public:
        CarrierDelay();
        ~CarrierDelay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf carrier_delay_up; //type: uint32
        ydk::YLeaf carrier_delay_down; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::CarrierDelay


class InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration : public ydk::Entity
{
    public:
        VlanTrunkConfiguration();
        ~VlanTrunkConfiguration();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tunneling_ethertype; //type: TunnelingEthertype
        class NativeVlanIdentifier; //type: InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier> native_vlan_identifier; // presence node
                class TunnelingEthertype;

}; // InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration


class InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier : public ydk::Entity
{
    public:
        NativeVlanIdentifier();
        ~NativeVlanIdentifier();

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
        ydk::YLeaf vlan_identifier; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess : public ydk::Entity
{
    public:
        NvSatelliteAccess();
        ~NvSatelliteAccess();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Qos; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos> qos;
        
}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos : public ydk::Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Output; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output
        class Input; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output> output;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input> input;
        
}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy> > service_policy;
        
}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy : public ydk::Entity
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

        ydk::YLeaf service_policy_name; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Output::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy> > service_policy;
        
}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy : public ydk::Entity
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

        ydk::YLeaf service_policy_name; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteAccess::Qos::Input::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink : public ydk::Entity
{
    public:
        NvSatelliteFabricLink();
        ~NvSatelliteFabricLink();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf satellite; //type: uint32
        ydk::YLeaf minimum_required_links; //type: uint32
        class Redundancy; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy
        class RemotePorts; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts
        class EthernetFeatures; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures
        class FrequencySynchronization; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization
        class Qos; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy> redundancy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts> remote_ports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures> ethernet_features;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization> frequency_synchronization;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos> qos;
        
}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy : public ydk::Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iccp_group; //type: uint32
        ydk::YLeaf minimum_preferred_links; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Redundancy


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts : public ydk::Entity
{
    public:
        RemotePorts();
        ~RemotePorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemotePort; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort> > remote_port;
        
}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort : public ydk::Entity
{
    public:
        RemotePort();
        ~RemotePort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_type; //type: string
        ydk::YLeaf slot; //type: uint32
        ydk::YLeaf sub_slot; //type: uint32
        ydk::YLeaf port_range; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::RemotePorts::RemotePort


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures : public ydk::Entity
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

        class Cfm; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm> cfm;
        
}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm : public ydk::Entity
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

        ydk::YLeaf continuity_check_interval; //type: CfmCcmInterval
        ydk::YLeaf level; //type: uint32
        ydk::YLeaf enable; //type: empty

}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::EthernetFeatures::Cfm


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization : public ydk::Entity
{
    public:
        FrequencySynchronization();
        ~FrequencySynchronization();

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

}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::FrequencySynchronization


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos : public ydk::Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Output; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output
        class Input; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output> output;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input> input;
        
}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy> > service_policy;
        
}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy : public ydk::Entity
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

        ydk::YLeaf service_policy_name; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Output::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy> > service_policy;
        
}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy : public ydk::Entity
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

        ydk::YLeaf service_policy_name; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricLink::Qos::Input::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork : public ydk::Entity
{
    public:
        NvSatelliteFabricNetwork();
        ~NvSatelliteFabricNetwork();

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
        class Satellites; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites
        class Redundancy; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites> satellites;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy> redundancy;
        
}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites : public ydk::Entity
{
    public:
        Satellites();
        ~Satellites();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Satellite; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite
        class Qos; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite> > satellite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos> qos;
        
}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite : public ydk::Entity
{
    public:
        Satellite();
        ~Satellite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf satellite_id; //type: uint32
        ydk::YLeaf enable; //type: empty
        class RemotePorts; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts> remote_ports;
        
}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts : public ydk::Entity
{
    public:
        RemotePorts();
        ~RemotePorts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemotePort; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort> > remote_port;
        
}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort : public ydk::Entity
{
    public:
        RemotePort();
        ~RemotePort();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_type; //type: string
        ydk::YLeaf slot; //type: uint32
        ydk::YLeaf sub_slot; //type: uint32
        ydk::YLeaf port_range; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Satellite::RemotePorts::RemotePort


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos : public ydk::Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Output; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output
        class Input; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output> output;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input> input;
        
}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy> > service_policy;
        
}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy : public ydk::Entity
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

        ydk::YLeaf service_policy_name; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Output::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy> > service_policy;
        
}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy : public ydk::Entity
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

        ydk::YLeaf service_policy_name; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Satellites::Qos::Input::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy : public ydk::Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf iccp_group; //type: uint32
        ydk::YLeaf minimum_preferred_links; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::NvSatelliteFabricNetwork::Redundancy


class InterfaceConfigurations::InterfaceConfiguration::Lldp : public ydk::Entity
{
    public:
        Lldp();
        ~Lldp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lldp_intf_enter; //type: boolean
        class Transmit; //type: InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit
        class Receive; //type: InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit> transmit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive> receive;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Lldp


class InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit : public ydk::Entity
{
    public:
        Transmit();
        ~Transmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Lldp::Transmit


class InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive : public ydk::Entity
{
    public:
        Receive();
        ~Receive();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Lldp::Receive


class InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions : public ydk::Entity
{
    public:
        SpanMonitorSessions();
        ~SpanMonitorSessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SpanMonitorSession; //type: InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession> > span_monitor_session;
        
}; // InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions


class InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession : public ydk::Entity
{
    public:
        SpanMonitorSession();
        ~SpanMonitorSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_class; //type: SpanSessionClass
        ydk::YLeaf mirror_first; //type: uint32
        ydk::YLeaf mirror_interval; //type: SpanMirrorInterval
        class Attachment; //type: InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment
        class Acl; //type: InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment> attachment; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl> acl; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession


class InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment : public ydk::Entity
{
    public:
        Attachment();
        ~Attachment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_name; //type: string
        ydk::YLeaf direction; //type: SpanTrafficDirection
        ydk::YLeaf port_level_enable; //type: empty

}; // InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Attachment


class InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl : public ydk::Entity
{
    public:
        Acl();
        ~Acl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_enable; //type: empty
        ydk::YLeaf acl_name; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::SpanMonitorSessions::SpanMonitorSession::Acl


class InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization : public ydk::Entity
{
    public:
        CiscoIOSXRFreqsyncCfgFrequencySynchronization();
        ~CiscoIOSXRFreqsyncCfgFrequencySynchronization();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ssm_disable; //type: empty
        ydk::YLeaf time_of_day_priority; //type: uint32
        ydk::YLeaf selection_input; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf priority; //type: uint32
        ydk::YLeaf wait_to_restore_time; //type: uint32
        class InputQualityLevel; //type: InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::InputQualityLevel
        class OutputQualityLevel; //type: InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::OutputQualityLevel

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::InputQualityLevel> input_quality_level;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::OutputQualityLevel> output_quality_level;
        
}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization


class InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::InputQualityLevel : public ydk::Entity
{
    public:
        InputQualityLevel();
        ~InputQualityLevel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf quality_level_option; //type: FsyncQlOption
        ydk::YLeaf exact_quality_level_value; //type: FsyncQlValue
        ydk::YLeaf min_quality_level_value; //type: FsyncQlValue
        ydk::YLeaf max_quality_level_value; //type: FsyncQlValue

}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::InputQualityLevel


class InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::OutputQualityLevel : public ydk::Entity
{
    public:
        OutputQualityLevel();
        ~OutputQualityLevel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf quality_level_option; //type: FsyncQlOption
        ydk::YLeaf exact_quality_level_value; //type: FsyncQlValue
        ydk::YLeaf min_quality_level_value; //type: FsyncQlValue
        ydk::YLeaf max_quality_level_value; //type: FsyncQlValue

}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRFreqsyncCfgFrequencySynchronization::OutputQualityLevel


class InterfaceConfigurations::InterfaceConfiguration::ServicePolicies : public ydk::Entity
{
    public:
        ServicePolicies();
        ~ServicePolicies();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy> > service_policy;
        
}; // InterfaceConfigurations::InterfaceConfiguration::ServicePolicies


class InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy : public ydk::Entity
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

        ydk::YLeaf service_policy_name; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::Afs : public ydk::Entity
{
    public:
        Afs();
        ~Afs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Af; //type: InterfaceConfigurations::InterfaceConfiguration::Afs::Af
        class AfTopologyName; //type: InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Afs::Af> > af;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName> > af_topology_name;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Afs


class InterfaceConfigurations::InterfaceConfiguration::Afs::Af : public ydk::Entity
{
    public:
        Af();
        ~Af();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: VrfAddressFamily
        ydk::YLeaf saf_name; //type: VrfSubAddressFamily

}; // InterfaceConfigurations::InterfaceConfiguration::Afs::Af


class InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName : public ydk::Entity
{
    public:
        AfTopologyName();
        ~AfTopologyName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_name; //type: string
        ydk::YLeaf af_name; //type: VrfAddressFamily
        ydk::YLeaf saf_name; //type: VrfSubAddressFamily

}; // InterfaceConfigurations::InterfaceConfiguration::Afs::AfTopologyName


class InterfaceConfigurations::InterfaceConfiguration::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf load_interval; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Statistics


class InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter : public ydk::Entity
{
    public:
        Ipv6PacketFilter();
        ~Ipv6PacketFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Inbound; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound
        class Outbound; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound> inbound;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound> outbound;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter


class InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound : public ydk::Entity
{
    public:
        Inbound();
        ~Inbound();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common_acl_name; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf interface_statistics; //type: empty
        ydk::YLeaf compression_level; //type: uint32
        ydk::YLeafList acl_name_array; //type: list of  string
        ydk::YLeafList is_common_array; //type: list of  boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound


class InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound : public ydk::Entity
{
    public:
        Outbound();
        ~Outbound();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf do_not_use; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf interface_statistics; //type: empty
        ydk::YLeaf compression_level; //type: uint32
        ydk::YLeafList acl_name_array; //type: list of  string
        ydk::YLeafList is_common_array; //type: list of  boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound


class InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter : public ydk::Entity
{
    public:
        EsPacketFilter();
        ~EsPacketFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outbound; //type: string
        ydk::YLeaf inbound; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter


class InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter : public ydk::Entity
{
    public:
        Ipv4PacketFilter();
        ~Ipv4PacketFilter();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Outbound; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound
        class Inbound; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound> outbound;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound> inbound;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter


class InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound : public ydk::Entity
{
    public:
        Outbound();
        ~Outbound();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf do_not_use; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf hardware_count; //type: empty
        ydk::YLeaf interface_statistics; //type: empty
        ydk::YLeaf compression_level; //type: uint32
        ydk::YLeafList acl_name_array; //type: list of  string
        ydk::YLeafList is_common_array; //type: list of  boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound


class InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound : public ydk::Entity
{
    public:
        Inbound();
        ~Inbound();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf common_acl_name; //type: string
        ydk::YLeaf name; //type: string
        ydk::YLeaf hardware_count; //type: empty
        ydk::YLeaf interface_statistics; //type: empty
        ydk::YLeaf compression_level; //type: uint32
        ydk::YLeafList acl_name_array; //type: list of  string
        ydk::YLeafList is_common_array; //type: list of  boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound


class InterfaceConfigurations::InterfaceConfiguration::Dagrs : public ydk::Entity
{
    public:
        Dagrs();
        ~Dagrs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Dagr; //type: InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr> > dagr;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Dagrs


class InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr : public ydk::Entity
{
    public:
        Dagr();
        ~Dagr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_addr; //type: string
        ydk::YLeaf enter; //type: empty
        class Sub; //type: InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub> sub;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr


class InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub : public ydk::Entity
{
    public:
        Sub();
        ~Sub();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority_timeout; //type: uint32
        class Metric; //type: InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric
        class Timers; //type: InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers
        class Distance; //type: InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric> metric;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers> timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance> distance;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub


class InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric : public ydk::Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf metric_norm; //type: uint32
        ydk::YLeaf metric_prio; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Metric


class InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf query_time; //type: uint32
        ydk::YLeaf sby_time; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Timers


class InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance : public ydk::Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dist_norm; //type: uint32
        ydk::YLeaf dist_prio; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Dagrs::Dagr::Sub::Distance


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp : public ydk::Entity
{
    public:
        Ipv4Arp();
        ~Ipv4Arp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf learning_local; //type: empty
        ydk::YLeaf learning_solicited; //type: empty
        ydk::YLeaf gratuitous_ignore; //type: empty
        ydk::YLeaf proxy_arp; //type: empty
        ydk::YLeaf purge_delay; //type: uint32
        ydk::YLeaf learning_disable; //type: empty
        ydk::YLeaf local_proxy_arp; //type: empty
        ydk::YLeaf timeout; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Arp


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network : public ydk::Entity
{
    public:
        Ipv4Network();
        ~Ipv4Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf forwarding_enable; //type: empty
        ydk::YLeaf icmp_mask_reply; //type: empty
        ydk::YLeaf tcp_mss_adjust_enable; //type: empty
        ydk::YLeaf ttl_propagate_disable; //type: empty
        ydk::YLeaf point_to_point; //type: empty
        ydk::YLeaf mtu; //type: uint32
        class BgpPa; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa
        class Verify; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify
        class Bgp; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp
        class Addresses; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses
        class HelperAddresses; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa> bgp_pa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify> verify;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp> bgp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses> addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses> helper_addresses;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa : public ydk::Entity
{
    public:
        BgpPa();
        ~BgpPa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Input; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input
        class Output; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input> input;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output> output;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_accounting; //type: boolean
        ydk::YLeaf destination_accounting; //type: boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Input


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_accounting; //type: boolean
        ydk::YLeaf destination_accounting; //type: boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::BgpPa::Output


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify : public ydk::Entity
{
    public:
        Verify();
        ~Verify();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reachable; //type: Ipv4Reachable
        ydk::YLeaf self_ping; //type: Ipv4SelfPing
        ydk::YLeaf default_ping; //type: Ipv4DefaultPing

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Verify


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp : public ydk::Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Qppb; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb
        class FlowTag; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb> qppb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag> flow_tag;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb : public ydk::Entity
{
    public:
        Qppb();
        ~Qppb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Input; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input> input;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source; //type: Ipv4InterfaceQppb
        ydk::YLeaf destination; //type: Ipv4InterfaceQppb

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::Qppb::Input


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag : public ydk::Entity
{
    public:
        FlowTag();
        ~FlowTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class FlowTagInput; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput> flow_tag_input;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput : public ydk::Entity
{
    public:
        FlowTagInput();
        ~FlowTagInput();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source; //type: boolean
        ydk::YLeaf destination; //type: boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Bgp::FlowTag::FlowTagInput


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses : public ydk::Entity
{
    public:
        Addresses();
        ~Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unnumbered; //type: string
        ydk::YLeaf dhcp; //type: empty
        class Secondaries; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries
        class Primary; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries> secondaries;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary> primary; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries : public ydk::Entity
{
    public:
        Secondaries();
        ~Secondaries();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Secondary; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary> > secondary;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary : public ydk::Entity
{
    public:
        Secondary();
        ~Secondary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf netmask; //type: string
        ydk::YLeaf route_tag; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Secondaries::Secondary


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary : public ydk::Entity
{
    public:
        Primary();
        ~Primary();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf netmask; //type: string
        ydk::YLeaf route_tag; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::Addresses::Primary


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses : public ydk::Entity
{
    public:
        HelperAddresses();
        ~HelperAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class HelperAddress; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress> > helper_address;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses


class InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress : public ydk::Entity
{
    public:
        HelperAddress();
        ~HelperAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf vrf_name; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4Network::HelperAddresses::HelperAddress


class InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding : public ydk::Entity
{
    public:
        Ipv4NetworkForwarding();
        ~Ipv4NetworkForwarding();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf directed_broadcast; //type: empty
        ydk::YLeaf unreachables; //type: empty
        ydk::YLeaf redirects; //type: empty

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4NetworkForwarding


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network : public ydk::Entity
{
    public:
        Ipv6Network();
        ~Ipv6Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf unnumbered; //type: string
        ydk::YLeaf ttl_propagate_disable; //type: empty
        ydk::YLeaf tcp_mss_adjust_enable; //type: empty
        ydk::YLeaf unreachables; //type: empty
        class BgpQosPolicyPropagation; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation
        class BgpPolicyAccountings; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings
        class Verify; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify
        class Addresses; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses
        class BgpFlowTagPolicyTable; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation> bgp_qos_policy_propagation; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings> bgp_policy_accountings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify> verify; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses> addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable> bgp_flow_tag_policy_table;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation : public ydk::Entity
{
    public:
        BgpQosPolicyPropagation();
        ~BgpQosPolicyPropagation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source; //type: Ipv6Qppb
        ydk::YLeaf destination; //type: Ipv6Qppb

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpQosPolicyPropagation


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings : public ydk::Entity
{
    public:
        BgpPolicyAccountings();
        ~BgpPolicyAccountings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpPolicyAccounting; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting> > bgp_policy_accounting;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting : public ydk::Entity
{
    public:
        BgpPolicyAccounting();
        ~BgpPolicyAccounting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf direction; //type: string
        ydk::YLeaf destination_accounting; //type: boolean
        ydk::YLeaf source_accounting; //type: boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpPolicyAccountings::BgpPolicyAccounting


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify : public ydk::Entity
{
    public:
        Verify();
        ~Verify();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reachable; //type: Ipv6Reachable
        ydk::YLeaf self_ping; //type: Ipv6SelfPing
        ydk::YLeaf default_ping; //type: Ipv6DefaultPing

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Verify


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses : public ydk::Entity
{
    public:
        Addresses();
        ~Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SegmentRoutings; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings
        class LinkLocalAddress; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress
        class Eui64Addresses; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses
        class RegularAddresses; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses
        class AutoConfiguration; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings> segment_routings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress> link_local_address; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses> eui64_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses> regular_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration> auto_configuration;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings : public ydk::Entity
{
    public:
        SegmentRoutings();
        ~SegmentRoutings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SegmentRouting; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting> > segment_routing;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting : public ydk::Entity
{
    public:
        SegmentRouting();
        ~SegmentRouting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf enable; //type: empty
        class Ipv6PrefixSid; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid> ipv6_prefix_sid; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid : public ydk::Entity
{
    public:
        Ipv6PrefixSid();
        ~Ipv6PrefixSid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf zone; //type: string
        ydk::YLeaf route_tag; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::SegmentRoutings::SegmentRouting::Ipv6PrefixSid


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress : public ydk::Entity
{
    public:
        LinkLocalAddress();
        ~LinkLocalAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf zone; //type: string
        ydk::YLeaf route_tag; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::LinkLocalAddress


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses : public ydk::Entity
{
    public:
        Eui64Addresses();
        ~Eui64Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Eui64Address; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address> > eui64_address;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address : public ydk::Entity
{
    public:
        Eui64Address();
        ~Eui64Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf zone; //type: string
        ydk::YLeaf route_tag; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::Eui64Addresses::Eui64Address


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses : public ydk::Entity
{
    public:
        RegularAddresses();
        ~RegularAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RegularAddress; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress> > regular_address;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress : public ydk::Entity
{
    public:
        RegularAddress();
        ~RegularAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf prefix_length; //type: uint32
        ydk::YLeaf zone; //type: string
        ydk::YLeaf route_tag; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::RegularAddresses::RegularAddress

class InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::TunnelingEthertype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0x9100;
        static const ydk::Enum::YLeaf Y_0x9200;

};


}
}

#endif /* _CISCO_IOS_XR_IFMGR_CFG_1_ */

