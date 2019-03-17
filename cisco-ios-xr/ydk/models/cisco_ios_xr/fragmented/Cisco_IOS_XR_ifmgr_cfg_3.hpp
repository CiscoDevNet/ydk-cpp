#ifndef _CISCO_IOS_XR_IFMGR_CFG_3_
#define _CISCO_IOS_XR_IFMGR_CFG_3_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ifmgr_cfg_0.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_2.hpp"

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ifmgr_cfg {


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
        class VlanSwitched; //type: InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::NativeVlanIdentifier> native_vlan_identifier; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched> vlan_switched;
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


class InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched : public ydk::Entity
{
    public:
        VlanSwitched();
        ~VlanSwitched();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mode; //type: VsMode
        ydk::YLeaf access_vlan; //type: uint32
        ydk::YLeaf trunk_tag_type; //type: Vlan
        ydk::YLeaf trunk_vla_ns; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::VlanSwitched


class InterfaceConfigurations::InterfaceConfiguration::SsrpSession : public ydk::Entity
{
    public:
        SsrpSession();
        ~SsrpSession();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class GroupId; //type: InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId> group_id;
        
}; // InterfaceConfigurations::InterfaceConfiguration::SsrpSession


class InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId : public ydk::Entity
{
    public:
        GroupId();
        ~GroupId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf group; //type: uint32
        ydk::YLeaf id; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::SsrpSession::GroupId


class InterfaceConfigurations::InterfaceConfiguration::Cdp : public ydk::Entity
{
    public:
        Cdp();
        ~Cdp();

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

}; // InterfaceConfigurations::InterfaceConfiguration::Cdp


class InterfaceConfigurations::InterfaceConfiguration::Dwdm : public ydk::Entity
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

        ydk::YLeaf enable_vtxp; //type: boolean
        ydk::YLeaf network_port_id; //type: string
        ydk::YLeaf transport_admin_state; //type: DwdmAdminState
        ydk::YLeaf laser; //type: empty
        ydk::YLeaf transmit_power; //type: int32
        ydk::YLeaf rx_threshold; //type: int32
        ydk::YLeaf network_connection_id; //type: string
        ydk::YLeaf loopback; //type: DwdmLoopback
        class NetworkSrlgs; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs
        class G709; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709
        class Wavelength; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs> network_srlgs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709> g709;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::Wavelength> wavelength; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs : public ydk::Entity
{
    public:
        NetworkSrlgs();
        ~NetworkSrlgs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NetworkSrlg; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg

        ydk::YList network_srlg;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg : public ydk::Entity
{
    public:
        NetworkSrlg();
        ~NetworkSrlg();

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

}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::NetworkSrlgs::NetworkSrlg


class InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709 : public ydk::Entity
{
    public:
        G709();
        ~G709();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf proactive; //type: Proactive
        ydk::YLeaf bdi_to_gais; //type: empty
        ydk::YLeaf tim_to_gais; //type: empty
        ydk::YLeaf proactive_logging_file; //type: string
        ydk::YLeaf tti_processing; //type: empty
        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf framing; //type: Framing
        class Odu; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu
        class Otu; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu
        class Prbs; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs
        class Fec; //type: InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Odu> odu;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Otu> otu;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Prbs> prbs; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709::Fec> fec; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::Dwdm::G709


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

        ydk::YList odu_report;
        
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

        ydk::YList odu_threshold;
        
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

        ydk::YList otu_threshold;
        
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

        ydk::YList otu_report;
        
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


class InterfaceConfigurations::InterfaceConfiguration::Qos : public ydk::Entity
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

        class Output; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Output
        class Input; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Input

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Output> output;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Input> input;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Qos


class InterfaceConfigurations::InterfaceConfiguration::Qos::Output : public ydk::Entity
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

        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy
        class ServicePolicyQos; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos

        ydk::YList service_policy;
        ydk::YList service_policy_qos;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Output


class InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy : public ydk::Entity
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
        ydk::YLeaf account_type; //type: QosPolicyAccount
        ydk::YLeaf l1_user_defined; //type: int32
        ydk::YLeaf spi_name; //type: string
        ydk::YLeaf subscriber_parent_policy; //type: boolean
        ydk::YLeaf resource_id; //type: uint32
        ydk::YLeaf service_fragment_parent_policy; //type: boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos : public ydk::Entity
{
    public:
        ServicePolicyQos();
        ~ServicePolicyQos();

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
        class SubscriberGroupNames; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames
        class SubscriberParent; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames> subscriber_group_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent> subscriber_parent; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos


class InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames : public ydk::Entity
{
    public:
        SubscriberGroupNames();
        ~SubscriberGroupNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SubscriberGroupName; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName

        ydk::YList subscriber_group_name;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames


class InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName : public ydk::Entity
{
    public:
        SubscriberGroupName();
        ~SubscriberGroupName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscriber_group_string; //type: string
        ydk::YLeaf account_type; //type: QosPolicyAccount
        ydk::YLeaf l1_user_defined; //type: int32
        ydk::YLeaf spi_name; //type: string
        ydk::YLeaf policy_merge; //type: QosFieldNotSupported
        ydk::YLeaf subscriber_parent_policy; //type: boolean
        ydk::YLeaf resource_id; //type: uint32
        ydk::YLeaf service_fragment_parent_policy; //type: boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName


class InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent : public ydk::Entity
{
    public:
        SubscriberParent();
        ~SubscriberParent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf account_type; //type: QosPolicyAccount
        ydk::YLeaf l1_user_defined; //type: int32
        ydk::YLeaf spi_name; //type: string
        ydk::YLeaf policy_merge; //type: QosFieldNotSupported
        ydk::YLeaf subscriber_parent_policy; //type: boolean
        ydk::YLeaf resource_id; //type: uint32
        ydk::YLeaf service_fragment_parent_policy; //type: boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Output::ServicePolicyQos::SubscriberParent


class InterfaceConfigurations::InterfaceConfiguration::Qos::Input : public ydk::Entity
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

        class ServicePolicy; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy
        class ServicePolicyQos; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos

        ydk::YList service_policy;
        ydk::YList service_policy_qos;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Input


class InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy : public ydk::Entity
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
        ydk::YLeaf account_type; //type: QosPolicyAccount
        ydk::YLeaf l1_user_defined; //type: int32
        ydk::YLeaf spi_name; //type: string
        ydk::YLeaf subscriber_parent_policy; //type: boolean
        ydk::YLeaf resource_id; //type: uint32
        ydk::YLeaf service_fragment_parent_policy; //type: boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicy


class InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos : public ydk::Entity
{
    public:
        ServicePolicyQos();
        ~ServicePolicyQos();

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
        class SubscriberGroupNames; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames
        class SubscriberParent; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames> subscriber_group_names;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent> subscriber_parent; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos


class InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames : public ydk::Entity
{
    public:
        SubscriberGroupNames();
        ~SubscriberGroupNames();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SubscriberGroupName; //type: InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName

        ydk::YList subscriber_group_name;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames


class InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName : public ydk::Entity
{
    public:
        SubscriberGroupName();
        ~SubscriberGroupName();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf subscriber_group_string; //type: string
        ydk::YLeaf account_type; //type: QosPolicyAccount
        ydk::YLeaf l1_user_defined; //type: int32
        ydk::YLeaf spi_name; //type: string
        ydk::YLeaf policy_merge; //type: QosFieldNotSupported
        ydk::YLeaf subscriber_parent_policy; //type: boolean
        ydk::YLeaf resource_id; //type: uint32
        ydk::YLeaf service_fragment_parent_policy; //type: boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberGroupNames::SubscriberGroupName


class InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent : public ydk::Entity
{
    public:
        SubscriberParent();
        ~SubscriberParent();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf account_type; //type: QosPolicyAccount
        ydk::YLeaf l1_user_defined; //type: int32
        ydk::YLeaf spi_name; //type: string
        ydk::YLeaf policy_merge; //type: QosFieldNotSupported
        ydk::YLeaf subscriber_parent_policy; //type: boolean
        ydk::YLeaf resource_id; //type: uint32
        ydk::YLeaf service_fragment_parent_policy; //type: boolean

}; // InterfaceConfigurations::InterfaceConfiguration::Qos::Input::ServicePolicyQos::SubscriberParent


class InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp : public ydk::Entity
{
    public:
        CiscoIOSXRPppMaCfgPpp();
        ~CiscoIOSXRPppMaCfgPpp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;


}; // InterfaceConfigurations::InterfaceConfiguration::CiscoIOSXRPppMaCfgPpp


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
        ydk::YLeaf enable; //type: boolean
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


class InterfaceConfigurations::InterfaceConfiguration::Atm : public ydk::Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_vpi_bits; //type: AtmVpiBitsMode
        ydk::YLeaf vc_class; //type: string
        class Pvps; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps
        class Pvcs; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs
        class MaximumCellPackingTimers; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers
        class VpTunnels; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps> pvps;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs> pvcs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers> maximum_cell_packing_timers; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels> vp_tunnels;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Atm


class InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps : public ydk::Entity
{
    public:
        Pvps();
        ~Pvps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pvp; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp

        ydk::YList pvp;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps


class InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp : public ydk::Entity
{
    public:
        Pvp();
        ~Pvp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vpi; //type: uint32
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf test_mode; //type: AtmPvpTestMode
        ydk::YLeaf oam_segment_endpoint; //type: empty
        class Shape; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape
        class CellPacking; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape> shape;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking> cell_packing; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp


class InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape : public ydk::Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: AtmPvcShaping
        ydk::YLeaf peak_cell_rate; //type: uint32
        ydk::YLeaf sustained_cell_rate; //type: uint32
        ydk::YLeaf burst_size; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::Shape


class InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking : public ydk::Entity
{
    public:
        CellPacking();
        ~CellPacking();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_cells_packed; //type: uint32
        ydk::YLeaf cell_packing_timer_id; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvps::Pvp::CellPacking


class InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs : public ydk::Entity
{
    public:
        Pvcs();
        ~Pvcs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pvc; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc

        ydk::YList pvc;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs


class InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc : public ydk::Entity
{
    public:
        Pvc();
        ~Pvc();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vpi; //type: uint32
        ydk::YLeaf vci; //type: uint32
        ydk::YLeaf pv_ctype; //type: AtmPvcData
        ydk::YLeaf vc_class; //type: string
        ydk::YLeaf encapsulation; //type: AtmPvcEncapsulation
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf test_mode; //type: AtmPvcTestMode
        ydk::YLeaf oam_segment_endpoint; //type: empty
        class Shape; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape
        class OamEmulation; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation
        class CellPacking; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape> shape;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation> oam_emulation;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking> cell_packing; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc


class InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape : public ydk::Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: AtmPvcShaping
        ydk::YLeaf peak_cell_rate; //type: uint32
        ydk::YLeaf sustained_cell_rate; //type: uint32
        ydk::YLeaf burst_size; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::Shape


class InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation : public ydk::Entity
{
    public:
        OamEmulation();
        ~OamEmulation();

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
        ydk::YLeaf ais_transmit_rate; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::OamEmulation


class InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking : public ydk::Entity
{
    public:
        CellPacking();
        ~CellPacking();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum_cells_packed; //type: uint32
        ydk::YLeaf cell_packing_timer_id; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Atm::Pvcs::Pvc::CellPacking


class InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers : public ydk::Entity
{
    public:
        MaximumCellPackingTimers();
        ~MaximumCellPackingTimers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf cell_packing_timer1; //type: uint32
        ydk::YLeaf cell_packing_timer2; //type: uint32
        ydk::YLeaf cell_packing_timer3; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Atm::MaximumCellPackingTimers


class InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels : public ydk::Entity
{
    public:
        VpTunnels();
        ~VpTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VpTunnel; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel

        ydk::YList vp_tunnel;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels


class InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel : public ydk::Entity
{
    public:
        VpTunnel();
        ~VpTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vpi; //type: uint32
        ydk::YLeaf enable_hierarchical_shaping; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf disable_f4oam; //type: empty
        class Shape; //type: InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape> shape;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel


class InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape : public ydk::Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: AtmVpShaping
        ydk::YLeaf peak_cell_rate; //type: uint32
        ydk::YLeaf sustained_cell_rate; //type: uint32
        ydk::YLeaf burst_size; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::Atm::VpTunnels::VpTunnel::Shape


class InterfaceConfigurations::InterfaceConfiguration::Dot1xInterface : public ydk::Entity
{
    public:
        Dot1xInterface();
        ~Dot1xInterface();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dot1x_profile; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::Dot1xInterface


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

        ydk::YList secondary;
        
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

        ydk::YList helper_address;
        
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


class InterfaceConfigurations::InterfaceConfiguration::AaaTable : public ydk::Entity
{
    public:
        AaaTable();
        ~AaaTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Radius; //type: InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius> radius;
        
}; // InterfaceConfigurations::InterfaceConfiguration::AaaTable


class InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius : public ydk::Entity
{
    public:
        Radius();
        ~Radius();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Attribute; //type: InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute> attribute;
        
}; // InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius


class InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute : public ydk::Entity
{
    public:
        Attribute();
        ~Attribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nas_port_type; //type: NasPortValue
        ydk::YLeaf nas_identifier; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute


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


class InterfaceConfigurations::InterfaceConfiguration::Ipv4FlowSpec : public ydk::Entity
{
    public:
        Ipv4FlowSpec();
        ~Ipv4FlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: empty

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv4FlowSpec


class InterfaceConfigurations::InterfaceConfiguration::Ipv6FlowSpec : public ydk::Entity
{
    public:
        Ipv6FlowSpec();
        ~Ipv6FlowSpec();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: empty

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6FlowSpec


class InterfaceConfigurations::InterfaceConfiguration::Wanphy : public ydk::Entity
{
    public:
        Wanphy();
        ~Wanphy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf report_path_rdi; //type: empty
        ydk::YLeaf report_los; //type: empty
        ydk::YLeaf report_path_lcd; //type: empty
        ydk::YLeaf report_path_fe_plm; //type: empty
        ydk::YLeaf lan_mode; //type: WanphyLanMode
        ydk::YLeaf report_path_plm; //type: empty
        ydk::YLeaf report_path_fe_ais; //type: empty
        ydk::YLeaf report_path_ais; //type: empty
        ydk::YLeaf report_line_ais; //type: empty
        ydk::YLeaf report_lof; //type: empty
        ydk::YLeaf report_lop; //type: empty
        ydk::YLeaf report_rdi; //type: empty
        ydk::YLeaf report_sd_ber; //type: empty
        ydk::YLeaf threshold_sd_ber; //type: uint32
        ydk::YLeaf report_sf_ber; //type: empty
        ydk::YLeaf threshold_sf_ber; //type: uint32
        ydk::YLeaf wan_mode; //type: WanphyWanMode

}; // InterfaceConfigurations::InterfaceConfiguration::Wanphy


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

        ydk::YList bgp_policy_accounting;
        
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

        ydk::YList segment_routing;
        
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

        ydk::YList eui64_address;
        
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

        ydk::YList regular_address;
        
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


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration : public ydk::Entity
{
    public:
        AutoConfiguration();
        ~AutoConfiguration();

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
        ydk::YLeaf auto_config_slaac; //type: empty

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::Addresses::AutoConfiguration


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable : public ydk::Entity
{
    public:
        BgpFlowTagPolicyTable();
        ~BgpFlowTagPolicyTable();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BgpFlowTagPolicy; //type: InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy> bgp_flow_tag_policy;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable


class InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy : public ydk::Entity
{
    public:
        BgpFlowTagPolicy();
        ~BgpFlowTagPolicy();

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

}; // InterfaceConfigurations::InterfaceConfiguration::Ipv6Network::BgpFlowTagPolicyTable::BgpFlowTagPolicy


class InterfaceConfigurations::InterfaceConfiguration::Mpls : public ydk::Entity
{
    public:
        Mpls();
        ~Mpls();

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
        class LabelSecurity; //type: InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity> label_security;
        
}; // InterfaceConfigurations::InterfaceConfiguration::Mpls


class InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity : public ydk::Entity
{
    public:
        LabelSecurity();
        ~LabelSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf multi_label_drop; //type: empty
        ydk::YLeaf rpf; //type: empty

}; // InterfaceConfigurations::InterfaceConfiguration::Mpls::LabelSecurity


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes : public ydk::Entity
{
    public:
        TunnelTeAttributes();
        ~TunnelTeAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf forward_class; //type: uint32
        ydk::YLeaf destination; //type: string
        ydk::YLeaf record_route; //type: empty
        ydk::YLeaf path_selection_metric; //type: MplsTePathSelectionMetric
        ydk::YLeaf soft_preemption; //type: empty
        ydk::YLeaf load_share; //type: uint32
        ydk::YLeaf signalled_name; //type: string
        class BackupBandwidth; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth
        class BfdOverLsp; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp
        class BindingSegmentIdMpls; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls
        class TunnelPathProtection; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection
        class PathOptionProtects; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects
        class Bidirectional; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional
        class AdminMode; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode
        class Switching; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching
        class Pce; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce
        class TunnelPathSelection; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection
        class AutoBandwidth; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth
        class Priority; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority
        class AffinityMask; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask
        class ForwardingAdjacency; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency
        class Logging; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging
        class Bandwidth; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth
        class Autoroute; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute
        class PolicyClasses; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses
        class NewStyleAffinityAffinityTypes; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes
        class FastReroute; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth> backup_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp> bfd_over_lsp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls> binding_segment_id_mpls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection> tunnel_path_protection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects> path_option_protects;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional> bidirectional;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode> admin_mode;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching> switching;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce> pce;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection> tunnel_path_selection;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth> auto_bandwidth;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority> priority; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask> affinity_mask; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency> forwarding_adjacency;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging> logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth> bandwidth; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute> autoroute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PolicyClasses> policy_classes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::NewStyleAffinityAffinityTypes> new_style_affinity_affinity_types;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::FastReroute> fast_reroute; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth : public ydk::Entity
{
    public:
        BackupBandwidth();
        ~BackupBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dste_type; //type: MplsTeBandwidthDste
        ydk::YLeaf pool_type; //type: MplsTeBackupBandwidthPool
        ydk::YLeaf class_type; //type: MplsTeBackupBandwidthClass
        ydk::YLeaf limit_type; //type: MplsTeBandwidthLimit
        ydk::YLeaf backup_bandwidth; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BackupBandwidth


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp : public ydk::Entity
{
    public:
        BfdOverLsp();
        ~BfdOverLsp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dampening_initial_wait; //type: uint32
        ydk::YLeaf fast_detect; //type: MplsTebfdSession
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf multiplier; //type: uint32
        ydk::YLeaf bringup_timeout; //type: uint32
        ydk::YLeaf periodic_ping_disable; //type: empty
        ydk::YLeaf dampening_secondary_wait; //type: uint32
        ydk::YLeaf periodic_ping_interval; //type: uint32
        ydk::YLeaf dampening_maximum_wait; //type: uint32
        ydk::YLeaf minimum_interval; //type: uint32
        ydk::YLeaf encap_mode; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BfdOverLsp


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls : public ydk::Entity
{
    public:
        BindingSegmentIdMpls();
        ~BindingSegmentIdMpls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf segment_id_type; //type: BindingSegmentId
        ydk::YLeaf label_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::BindingSegmentIdMpls


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection : public ydk::Entity
{
    public:
        TunnelPathProtection();
        ~TunnelPathProtection();

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

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathProtection


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects : public ydk::Entity
{
    public:
        PathOptionProtects();
        ~PathOptionProtects();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathOptionProtect; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect

        ydk::YList path_option_protect;
        
}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect : public ydk::Entity
{
    public:
        PathOptionProtect();
        ~PathOptionProtect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protection; //type: MplsTePathOptionProtection
        class PathOptions; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions> path_options;
        
}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions : public ydk::Entity
{
    public:
        PathOptions();
        ~PathOptions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PathOption; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption

        ydk::YList path_option;
        
}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption : public ydk::Entity
{
    public:
        PathOption();
        ~PathOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf preference_level; //type: uint32
        ydk::YLeaf path_type; //type: MplsTePathOption
        ydk::YLeaf path_id; //type: uint32
        ydk::YLeaf path_name; //type: string
        ydk::YLeaf path_property; //type: uint32
        ydk::YLeaf interface; //type: string
        ydk::YLeaf output_label; //type: uint32
        ydk::YLeaf destination; //type: string
        ydk::YLeaf lockdown; //type: MplsTePathOptionProperty
        ydk::YLeaf verbatim; //type: MplsTePathOptionProperty
        ydk::YLeaf pce; //type: MplsTePathOptionProperty
        ydk::YLeaf pce_address; //type: string
        ydk::YLeaf igp_type; //type: MplsTeIgpProtocol
        ydk::YLeaf igp_instance; //type: string
        ydk::YLeaf igp_area; //type: uint32
        ydk::YLeaf igp_area_ip_address_id; //type: string
        ydk::YLeaf path_option_attribute_set_name; //type: string
        ydk::YLeaf protected_by_preference_level; //type: uint32
        ydk::YLeaf segment_routing; //type: MplsTePathOptionProperty

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::PathOptionProtects::PathOptionProtect::PathOptions::PathOption


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional : public ydk::Entity
{
    public:
        Bidirectional();
        ~Bidirectional();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enabled; //type: empty
        class AssociationCoroutedType; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType
        class AssociationParameters; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType> association_corouted_type;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters> association_parameters; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType : public ydk::Entity
{
    public:
        AssociationCoroutedType();
        ~AssociationCoroutedType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf wrap_protection_enable; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf disable_protection_object; //type: empty
        class FaultOam; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam> fault_oam;
        
}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam : public ydk::Entity
{
    public:
        FaultOam();
        ~FaultOam();

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

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationCoroutedType::FaultOam


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters : public ydk::Entity
{
    public:
        AssociationParameters();
        ~AssociationParameters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf association_id; //type: uint32
        ydk::YLeaf association_source_address; //type: string
        ydk::YLeaf association_is_global_id_configured; //type: boolean
        ydk::YLeaf association_global_id; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bidirectional::AssociationParameters


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode : public ydk::Entity
{
    public:
        AdminMode();
        ~AdminMode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf deactivate_tunnel; //type: empty

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AdminMode


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching : public ydk::Entity
{
    public:
        Switching();
        ~Switching();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Transit; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit
        class Endpoint; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit> transit; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint> endpoint; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit : public ydk::Entity
{
    public:
        Transit();
        ~Transit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf capability; //type: MplsTeSwitchingCap
        ydk::YLeaf encoding; //type: MplsTeSwitchingEncode

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Transit


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint : public ydk::Entity
{
    public:
        Endpoint();
        ~Endpoint();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf capability; //type: MplsTeSwitchingCap
        ydk::YLeaf encoding; //type: MplsTeSwitchingEncode

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Switching::Endpoint


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce : public ydk::Entity
{
    public:
        Pce();
        ~Pce();

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
        ydk::YLeaf delegation; //type: empty

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Pce


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection : public ydk::Entity
{
    public:
        TunnelPathSelection();
        ~TunnelPathSelection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf tiebreaker; //type: MplsTePathSelectionTiebreaker
        ydk::YLeaf path_selection_hop_limit; //type: uint32
        ydk::YLeaf path_selection_delay_limit; //type: uint32
        ydk::YLeaf path_selection_cost_limit; //type: uint32
        class Invalidation; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation> invalidation; // presence node
        
}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation : public ydk::Entity
{
    public:
        Invalidation();
        ~Invalidation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf path_invalidation_timeout; //type: uint32
        ydk::YLeaf path_invalidation_action; //type: PathInvalidationAction

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::TunnelPathSelection::Invalidation


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth : public ydk::Entity
{
    public:
        AutoBandwidth();
        ~AutoBandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf underflow_enable; //type: boolean
        ydk::YLeaf resignal_last_bandwidth_time_out; //type: uint32
        ydk::YLeaf enabled; //type: boolean
        ydk::YLeaf application_frequency; //type: uint32
        ydk::YLeaf overflow_enable; //type: boolean
        ydk::YLeaf collection_only; //type: empty
        class Underflow; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow
        class Overflow; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow
        class BandwidthLimits; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits
        class AdjustmentThreshold; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold
        class AutoCapacity; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AutoCapacity

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow> underflow; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow> overflow; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits> bandwidth_limits; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold> adjustment_threshold; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AutoCapacity> auto_capacity;
        
}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow : public ydk::Entity
{
    public:
        Underflow();
        ~Underflow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf underflow_threshold_percent; //type: uint32
        ydk::YLeaf underflow_threshold_value; //type: uint32
        ydk::YLeaf underflow_threshold_limit; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Underflow


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow : public ydk::Entity
{
    public:
        Overflow();
        ~Overflow();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf overflow_threshold_percent; //type: uint32
        ydk::YLeaf overflow_threshold_value; //type: uint32
        ydk::YLeaf overflow_threshold_limit; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::Overflow


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits : public ydk::Entity
{
    public:
        BandwidthLimits();
        ~BandwidthLimits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bandwidth_min_limit; //type: uint32
        ydk::YLeaf bandwidth_max_limit; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::BandwidthLimits


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold : public ydk::Entity
{
    public:
        AdjustmentThreshold();
        ~AdjustmentThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf adjustment_threshold_percent; //type: uint32
        ydk::YLeaf adjustment_threshold_value; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AdjustmentThreshold


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AutoCapacity : public ydk::Entity
{
    public:
        AutoCapacity();
        ~AutoCapacity();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nominal_bandwidth; //type: uint32
        ydk::YLeaf enable; //type: boolean
        ydk::YLeaf clones_minimum; //type: uint32
        ydk::YLeaf split_bandwidth; //type: uint32
        ydk::YLeaf merge_bandwidth; //type: uint32
        ydk::YLeaf clones_maximum; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AutoBandwidth::AutoCapacity


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority : public ydk::Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf setup_priority; //type: uint32
        ydk::YLeaf hold_priority; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Priority


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask : public ydk::Entity
{
    public:
        AffinityMask();
        ~AffinityMask();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity; //type: string
        ydk::YLeaf mask; //type: string

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::AffinityMask


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency : public ydk::Entity
{
    public:
        ForwardingAdjacency();
        ~ForwardingAdjacency();

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
        ydk::YLeaf include_ipv6; //type: empty
        ydk::YLeaf hold_time; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::ForwardingAdjacency


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lsp_switch_over_change_message; //type: empty
        ydk::YLeaf all; //type: empty
        ydk::YLeaf record_route_messsage; //type: empty
        ydk::YLeaf bfd_state_message; //type: empty
        ydk::YLeaf bandwidth_change_message; //type: empty
        ydk::YLeaf reoptimize_attempts_message; //type: empty
        ydk::YLeaf reroute_messsage; //type: empty
        ydk::YLeaf state_message; //type: empty
        ydk::YLeaf insufficient_bw_message; //type: empty
        ydk::YLeaf reoptimized_message; //type: empty
        ydk::YLeaf pcalc_failure_message; //type: empty

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Logging


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth : public ydk::Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dste_type; //type: MplsTeBandwidthDste
        ydk::YLeaf class_or_pool_type; //type: uint32
        ydk::YLeaf bandwidth; //type: uint32

}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Bandwidth


class InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute : public ydk::Entity
{
    public:
        Autoroute();
        ~Autoroute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AutorouteAnnounce; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce
        class Destinations; //type: InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::AutorouteAnnounce> autoroute_announce;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ifmgr_cfg::InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute::Destinations> destinations;
        
}; // InterfaceConfigurations::InterfaceConfiguration::TunnelTeAttributes::Autoroute

class InterfaceConfigurations::InterfaceConfiguration::VlanTrunkConfiguration::TunnelingEthertype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0x9100;
        static const ydk::Enum::YLeaf Y_0x9200;

};


}
}

#endif /* _CISCO_IOS_XR_IFMGR_CFG_3_ */

