#ifndef _CISCO_IOS_XR_SUBSCRIBER_PPPOE_MA_GBL_CFG_
#define _CISCO_IOS_XR_SUBSCRIBER_PPPOE_MA_GBL_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg {

class PppoeCfg : public ydk::Entity
{
    public:
        PppoeCfg();
        ~PppoeCfg();

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

        ydk::YLeaf session_id_space_flat; //type: empty
        ydk::YLeaf in_flight_window; //type: uint32
        class PppoeBbaGroups; //type: PppoeCfg::PppoeBbaGroups

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups> pppoe_bba_groups;
        
}; // PppoeCfg


class PppoeCfg::PppoeBbaGroups : public ydk::Entity
{
    public:
        PppoeBbaGroups();
        ~PppoeBbaGroups();

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

        class PppoeBbaGroup; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup> > pppoe_bba_group;
        
}; // PppoeCfg::PppoeBbaGroups


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup : public ydk::Entity
{
    public:
        PppoeBbaGroup();
        ~PppoeBbaGroup();

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

        ydk::YLeaf bba_group; //type: string
        ydk::YLeaf completion_timeout; //type: uint32
        ydk::YLeaf invalid_session_id; //type: PppoeInvalidSessionIdBehavior
        ydk::YLeaf enable_padt_after_shut_down; //type: empty
        ydk::YLeaf mtu; //type: uint32
        class Tag; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag
        class Sessions; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions
        class ControlPackets; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets
        class PaDoDelay; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag> tag;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions> sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets> control_packets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay> pa_do_delay;
        
}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag : public ydk::Entity
{
    public:
        Tag();
        ~Tag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ppp_max_payload_deny; //type: empty
        ydk::YLeaf service_selection_disable; //type: empty
        ydk::YLeaf ac_name; //type: string
        class Padr; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr
        class ServiceNameConfigureds; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds
        class PppMaxPayload; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr> padr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds> service_name_configureds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload> ppp_max_payload; // presence node
        
}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr : public ydk::Entity
{
    public:
        Padr();
        ~Padr();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf session_unique_relay_session_id; //type: empty
        ydk::YLeaf invalid_payload_allow; //type: empty

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds : public ydk::Entity
{
    public:
        ServiceNameConfigureds();
        ~ServiceNameConfigureds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServiceNameConfigured; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigured

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigured> > service_name_configured;
        
}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigured : public ydk::Entity
{
    public:
        ServiceNameConfigured();
        ~ServiceNameConfigured();

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

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigured


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload : public ydk::Entity
{
    public:
        PppMaxPayload();
        ~PppMaxPayload();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf max; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VlanThrottle; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle
        class InnerVlanThrottle; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle
        class RemoteIdLimit; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdLimit
        class MacIwfAccessInterfaceThrottle; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle
        class AccessInterfaceLimit; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::AccessInterfaceLimit
        class MacAccessInterfaceThrottle; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle
        class OuterVlanLimit; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanLimit
        class CircuitIdThrottle; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle
        class MacLimit; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacLimit
        class CircuitIdLimit; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdLimit
        class MacIwfLimit; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfLimit
        class MacIwfAccessInterfaceLimit; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceLimit
        class InnerVlanLimit; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanLimit
        class OuterVlanThrottle; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle
        class MacThrottle; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle
        class CircuitIdAndRemoteIdLimit; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdLimit
        class VlanLimit; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanLimit
        class MacAccessInterfaceLimit; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceLimit
        class RemoteIdThrottle; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle
        class MaxLimit; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MaxLimit
        class CircuitIdAndRemoteIdThrottle; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle> vlan_throttle; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle> inner_vlan_throttle; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdLimit> remote_id_limit; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle> mac_iwf_access_interface_throttle; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::AccessInterfaceLimit> access_interface_limit; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle> mac_access_interface_throttle; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanLimit> outer_vlan_limit; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle> circuit_id_throttle; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacLimit> mac_limit; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdLimit> circuit_id_limit; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfLimit> mac_iwf_limit; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceLimit> mac_iwf_access_interface_limit; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanLimit> inner_vlan_limit; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle> outer_vlan_throttle; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle> mac_throttle; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdLimit> circuit_id_and_remote_id_limit; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanLimit> vlan_limit; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceLimit> mac_access_interface_limit; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle> remote_id_throttle; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MaxLimit> max_limit; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle> circuit_id_and_remote_id_throttle; // presence node
        
}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle : public ydk::Entity
{
    public:
        VlanThrottle();
        ~VlanThrottle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf throttle; //type: uint32
        ydk::YLeaf request_period; //type: uint32
        ydk::YLeaf blocking_period; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle : public ydk::Entity
{
    public:
        InnerVlanThrottle();
        ~InnerVlanThrottle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf throttle; //type: uint32
        ydk::YLeaf request_period; //type: uint32
        ydk::YLeaf blocking_period; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdLimit : public ydk::Entity
{
    public:
        RemoteIdLimit();
        ~RemoteIdLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdLimit


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle : public ydk::Entity
{
    public:
        MacIwfAccessInterfaceThrottle();
        ~MacIwfAccessInterfaceThrottle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf throttle; //type: uint32
        ydk::YLeaf request_period; //type: uint32
        ydk::YLeaf blocking_period; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::AccessInterfaceLimit : public ydk::Entity
{
    public:
        AccessInterfaceLimit();
        ~AccessInterfaceLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::AccessInterfaceLimit


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle : public ydk::Entity
{
    public:
        MacAccessInterfaceThrottle();
        ~MacAccessInterfaceThrottle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf throttle; //type: uint32
        ydk::YLeaf request_period; //type: uint32
        ydk::YLeaf blocking_period; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanLimit : public ydk::Entity
{
    public:
        OuterVlanLimit();
        ~OuterVlanLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanLimit


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle : public ydk::Entity
{
    public:
        CircuitIdThrottle();
        ~CircuitIdThrottle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf throttle; //type: uint32
        ydk::YLeaf request_period; //type: uint32
        ydk::YLeaf blocking_period; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacLimit : public ydk::Entity
{
    public:
        MacLimit();
        ~MacLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacLimit


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdLimit : public ydk::Entity
{
    public:
        CircuitIdLimit();
        ~CircuitIdLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdLimit


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfLimit : public ydk::Entity
{
    public:
        MacIwfLimit();
        ~MacIwfLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfLimit


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceLimit : public ydk::Entity
{
    public:
        MacIwfAccessInterfaceLimit();
        ~MacIwfAccessInterfaceLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceLimit


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanLimit : public ydk::Entity
{
    public:
        InnerVlanLimit();
        ~InnerVlanLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanLimit


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle : public ydk::Entity
{
    public:
        OuterVlanThrottle();
        ~OuterVlanThrottle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf throttle; //type: uint32
        ydk::YLeaf request_period; //type: uint32
        ydk::YLeaf blocking_period; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle : public ydk::Entity
{
    public:
        MacThrottle();
        ~MacThrottle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf throttle; //type: uint32
        ydk::YLeaf request_period; //type: uint32
        ydk::YLeaf blocking_period; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdLimit : public ydk::Entity
{
    public:
        CircuitIdAndRemoteIdLimit();
        ~CircuitIdAndRemoteIdLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdLimit


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanLimit : public ydk::Entity
{
    public:
        VlanLimit();
        ~VlanLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanLimit


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceLimit : public ydk::Entity
{
    public:
        MacAccessInterfaceLimit();
        ~MacAccessInterfaceLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceLimit


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle : public ydk::Entity
{
    public:
        RemoteIdThrottle();
        ~RemoteIdThrottle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf throttle; //type: uint32
        ydk::YLeaf request_period; //type: uint32
        ydk::YLeaf blocking_period; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MaxLimit : public ydk::Entity
{
    public:
        MaxLimit();
        ~MaxLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf limit; //type: uint32
        ydk::YLeaf threshold; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MaxLimit


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle : public ydk::Entity
{
    public:
        CircuitIdAndRemoteIdThrottle();
        ~CircuitIdAndRemoteIdThrottle();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf throttle; //type: uint32
        ydk::YLeaf request_period; //type: uint32
        ydk::YLeaf blocking_period; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets : public ydk::Entity
{
    public:
        ControlPackets();
        ~ControlPackets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf priority; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay : public ydk::Entity
{
    public:
        PaDoDelay();
        ~PaDoDelay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_; //type: uint32
        ydk::YLeaf circuit_id; //type: uint32
        ydk::YLeaf remote_id; //type: uint32
        class RemoteIdSubstrings; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings
        class RemoteIdStrings; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings
        class ServiceNameStrings; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings
        class CircuitIdSubstrings; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings
        class ServiceNameSubstrings; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings
        class CircuitIdStrings; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings> remote_id_substrings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings> remote_id_strings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings> service_name_strings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings> circuit_id_substrings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings> service_name_substrings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings> circuit_id_strings;
        
}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings : public ydk::Entity
{
    public:
        RemoteIdSubstrings();
        ~RemoteIdSubstrings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemoteIdSubstring; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstring

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstring> > remote_id_substring;
        
}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstring : public ydk::Entity
{
    public:
        RemoteIdSubstring();
        ~RemoteIdSubstring();

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
        ydk::YLeaf delay; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstring


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings : public ydk::Entity
{
    public:
        RemoteIdStrings();
        ~RemoteIdStrings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemoteIdString; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdString

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdString> > remote_id_string;
        
}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdString : public ydk::Entity
{
    public:
        RemoteIdString();
        ~RemoteIdString();

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
        ydk::YLeaf delay; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdString


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings : public ydk::Entity
{
    public:
        ServiceNameStrings();
        ~ServiceNameStrings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServiceNameString; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameString

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameString> > service_name_string;
        
}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameString : public ydk::Entity
{
    public:
        ServiceNameString();
        ~ServiceNameString();

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
        ydk::YLeaf delay; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameString


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings : public ydk::Entity
{
    public:
        CircuitIdSubstrings();
        ~CircuitIdSubstrings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CircuitIdSubstring; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstring

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstring> > circuit_id_substring;
        
}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstring : public ydk::Entity
{
    public:
        CircuitIdSubstring();
        ~CircuitIdSubstring();

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
        ydk::YLeaf delay; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstring


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings : public ydk::Entity
{
    public:
        ServiceNameSubstrings();
        ~ServiceNameSubstrings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ServiceNameSubstring; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstring

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstring> > service_name_substring;
        
}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstring : public ydk::Entity
{
    public:
        ServiceNameSubstring();
        ~ServiceNameSubstring();

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
        ydk::YLeaf delay; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstring


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings : public ydk::Entity
{
    public:
        CircuitIdStrings();
        ~CircuitIdStrings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class CircuitIdString; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdString

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdString> > circuit_id_string;
        
}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdString : public ydk::Entity
{
    public:
        CircuitIdString();
        ~CircuitIdString();

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
        ydk::YLeaf delay; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdString

class PppoeInvalidSessionIdBehavior : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf drop;
        static const ydk::Enum::YLeaf log;

};


}
}

#endif /* _CISCO_IOS_XR_SUBSCRIBER_PPPOE_MA_GBL_CFG_ */

