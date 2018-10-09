#ifndef _CISCO_IOS_XR_PFI_IM_CMD_OPER_
#define _CISCO_IOS_XR_PFI_IM_CMD_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_pfi_im_cmd_oper {

class Interfaces : public ydk::Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class InterfaceXr; //type: Interfaces::InterfaceXr
        class NodeTypeSets; //type: Interfaces::NodeTypeSets
        class InterfaceBriefs; //type: Interfaces::InterfaceBriefs
        class InventorySummary; //type: Interfaces::InventorySummary
        class Interfaces_; //type: Interfaces::Interfaces_
        class InterfaceSummary; //type: Interfaces::InterfaceSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr> interface_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::NodeTypeSets> node_type_sets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceBriefs> interface_briefs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InventorySummary> inventory_summary;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::Interfaces_> interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceSummary> interface_summary;
        
}; // Interfaces


class Interfaces::InterfaceXr : public ydk::Entity
{
    public:
        InterfaceXr();
        ~InterfaceXr();

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

        class Interface; //type: Interfaces::InterfaceXr::Interface

        ydk::YList interface;
        
}; // Interfaces::InterfaceXr


class Interfaces::InterfaceXr::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf interface_type; //type: string
        ydk::YLeaf hardware_type_string; //type: string
        ydk::YLeaf state; //type: ImStateEnum
        ydk::YLeaf line_state; //type: ImStateEnum
        ydk::YLeaf encapsulation; //type: string
        ydk::YLeaf encapsulation_type_string; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf is_l2_transport_enabled; //type: boolean
        ydk::YLeaf state_transition_count; //type: uint32
        ydk::YLeaf last_state_transition_time; //type: uint32
        ydk::YLeaf is_dampening_enabled; //type: boolean
        ydk::YLeaf speed; //type: uint32
        ydk::YLeaf crc_length; //type: uint32
        ydk::YLeaf is_scramble_enabled; //type: boolean
        ydk::YLeaf duplexity; //type: ImAttrDuplex
        ydk::YLeaf media_type; //type: ImAttrMedia
        ydk::YLeaf link_type; //type: ImAttrLink
        ydk::YLeaf in_flow_control; //type: ImAttrFlowControl
        ydk::YLeaf out_flow_control; //type: ImAttrFlowControl
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf max_bandwidth; //type: uint32
        ydk::YLeaf keepalive; //type: uint32
        ydk::YLeaf is_l2_looped; //type: boolean
        ydk::YLeaf parent_interface_name; //type: string
        ydk::YLeaf loopback_configuration; //type: ImCmdLoopbackEnum
        ydk::YLeaf description; //type: string
        ydk::YLeaf is_maintenance_enabled; //type: boolean
        ydk::YLeaf is_data_inverted; //type: boolean
        ydk::YLeaf transport_mode; //type: ImAttrTransportMode
        ydk::YLeaf fast_shutdown; //type: boolean
        ydk::YLeaf if_index; //type: uint32
        class DampeningInformation; //type: Interfaces::InterfaceXr::Interface::DampeningInformation
        class MacAddress; //type: Interfaces::InterfaceXr::Interface::MacAddress
        class BurnedInAddress; //type: Interfaces::InterfaceXr::Interface::BurnedInAddress
        class CarrierDelay; //type: Interfaces::InterfaceXr::Interface::CarrierDelay
        class ArpInformation; //type: Interfaces::InterfaceXr::Interface::ArpInformation
        class IpInformation; //type: Interfaces::InterfaceXr::Interface::IpInformation
        class EncapsulationInformation; //type: Interfaces::InterfaceXr::Interface::EncapsulationInformation
        class InterfaceTypeInformation; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation
        class DataRates; //type: Interfaces::InterfaceXr::Interface::DataRates
        class InterfaceStatistics; //type: Interfaces::InterfaceXr::Interface::InterfaceStatistics
        class L2InterfaceStatistics; //type: Interfaces::InterfaceXr::Interface::L2InterfaceStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::DampeningInformation> dampening_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::MacAddress> mac_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::BurnedInAddress> burned_in_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::CarrierDelay> carrier_delay;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::ArpInformation> arp_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::IpInformation> ip_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation> encapsulation_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation> interface_type_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::DataRates> data_rates;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceStatistics> interface_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::L2InterfaceStatistics> l2_interface_statistics;
        
}; // Interfaces::InterfaceXr::Interface


class Interfaces::InterfaceXr::Interface::DampeningInformation : public ydk::Entity
{
    public:
        DampeningInformation();
        ~DampeningInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf penalty; //type: uint32
        ydk::YLeaf is_suppressed_enabled; //type: boolean
        ydk::YLeaf seconds_remaining; //type: uint32
        ydk::YLeaf half_life; //type: uint32
        ydk::YLeaf reuse_threshold; //type: uint32
        ydk::YLeaf suppress_threshold; //type: uint32
        ydk::YLeaf maximum_suppress_time; //type: uint32
        ydk::YLeaf restart_penalty; //type: uint32

}; // Interfaces::InterfaceXr::Interface::DampeningInformation


class Interfaces::InterfaceXr::Interface::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

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

}; // Interfaces::InterfaceXr::Interface::MacAddress


class Interfaces::InterfaceXr::Interface::BurnedInAddress : public ydk::Entity
{
    public:
        BurnedInAddress();
        ~BurnedInAddress();

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

}; // Interfaces::InterfaceXr::Interface::BurnedInAddress


class Interfaces::InterfaceXr::Interface::CarrierDelay : public ydk::Entity
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

}; // Interfaces::InterfaceXr::Interface::CarrierDelay


class Interfaces::InterfaceXr::Interface::ArpInformation : public ydk::Entity
{
    public:
        ArpInformation();
        ~ArpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf arp_timeout; //type: uint32
        ydk::YLeaf arp_type_name; //type: string
        ydk::YLeaf arp_is_learning_disabled; //type: boolean

}; // Interfaces::InterfaceXr::Interface::ArpInformation


class Interfaces::InterfaceXr::Interface::IpInformation : public ydk::Entity
{
    public:
        IpInformation();
        ~IpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_address; //type: string
        ydk::YLeaf subnet_mask_length; //type: uint32

}; // Interfaces::InterfaceXr::Interface::IpInformation


class Interfaces::InterfaceXr::Interface::EncapsulationInformation : public ydk::Entity
{
    public:
        EncapsulationInformation();
        ~EncapsulationInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encapsulation_type; //type: ImCmdEncapsEnum
        class FrameRelayInformation; //type: Interfaces::InterfaceXr::Interface::EncapsulationInformation::FrameRelayInformation
        class Dot1qInformation; //type: Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation
        class PppInformation; //type: Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::FrameRelayInformation> frame_relay_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation> dot1q_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation> ppp_information;
        
}; // Interfaces::InterfaceXr::Interface::EncapsulationInformation


class Interfaces::InterfaceXr::Interface::EncapsulationInformation::FrameRelayInformation : public ydk::Entity
{
    public:
        FrameRelayInformation();
        ~FrameRelayInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fr_encapsulation_type; //type: ImCmdFrTypeEnum
        ydk::YLeaf lmi_type; //type: ImCmdLmiTypeEnum
        ydk::YLeaf lmidlci; //type: uint32
        ydk::YLeaf is_nni; //type: boolean
        ydk::YLeaf is_dte; //type: boolean
        ydk::YLeaf is_lmi_up; //type: boolean
        ydk::YLeaf is_lmi_nni_dce_up; //type: boolean
        ydk::YLeaf is_lmi_enabled; //type: boolean
        ydk::YLeaf enquiries_received; //type: uint32
        ydk::YLeaf enquiries_sent; //type: uint32
        ydk::YLeaf status_received; //type: uint32
        ydk::YLeaf status_sent; //type: uint32
        ydk::YLeaf update_status_received; //type: uint32
        ydk::YLeaf update_status_sent; //type: uint32

}; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::FrameRelayInformation


class Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation : public ydk::Entity
{
    public:
        Dot1qInformation();
        ~Dot1qInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EncapsulationDetails; //type: Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails
        class VlanSwitched; //type: Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::VlanSwitched

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails> encapsulation_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::VlanSwitched> vlan_switched;
        
}; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation


class Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails : public ydk::Entity
{
    public:
        EncapsulationDetails();
        ~EncapsulationDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_encapsulation; //type: VlanEncaps
        ydk::YLeaf tag; //type: uint16
        ydk::YLeaf outer_tag; //type: uint16
        ydk::YLeaf native_tag; //type: uint16
        ydk::YLeaf dot1ad_tag; //type: uint16
        ydk::YLeaf dot1ad_native_tag; //type: uint16
        ydk::YLeaf dot1ad_outer_tag; //type: uint16
        class Stack; //type: Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails::Stack
        class ServiceInstanceDetails; //type: Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails::ServiceInstanceDetails
        class Dot1adDot1qStack; //type: Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails::Dot1adDot1qStack

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails::Stack> stack;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails::ServiceInstanceDetails> service_instance_details;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails::Dot1adDot1qStack> dot1ad_dot1q_stack;
        
}; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails


class Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails::Stack : public ydk::Entity
{
    public:
        Stack();
        ~Stack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outer_tag; //type: uint16
        ydk::YLeaf second_tag; //type: uint16

}; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails::Stack


class Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails::ServiceInstanceDetails : public ydk::Entity
{
    public:
        ServiceInstanceDetails();
        ~ServiceInstanceDetails();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf payload_ethertype; //type: EfpPayloadEtype
        ydk::YLeaf tags_popped; //type: uint16
        ydk::YLeaf is_exact_match; //type: int32
        ydk::YLeaf is_native_vlan; //type: int32
        ydk::YLeaf is_native_preserving; //type: int32
        ydk::YLeaf source_mac_match; //type: string
        ydk::YLeaf destination_mac_match; //type: string
        class LocalTrafficStack; //type: Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack
        class TagsToMatch; //type: Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch
        class Pushe; //type: Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails::ServiceInstanceDetails::Pushe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack> local_traffic_stack;
        ydk::YList tags_to_match;
        ydk::YList pushe;
        
}; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails::ServiceInstanceDetails


class Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack : public ydk::Entity
{
    public:
        LocalTrafficStack();
        ~LocalTrafficStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocalTrafficTag; //type: Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag

        ydk::YList local_traffic_tag;
        
}; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack


class Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag : public ydk::Entity
{
    public:
        LocalTrafficTag();
        ~LocalTrafficTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethertype; //type: EfpTagEtype
        ydk::YLeaf vlan_id; //type: uint16

}; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails::ServiceInstanceDetails::LocalTrafficStack::LocalTrafficTag


class Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch : public ydk::Entity
{
    public:
        TagsToMatch();
        ~TagsToMatch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethertype; //type: EfpTagEtype
        ydk::YLeaf priority; //type: EfpTagPriority
        class VlanRange; //type: Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange

        ydk::YList vlan_range;
        
}; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch


class Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange : public ydk::Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id_low; //type: uint16
        ydk::YLeaf vlan_id_high; //type: uint16

}; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails::ServiceInstanceDetails::TagsToMatch::VlanRange


class Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails::ServiceInstanceDetails::Pushe : public ydk::Entity
{
    public:
        Pushe();
        ~Pushe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethertype; //type: EfpTagEtype
        ydk::YLeaf vlan_id; //type: uint16

}; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails::ServiceInstanceDetails::Pushe


class Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails::Dot1adDot1qStack : public ydk::Entity
{
    public:
        Dot1adDot1qStack();
        ~Dot1adDot1qStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf outer_tag; //type: uint16
        ydk::YLeaf second_tag; //type: uint16

}; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::EncapsulationDetails::Dot1adDot1qStack


class Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::VlanSwitched : public ydk::Entity
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

        ydk::YLeaf mode; //type: VlanSwitchedMode
        ydk::YLeaf access_vlan; //type: uint16
        class TrunkVlanRanges; //type: Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::VlanSwitched::TrunkVlanRanges

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::VlanSwitched::TrunkVlanRanges> trunk_vlan_ranges;
        
}; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::VlanSwitched


class Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::VlanSwitched::TrunkVlanRanges : public ydk::Entity
{
    public:
        TrunkVlanRanges();
        ~TrunkVlanRanges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf payload_ethertype; //type: EfpPayloadEtype
        ydk::YLeaf tags_popped; //type: uint16
        ydk::YLeaf is_exact_match; //type: int32
        ydk::YLeaf is_native_vlan; //type: int32
        ydk::YLeaf is_native_preserving; //type: int32
        ydk::YLeaf source_mac_match; //type: string
        ydk::YLeaf destination_mac_match; //type: string
        class LocalTrafficStack; //type: Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::VlanSwitched::TrunkVlanRanges::LocalTrafficStack
        class TagsToMatch; //type: Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::VlanSwitched::TrunkVlanRanges::TagsToMatch
        class Pushe; //type: Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::VlanSwitched::TrunkVlanRanges::Pushe

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::VlanSwitched::TrunkVlanRanges::LocalTrafficStack> local_traffic_stack;
        ydk::YList tags_to_match;
        ydk::YList pushe;
        
}; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::VlanSwitched::TrunkVlanRanges


class Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::VlanSwitched::TrunkVlanRanges::LocalTrafficStack : public ydk::Entity
{
    public:
        LocalTrafficStack();
        ~LocalTrafficStack();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LocalTrafficTag; //type: Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::VlanSwitched::TrunkVlanRanges::LocalTrafficStack::LocalTrafficTag

        ydk::YList local_traffic_tag;
        
}; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::VlanSwitched::TrunkVlanRanges::LocalTrafficStack


class Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::VlanSwitched::TrunkVlanRanges::LocalTrafficStack::LocalTrafficTag : public ydk::Entity
{
    public:
        LocalTrafficTag();
        ~LocalTrafficTag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethertype; //type: EfpTagEtype
        ydk::YLeaf vlan_id; //type: uint16

}; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::VlanSwitched::TrunkVlanRanges::LocalTrafficStack::LocalTrafficTag


class Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::VlanSwitched::TrunkVlanRanges::TagsToMatch : public ydk::Entity
{
    public:
        TagsToMatch();
        ~TagsToMatch();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethertype; //type: EfpTagEtype
        ydk::YLeaf priority; //type: EfpTagPriority
        class VlanRange; //type: Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::VlanSwitched::TrunkVlanRanges::TagsToMatch::VlanRange

        ydk::YList vlan_range;
        
}; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::VlanSwitched::TrunkVlanRanges::TagsToMatch


class Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::VlanSwitched::TrunkVlanRanges::TagsToMatch::VlanRange : public ydk::Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vlan_id_low; //type: uint16
        ydk::YLeaf vlan_id_high; //type: uint16

}; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::VlanSwitched::TrunkVlanRanges::TagsToMatch::VlanRange


class Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::VlanSwitched::TrunkVlanRanges::Pushe : public ydk::Entity
{
    public:
        Pushe();
        ~Pushe();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ethertype; //type: EfpTagEtype
        ydk::YLeaf vlan_id; //type: uint16

}; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::Dot1qInformation::VlanSwitched::TrunkVlanRanges::Pushe


class Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation : public ydk::Entity
{
    public:
        PppInformation();
        ~PppInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lcp_state; //type: PppFsmState
        ydk::YLeaf is_loopback_detected; //type: int32
        ydk::YLeaf keepalive_period; //type: uint32
        ydk::YLeaf is_mp_bundle_member; //type: int32
        ydk::YLeaf is_multilink_open; //type: int32
        class NcpInfoArray; //type: Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::NcpInfoArray

        ydk::YList ncp_info_array;
        
}; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation


class Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::NcpInfoArray : public ydk::Entity
{
    public:
        NcpInfoArray();
        ~NcpInfoArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ncp_state; //type: PppFsmState
        ydk::YLeaf ncp_identifier; //type: NcpIdent

}; // Interfaces::InterfaceXr::Interface::EncapsulationInformation::PppInformation::NcpInfoArray


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation : public ydk::Entity
{
    public:
        InterfaceTypeInformation();
        ~InterfaceTypeInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_type_info; //type: ImCmdIntfTypeEnum
        class SrpInformation; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation
        class TunnelInformation; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelInformation
        class BundleInformation; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation
        class SerialInformation; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SerialInformation
        class SonetPosInformation; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SonetPosInformation
        class TunnelGreInformation; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation
        class PseudowireHeadEndInformation; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::PseudowireHeadEndInformation
        class CemInformation; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::CemInformation
        class GccInformation; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::GccInformation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation> srp_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelInformation> tunnel_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation> bundle_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SerialInformation> serial_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SonetPosInformation> sonet_pos_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation> tunnel_gre_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::PseudowireHeadEndInformation> pseudowire_head_end_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::CemInformation> cem_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::GccInformation> gcc_information;
        
}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation : public ydk::Entity
{
    public:
        SrpInformation();
        ~SrpInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SrpInformation_; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_
        class SrpStatistics; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_> srp_information;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics> srp_statistics;
        
}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_ : public ydk::Entity
{
    public:
        SrpInformation_();
        ~SrpInformation_();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class IpsInfo; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo
        class TopologyInfo; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo
        class SrrInfo; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo
        class RateLimitInfo; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo> ips_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo> topology_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo> srr_info;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo> rate_limit_info;
        
}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo : public ydk::Entity
{
    public:
        IpsInfo();
        ~IpsInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_admin_down; //type: int32
        class LocalInformation; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation

        ydk::YList local_information;
        
}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation : public ydk::Entity
{
    public:
        LocalInformation();
        ~LocalInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf is_inter_card_bus_enabled; //type: int32
        ydk::YLeaf wtr_timer_period; //type: uint32
        class SideA; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA
        class SideB; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA> side_a;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB> side_b;
        
}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA : public ydk::Entity
{
    public:
        SideA();
        ~SideA();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf wrap_state; //type: SrpMgmtIpsWrapState
        ydk::YLeaf packet_sent_timer; //type: uint32
        ydk::YLeaf send_timer_time_remaining; //type: uint32
        ydk::YLeaf wtr_timer_remaining; //type: uint32
        ydk::YLeaf self_detected_request; //type: SrpMgmtIpsReq
        ydk::YLeaf remote_request; //type: SrpMgmtIpsReq
        ydk::YLeaf rx_neighbor_mac_address; //type: string
        ydk::YLeaf rx_message_type; //type: SrpMgmtIpsReq
        ydk::YLeaf rx_path_type; //type: SrpMgmtIpsPathInd
        ydk::YLeaf rx_ttl; //type: uint32
        ydk::YLeaf rx_packet_test; //type: int32
        ydk::YLeaf tx_neighbor_mac_address; //type: string
        ydk::YLeaf tx_message_type; //type: SrpMgmtIpsReq
        ydk::YLeaf tx_path_type; //type: SrpMgmtIpsPathInd
        ydk::YLeaf tx_ttl; //type: uint32
        ydk::YLeaf tx_packet_test; //type: int32
        ydk::YLeaf delay_keep_alive_trigger; //type: uint32
        class AssertedFailure; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::AssertedFailure

        ydk::YList asserted_failure;
        
}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::AssertedFailure : public ydk::Entity
{
    public:
        AssertedFailure();
        ~AssertedFailure();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: SrpMgmtFailureEt
        ydk::YLeaf reported_state; //type: SrpMgmtFailureStateEt
        ydk::YLeaf debounced_state; //type: SrpMgmtFailureStateEt
        ydk::YLeaf current_state; //type: SrpMgmtFailureStateEt
        ydk::YLeaf stable_time; //type: uint64
        ydk::YLeaf debounced_delay; //type: uint32

}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideA::AssertedFailure


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB : public ydk::Entity
{
    public:
        SideB();
        ~SideB();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf wrap_state; //type: SrpMgmtIpsWrapState
        ydk::YLeaf packet_sent_timer; //type: uint32
        ydk::YLeaf send_timer_time_remaining; //type: uint32
        ydk::YLeaf wtr_timer_remaining; //type: uint32
        ydk::YLeaf self_detected_request; //type: SrpMgmtIpsReq
        ydk::YLeaf remote_request; //type: SrpMgmtIpsReq
        ydk::YLeaf rx_neighbor_mac_address; //type: string
        ydk::YLeaf rx_message_type; //type: SrpMgmtIpsReq
        ydk::YLeaf rx_path_type; //type: SrpMgmtIpsPathInd
        ydk::YLeaf rx_ttl; //type: uint32
        ydk::YLeaf rx_packet_test; //type: int32
        ydk::YLeaf tx_neighbor_mac_address; //type: string
        ydk::YLeaf tx_message_type; //type: SrpMgmtIpsReq
        ydk::YLeaf tx_path_type; //type: SrpMgmtIpsPathInd
        ydk::YLeaf tx_ttl; //type: uint32
        ydk::YLeaf tx_packet_test; //type: int32
        ydk::YLeaf delay_keep_alive_trigger; //type: uint32
        class AssertedFailure; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::AssertedFailure

        ydk::YList asserted_failure;
        
}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::AssertedFailure : public ydk::Entity
{
    public:
        AssertedFailure();
        ~AssertedFailure();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: SrpMgmtFailureEt
        ydk::YLeaf reported_state; //type: SrpMgmtFailureStateEt
        ydk::YLeaf debounced_state; //type: SrpMgmtFailureStateEt
        ydk::YLeaf current_state; //type: SrpMgmtFailureStateEt
        ydk::YLeaf stable_time; //type: uint64
        ydk::YLeaf debounced_delay; //type: uint32

}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::IpsInfo::LocalInformation::SideB::AssertedFailure


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo : public ydk::Entity
{
    public:
        TopologyInfo();
        ~TopologyInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_admin_down; //type: int32
        class LocalInformation; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation

        ydk::YList local_information;
        
}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation : public ydk::Entity
{
    public:
        LocalInformation();
        ~LocalInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf topology_timer; //type: uint32
        ydk::YLeaf next_topology_packet_delay; //type: uint32
        ydk::YLeaf time_since_last_topology_packet_received; //type: uint32
        ydk::YLeaf time_since_last_topology_change; //type: uint32
        ydk::YLeaf number_of_nodes_on_ring; //type: uint16
        class RingNode; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation::RingNode

        ydk::YList ring_node;
        
}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation::RingNode : public ydk::Entity
{
    public:
        RingNode();
        ~RingNode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf hop_count; //type: uint16
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf is_wrapped; //type: int32
        ydk::YLeaf is_srr_supported; //type: int32
        ydk::YLeaf node_name; //type: string

}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::TopologyInfo::LocalInformation::RingNode


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo : public ydk::Entity
{
    public:
        SrrInfo();
        ~SrrInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_admin_down; //type: int32
        ydk::YLeaf is_srr_enabled; //type: int32
        class SrrDetailedInfo; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo

        ydk::YList srr_detailed_info;
        
}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo : public ydk::Entity
{
    public:
        SrrDetailedInfo();
        ~SrrDetailedInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf version_number; //type: uint32
        ydk::YLeaf is_wrong_version_received; //type: int32
        ydk::YLeaf last_wrong_version_receive_time; //type: uint32
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf node_state; //type: SrpMgmtSrrNodeState
        ydk::YLeaf is_outer_ring_in_use; //type: int32
        ydk::YLeaf is_inner_ring_in_use; //type: int32
        ydk::YLeaf is_announce; //type: int32
        ydk::YLeaf outer_fail_type; //type: SrpMgmtSrrFailure
        ydk::YLeaf inner_fail_type; //type: SrpMgmtSrrFailure
        ydk::YLeaf packet_send_timer; //type: uint32
        ydk::YLeaf next_srr_packet_send_time; //type: uint32
        ydk::YLeaf single_ring_bw; //type: uint32
        ydk::YLeaf wtr_time; //type: uint32
        ydk::YLeaf wtr_timer_remaining_outer_ring; //type: uint32
        ydk::YLeaf wtr_timer_remaining_inner_ring; //type: uint32
        class NodesOnRing; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesOnRing
        class NodesNotOnRing; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesNotOnRing

        ydk::YList nodes_on_ring;
        ydk::YList nodes_not_on_ring;
        
}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesOnRing : public ydk::Entity
{
    public:
        NodesOnRing();
        ~NodesOnRing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf srr_entry_exits; //type: int32
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf outer_failure; //type: SrpMgmtSrrFailure
        ydk::YLeaf inner_failure; //type: SrpMgmtSrrFailure
        ydk::YLeaf is_last_announce_received; //type: int32
        ydk::YLeaf last_announce_received_time; //type: uint32

}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesOnRing


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesNotOnRing : public ydk::Entity
{
    public:
        NodesNotOnRing();
        ~NodesNotOnRing();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf srr_entry_exits; //type: int32
        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf outer_failure; //type: SrpMgmtSrrFailure
        ydk::YLeaf inner_failure; //type: SrpMgmtSrrFailure
        ydk::YLeaf is_last_announce_received; //type: int32
        ydk::YLeaf last_announce_received_time; //type: uint32

}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::SrrInfo::SrrDetailedInfo::NodesNotOnRing


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo : public ydk::Entity
{
    public:
        RateLimitInfo();
        ~RateLimitInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf is_admin_down; //type: int32
        class RateLimitDetailedInfo; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo::RateLimitDetailedInfo

        ydk::YList rate_limit_detailed_info;
        
}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo::RateLimitDetailedInfo : public ydk::Entity
{
    public:
        RateLimitDetailedInfo();
        ~RateLimitDetailedInfo();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min_priority_value; //type: uint16

}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpInformation_::RateLimitInfo::RateLimitDetailedInfo


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics : public ydk::Entity
{
    public:
        SrpStatistics();
        ~SrpStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf data_rate_interval; //type: uint32
        class SideADataRate; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideADataRate
        class SideBDataRate; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBDataRate
        class SideAErrors; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideAErrors
        class SideBErrors; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBErrors

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideADataRate> side_a_data_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBDataRate> side_b_data_rate;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideAErrors> side_a_errors;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBErrors> side_b_errors;
        
}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideADataRate : public ydk::Entity
{
    public:
        SideADataRate();
        ~SideADataRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate_sent; //type: uint32
        ydk::YLeaf packet_rate_sent; //type: uint32
        ydk::YLeaf bit_rate_received; //type: uint32
        ydk::YLeaf packet_rate_received; //type: uint32

}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideADataRate


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBDataRate : public ydk::Entity
{
    public:
        SideBDataRate();
        ~SideBDataRate();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bit_rate_sent; //type: uint32
        ydk::YLeaf packet_rate_sent; //type: uint32
        ydk::YLeaf bit_rate_received; //type: uint32
        ydk::YLeaf packet_rate_received; //type: uint32

}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBDataRate


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideAErrors : public ydk::Entity
{
    public:
        SideAErrors();
        ~SideAErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_packets_received; //type: uint32
        ydk::YLeaf crc_errors; //type: uint32
        ydk::YLeaf input_insufficient_resource_events; //type: uint32
        ydk::YLeaf mac_aborts_received; //type: uint32
        ydk::YLeaf mac_runt_packets_received; //type: uint32
        ydk::YLeaf mac_giant_packets_received; //type: uint32
        ydk::YLeaf framer_runt_packets_received; //type: uint32
        ydk::YLeaf framer_giant_packets_received; //type: uint32
        ydk::YLeaf framer_aborts_received; //type: uint32

}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideAErrors


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBErrors : public ydk::Entity
{
    public:
        SideBErrors();
        ~SideBErrors();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf error_packets_received; //type: uint32
        ydk::YLeaf crc_errors; //type: uint32
        ydk::YLeaf input_insufficient_resource_events; //type: uint32
        ydk::YLeaf mac_aborts_received; //type: uint32
        ydk::YLeaf mac_runt_packets_received; //type: uint32
        ydk::YLeaf mac_giant_packets_received; //type: uint32
        ydk::YLeaf framer_runt_packets_received; //type: uint32
        ydk::YLeaf framer_giant_packets_received; //type: uint32
        ydk::YLeaf framer_aborts_received; //type: uint32

}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SrpInformation::SrpStatistics::SideBErrors


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelInformation : public ydk::Entity
{
    public:
        TunnelInformation();
        ~TunnelInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_name; //type: string
        ydk::YLeaf source_ipv4_address; //type: string
        ydk::YLeaf destination_ipv4_address; //type: string
        ydk::YLeaf tunnel_type; //type: string
        ydk::YLeaf key; //type: uint32
        ydk::YLeaf ttl; //type: uint32

}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelInformation


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation : public ydk::Entity
{
    public:
        BundleInformation();
        ~BundleInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Member; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member

        ydk::YList member;
        
}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member : public ydk::Entity
{
    public:
        Member();
        ~Member();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf port_priority; //type: uint16
        ydk::YLeaf port_number; //type: uint16
        ydk::YLeaf underlying_link_id; //type: uint16
        ydk::YLeaf link_order_number; //type: uint16
        ydk::YLeaf iccp_node; //type: uint32
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf lacp_enabled; //type: string
        ydk::YLeaf member_type; //type: BmdMemberTypeEnum
        ydk::YLeaf member_name; //type: string
        class Counters; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::Counters
        class LinkData; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::LinkData
        class MemberMuxData; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData
        class MacAddress; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MacAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::Counters> counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::LinkData> link_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData> member_mux_data;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MacAddress> mac_address;
        
}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lacpd_us_received; //type: uint32
        ydk::YLeaf lacpd_us_transmitted; //type: uint32
        ydk::YLeaf marker_packets_received; //type: uint32
        ydk::YLeaf marker_responses_transmitted; //type: uint32
        ydk::YLeaf illegal_packets_received; //type: uint32
        ydk::YLeaf excess_lacpd_us_received; //type: uint32
        ydk::YLeaf excess_marker_packets_received; //type: uint32
        ydk::YLeaf defaulted; //type: uint32
        ydk::YLeaf expired; //type: uint32
        ydk::YLeaf last_cleared_sec; //type: uint32
        ydk::YLeaf last_cleared_nsec; //type: uint32

}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::Counters


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::LinkData : public ydk::Entity
{
    public:
        LinkData();
        ~LinkData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf actor_system_priority; //type: uint16
        ydk::YLeaf actor_system_mac_address; //type: string
        ydk::YLeaf actor_operational_key; //type: uint16
        ydk::YLeaf partner_system_priority; //type: uint16
        ydk::YLeaf partner_system_mac_address; //type: string
        ydk::YLeaf partner_operational_key; //type: uint16
        ydk::YLeaf selected_aggregator_id; //type: uint32
        ydk::YLeaf attached_aggregator_id; //type: uint32
        ydk::YLeaf actor_port_id; //type: uint16
        ydk::YLeaf actor_port_priority; //type: uint16
        ydk::YLeaf partner_port_id; //type: uint16
        ydk::YLeaf partner_port_priority; //type: uint16
        ydk::YLeaf actor_port_state; //type: uint8
        ydk::YLeaf partner_port_state; //type: uint8

}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::LinkData


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData : public ydk::Entity
{
    public:
        MemberMuxData();
        ~MemberMuxData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mux_state; //type: BmMuxstate
        ydk::YLeaf error; //type: uint32
        ydk::YLeaf member_mux_state_reason; //type: BmMbrStateReason
        ydk::YLeaf member_state; //type: BmdMemberState
        ydk::YLeaf mux_state_reason; //type: BmMuxreason
        class MemberMuxStateReasonData; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::MemberMuxStateReasonData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::MemberMuxStateReasonData> member_mux_state_reason_data;
        
}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::MemberMuxStateReasonData : public ydk::Entity
{
    public:
        MemberMuxStateReasonData();
        ~MemberMuxStateReasonData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf reason_type; //type: BmStateReasonTarget
        ydk::YLeaf severity; //type: BmSeverity

}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MemberMuxData::MemberMuxStateReasonData


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MacAddress : public ydk::Entity
{
    public:
        MacAddress();
        ~MacAddress();

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

}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::BundleInformation::Member::MacAddress


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SerialInformation : public ydk::Entity
{
    public:
        SerialInformation();
        ~SerialInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeslots; //type: string

}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SerialInformation


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SonetPosInformation : public ydk::Entity
{
    public:
        SonetPosInformation();
        ~SonetPosInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aps_state; //type: SonetApsEt

}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::SonetPosInformation


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation : public ydk::Entity
{
    public:
        TunnelGreInformation();
        ~TunnelGreInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf source_name; //type: string
        ydk::YLeaf destination_ip_address_length; //type: uint8
        ydk::YLeaf tunnel_tos; //type: uint32
        ydk::YLeaf tunnel_ttl; //type: uint32
        ydk::YLeaf key; //type: uint32
        ydk::YLeaf keepalive_period; //type: uint16
        ydk::YLeaf keepalive_maximum_retry; //type: uint8
        ydk::YLeaf tunnel_mode; //type: TunnelGreMode
        ydk::YLeaf tunnel_mode_direction; //type: TunlIpModeDir
        ydk::YLeaf keepalive_state; //type: TunnelKaDfState
        ydk::YLeaf df_bit_state; //type: TunnelKaDfState
        ydk::YLeaf key_bit_state; //type: TunnelKeyState
        class SourceIpAddress; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::SourceIpAddress
        class DestinationIpAddress; //type: Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::DestinationIpAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::SourceIpAddress> source_ip_address;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::DestinationIpAddress> destination_ip_address;
        
}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::SourceIpAddress : public ydk::Entity
{
    public:
        SourceIpAddress();
        ~SourceIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: TunlPfiAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::SourceIpAddress


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::DestinationIpAddress : public ydk::Entity
{
    public:
        DestinationIpAddress();
        ~DestinationIpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf afi; //type: TunlPfiAfId
        ydk::YLeaf ipv4; //type: string
        ydk::YLeaf ipv6; //type: string

}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::TunnelGreInformation::DestinationIpAddress


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::PseudowireHeadEndInformation : public ydk::Entity
{
    public:
        PseudowireHeadEndInformation();
        ~PseudowireHeadEndInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_list_name; //type: string
        ydk::YLeaf l2_overhead; //type: uint32
        ydk::YLeaf internal_label; //type: uint32

}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::PseudowireHeadEndInformation


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::CemInformation : public ydk::Entity
{
    public:
        CemInformation();
        ~CemInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timeslots; //type: string
        ydk::YLeaf payload; //type: uint16
        ydk::YLeaf dejitter_buffer; //type: uint16
        ydk::YLeaf framing; //type: int32

}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::CemInformation


class Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::GccInformation : public ydk::Entity
{
    public:
        GccInformation();
        ~GccInformation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf derived_mode; //type: GccDerState
        ydk::YLeaf sec_state; //type: GccSecState

}; // Interfaces::InterfaceXr::Interface::InterfaceTypeInformation::GccInformation


class Interfaces::InterfaceXr::Interface::DataRates : public ydk::Entity
{
    public:
        DataRates();
        ~DataRates();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf input_data_rate; //type: uint64
        ydk::YLeaf input_packet_rate; //type: uint64
        ydk::YLeaf output_data_rate; //type: uint64
        ydk::YLeaf output_packet_rate; //type: uint64
        ydk::YLeaf peak_input_data_rate; //type: uint64
        ydk::YLeaf peak_input_packet_rate; //type: uint64
        ydk::YLeaf peak_output_data_rate; //type: uint64
        ydk::YLeaf peak_output_packet_rate; //type: uint64
        ydk::YLeaf bandwidth; //type: uint32
        ydk::YLeaf load_interval; //type: uint32
        ydk::YLeaf output_load; //type: uint8
        ydk::YLeaf input_load; //type: uint8
        ydk::YLeaf reliability; //type: uint8

}; // Interfaces::InterfaceXr::Interface::DataRates


class Interfaces::InterfaceXr::Interface::InterfaceStatistics : public ydk::Entity
{
    public:
        InterfaceStatistics();
        ~InterfaceStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stats_type; //type: ImCmdStatsEnum
        class FullInterfaceStats; //type: Interfaces::InterfaceXr::Interface::InterfaceStatistics::FullInterfaceStats
        class BasicInterfaceStats; //type: Interfaces::InterfaceXr::Interface::InterfaceStatistics::BasicInterfaceStats

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceStatistics::FullInterfaceStats> full_interface_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::InterfaceStatistics::BasicInterfaceStats> basic_interface_stats;
        
}; // Interfaces::InterfaceXr::Interface::InterfaceStatistics


class Interfaces::InterfaceXr::Interface::InterfaceStatistics::FullInterfaceStats : public ydk::Entity
{
    public:
        FullInterfaceStats();
        ~FullInterfaceStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets_received; //type: uint64
        ydk::YLeaf bytes_received; //type: uint64
        ydk::YLeaf packets_sent; //type: uint64
        ydk::YLeaf bytes_sent; //type: uint64
        ydk::YLeaf multicast_packets_received; //type: uint64
        ydk::YLeaf broadcast_packets_received; //type: uint64
        ydk::YLeaf multicast_packets_sent; //type: uint64
        ydk::YLeaf broadcast_packets_sent; //type: uint64
        ydk::YLeaf output_drops; //type: uint32
        ydk::YLeaf output_queue_drops; //type: uint32
        ydk::YLeaf input_drops; //type: uint32
        ydk::YLeaf input_queue_drops; //type: uint32
        ydk::YLeaf runt_packets_received; //type: uint32
        ydk::YLeaf giant_packets_received; //type: uint32
        ydk::YLeaf throttled_packets_received; //type: uint32
        ydk::YLeaf parity_packets_received; //type: uint32
        ydk::YLeaf unknown_protocol_packets_received; //type: uint32
        ydk::YLeaf input_errors; //type: uint32
        ydk::YLeaf crc_errors; //type: uint32
        ydk::YLeaf input_overruns; //type: uint32
        ydk::YLeaf framing_errors_received; //type: uint32
        ydk::YLeaf input_ignored_packets; //type: uint32
        ydk::YLeaf input_aborts; //type: uint32
        ydk::YLeaf output_errors; //type: uint32
        ydk::YLeaf output_underruns; //type: uint32
        ydk::YLeaf output_buffer_failures; //type: uint32
        ydk::YLeaf output_buffers_swapped_out; //type: uint32
        ydk::YLeaf applique; //type: uint32
        ydk::YLeaf resets; //type: uint32
        ydk::YLeaf carrier_transitions; //type: uint32
        ydk::YLeaf availability_flag; //type: uint32
        ydk::YLeaf last_data_time; //type: uint32
        ydk::YLeaf seconds_since_last_clear_counters; //type: uint32
        ydk::YLeaf last_discontinuity_time; //type: uint32
        ydk::YLeaf seconds_since_packet_received; //type: uint32
        ydk::YLeaf seconds_since_packet_sent; //type: uint32

}; // Interfaces::InterfaceXr::Interface::InterfaceStatistics::FullInterfaceStats


class Interfaces::InterfaceXr::Interface::InterfaceStatistics::BasicInterfaceStats : public ydk::Entity
{
    public:
        BasicInterfaceStats();
        ~BasicInterfaceStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf packets_received; //type: uint64
        ydk::YLeaf bytes_received; //type: uint64
        ydk::YLeaf packets_sent; //type: uint64
        ydk::YLeaf bytes_sent; //type: uint64
        ydk::YLeaf input_drops; //type: uint32
        ydk::YLeaf input_queue_drops; //type: uint32
        ydk::YLeaf input_errors; //type: uint32
        ydk::YLeaf unknown_protocol_packets_received; //type: uint32
        ydk::YLeaf output_drops; //type: uint32
        ydk::YLeaf output_queue_drops; //type: uint32
        ydk::YLeaf output_errors; //type: uint32
        ydk::YLeaf last_data_time; //type: uint32
        ydk::YLeaf seconds_since_last_clear_counters; //type: uint32
        ydk::YLeaf last_discontinuity_time; //type: uint32
        ydk::YLeaf seconds_since_packet_received; //type: uint32
        ydk::YLeaf seconds_since_packet_sent; //type: uint32

}; // Interfaces::InterfaceXr::Interface::InterfaceStatistics::BasicInterfaceStats


class Interfaces::InterfaceXr::Interface::L2InterfaceStatistics : public ydk::Entity
{
    public:
        L2InterfaceStatistics();
        ~L2InterfaceStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf stats_type; //type: uint32
        ydk::YLeaf contents; //type: StatsTypeContents
        class StatsId; //type: Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::StatsId
        class BlockArray; //type: Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::BlockArray
        class ElementArray; //type: Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::StatsId> stats_id;
        ydk::YList block_array;
        ydk::YList element_array;
        
}; // Interfaces::InterfaceXr::Interface::L2InterfaceStatistics


class Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::StatsId : public ydk::Entity
{
    public:
        StatsId();
        ~StatsId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf id_type; //type: StatsId
        ydk::YLeaf unused; //type: uint32
        ydk::YLeaf interface_handle; //type: string
        ydk::YLeaf node_id; //type: string
        ydk::YLeaf feature_id; //type: uint32
        ydk::YLeaf id; //type: uint32

}; // Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::StatsId


class Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::BlockArray : public ydk::Entity
{
    public:
        BlockArray();
        ~BlockArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: StatsCounter
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf data; //type: string

}; // Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::BlockArray


class Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray : public ydk::Entity
{
    public:
        ElementArray();
        ~ElementArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key; //type: string
        class BlockArray; //type: Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::BlockArray

        ydk::YList block_array;
        
}; // Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray


class Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::BlockArray : public ydk::Entity
{
    public:
        BlockArray();
        ~BlockArray();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: StatsCounter
        ydk::YLeaf count; //type: uint32
        ydk::YLeaf data; //type: string

}; // Interfaces::InterfaceXr::Interface::L2InterfaceStatistics::ElementArray::BlockArray


class Interfaces::NodeTypeSets : public ydk::Entity
{
    public:
        NodeTypeSets();
        ~NodeTypeSets();

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

        class NodeTypeSet; //type: Interfaces::NodeTypeSets::NodeTypeSet

        ydk::YList node_type_set;
        
}; // Interfaces::NodeTypeSets


class Interfaces::NodeTypeSets::NodeTypeSet : public ydk::Entity
{
    public:
        NodeTypeSet();
        ~NodeTypeSet();

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

        ydk::YLeaf node_name; //type: string
        ydk::YLeaf type_set_name; //type: InterfaceTypeSet
        class InterfaceSummary; //type: Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary> interface_summary;
        
}; // Interfaces::NodeTypeSets::NodeTypeSet


class Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary : public ydk::Entity
{
    public:
        InterfaceSummary();
        ~InterfaceSummary();

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

        class InterfaceCounts; //type: Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceCounts
        class InterfaceType; //type: Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceCounts> interface_counts;
        ydk::YList interface_type;
        
}; // Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary


class Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceCounts : public ydk::Entity
{
    public:
        InterfaceCounts();
        ~InterfaceCounts();

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

        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf up_interface_count; //type: uint32
        ydk::YLeaf down_interface_count; //type: uint32
        ydk::YLeaf admin_down_interface_count; //type: uint32

}; // Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceCounts


class Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType : public ydk::Entity
{
    public:
        InterfaceType();
        ~InterfaceType();

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

        ydk::YLeaf interface_type_name; //type: string
        ydk::YLeaf interface_type_description; //type: string
        class InterfaceCounts; //type: Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::InterfaceCounts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::InterfaceCounts> interface_counts;
        
}; // Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType


class Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::InterfaceCounts : public ydk::Entity
{
    public:
        InterfaceCounts();
        ~InterfaceCounts();

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

        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf up_interface_count; //type: uint32
        ydk::YLeaf down_interface_count; //type: uint32
        ydk::YLeaf admin_down_interface_count; //type: uint32

}; // Interfaces::NodeTypeSets::NodeTypeSet::InterfaceSummary::InterfaceType::InterfaceCounts


class Interfaces::InterfaceBriefs : public ydk::Entity
{
    public:
        InterfaceBriefs();
        ~InterfaceBriefs();

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

        class InterfaceBrief; //type: Interfaces::InterfaceBriefs::InterfaceBrief

        ydk::YList interface_brief;
        
}; // Interfaces::InterfaceBriefs


class Interfaces::InterfaceBriefs::InterfaceBrief : public ydk::Entity
{
    public:
        InterfaceBrief();
        ~InterfaceBrief();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf parent_interface; //type: string
        ydk::YLeaf type; //type: string
        ydk::YLeaf state; //type: ImStateEnum
        ydk::YLeaf actual_state; //type: ImStateEnum
        ydk::YLeaf line_state; //type: ImStateEnum
        ydk::YLeaf actual_line_state; //type: ImStateEnum
        ydk::YLeaf encapsulation; //type: string
        ydk::YLeaf encapsulation_type_string; //type: string
        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf sub_interface_mtu_overhead; //type: uint32
        ydk::YLeaf l2_transport; //type: boolean
        ydk::YLeaf bandwidth; //type: uint32

}; // Interfaces::InterfaceBriefs::InterfaceBrief


class Interfaces::InventorySummary : public ydk::Entity
{
    public:
        InventorySummary();
        ~InventorySummary();

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

        class InterfaceCounts; //type: Interfaces::InventorySummary::InterfaceCounts
        class InterfaceType; //type: Interfaces::InventorySummary::InterfaceType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InventorySummary::InterfaceCounts> interface_counts;
        ydk::YList interface_type;
        
}; // Interfaces::InventorySummary


class Interfaces::InventorySummary::InterfaceCounts : public ydk::Entity
{
    public:
        InterfaceCounts();
        ~InterfaceCounts();

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

        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf up_interface_count; //type: uint32
        ydk::YLeaf down_interface_count; //type: uint32
        ydk::YLeaf admin_down_interface_count; //type: uint32

}; // Interfaces::InventorySummary::InterfaceCounts


class Interfaces::InventorySummary::InterfaceType : public ydk::Entity
{
    public:
        InterfaceType();
        ~InterfaceType();

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

        ydk::YLeaf interface_type_name; //type: string
        ydk::YLeaf interface_type_description; //type: string
        class InterfaceCounts; //type: Interfaces::InventorySummary::InterfaceType::InterfaceCounts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InventorySummary::InterfaceType::InterfaceCounts> interface_counts;
        
}; // Interfaces::InventorySummary::InterfaceType


class Interfaces::InventorySummary::InterfaceType::InterfaceCounts : public ydk::Entity
{
    public:
        InterfaceCounts();
        ~InterfaceCounts();

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

        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf up_interface_count; //type: uint32
        ydk::YLeaf down_interface_count; //type: uint32
        ydk::YLeaf admin_down_interface_count; //type: uint32

}; // Interfaces::InventorySummary::InterfaceType::InterfaceCounts


class Interfaces::Interfaces_ : public ydk::Entity
{
    public:
        Interfaces_();
        ~Interfaces_();

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

        class Interface; //type: Interfaces::Interfaces_::Interface

        ydk::YList interface;
        
}; // Interfaces::Interfaces_


class Interfaces::Interfaces_::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf state; //type: ImStateEnum
        ydk::YLeaf line_state; //type: ImStateEnum
        ydk::YLeaf description; //type: string

}; // Interfaces::Interfaces_::Interface


class Interfaces::InterfaceSummary : public ydk::Entity
{
    public:
        InterfaceSummary();
        ~InterfaceSummary();

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

        class InterfaceCounts; //type: Interfaces::InterfaceSummary::InterfaceCounts
        class InterfaceType; //type: Interfaces::InterfaceSummary::InterfaceType

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceSummary::InterfaceCounts> interface_counts;
        ydk::YList interface_type;
        
}; // Interfaces::InterfaceSummary


class Interfaces::InterfaceSummary::InterfaceCounts : public ydk::Entity
{
    public:
        InterfaceCounts();
        ~InterfaceCounts();

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

        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf up_interface_count; //type: uint32
        ydk::YLeaf down_interface_count; //type: uint32
        ydk::YLeaf admin_down_interface_count; //type: uint32

}; // Interfaces::InterfaceSummary::InterfaceCounts


class Interfaces::InterfaceSummary::InterfaceType : public ydk::Entity
{
    public:
        InterfaceType();
        ~InterfaceType();

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

        ydk::YLeaf interface_type_name; //type: string
        ydk::YLeaf interface_type_description; //type: string
        class InterfaceCounts; //type: Interfaces::InterfaceSummary::InterfaceType::InterfaceCounts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_pfi_im_cmd_oper::Interfaces::InterfaceSummary::InterfaceType::InterfaceCounts> interface_counts;
        
}; // Interfaces::InterfaceSummary::InterfaceType


class Interfaces::InterfaceSummary::InterfaceType::InterfaceCounts : public ydk::Entity
{
    public:
        InterfaceCounts();
        ~InterfaceCounts();

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

        ydk::YLeaf interface_count; //type: uint32
        ydk::YLeaf up_interface_count; //type: uint32
        ydk::YLeaf down_interface_count; //type: uint32
        ydk::YLeaf admin_down_interface_count; //type: uint32

}; // Interfaces::InterfaceSummary::InterfaceType::InterfaceCounts

class ImCmdIntfTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf srp;
        static const ydk::Enum::YLeaf tunnel;
        static const ydk::Enum::YLeaf bundle;
        static const ydk::Enum::YLeaf serial;
        static const ydk::Enum::YLeaf sonet_pos;
        static const ydk::Enum::YLeaf tunnel_gre;
        static const ydk::Enum::YLeaf pseudowire_head_end;
        static const ydk::Enum::YLeaf cem;
        static const ydk::Enum::YLeaf gcc;

};

class VlanSwitchedMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf trunk_port;
        static const ydk::Enum::YLeaf access_port;

};

class ImCmdStatsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf full;
        static const ydk::Enum::YLeaf basic;

};

class SrpMgmtFailureStateEt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idle_failure_state;
        static const ydk::Enum::YLeaf wait_to_restore_failure_state;
        static const ydk::Enum::YLeaf manual_switch_failure_state;
        static const ydk::Enum::YLeaf signal_degrade_failure_state;
        static const ydk::Enum::YLeaf signal_fail_failure_state;
        static const ydk::Enum::YLeaf forced_switch_failure_state;
        static const ydk::Enum::YLeaf shutdown_failure_state;
        static const ydk::Enum::YLeaf invalid_failure_state;
        static const ydk::Enum::YLeaf unknown_failure_state;

};

class GccDerState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in_service;
        static const ydk::Enum::YLeaf out_of_service;
        static const ydk::Enum::YLeaf maintenance;
        static const ydk::Enum::YLeaf ais;

};

class EfpTagEtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf untagged;
        static const ydk::Enum::YLeaf dot1q;
        static const ydk::Enum::YLeaf dot1ad;

};

class TunnelGreMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf gr_eo_ipv4;
        static const ydk::Enum::YLeaf gr_eo_ipv6;
        static const ydk::Enum::YLeaf mgr_eo_ipv4;
        static const ydk::Enum::YLeaf mgr_eo_ipv6;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class GccSecState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf normal;
        static const ydk::Enum::YLeaf maintenance;
        static const ydk::Enum::YLeaf ais;

};

class SrpMgmtIpsWrapState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idle_wrap_state;
        static const ydk::Enum::YLeaf wrapped_state;
        static const ydk::Enum::YLeaf locked_out_wrap_state;
        static const ydk::Enum::YLeaf unknown_wrap_state;

};

class StatsCounter : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stats_counter_rate;
        static const ydk::Enum::YLeaf stats_counter_uint32;
        static const ydk::Enum::YLeaf stats_counter_uint64;
        static const ydk::Enum::YLeaf stats_counter_generic;
        static const ydk::Enum::YLeaf stats_counter_proto;
        static const ydk::Enum::YLeaf stats_counter_srp;
        static const ydk::Enum::YLeaf stats_counter_ipv4_prec;
        static const ydk::Enum::YLeaf stats_counter_ipv4_dscp;
        static const ydk::Enum::YLeaf stats_counter_mpls_exp;
        static const ydk::Enum::YLeaf stats_counter_ipv4_bgp_pa;
        static const ydk::Enum::YLeaf stats_counter_src_bgp_pa;
        static const ydk::Enum::YLeaf stats_counter_basic;
        static const ydk::Enum::YLeaf stats_counter_comp_generic;
        static const ydk::Enum::YLeaf stats_counter_comp_proto;
        static const ydk::Enum::YLeaf stats_counter_comp_basic;
        static const ydk::Enum::YLeaf stats_counter_accounting;
        static const ydk::Enum::YLeaf stats_counter_comp_accounting;
        static const ydk::Enum::YLeaf stats_counter_flow;
        static const ydk::Enum::YLeaf stats_counter_comp_flow;

};

class SonetApsEt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_configured;
        static const ydk::Enum::YLeaf working_active;
        static const ydk::Enum::YLeaf protect_active;
        static const ydk::Enum::YLeaf working_inactive;
        static const ydk::Enum::YLeaf protect_inactive;

};

class ImAttrDuplex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf im_attr_duplex_unknown;
        static const ydk::Enum::YLeaf im_attr_duplex_half;
        static const ydk::Enum::YLeaf im_attr_duplex_full;

};

class SrpMgmtIpsPathInd : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf short_path;
        static const ydk::Enum::YLeaf long_path;
        static const ydk::Enum::YLeaf unknown_path;

};

class PppFsmState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ppp_fsm_state_initial_0;
        static const ydk::Enum::YLeaf ppp_fsm_state_starting_1;
        static const ydk::Enum::YLeaf ppp_fsm_state_closed_2;
        static const ydk::Enum::YLeaf ppp_fsm_state_stopped_3;
        static const ydk::Enum::YLeaf ppp_fsm_state_closing_4;
        static const ydk::Enum::YLeaf ppp_fsm_state_stopping_5;
        static const ydk::Enum::YLeaf ppp_fsm_state_req_sent_6;
        static const ydk::Enum::YLeaf ppp_fsm_state_ack_rcvd_7;
        static const ydk::Enum::YLeaf ppp_fsm_state_ack_sent_8;
        static const ydk::Enum::YLeaf ppp_fsm_state_opened_9;

};

class EfpTagPriority : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf priority0;
        static const ydk::Enum::YLeaf priority1;
        static const ydk::Enum::YLeaf priority2;
        static const ydk::Enum::YLeaf priority3;
        static const ydk::Enum::YLeaf priority4;
        static const ydk::Enum::YLeaf priority5;
        static const ydk::Enum::YLeaf priority6;
        static const ydk::Enum::YLeaf priority7;
        static const ydk::Enum::YLeaf priority_any;

};

class ImCmdLoopbackEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_loopback;
        static const ydk::Enum::YLeaf internal_loopback;
        static const ydk::Enum::YLeaf external_loopback;
        static const ydk::Enum::YLeaf line_loopback;

};

class ImCmdFrTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf frame_relay_cisco;
        static const ydk::Enum::YLeaf frame_relay_ietf;

};

class ImCmdLmiTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf lmi_type_auto;
        static const ydk::Enum::YLeaf lmi_type_ansi;
        static const ydk::Enum::YLeaf lmi_type_ccitt;
        static const ydk::Enum::YLeaf lmi_type_cisco;

};

class SrpMgmtSrrFailure : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idle_srr_failure;
        static const ydk::Enum::YLeaf wait_to_restore_srr_failure;
        static const ydk::Enum::YLeaf signal_fail_srr_failure;
        static const ydk::Enum::YLeaf forced_switch_srr_failure;
        static const ydk::Enum::YLeaf unknown_srr_failure;

};

class ImStateEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf im_state_not_ready;
        static const ydk::Enum::YLeaf im_state_admin_down;
        static const ydk::Enum::YLeaf im_state_down;
        static const ydk::Enum::YLeaf im_state_up;
        static const ydk::Enum::YLeaf im_state_shutdown;
        static const ydk::Enum::YLeaf im_state_err_disable;
        static const ydk::Enum::YLeaf im_state_down_immediate;
        static const ydk::Enum::YLeaf im_state_down_immediate_admin;
        static const ydk::Enum::YLeaf im_state_down_graceful;
        static const ydk::Enum::YLeaf im_state_begin_shutdown;
        static const ydk::Enum::YLeaf im_state_end_shutdown;
        static const ydk::Enum::YLeaf im_state_begin_error_disable;
        static const ydk::Enum::YLeaf im_state_end_error_disable;
        static const ydk::Enum::YLeaf im_state_begin_down_graceful;
        static const ydk::Enum::YLeaf im_state_reset;
        static const ydk::Enum::YLeaf im_state_operational;
        static const ydk::Enum::YLeaf im_state_not_operational;
        static const ydk::Enum::YLeaf im_state_unknown;
        static const ydk::Enum::YLeaf im_state_last;

};

class StatsTypeContents : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stats_type_single;
        static const ydk::Enum::YLeaf stats_type_variable;

};

class ImAttrFlowControl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf im_attr_flow_control_off;
        static const ydk::Enum::YLeaf im_attr_flow_control_on;
        static const ydk::Enum::YLeaf im_attr_flow_control_not_sup;
        static const ydk::Enum::YLeaf im_attr_flow_control_priority;

};

class StatsId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stats_id_type_unknown;
        static const ydk::Enum::YLeaf stats_id_type_min;
        static const ydk::Enum::YLeaf stats_id_type_spare;
        static const ydk::Enum::YLeaf stats_id_type_node;
        static const ydk::Enum::YLeaf stats_id_type_other;
        static const ydk::Enum::YLeaf stats_id_type_feature;
        static const ydk::Enum::YLeaf stats_id_type_max;

};

class TunlPfiAfId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tunl_pfi_af_id_none;
        static const ydk::Enum::YLeaf tunl_pfi_af_id_ipv4;
        static const ydk::Enum::YLeaf tunl_pfi_af_id_ipv6;

};

class TunnelKaDfState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};

class BmdMemberTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bmd_mbr_local;
        static const ydk::Enum::YLeaf bmd_mbr_foreign;
        static const ydk::Enum::YLeaf bmd_mbr_unknown;

};

class TunnelKeyState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absent;
        static const ydk::Enum::YLeaf present;

};

class BmMbrStateReason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bm_mbr_state_reason_unknown;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_unselectable_unknown;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_link_down;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_link_deleting;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_creating;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bundle_creating;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bundle_deleting;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bundle_admin_down;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_replicating;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bandwidth;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_loop_back;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_activity_type;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bundle_shutdown;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_min_selected;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_max_selected;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_link_limit;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_active_limit;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_standby_unknown;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_expired;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_defaulted;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_act_or_not_agg;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_partner_not_agg;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_lagid;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bundle_not_cfgd;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bundle_not_ready;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_partner_ood;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_partner_not_in_sync;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_foreign_partner_oos;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_attach_unknown;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_partner_not_collecting;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_collect_unknown;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_standby_foreign;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bfd_starting;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bfd_down;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bfd_nbr_unconfig;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_mlacp;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_pe_isolated;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_forced_switchover;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_errdis_unknown;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_mlacp_no_mbr_state_info;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_active;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_mlacp_no_bdl_state_info;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_mlacp_no_bdl_config_info;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_mlacp_no_bdl_sync;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_mlacp_bdl_has_no_peer;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_mlacp_nak;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_mlacp_transport_unavailable;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_mlacp_not_configured;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_recovery_timer;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_mlacp_standby;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_maximized_out;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_mlacp_peer_selected;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_mlacp_connect_timer_running;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bundle_not_mlacp;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_no_lon;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_cumul_rel_bw_limit;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_no_mac;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_no_system_id;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_link_shutdown;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_activity_mlacp;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_activity_iccp;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bundle_icpe_mlacp;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_no_link_num;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_standby_peer_higher_prio;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_red_state_standby;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_other_red_state_standby;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_hold_ing;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bundle_error_disabled;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bundle_efd_disabled;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_singleton_pe_isolated;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bfd_ipv6_starting;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bfd_ipv6_down;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_bfd_ipv6_nbr_unconfig;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_timer_running;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_client_bundle_ctrl;
        static const ydk::Enum::YLeaf bm_mbr_state_reason_count;

};

class BmSeverity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ok;
        static const ydk::Enum::YLeaf information;
        static const ydk::Enum::YLeaf misconfiguration;
        static const ydk::Enum::YLeaf warning;
        static const ydk::Enum::YLeaf error;

};

class SrpMgmtIpsReq : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idle_ips_request;
        static const ydk::Enum::YLeaf wait_to_restore_ips_request;
        static const ydk::Enum::YLeaf manual_switch_ips_request;
        static const ydk::Enum::YLeaf signal_degrade_ips_request;
        static const ydk::Enum::YLeaf signal_fail_ips_request;
        static const ydk::Enum::YLeaf forced_switch_ips_request;
        static const ydk::Enum::YLeaf unknown_ips_request;

};

class SrpMgmtFailureEt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hardware_missing_failure;
        static const ydk::Enum::YLeaf layer1_admin_state_failure;
        static const ydk::Enum::YLeaf layer1_error_failure;
        static const ydk::Enum::YLeaf keepalive_missed_failure;
        static const ydk::Enum::YLeaf link_quality_degraded_failure;
        static const ydk::Enum::YLeaf mate_problem_failure;
        static const ydk::Enum::YLeaf side_mismatch_failure;
        static const ydk::Enum::YLeaf unknown_failure;

};

class ImAttrTransportMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf im_attr_transport_mode_unknown;
        static const ydk::Enum::YLeaf im_attr_transport_mode_lan;
        static const ydk::Enum::YLeaf im_attr_transport_mode_wan;
        static const ydk::Enum::YLeaf im_attr_transport_mode_otn_bt_opu1e;
        static const ydk::Enum::YLeaf im_attr_transport_mode_otn_bt_opu2e;
        static const ydk::Enum::YLeaf im_attr_transport_mode_otn_opu3;
        static const ydk::Enum::YLeaf im_attr_transport_mode_otn_opu4;

};

class TunlIpModeDir : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf tunl_ip_mode_dir_none;
        static const ydk::Enum::YLeaf tunl_ip_mode_dir_decap;
        static const ydk::Enum::YLeaf tunl_ip_mode_dir_encap;
        static const ydk::Enum::YLeaf tunl_ip_mode_dir_max;

};

class ImCmdEncapsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf frame_relay;
        static const ydk::Enum::YLeaf vlan;
        static const ydk::Enum::YLeaf ppp;

};

class BmMuxstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf detached;
        static const ydk::Enum::YLeaf waiting;
        static const ydk::Enum::YLeaf attached;
        static const ydk::Enum::YLeaf collecting;
        static const ydk::Enum::YLeaf distributing;
        static const ydk::Enum::YLeaf collecting_distributing;

};

class NcpIdent : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cdpcp;
        static const ydk::Enum::YLeaf ipcp;
        static const ydk::Enum::YLeaf ipcpiw;
        static const ydk::Enum::YLeaf ipv6cp;
        static const ydk::Enum::YLeaf mplscp;
        static const ydk::Enum::YLeaf osicp;

};

class BmdMemberState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bmd_mbr_state_configured;
        static const ydk::Enum::YLeaf bmd_mbr_state_standby;
        static const ydk::Enum::YLeaf bmd_mbr_state_hot_standby;
        static const ydk::Enum::YLeaf bmd_mbr_state_negotiating;
        static const ydk::Enum::YLeaf bmd_mbr_state_bfd_running;
        static const ydk::Enum::YLeaf bmd_mbr_state_active;

};

class BmMuxreason : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bm_mux_reason_no_reason;
        static const ydk::Enum::YLeaf bm_mux_reason_link_down;
        static const ydk::Enum::YLeaf bm_mux_reason_link_deleted;
        static const ydk::Enum::YLeaf bm_mux_reason_duplex;
        static const ydk::Enum::YLeaf bm_mux_reason_bandwidth;
        static const ydk::Enum::YLeaf bm_mux_reason_loop_back;
        static const ydk::Enum::YLeaf bm_mux_reason_activity_type;
        static const ydk::Enum::YLeaf bm_mux_reason_link_limit;
        static const ydk::Enum::YLeaf bm_mux_reason_shared;
        static const ydk::Enum::YLeaf bm_mux_reason_lagid;
        static const ydk::Enum::YLeaf bm_mux_reason_no_bundle;
        static const ydk::Enum::YLeaf bm_mux_reason_no_primary;
        static const ydk::Enum::YLeaf bm_mux_reason_bundle_down;
        static const ydk::Enum::YLeaf bm_mux_reason_individual;
        static const ydk::Enum::YLeaf bm_mux_reason_defaulted;
        static const ydk::Enum::YLeaf bm_mux_reason_in_sync;
        static const ydk::Enum::YLeaf bm_mux_reason_collecting;
        static const ydk::Enum::YLeaf bm_mux_reason_active_link_limit;
        static const ydk::Enum::YLeaf bm_mux_reason_distributing;
        static const ydk::Enum::YLeaf bm_mux_reason_count;

};

class ImAttrLink : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf im_attr_link_type_auto;
        static const ydk::Enum::YLeaf im_attr_link_type_force;

};

class VlanEncaps : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_encapsulation;
        static const ydk::Enum::YLeaf dot1q;
        static const ydk::Enum::YLeaf qinq;
        static const ydk::Enum::YLeaf qin_any;
        static const ydk::Enum::YLeaf dot1q_native;
        static const ydk::Enum::YLeaf dot1ad;
        static const ydk::Enum::YLeaf dot1ad_native;
        static const ydk::Enum::YLeaf service_instance;
        static const ydk::Enum::YLeaf dot1ad_dot1q;
        static const ydk::Enum::YLeaf dot1ad_any;

};

class EfpPayloadEtype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf payload_ethertype_any;
        static const ydk::Enum::YLeaf payload_ethertype_ip;
        static const ydk::Enum::YLeaf payload_ethertype_pppoe;

};

class InterfaceTypeSet : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hardware_interfaces;

};

class BmStateReasonTarget : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf member_reason;
        static const ydk::Enum::YLeaf bundle_reason;

};

class ImAttrMedia : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf im_attr_media_other;
        static const ydk::Enum::YLeaf im_attr_media_unknown;
        static const ydk::Enum::YLeaf im_attr_media_aui;
        static const ydk::Enum::YLeaf im_attr_media_10base5;
        static const ydk::Enum::YLeaf im_attr_media_foirl;
        static const ydk::Enum::YLeaf im_attr_media_10base2;
        static const ydk::Enum::YLeaf im_attr_media_10broad36;
        static const ydk::Enum::YLeaf im_attr_media_10base;
        static const ydk::Enum::YLeaf im_attr_media_10base_thd;
        static const ydk::Enum::YLeaf im_attr_media_10base_tfd;
        static const ydk::Enum::YLeaf im_attr_media_10base_fp;
        static const ydk::Enum::YLeaf im_attr_media_10base_fb;
        static const ydk::Enum::YLeaf im_attr_media_10base_fl;
        static const ydk::Enum::YLeaf im_attr_media_10base_flhd;
        static const ydk::Enum::YLeaf im_attr_media_10base_flfd;
        static const ydk::Enum::YLeaf im_attr_media_100base_t4;
        static const ydk::Enum::YLeaf im_attr_media_100base_tx;
        static const ydk::Enum::YLeaf im_attr_media_100base_txhd;
        static const ydk::Enum::YLeaf im_attr_media_100base_txfd;
        static const ydk::Enum::YLeaf im_attr_media_100base_fx;
        static const ydk::Enum::YLeaf im_attr_media_100base_fxhd;
        static const ydk::Enum::YLeaf im_attr_media_100base_fxfd;
        static const ydk::Enum::YLeaf im_attr_media_100base_ex;
        static const ydk::Enum::YLeaf im_attr_media_100base_exhd;
        static const ydk::Enum::YLeaf im_attr_media_100base_exfd;
        static const ydk::Enum::YLeaf im_attr_media_100base_t2;
        static const ydk::Enum::YLeaf im_attr_media_100base_t2hd;
        static const ydk::Enum::YLeaf im_attr_media_100base_t2fd;
        static const ydk::Enum::YLeaf im_attr_media_1000base_x;
        static const ydk::Enum::YLeaf im_attr_media_1000base_xhdx;
        static const ydk::Enum::YLeaf im_attr_media_1000base_xfd;
        static const ydk::Enum::YLeaf im_attr_media_1000base_lx;
        static const ydk::Enum::YLeaf im_attr_media_1000base_lxhd;
        static const ydk::Enum::YLeaf im_attr_media_1000base_lxfdx;
        static const ydk::Enum::YLeaf im_attr_media_1000base_sx;
        static const ydk::Enum::YLeaf im_attr_media_1000base_sxhd;
        static const ydk::Enum::YLeaf im_attr_media_1000base_sxfd;
        static const ydk::Enum::YLeaf im_attr_media_1000base_cx;
        static const ydk::Enum::YLeaf im_attr_media_1000base_cxhdx;
        static const ydk::Enum::YLeaf im_attr_media_1000base_cxfd;
        static const ydk::Enum::YLeaf im_attr_media_1000base;
        static const ydk::Enum::YLeaf im_attr_media_1000base_thd;
        static const ydk::Enum::YLeaf im_attr_media_1000base_tfd;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_x;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_lx4;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_r;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_er;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_lr;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_sr;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_w;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_ew;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_lw;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_sw;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_zr;
        static const ydk::Enum::YLeaf im_attr_media_802_9a;
        static const ydk::Enum::YLeaf im_attr_media_rj45;
        static const ydk::Enum::YLeaf im_attr_media_1000base_zx;
        static const ydk::Enum::YLeaf im_attr_media_1000base_cwdm;
        static const ydk::Enum::YLeaf im_attr_media_1000base_cwdm_1470;
        static const ydk::Enum::YLeaf im_attr_media_1000base_cwdm_1490;
        static const ydk::Enum::YLeaf im_attr_media_1000base_cwdm_1510;
        static const ydk::Enum::YLeaf im_attr_media_1000base_cwdm_1530;
        static const ydk::Enum::YLeaf im_attr_media_1000base_cwdm_1550;
        static const ydk::Enum::YLeaf im_attr_media_1000base_cwdm_1570;
        static const ydk::Enum::YLeaf im_attr_media_1000base_cwdm_1590;
        static const ydk::Enum::YLeaf im_attr_media_1000base_cwdm_1610;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_lr4;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1533;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1537;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1541;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1545;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1549;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1553;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1557;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1561;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_lr4;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_er4;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_er4;
        static const ydk::Enum::YLeaf im_attr_media_1000base_ex;
        static const ydk::Enum::YLeaf im_attr_media_1000base_bx10_d;
        static const ydk::Enum::YLeaf im_attr_media_1000base_bx10_u;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1561_42;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1560_61;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1559_79;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1558_98;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1558_17;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1557_36;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1556_55;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1555_75;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1554_94;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1554_13;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1553_33;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1552_52;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1551_72;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1550_92;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1550_12;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1549_32;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1548_51;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1547_72;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1546_92;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1546_12;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1545_32;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1544_53;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1543_73;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1542_94;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1542_14;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1541_35;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1540_56;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1539_77;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1538_98;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1538_19;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1537_40;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1536_61;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1535_82;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1535_04;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1534_25;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1533_47;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1532_68;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1531_90;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1531_12;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_1530_33;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dwdm_tunable;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1561_42;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1560_61;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1559_79;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1558_98;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1558_17;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1557_36;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1556_55;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1555_75;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1554_94;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1554_13;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1553_33;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1552_52;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1551_72;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1550_92;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1550_12;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1549_32;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1548_51;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1547_72;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1546_92;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1546_12;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1545_32;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1544_53;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1543_73;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1542_94;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1542_14;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1541_35;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1540_56;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1539_77;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1538_98;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1538_19;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1537_40;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1536_61;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1535_82;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1535_04;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1534_25;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1533_47;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1532_68;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1531_90;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1531_12;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_1530_33;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_dwdm_tunable;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1561_42;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1560_61;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1559_79;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1558_98;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1558_17;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1557_36;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1556_55;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1555_75;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1554_94;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1554_13;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1553_33;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1552_52;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1551_72;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1550_92;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1550_12;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1549_32;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1548_51;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1547_72;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1546_92;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1546_12;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1545_32;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1544_53;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1543_73;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1542_94;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1542_14;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1541_35;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1540_56;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1539_77;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1538_98;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1538_19;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1537_40;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1536_61;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1535_82;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1535_04;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1534_25;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1533_47;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1532_68;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1531_90;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1531_12;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_1530_33;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_dwdm_tunable;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1561_42;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1560_61;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1559_79;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1558_98;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1558_17;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1557_36;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1556_55;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1555_75;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1554_94;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1554_13;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1553_33;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1552_52;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1551_72;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1550_92;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1550_12;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1549_32;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1548_51;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1547_72;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1546_92;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1546_12;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1545_32;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1544_53;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1543_73;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1542_94;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1542_14;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1541_35;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1540_56;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1539_77;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1538_98;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1538_19;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1537_40;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1536_61;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1535_82;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1535_04;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1534_25;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1533_47;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1532_68;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1531_90;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1531_12;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_1530_33;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_dwdm_tunable;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_kr4;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_cr4;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_sr4;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_fr;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_cr10;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_sr10;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_csr4;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_cwdm;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_cwdm_tunable;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_cwdm_1470;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_cwdm_1490;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_cwdm_1510;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_cwdm_1530;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_cwdm_1550;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_cwdm_1570;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_cwdm_1590;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_cwdm_1610;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_cwdm;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_cwdm_tunable;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_cwdm_1470;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_cwdm_1490;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_cwdm_1510;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_cwdm_1530;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_cwdm_1550;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_cwdm_1570;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_cwdm_1590;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_cwdm_1610;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_cwdm;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_cwdm_tunable;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_cwdm_1470;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_cwdm_1490;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_cwdm_1510;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_cwdm_1530;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_cwdm_1550;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_cwdm_1570;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_cwdm_1590;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_cwdm_1610;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_elpb;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_elpb;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_lr10;
        static const ydk::Enum::YLeaf im_attr_media_40gbase;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_kp4;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_kr4;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_lrm;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_cx4;
        static const ydk::Enum::YLeaf im_attr_media_10gbase;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_kx4;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_kr;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_pr;
        static const ydk::Enum::YLeaf im_attr_media_100base_lx;
        static const ydk::Enum::YLeaf im_attr_media_100base_zx;
        static const ydk::Enum::YLeaf im_attr_media_1000base_bx_d;
        static const ydk::Enum::YLeaf im_attr_media_1000base_bx_u;
        static const ydk::Enum::YLeaf im_attr_media_1000base_bx20_d;
        static const ydk::Enum::YLeaf im_attr_media_1000base_bx20_u;
        static const ydk::Enum::YLeaf im_attr_media_1000base_bx40_d;
        static const ydk::Enum::YLeaf im_attr_media_1000base_bx40_da;
        static const ydk::Enum::YLeaf im_attr_media_1000base_bx40_u;
        static const ydk::Enum::YLeaf im_attr_media_1000base_bx80_d;
        static const ydk::Enum::YLeaf im_attr_media_1000base_bx80_u;
        static const ydk::Enum::YLeaf im_attr_media_1000base_bx120_d;
        static const ydk::Enum::YLeaf im_attr_media_1000base_bx120_u;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_bx_d;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_bx_u;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_bx10_d;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_bx10_u;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_bx20_d;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_bx20_u;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_bx40_d;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_bx40_u;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_bx80_d;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_bx80_u;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_bx120_d;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_bx120_u;
        static const ydk::Enum::YLeaf im_attr_media_1000base_dr_lx;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_er4l;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_sr4;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_sr_bd;
        static const ydk::Enum::YLeaf im_attr_media_25gbase_cr;
        static const ydk::Enum::YLeaf im_attr_media_25gbase_cr_s;
        static const ydk::Enum::YLeaf im_attr_media_25gbase_kr;
        static const ydk::Enum::YLeaf im_attr_media_25gbase_kr_s;
        static const ydk::Enum::YLeaf im_attr_media_25gbase_r;
        static const ydk::Enum::YLeaf im_attr_media_25gbase_sr;
        static const ydk::Enum::YLeaf im_attr_media_25gbase_dwdm;
        static const ydk::Enum::YLeaf im_attr_media_25gbase_dwdm_tunable;
        static const ydk::Enum::YLeaf im_attr_media_25gbase_cwdm;
        static const ydk::Enum::YLeaf im_attr_media_25gbase_cwdm_tunable;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_psm4;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_er10;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_er10l;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_acc;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_aoc;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_cwdm4;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_psm4;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_cr4;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_act_loop;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_pas_loop;
        static const ydk::Enum::YLeaf im_attr_media_50gbase_cr2;
        static const ydk::Enum::YLeaf im_attr_media_50gbase_sr2;
        static const ydk::Enum::YLeaf im_attr_media_50gbase_psm2;
        static const ydk::Enum::YLeaf im_attr_media_200gbase_cr4;
        static const ydk::Enum::YLeaf im_attr_media_400gbase_fr4;
        static const ydk::Enum::YLeaf im_attr_media_400gbase_dr4;
        static const ydk::Enum::YLeaf im_attr_media_400gbase_cr4;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_cr;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_aoc;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_aoc;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_acu;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_acu;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_cu1m;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_cu3m;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_cu5m;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_acu7m;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_acu10m;
        static const ydk::Enum::YLeaf im_attr_media_4x10g_base_lr;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_cu1_5m;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_cu2m;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_cu2_5m;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_aoc1m;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_aoc2m;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_aoc3m;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_aoc5m;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_aoc7m;
        static const ydk::Enum::YLeaf im_attr_media_10gbase_aoc10m;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_acu1m;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_acu3m;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_acu5m;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_acu7m;
        static const ydk::Enum::YLeaf im_attr_media_40gbase_acu10m;
        static const ydk::Enum::YLeaf im_attr_media_25gbase_cu1m;
        static const ydk::Enum::YLeaf im_attr_media_25gbase_cu2m;
        static const ydk::Enum::YLeaf im_attr_media_25gbase_cu3m;
        static const ydk::Enum::YLeaf im_attr_media_25gbase_cu5m;
        static const ydk::Enum::YLeaf im_attr_media_100gbase_sm_sr;

};

class SrpMgmtSrrNodeState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf idle_srr_state;
        static const ydk::Enum::YLeaf discovery_srr_state;
        static const ydk::Enum::YLeaf unknown_srr_state;

};


}
}

#endif /* _CISCO_IOS_XR_PFI_IM_CMD_OPER_ */

