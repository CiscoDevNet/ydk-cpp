#ifndef _CISCO_IOS_XR_SUBSCRIBER_PPPOE_MA_GBL_CFG_
#define _CISCO_IOS_XR_SUBSCRIBER_PPPOE_MA_GBL_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg {

class PppoeCfg : public Entity
{
    public:
        PppoeCfg();
        ~PppoeCfg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        YLeaf session_id_space_flat; //type: empty
        YLeaf in_flight_window; //type: uint32
        class PppoeBbaGroups; //type: PppoeCfg::PppoeBbaGroups

        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups> pppoe_bba_groups;
        
}; // PppoeCfg


class PppoeCfg::PppoeBbaGroups : public Entity
{
    public:
        PppoeBbaGroups();
        ~PppoeBbaGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PppoeBbaGroup; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup> > pppoe_bba_group;
        
}; // PppoeCfg::PppoeBbaGroups


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup : public Entity
{
    public:
        PppoeBbaGroup();
        ~PppoeBbaGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bba_group; //type: string
        YLeaf completion_timeout; //type: uint32
        YLeaf invalid_session_id; //type: PppoeInvalidSessionIdBehaviorEnum
        YLeaf enable_padt_after_shut_down; //type: empty
        YLeaf mtu; //type: uint32
        class Tag; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag
        class Sessions; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions
        class ControlPackets; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets
        class PaDoDelay; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay

        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets> control_packets;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay> pa_do_delay;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions> sessions;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag> tag;
        
}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag : public Entity
{
    public:
        Tag();
        ~Tag();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ppp_max_payload_deny; //type: empty
        YLeaf service_selection_disable; //type: empty
        YLeaf ac_name; //type: string
        class Padr; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr
        class ServiceNameConfigureds; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds
        class PppMaxPayload; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload

        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr> padr;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload> ppp_max_payload;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds> service_name_configureds;
        
}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr : public Entity
{
    public:
        Padr();
        ~Padr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_unique_relay_session_id; //type: empty
        YLeaf invalid_payload_allow; //type: empty

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::Padr


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds : public Entity
{
    public:
        ServiceNameConfigureds();
        ~ServiceNameConfigureds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServiceNameConfigured; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigured

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigured> > service_name_configured;
        
}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigured : public Entity
{
    public:
        ServiceNameConfigured();
        ~ServiceNameConfigured();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::ServiceNameConfigureds::ServiceNameConfigured


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload : public Entity
{
    public:
        PppMaxPayload();
        ~PppMaxPayload();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint32
        YLeaf max; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Tag::PppMaxPayload


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions : public Entity
{
    public:
        Sessions();
        ~Sessions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

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

        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::AccessInterfaceLimit> access_interface_limit; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdLimit> circuit_id_and_remote_id_limit; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle> circuit_id_and_remote_id_throttle; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdLimit> circuit_id_limit; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle> circuit_id_throttle; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanLimit> inner_vlan_limit; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle> inner_vlan_throttle; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceLimit> mac_access_interface_limit; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle> mac_access_interface_throttle; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceLimit> mac_iwf_access_interface_limit; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle> mac_iwf_access_interface_throttle; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfLimit> mac_iwf_limit; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacLimit> mac_limit; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle> mac_throttle; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MaxLimit> max_limit; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanLimit> outer_vlan_limit; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle> outer_vlan_throttle; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdLimit> remote_id_limit; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle> remote_id_throttle; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanLimit> vlan_limit; // presence node
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle> vlan_throttle; // presence node
        
}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle : public Entity
{
    public:
        VlanThrottle();
        ~VlanThrottle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf throttle; //type: uint32
        YLeaf request_period; //type: uint32
        YLeaf blocking_period; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanThrottle


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle : public Entity
{
    public:
        InnerVlanThrottle();
        ~InnerVlanThrottle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf throttle; //type: uint32
        YLeaf request_period; //type: uint32
        YLeaf blocking_period; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanThrottle


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdLimit : public Entity
{
    public:
        RemoteIdLimit();
        ~RemoteIdLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf threshold; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdLimit


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle : public Entity
{
    public:
        MacIwfAccessInterfaceThrottle();
        ~MacIwfAccessInterfaceThrottle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf throttle; //type: uint32
        YLeaf request_period; //type: uint32
        YLeaf blocking_period; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceThrottle


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::AccessInterfaceLimit : public Entity
{
    public:
        AccessInterfaceLimit();
        ~AccessInterfaceLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf threshold; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::AccessInterfaceLimit


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle : public Entity
{
    public:
        MacAccessInterfaceThrottle();
        ~MacAccessInterfaceThrottle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf throttle; //type: uint32
        YLeaf request_period; //type: uint32
        YLeaf blocking_period; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceThrottle


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanLimit : public Entity
{
    public:
        OuterVlanLimit();
        ~OuterVlanLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf threshold; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanLimit


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle : public Entity
{
    public:
        CircuitIdThrottle();
        ~CircuitIdThrottle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf throttle; //type: uint32
        YLeaf request_period; //type: uint32
        YLeaf blocking_period; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdThrottle


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacLimit : public Entity
{
    public:
        MacLimit();
        ~MacLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf threshold; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacLimit


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdLimit : public Entity
{
    public:
        CircuitIdLimit();
        ~CircuitIdLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf threshold; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdLimit


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfLimit : public Entity
{
    public:
        MacIwfLimit();
        ~MacIwfLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf threshold; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfLimit


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceLimit : public Entity
{
    public:
        MacIwfAccessInterfaceLimit();
        ~MacIwfAccessInterfaceLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf threshold; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacIwfAccessInterfaceLimit


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanLimit : public Entity
{
    public:
        InnerVlanLimit();
        ~InnerVlanLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf threshold; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::InnerVlanLimit


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle : public Entity
{
    public:
        OuterVlanThrottle();
        ~OuterVlanThrottle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf throttle; //type: uint32
        YLeaf request_period; //type: uint32
        YLeaf blocking_period; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::OuterVlanThrottle


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle : public Entity
{
    public:
        MacThrottle();
        ~MacThrottle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf throttle; //type: uint32
        YLeaf request_period; //type: uint32
        YLeaf blocking_period; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacThrottle


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdLimit : public Entity
{
    public:
        CircuitIdAndRemoteIdLimit();
        ~CircuitIdAndRemoteIdLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf threshold; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdLimit


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanLimit : public Entity
{
    public:
        VlanLimit();
        ~VlanLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf threshold; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::VlanLimit


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceLimit : public Entity
{
    public:
        MacAccessInterfaceLimit();
        ~MacAccessInterfaceLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf threshold; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MacAccessInterfaceLimit


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle : public Entity
{
    public:
        RemoteIdThrottle();
        ~RemoteIdThrottle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf throttle; //type: uint32
        YLeaf request_period; //type: uint32
        YLeaf blocking_period; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::RemoteIdThrottle


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MaxLimit : public Entity
{
    public:
        MaxLimit();
        ~MaxLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf limit; //type: uint32
        YLeaf threshold; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::MaxLimit


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle : public Entity
{
    public:
        CircuitIdAndRemoteIdThrottle();
        ~CircuitIdAndRemoteIdThrottle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf throttle; //type: uint32
        YLeaf request_period; //type: uint32
        YLeaf blocking_period; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::Sessions::CircuitIdAndRemoteIdThrottle


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets : public Entity
{
    public:
        ControlPackets();
        ~ControlPackets();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf priority; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::ControlPackets


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay : public Entity
{
    public:
        PaDoDelay();
        ~PaDoDelay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_; //type: uint32
        YLeaf circuit_id; //type: uint32
        YLeaf remote_id; //type: uint32
        class RemoteIdSubstrings; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings
        class RemoteIdStrings; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings
        class ServiceNameStrings; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings
        class CircuitIdSubstrings; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings
        class ServiceNameSubstrings; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings
        class CircuitIdStrings; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings

        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings> circuit_id_strings;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings> circuit_id_substrings;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings> remote_id_strings;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings> remote_id_substrings;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings> service_name_strings;
        std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings> service_name_substrings;
        
}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings : public Entity
{
    public:
        RemoteIdSubstrings();
        ~RemoteIdSubstrings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RemoteIdSubstring; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstring

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstring> > remote_id_substring;
        
}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstring : public Entity
{
    public:
        RemoteIdSubstring();
        ~RemoteIdSubstring();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf delay; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdSubstrings::RemoteIdSubstring


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings : public Entity
{
    public:
        RemoteIdStrings();
        ~RemoteIdStrings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RemoteIdString; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdString

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdString> > remote_id_string;
        
}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdString : public Entity
{
    public:
        RemoteIdString();
        ~RemoteIdString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf delay; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::RemoteIdStrings::RemoteIdString


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings : public Entity
{
    public:
        ServiceNameStrings();
        ~ServiceNameStrings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServiceNameString; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameString

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameString> > service_name_string;
        
}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameString : public Entity
{
    public:
        ServiceNameString();
        ~ServiceNameString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf delay; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameStrings::ServiceNameString


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings : public Entity
{
    public:
        CircuitIdSubstrings();
        ~CircuitIdSubstrings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CircuitIdSubstring; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstring

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstring> > circuit_id_substring;
        
}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstring : public Entity
{
    public:
        CircuitIdSubstring();
        ~CircuitIdSubstring();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf delay; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdSubstrings::CircuitIdSubstring


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings : public Entity
{
    public:
        ServiceNameSubstrings();
        ~ServiceNameSubstrings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServiceNameSubstring; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstring

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstring> > service_name_substring;
        
}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstring : public Entity
{
    public:
        ServiceNameSubstring();
        ~ServiceNameSubstring();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf delay; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::ServiceNameSubstrings::ServiceNameSubstring


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings : public Entity
{
    public:
        CircuitIdStrings();
        ~CircuitIdStrings();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CircuitIdString; //type: PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdString

        std::vector<std::shared_ptr<Cisco_IOS_XR_subscriber_pppoe_ma_gbl_cfg::PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdString> > circuit_id_string;
        
}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings


class PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdString : public Entity
{
    public:
        CircuitIdString();
        ~CircuitIdString();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf delay; //type: uint32

}; // PppoeCfg::PppoeBbaGroups::PppoeBbaGroup::PaDoDelay::CircuitIdStrings::CircuitIdString

class PppoeInvalidSessionIdBehaviorEnum : public Enum
{
    public:
        static const Enum::YLeaf drop;
        static const Enum::YLeaf log;

};


}
}

#endif /* _CISCO_IOS_XR_SUBSCRIBER_PPPOE_MA_GBL_CFG_ */

