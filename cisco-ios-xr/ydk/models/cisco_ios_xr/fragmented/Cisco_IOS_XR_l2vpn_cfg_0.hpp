#ifndef _CISCO_IOS_XR_L2VPN_CFG_0_
#define _CISCO_IOS_XR_L2VPN_CFG_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_cfg {

class Evpn : public ydk::Entity
{
    public:
        Evpn();
        ~Evpn();

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

        ydk::YLeaf enable; //type: empty
        class EvpnTables; //type: Evpn::EvpnTables

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables> evpn_tables;
        
}; // Evpn


class Evpn::EvpnTables : public ydk::Entity
{
    public:
        EvpnTables();
        ~EvpnTables();

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

        ydk::YLeaf evi_cost_out; //type: empty
        ydk::YLeaf evpn_source_interface; //type: string
        ydk::YLeaf evpn_cost_in_startup; //type: uint32
        class EvpnTimers; //type: Evpn::EvpnTables::EvpnTimers
        class Evpnmac; //type: Evpn::EvpnTables::Evpnmac
        class Evpnevis; //type: Evpn::EvpnTables::Evpnevis
        class EvpnVirtualAccessVfis; //type: Evpn::EvpnTables::EvpnVirtualAccessVfis
        class EvpnLoadBalancing; //type: Evpn::EvpnTables::EvpnLoadBalancing
        class EvpnBgpAutoDiscovery; //type: Evpn::EvpnTables::EvpnBgpAutoDiscovery
        class EvpnInstances; //type: Evpn::EvpnTables::EvpnInstances
        class EvpnLogging; //type: Evpn::EvpnTables::EvpnLogging
        class EvpnInterfaces; //type: Evpn::EvpnTables::EvpnInterfaces
        class EvpnVirtualAccessPws; //type: Evpn::EvpnTables::EvpnVirtualAccessPws
        class EvpnEthernetSegment; //type: Evpn::EvpnTables::EvpnEthernetSegment

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnBgpAutoDiscovery> evpn_bgp_auto_discovery;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnEthernetSegment> evpn_ethernet_segment;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInstances> evpn_instances;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInterfaces> evpn_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnLoadBalancing> evpn_load_balancing;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnLogging> evpn_logging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnTimers> evpn_timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessPws> evpn_virtual_access_pws;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessVfis> evpn_virtual_access_vfis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis> evpnevis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnmac> evpnmac;
        
}; // Evpn::EvpnTables


class Evpn::EvpnTables::EvpnBgpAutoDiscovery : public ydk::Entity
{
    public:
        EvpnBgpAutoDiscovery();
        ~EvpnBgpAutoDiscovery();

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

        ydk::YLeaf enable; //type: empty
        class EvpnRouteDistinguisher; //type: Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher> evpn_route_distinguisher;
        
}; // Evpn::EvpnTables::EvpnBgpAutoDiscovery


class Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher : public ydk::Entity
{
    public:
        EvpnRouteDistinguisher();
        ~EvpnRouteDistinguisher();

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

        ydk::YLeaf type; //type: BgpRouteDistinguisher
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as_index; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf addr_index; //type: uint32

}; // Evpn::EvpnTables::EvpnBgpAutoDiscovery::EvpnRouteDistinguisher


class Evpn::EvpnTables::EvpnEthernetSegment : public ydk::Entity
{
    public:
        EvpnEthernetSegment();
        ~EvpnEthernetSegment();

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

        ydk::YLeaf enable; //type: empty
        class EvpnEsiTypes; //type: Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes> evpn_esi_types;
        
}; // Evpn::EvpnTables::EvpnEthernetSegment


class Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes : public ydk::Entity
{
    public:
        EvpnEsiTypes();
        ~EvpnEsiTypes();

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

        class EvpnEsiType; //type: Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType> > evpn_esi_type;
        
}; // Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes


class Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType : public ydk::Entity
{
    public:
        EvpnEsiType();
        ~EvpnEsiType();

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

        ydk::YLeaf esi_type; //type: uint32
        ydk::YLeaf disable_auto_generation; //type: empty

}; // Evpn::EvpnTables::EvpnEthernetSegment::EvpnEsiTypes::EvpnEsiType


class Evpn::EvpnTables::EvpnInstances : public ydk::Entity
{
    public:
        EvpnInstances();
        ~EvpnInstances();

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

        class EvpnInstance; //type: Evpn::EvpnTables::EvpnInstances::EvpnInstance

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInstances::EvpnInstance> > evpn_instance;
        
}; // Evpn::EvpnTables::EvpnInstances


class Evpn::EvpnTables::EvpnInstances::EvpnInstance : public ydk::Entity
{
    public:
        EvpnInstance();
        ~EvpnInstance();

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

        ydk::YLeaf eviid; //type: uint32
        ydk::YLeaf encapsulation; //type: EvpnEncapsulation
        ydk::YLeaf side; //type: EvpnSide
        ydk::YLeaf evi_reorig_disable; //type: empty
        ydk::YLeaf evi_advertise_mac_deprecated; //type: empty
        ydk::YLeaf evpnevi_description; //type: string
        ydk::YLeaf evi_unknown_unicast_flooding_disable; //type: empty
        ydk::YLeaf evpn_evi_cw_disable; //type: empty
        class EvpnInstanceBgpAutoDiscovery; //type: Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery
        class EvpnInstanceAdvertiseMac; //type: Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac
        class EvpnInstanceLoadBalancing; //type: Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac> evpn_instance_advertise_mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery> evpn_instance_bgp_auto_discovery;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing> evpn_instance_load_balancing;
        
}; // Evpn::EvpnTables::EvpnInstances::EvpnInstance


class Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac : public ydk::Entity
{
    public:
        EvpnInstanceAdvertiseMac();
        ~EvpnInstanceAdvertiseMac();

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
        ydk::YLeaf evi_advertise_mac_bvi; //type: empty

}; // Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceAdvertiseMac


class Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery : public ydk::Entity
{
    public:
        EvpnInstanceBgpAutoDiscovery();
        ~EvpnInstanceBgpAutoDiscovery();

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
        ydk::YLeaf table_policy; //type: string
        class EvpnRouteDistinguisher; //type: Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher
        class EvpnRouteTargets; //type: Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher> evpn_route_distinguisher;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets> evpn_route_targets;
        
}; // Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery


class Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher : public ydk::Entity
{
    public:
        EvpnRouteDistinguisher();
        ~EvpnRouteDistinguisher();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpRouteDistinguisher
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as_index; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf addr_index; //type: uint32

}; // Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteDistinguisher


class Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets : public ydk::Entity
{
    public:
        EvpnRouteTargets();
        ~EvpnRouteTargets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EvpnRouteTargetAs; //type: Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs
        class EvpnRouteTargetNone; //type: Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone
        class EvpnRouteTargetIpv4Address; //type: Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs> > evpn_route_target_as;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address> > evpn_route_target_ipv4_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone> > evpn_route_target_none;
        
}; // Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets


class Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs : public ydk::Entity
{
    public:
        EvpnRouteTargetAs();
        ~EvpnRouteTargetAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf format; //type: BgpRouteTargetFormat
        ydk::YLeaf role; //type: BgpRouteTargetRole
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as_index; //type: uint32
        ydk::YLeaf stitching; //type: BgpRouteTarget

}; // Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs


class Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address : public ydk::Entity
{
    public:
        EvpnRouteTargetIpv4Address();
        ~EvpnRouteTargetIpv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf format; //type: BgpRouteTargetFormat
        ydk::YLeaf role; //type: BgpRouteTargetRole
        ydk::YLeaf address; //type: string
        ydk::YLeaf addr_index; //type: uint32
        ydk::YLeaf stitching; //type: BgpRouteTarget

}; // Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address


class Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone : public ydk::Entity
{
    public:
        EvpnRouteTargetNone();
        ~EvpnRouteTargetNone();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf format; //type: BgpRouteTargetFormat
        ydk::YLeaf role; //type: BgpRouteTargetRole
        ydk::YLeaf stitching; //type: BgpRouteTarget

}; // Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceBgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone


class Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing : public ydk::Entity
{
    public:
        EvpnInstanceLoadBalancing();
        ~EvpnInstanceLoadBalancing();

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
        ydk::YLeaf evi_flow_label; //type: empty

}; // Evpn::EvpnTables::EvpnInstances::EvpnInstance::EvpnInstanceLoadBalancing


class Evpn::EvpnTables::EvpnInterfaces : public ydk::Entity
{
    public:
        EvpnInterfaces();
        ~EvpnInterfaces();

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

        class EvpnInterface; //type: Evpn::EvpnTables::EvpnInterfaces::EvpnInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInterfaces::EvpnInterface> > evpn_interface;
        
}; // Evpn::EvpnTables::EvpnInterfaces


class Evpn::EvpnTables::EvpnInterfaces::EvpnInterface : public ydk::Entity
{
    public:
        EvpnInterface();
        ~EvpnInterface();

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
        ydk::YLeaf mac_flush; //type: empty
        class EvpnacTimers; //type: Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers
        class EthernetSegment; //type: Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment> ethernet_segment;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers> evpnac_timers;
        
}; // Evpn::EvpnTables::EvpnInterfaces::EvpnInterface


class Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment : public ydk::Entity
{
    public:
        EthernetSegment();
        ~EthernetSegment();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf force_single_homed; //type: empty
        ydk::YLeaf load_balancing_single_active; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf backbone_source_mac; //type: string
        ydk::YLeaf es_import_route_target; //type: string
        class Identifier; //type: Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier
        class ManualServiceCarving; //type: Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier> identifier; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving> manual_service_carving;
        
}; // Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment


class Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier : public ydk::Entity
{
    public:
        Identifier();
        ~Identifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bytes01; //type: string
        ydk::YLeaf bytes23; //type: string
        ydk::YLeaf bytes45; //type: string
        ydk::YLeaf bytes67; //type: string
        ydk::YLeaf bytes89; //type: string
        ydk::YLeaf type; //type: EthernetSegmentIdentifier

}; // Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::Identifier


class Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving : public ydk::Entity
{
    public:
        ManualServiceCarving();
        ~ManualServiceCarving();

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
        class ServiceList; //type: Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList> service_list;
        
}; // Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving


class Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList : public ydk::Entity
{
    public:
        ServiceList();
        ~ServiceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf primary; //type: string
        ydk::YLeaf secondary; //type: string

}; // Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EthernetSegment::ManualServiceCarving::ServiceList


class Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers : public ydk::Entity
{
    public:
        EvpnacTimers();
        ~EvpnacTimers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evpnac_peering; //type: uint32
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf evpnac_recovery; //type: uint32

}; // Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers


class Evpn::EvpnTables::EvpnLoadBalancing : public ydk::Entity
{
    public:
        EvpnLoadBalancing();
        ~EvpnLoadBalancing();

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

        ydk::YLeaf evpn_flow_label; //type: empty
        ydk::YLeaf enable; //type: empty

}; // Evpn::EvpnTables::EvpnLoadBalancing


class Evpn::EvpnTables::EvpnLogging : public ydk::Entity
{
    public:
        EvpnLogging();
        ~EvpnLogging();

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

        ydk::YLeaf evpn_df_election; //type: empty
        ydk::YLeaf enable; //type: empty

}; // Evpn::EvpnTables::EvpnLogging


class Evpn::EvpnTables::EvpnTimers : public ydk::Entity
{
    public:
        EvpnTimers();
        ~EvpnTimers();

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

        ydk::YLeaf evpn_recovery; //type: uint32
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf evpn_peering; //type: uint32

}; // Evpn::EvpnTables::EvpnTimers


class Evpn::EvpnTables::EvpnVirtualAccessPws : public ydk::Entity
{
    public:
        EvpnVirtualAccessPws();
        ~EvpnVirtualAccessPws();

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

        class EvpnVirtualAccessPw; //type: Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw> > evpn_virtual_access_pw;
        
}; // Evpn::EvpnTables::EvpnVirtualAccessPws


class Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw : public ydk::Entity
{
    public:
        EvpnVirtualAccessPw();
        ~EvpnVirtualAccessPw();

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

        ydk::YLeaf neighbor; //type: string
        ydk::YLeaf pseudowire_id; //type: uint32
        class EvpnVirtualAccessPwTimers; //type: Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers
        class EvpnVirtualEthernetSegment; //type: Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers> evpn_virtual_access_pw_timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment> evpn_virtual_ethernet_segment;
        
}; // Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw


class Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers : public ydk::Entity
{
    public:
        EvpnVirtualAccessPwTimers();
        ~EvpnVirtualAccessPwTimers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evpn_virtual_access_pw_recovery; //type: uint32
        ydk::YLeaf evpn_virtual_access_pw_peering; //type: uint32
        ydk::YLeaf enable; //type: empty

}; // Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers


class Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment : public ydk::Entity
{
    public:
        EvpnVirtualEthernetSegment();
        ~EvpnVirtualEthernetSegment();

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
        ydk::YLeaf es_import_route_target; //type: string
        class Identifier; //type: Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier
        class ManualServiceCarving; //type: Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier> identifier; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving> manual_service_carving;
        
}; // Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment


class Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier : public ydk::Entity
{
    public:
        Identifier();
        ~Identifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bytes01; //type: string
        ydk::YLeaf bytes23; //type: string
        ydk::YLeaf bytes45; //type: string
        ydk::YLeaf bytes67; //type: string
        ydk::YLeaf bytes89; //type: string
        ydk::YLeaf type; //type: EthernetSegmentIdentifier

}; // Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier


class Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving : public ydk::Entity
{
    public:
        ManualServiceCarving();
        ~ManualServiceCarving();

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
        class ServiceList; //type: Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList> service_list;
        
}; // Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving


class Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList : public ydk::Entity
{
    public:
        ServiceList();
        ~ServiceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf primary; //type: string
        ydk::YLeaf secondary; //type: string

}; // Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList


class Evpn::EvpnTables::EvpnVirtualAccessVfis : public ydk::Entity
{
    public:
        EvpnVirtualAccessVfis();
        ~EvpnVirtualAccessVfis();

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

        class EvpnVirtualAccessVfi; //type: Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi> > evpn_virtual_access_vfi;
        
}; // Evpn::EvpnTables::EvpnVirtualAccessVfis


class Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi : public ydk::Entity
{
    public:
        EvpnVirtualAccessVfi();
        ~EvpnVirtualAccessVfi();

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
        class EvpnVirtualAccessVfiTimers; //type: Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers
        class EvpnVirtualEthernetSegment; //type: Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers> evpn_virtual_access_vfi_timers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment> evpn_virtual_ethernet_segment;
        
}; // Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi


class Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers : public ydk::Entity
{
    public:
        EvpnVirtualAccessVfiTimers();
        ~EvpnVirtualAccessVfiTimers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf evpn_virtual_access_vfi_recovery; //type: uint32
        ydk::YLeaf evpn_virtual_access_vfi_peering; //type: uint32
        ydk::YLeaf enable; //type: empty

}; // Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers


class Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment : public ydk::Entity
{
    public:
        EvpnVirtualEthernetSegment();
        ~EvpnVirtualEthernetSegment();

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
        ydk::YLeaf es_import_route_target; //type: string
        class Identifier; //type: Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier
        class ManualServiceCarving; //type: Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier> identifier; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving> manual_service_carving;
        
}; // Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment


class Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier : public ydk::Entity
{
    public:
        Identifier();
        ~Identifier();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bytes01; //type: string
        ydk::YLeaf bytes23; //type: string
        ydk::YLeaf bytes45; //type: string
        ydk::YLeaf bytes67; //type: string
        ydk::YLeaf bytes89; //type: string
        ydk::YLeaf type; //type: EthernetSegmentIdentifier

}; // Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier


class Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving : public ydk::Entity
{
    public:
        ManualServiceCarving();
        ~ManualServiceCarving();

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
        class ServiceList; //type: Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList> service_list;
        
}; // Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving


class Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList : public ydk::Entity
{
    public:
        ServiceList();
        ~ServiceList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf primary; //type: string
        ydk::YLeaf secondary; //type: string

}; // Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::ManualServiceCarving::ServiceList


class Evpn::EvpnTables::Evpnevis : public ydk::Entity
{
    public:
        Evpnevis();
        ~Evpnevis();

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

        class Evpnevi; //type: Evpn::EvpnTables::Evpnevis::Evpnevi

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi> > evpnevi;
        
}; // Evpn::EvpnTables::Evpnevis


class Evpn::EvpnTables::Evpnevis::Evpnevi : public ydk::Entity
{
    public:
        Evpnevi();
        ~Evpnevi();

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

        ydk::YLeaf eviid; //type: uint32
        ydk::YLeaf evi_reorig_disable; //type: empty
        ydk::YLeaf evi_advertise_mac_deprecated; //type: empty
        ydk::YLeaf evpnevi_description; //type: string
        ydk::YLeaf evi_unknown_unicast_flooding_disable; //type: empty
        ydk::YLeaf evpn_evi_cw_disable; //type: empty
        class EviLoadBalancing; //type: Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing
        class EvpnevIbgpAutoDiscovery; //type: Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery
        class EviAdvertiseMac; //type: Evpn::EvpnTables::Evpnevis::Evpnevi::EviAdvertiseMac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EviAdvertiseMac> evi_advertise_mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing> evi_load_balancing;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery> evpnev_ibgp_auto_discovery;
        
}; // Evpn::EvpnTables::Evpnevis::Evpnevi


class Evpn::EvpnTables::Evpnevis::Evpnevi::EviAdvertiseMac : public ydk::Entity
{
    public:
        EviAdvertiseMac();
        ~EviAdvertiseMac();

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
        ydk::YLeaf evi_advertise_mac_bvi; //type: empty

}; // Evpn::EvpnTables::Evpnevis::Evpnevi::EviAdvertiseMac


class Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing : public ydk::Entity
{
    public:
        EviLoadBalancing();
        ~EviLoadBalancing();

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
        ydk::YLeaf evi_flow_label; //type: empty

}; // Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing


class Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery : public ydk::Entity
{
    public:
        EvpnevIbgpAutoDiscovery();
        ~EvpnevIbgpAutoDiscovery();

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
        ydk::YLeaf table_policy; //type: string
        class EvpnRouteDistinguisher; //type: Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteDistinguisher
        class EvpnRouteTargets; //type: Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteDistinguisher> evpn_route_distinguisher;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets> evpn_route_targets;
        
}; // Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery


class Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteDistinguisher : public ydk::Entity
{
    public:
        EvpnRouteDistinguisher();
        ~EvpnRouteDistinguisher();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: BgpRouteDistinguisher
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as_index; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf addr_index; //type: uint32

}; // Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteDistinguisher


class Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets : public ydk::Entity
{
    public:
        EvpnRouteTargets();
        ~EvpnRouteTargets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class EvpnRouteTargetAs; //type: Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs
        class EvpnRouteTargetNone; //type: Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone
        class EvpnRouteTargetIpv4Address; //type: Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs> > evpn_route_target_as;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address> > evpn_route_target_ipv4_address;
        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone> > evpn_route_target_none;
        
}; // Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets


class Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs : public ydk::Entity
{
    public:
        EvpnRouteTargetAs();
        ~EvpnRouteTargetAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf format; //type: BgpRouteTargetFormat
        ydk::YLeaf role; //type: BgpRouteTargetRole
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as_index; //type: uint32
        ydk::YLeaf stitching; //type: BgpRouteTarget

}; // Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs


class Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address : public ydk::Entity
{
    public:
        EvpnRouteTargetIpv4Address();
        ~EvpnRouteTargetIpv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf format; //type: BgpRouteTargetFormat
        ydk::YLeaf role; //type: BgpRouteTargetRole
        ydk::YLeaf address; //type: string
        ydk::YLeaf addr_index; //type: uint32
        ydk::YLeaf stitching; //type: BgpRouteTarget

}; // Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address


class Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone : public ydk::Entity
{
    public:
        EvpnRouteTargetNone();
        ~EvpnRouteTargetNone();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf format; //type: BgpRouteTargetFormat
        ydk::YLeaf role; //type: BgpRouteTargetRole
        ydk::YLeaf stitching; //type: BgpRouteTarget

}; // Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevIbgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone


class Evpn::EvpnTables::Evpnmac : public ydk::Entity
{
    public:
        Evpnmac();
        ~Evpnmac();

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

        ydk::YLeaf enable; //type: empty
        class EvpnmacSecure; //type: Evpn::EvpnTables::Evpnmac::EvpnmacSecure

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::Evpn::EvpnTables::Evpnmac::EvpnmacSecure> evpnmac_secure;
        
}; // Evpn::EvpnTables::Evpnmac


class Evpn::EvpnTables::Evpnmac::EvpnmacSecure : public ydk::Entity
{
    public:
        EvpnmacSecure();
        ~EvpnmacSecure();

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

        ydk::YLeaf evpnmac_secure_freeze_time; //type: uint32
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf evpnmac_secure_retry_count; //type: uint32
        ydk::YLeaf evpnmac_secure_move_count; //type: uint32
        ydk::YLeaf evpnmac_secure_move_interval; //type: uint32

}; // Evpn::EvpnTables::Evpnmac::EvpnmacSecure

class GenericInterfaceLists : public ydk::Entity
{
    public:
        GenericInterfaceLists();
        ~GenericInterfaceLists();

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

        class GenericInterface; //type: GenericInterfaceLists::GenericInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::GenericInterfaceLists::GenericInterface> > generic_interface;
        
}; // GenericInterfaceLists


class GenericInterfaceLists::GenericInterface : public ydk::Entity
{
    public:
        GenericInterface();
        ~GenericInterface();

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

        ydk::YLeaf generic_interface_list_name; //type: string
        ydk::YLeaf enable; //type: empty
        class Interfaces; //type: GenericInterfaceLists::GenericInterface::Interfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::GenericInterfaceLists::GenericInterface::Interfaces> interfaces;
        
}; // GenericInterfaceLists::GenericInterface


class GenericInterfaceLists::GenericInterface::Interfaces : public ydk::Entity
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

        class Interface; //type: GenericInterfaceLists::GenericInterface::Interfaces::Interface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::GenericInterfaceLists::GenericInterface::Interfaces::Interface> > interface;
        
}; // GenericInterfaceLists::GenericInterface::Interfaces


class GenericInterfaceLists::GenericInterface::Interfaces::Interface : public ydk::Entity
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

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf enable; //type: empty

}; // GenericInterfaceLists::GenericInterface::Interfaces::Interface

class L2Vpn : public ydk::Entity
{
    public:
        L2Vpn();
        ~L2Vpn();

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

        ydk::YLeaf nsr; //type: empty
        ydk::YLeaf mtu_mismatch_ignore; //type: empty
        ydk::YLeaf tcn_propagation; //type: empty
        ydk::YLeaf pwoam_refresh; //type: uint32
        ydk::YLeaf load_balance; //type: LoadBalance
        ydk::YLeaf mspw_description; //type: string
        ydk::YLeaf mac_limit_threshold; //type: uint32
        ydk::YLeaf pw_status_disable; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf pw_grouping; //type: empty
        ydk::YLeaf capability; //type: L2vpnCapabilityMode
        ydk::YLeaf l2vpn_router_id; //type: string
        class PwRouting; //type: L2Vpn::PwRouting
        class Neighbor; //type: L2Vpn::Neighbor
        class Database; //type: L2Vpn::Database
        class Pbb; //type: L2Vpn::Pbb
        class AutoDiscovery; //type: L2Vpn::AutoDiscovery
        class Utility; //type: L2Vpn::Utility
        class Snmp; //type: L2Vpn::Snmp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::AutoDiscovery> auto_discovery;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database> database;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Neighbor> neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Pbb> pbb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::PwRouting> pw_routing;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Snmp> snmp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Utility> utility;
        
}; // L2Vpn


class L2Vpn::AutoDiscovery : public ydk::Entity
{
    public:
        AutoDiscovery();
        ~AutoDiscovery();

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

        class BgpSignaling; //type: L2Vpn::AutoDiscovery::BgpSignaling

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::AutoDiscovery::BgpSignaling> bgp_signaling;
        
}; // L2Vpn::AutoDiscovery


class L2Vpn::AutoDiscovery::BgpSignaling : public ydk::Entity
{
    public:
        BgpSignaling();
        ~BgpSignaling();

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

        ydk::YLeaf mtu_mismatch_ignore; //type: empty

}; // L2Vpn::AutoDiscovery::BgpSignaling


class L2Vpn::Database : public ydk::Entity
{
    public:
        Database();
        ~Database();

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

        class G8032Rings; //type: L2Vpn::Database::G8032Rings
        class XconnectGroups; //type: L2Vpn::Database::XconnectGroups
        class BridgeDomainGroups; //type: L2Vpn::Database::BridgeDomainGroups
        class PseudowireClasses; //type: L2Vpn::Database::PseudowireClasses
        class FlexibleXconnectServiceTable; //type: L2Vpn::Database::FlexibleXconnectServiceTable
        class Redundancy; //type: L2Vpn::Database::Redundancy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups> bridge_domain_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable> flexible_xconnect_service_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings> g8032_rings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses> pseudowire_classes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::Redundancy> redundancy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups> xconnect_groups;
        
}; // L2Vpn::Database


class L2Vpn::Database::BridgeDomainGroups : public ydk::Entity
{
    public:
        BridgeDomainGroups();
        ~BridgeDomainGroups();

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

        class BridgeDomainGroup; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup> > bridge_domain_group;
        
}; // L2Vpn::Database::BridgeDomainGroups


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup : public ydk::Entity
{
    public:
        BridgeDomainGroup();
        ~BridgeDomainGroup();

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
        class BridgeDomains; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains> bridge_domains;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains : public ydk::Entity
{
    public:
        BridgeDomains();
        ~BridgeDomains();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BridgeDomain; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain> > bridge_domain;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain : public ydk::Entity
{
    public:
        BridgeDomain();
        ~BridgeDomain();

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
        ydk::YLeaf coupled_mode; //type: empty
        ydk::YLeaf shutdown; //type: empty
        ydk::YLeaf flooding_unknown_unicast; //type: empty
        ydk::YLeaf igmp_snooping_disable; //type: empty
        ydk::YLeaf transport_mode; //type: BridgeDomainTransportMode
        ydk::YLeaf mld_snooping; //type: string
        ydk::YLeaf bridge_domain_mtu; //type: uint32
        ydk::YLeaf dhcp; //type: string
        ydk::YLeaf bridge_description; //type: string
        ydk::YLeaf igmp_snooping; //type: string
        ydk::YLeaf flooding; //type: empty
        class BdStormControls; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls
        class MemberVnis; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis
        class BridgeDomainMac; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac
        class NvSatellite; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite
        class BridgeDomainPbb; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb
        class BridgeDomainEvis; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis
        class AccessVfis; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis
        class BdPseudowires; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires
        class Vfis; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis
        class BdAttachmentCircuits; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits
        class BdPseudowireEvpns; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns
        class IpSourceGuard; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard
        class Dai; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai
        class RoutedInterfaces; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis> access_vfis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits> bd_attachment_circuits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns> bd_pseudowire_evpns;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires> bd_pseudowires;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls> bd_storm_controls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis> bridge_domain_evis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac> bridge_domain_mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb> bridge_domain_pbb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai> dai;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard> ip_source_guard;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis> member_vnis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite> nv_satellite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces> routed_interfaces;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis> vfis;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis : public ydk::Entity
{
    public:
        AccessVfis();
        ~AccessVfis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessVfi; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi> > access_vfi;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi : public ydk::Entity
{
    public:
        AccessVfi();
        ~AccessVfi();

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
        ydk::YLeaf access_vfi_shutdown; //type: empty
        class AccessVfiPseudowires; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires> access_vfi_pseudowires;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires : public ydk::Entity
{
    public:
        AccessVfiPseudowires();
        ~AccessVfiPseudowires();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessVfiPseudowire; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire> > access_vfi_pseudowire;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire : public ydk::Entity
{
    public:
        AccessVfiPseudowire();
        ~AccessVfiPseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor; //type: string
        ydk::YLeaf pseudowire_id; //type: uint32
        ydk::YLeaf access_vfi_pw_class; //type: string
        class AccessVfiPseudowireStaticMacAddresses; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses> access_vfi_pseudowire_static_mac_addresses;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses : public ydk::Entity
{
    public:
        AccessVfiPseudowireStaticMacAddresses();
        ~AccessVfiPseudowireStaticMacAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessVfiPseudowireStaticMacAddress; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress> > access_vfi_pseudowire_static_mac_address;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress : public ydk::Entity
{
    public:
        AccessVfiPseudowireStaticMacAddress();
        ~AccessVfiPseudowireStaticMacAddress();

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

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits : public ydk::Entity
{
    public:
        BdAttachmentCircuits();
        ~BdAttachmentCircuits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BdAttachmentCircuit; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit> > bd_attachment_circuit;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit : public ydk::Entity
{
    public:
        BdAttachmentCircuit();
        ~BdAttachmentCircuit();

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
        ydk::YLeaf interface_flooding; //type: InterfaceTrafficFlood
        ydk::YLeaf interface_igmp_snoop; //type: string
        ydk::YLeaf interface_flooding_unknown_unicast; //type: InterfaceTrafficFlood
        ydk::YLeaf interface_mld_snoop; //type: string
        class InterfaceIpSourceGuard; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard
        class InterfaceDai; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai
        class InterfaceProfile; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile
        class BdacStormControlTypes; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes
        class SplitHorizon; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon
        class StaticMacAddresses; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses
        class InterfaceMac; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes> bdac_storm_control_types;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai> interface_dai;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard> interface_ip_source_guard;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac> interface_mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile> interface_profile;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon> split_horizon;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses> static_mac_addresses;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes : public ydk::Entity
{
    public:
        BdacStormControlTypes();
        ~BdacStormControlTypes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BdacStormControlType; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType> > bdac_storm_control_type;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType : public ydk::Entity
{
    public:
        BdacStormControlType();
        ~BdacStormControlType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sctype; //type: StormControl
        class StormControlUnit; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit> storm_control_unit;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit : public ydk::Entity
{
    public:
        StormControlUnit();
        ~StormControlUnit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf kbits_per_sec; //type: uint32
        ydk::YLeaf pkts_per_sec; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai : public ydk::Entity
{
    public:
        InterfaceDai();
        ~InterfaceDai();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: L2vpnLogging
        ydk::YLeaf disable; //type: empty
        ydk::YLeaf enable; //type: empty
        class InterfaceDaiAddressValidation; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation> interface_dai_address_validation;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation : public ydk::Entity
{
    public:
        InterfaceDaiAddressValidation();
        ~InterfaceDaiAddressValidation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_verification; //type: L2vpnVerification
        ydk::YLeaf destination_mac_verification; //type: L2vpnVerification
        ydk::YLeaf source_mac_verification; //type: L2vpnVerification
        ydk::YLeaf enable; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard : public ydk::Entity
{
    public:
        InterfaceIpSourceGuard();
        ~InterfaceIpSourceGuard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: L2vpnLogging
        ydk::YLeaf disable; //type: empty
        ydk::YLeaf enable; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac : public ydk::Entity
{
    public:
        InterfaceMac();
        ~InterfaceMac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_mac_port_down_flush; //type: PortDownFlush
        ydk::YLeaf interface_mac_learning; //type: MacLearn
        class InterfaceMacAging; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging
        class InterfaceMacSecure; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure
        class InterfaceMacLimit; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging> interface_mac_aging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit> interface_mac_limit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure> interface_mac_secure;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging : public ydk::Entity
{
    public:
        InterfaceMacAging();
        ~InterfaceMacAging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_mac_aging_time; //type: uint32
        ydk::YLeaf interface_mac_aging_type; //type: MacAging

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit : public ydk::Entity
{
    public:
        InterfaceMacLimit();
        ~InterfaceMacLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_mac_limit_max; //type: uint32
        ydk::YLeaf interface_mac_limit_notif; //type: MacNotification
        ydk::YLeaf interface_mac_limit_action; //type: MacLimitAction

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure : public ydk::Entity
{
    public:
        InterfaceMacSecure();
        ~InterfaceMacSecure();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: L2vpnLogging
        ydk::YLeaf disable; //type: empty
        ydk::YLeaf action; //type: MacSecureAction
        ydk::YLeaf enable; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile : public ydk::Entity
{
    public:
        InterfaceProfile();
        ~InterfaceProfile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_id; //type: InterfaceProfile
        ydk::YLeaf dhcp_snooping_id; //type: string

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon : public ydk::Entity
{
    public:
        SplitHorizon();
        ~SplitHorizon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SplitHorizonGroupId; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId> split_horizon_group_id;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId : public ydk::Entity
{
    public:
        SplitHorizonGroupId();
        ~SplitHorizonGroupId();

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

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses : public ydk::Entity
{
    public:
        StaticMacAddresses();
        ~StaticMacAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class StaticMacAddress; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress> > static_mac_address;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress : public ydk::Entity
{
    public:
        StaticMacAddress();
        ~StaticMacAddress();

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

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns : public ydk::Entity
{
    public:
        BdPseudowireEvpns();
        ~BdPseudowireEvpns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BdPseudowireEvpn; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn> > bd_pseudowire_evpn;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn : public ydk::Entity
{
    public:
        BdPseudowireEvpn();
        ~BdPseudowireEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eviid; //type: uint32
        ydk::YLeaf acid; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires : public ydk::Entity
{
    public:
        BdPseudowires();
        ~BdPseudowires();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BdPseudowire; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire> > bd_pseudowire;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire : public ydk::Entity
{
    public:
        BdPseudowire();
        ~BdPseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor; //type: string
        ydk::YLeaf pseudowire_id; //type: uint32
        ydk::YLeaf pseudowire_mld_snoop; //type: string
        ydk::YLeaf pseudowire_igmp_snoop; //type: string
        ydk::YLeaf pseudowire_flooding; //type: InterfaceTrafficFlood
        ydk::YLeaf bd_pw_class; //type: string
        ydk::YLeaf pseudowire_flooding_unknown_unicast; //type: InterfaceTrafficFlood
        class PseudowireDai; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai
        class BdpwStormControlTypes; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes
        class PseudowireProfile; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile
        class BdPwStaticMacAddresses; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses
        class PseudowireIpSourceGuard; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard
        class PseudowireMac; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac
        class BdPwSplitHorizon; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon
        class BdPwMplsStaticLabels; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels
        class BridgeDomainBackupPseudowires; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels> bd_pw_mpls_static_labels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon> bd_pw_split_horizon;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses> bd_pw_static_mac_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes> bdpw_storm_control_types;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires> bridge_domain_backup_pseudowires;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai> pseudowire_dai;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard> pseudowire_ip_source_guard;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac> pseudowire_mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile> pseudowire_profile;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels : public ydk::Entity
{
    public:
        BdPwMplsStaticLabels();
        ~BdPwMplsStaticLabels();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_static_label; //type: uint32
        ydk::YLeaf remote_static_label; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon : public ydk::Entity
{
    public:
        BdPwSplitHorizon();
        ~BdPwSplitHorizon();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BdPwSplitHorizonGroup; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup> bd_pw_split_horizon_group;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup : public ydk::Entity
{
    public:
        BdPwSplitHorizonGroup();
        ~BdPwSplitHorizonGroup();

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

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses : public ydk::Entity
{
    public:
        BdPwStaticMacAddresses();
        ~BdPwStaticMacAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BdPwStaticMacAddress; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress> > bd_pw_static_mac_address;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress : public ydk::Entity
{
    public:
        BdPwStaticMacAddress();
        ~BdPwStaticMacAddress();

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

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes : public ydk::Entity
{
    public:
        BdpwStormControlTypes();
        ~BdpwStormControlTypes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BdpwStormControlType; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType> > bdpw_storm_control_type;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType : public ydk::Entity
{
    public:
        BdpwStormControlType();
        ~BdpwStormControlType();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sctype; //type: StormControl
        class StormControlUnit; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit> storm_control_unit;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit : public ydk::Entity
{
    public:
        StormControlUnit();
        ~StormControlUnit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf kbits_per_sec; //type: uint32
        ydk::YLeaf pkts_per_sec; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires : public ydk::Entity
{
    public:
        BridgeDomainBackupPseudowires();
        ~BridgeDomainBackupPseudowires();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BridgeDomainBackupPseudowire; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire> > bridge_domain_backup_pseudowire;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire : public ydk::Entity
{
    public:
        BridgeDomainBackupPseudowire();
        ~BridgeDomainBackupPseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor; //type: string
        ydk::YLeaf pseudowire_id; //type: uint32
        ydk::YLeaf bridge_domain_backup_pw_class; //type: string

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai : public ydk::Entity
{
    public:
        PseudowireDai();
        ~PseudowireDai();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: L2vpnLogging
        ydk::YLeaf disable; //type: empty
        ydk::YLeaf enable; //type: empty
        class PseudowireDaiAddressValidation; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation> pseudowire_dai_address_validation;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation : public ydk::Entity
{
    public:
        PseudowireDaiAddressValidation();
        ~PseudowireDaiAddressValidation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_verification; //type: L2vpnVerification
        ydk::YLeaf destination_mac_verification; //type: L2vpnVerification
        ydk::YLeaf source_mac_verification; //type: L2vpnVerification

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard : public ydk::Entity
{
    public:
        PseudowireIpSourceGuard();
        ~PseudowireIpSourceGuard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: L2vpnLogging
        ydk::YLeaf disable; //type: empty
        ydk::YLeaf enable; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac : public ydk::Entity
{
    public:
        PseudowireMac();
        ~PseudowireMac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pseudowire_mac_port_down_flush; //type: PortDownFlush
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf pseudowire_mac_learning; //type: MacLearn
        class PseudowireMacSecure; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure
        class PseudowireMacAging; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging
        class PseudowireMacLimit; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging> pseudowire_mac_aging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit> pseudowire_mac_limit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure> pseudowire_mac_secure;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging : public ydk::Entity
{
    public:
        PseudowireMacAging();
        ~PseudowireMacAging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pseudowire_mac_aging_type; //type: MacAging
        ydk::YLeaf pseudowire_mac_aging_time; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit : public ydk::Entity
{
    public:
        PseudowireMacLimit();
        ~PseudowireMacLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pseudowire_mac_limit_action; //type: MacLimitAction
        ydk::YLeaf pseudowire_mac_limit_notif; //type: MacNotification
        ydk::YLeaf pseudowire_mac_limit_max; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure : public ydk::Entity
{
    public:
        PseudowireMacSecure();
        ~PseudowireMacSecure();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: L2vpnLogging
        ydk::YLeaf disable; //type: empty
        ydk::YLeaf action; //type: MacSecureAction
        ydk::YLeaf enable; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile : public ydk::Entity
{
    public:
        PseudowireProfile();
        ~PseudowireProfile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_id; //type: InterfaceProfile
        ydk::YLeaf dhcp_snooping_id; //type: string

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls : public ydk::Entity
{
    public:
        BdStormControls();
        ~BdStormControls();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BdStormControl; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl> > bd_storm_control;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl : public ydk::Entity
{
    public:
        BdStormControl();
        ~BdStormControl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sctype; //type: StormControl
        class StormControlUnit; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit> storm_control_unit;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit : public ydk::Entity
{
    public:
        StormControlUnit();
        ~StormControlUnit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf kbits_per_sec; //type: uint32
        ydk::YLeaf pkts_per_sec; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis : public ydk::Entity
{
    public:
        BridgeDomainEvis();
        ~BridgeDomainEvis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BridgeDomainEvi; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi> > bridge_domain_evi;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi : public ydk::Entity
{
    public:
        BridgeDomainEvi();
        ~BridgeDomainEvi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eviid; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac : public ydk::Entity
{
    public:
        BridgeDomainMac();
        ~BridgeDomainMac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bd_mac_withdraw_relay; //type: empty
        ydk::YLeaf bd_mac_withdraw_access_pw_disable; //type: empty
        ydk::YLeaf bd_mac_port_down_flush; //type: empty
        ydk::YLeaf bd_mac_withdraw; //type: empty
        ydk::YLeaf bd_mac_withdraw_behavior; //type: MacWithdrawBehavior
        ydk::YLeaf bd_mac_learn; //type: BdmacLearn
        class BdMacLimit; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit
        class BdMacFilters; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters
        class MacSecure; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure
        class BdMacAging; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging> bd_mac_aging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters> bd_mac_filters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit> bd_mac_limit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure> mac_secure;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging : public ydk::Entity
{
    public:
        BdMacAging();
        ~BdMacAging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bd_mac_aging_type; //type: MacAging
        ydk::YLeaf bd_mac_aging_time; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters : public ydk::Entity
{
    public:
        BdMacFilters();
        ~BdMacFilters();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BdMacFilter; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter> > bd_mac_filter;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter : public ydk::Entity
{
    public:
        BdMacFilter();
        ~BdMacFilter();

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
        ydk::YLeaf drop; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit : public ydk::Entity
{
    public:
        BdMacLimit();
        ~BdMacLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bd_mac_limit_action; //type: MacLimitAction
        ydk::YLeaf bd_mac_limit_notif; //type: MacNotification
        ydk::YLeaf bd_mac_limit_max; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure : public ydk::Entity
{
    public:
        MacSecure();
        ~MacSecure();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: empty
        ydk::YLeaf action; //type: MacSecureAction
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf threshold; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb : public ydk::Entity
{
    public:
        BridgeDomainPbb();
        ~BridgeDomainPbb();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PbbEdges; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges
        class PbbCore; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore> pbb_core;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges> pbb_edges;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore : public ydk::Entity
{
    public:
        PbbCore();
        ~PbbCore();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pbb_core_mmrp_flood_optimization; //type: empty
        ydk::YLeaf vlan_id; //type: uint32
        ydk::YLeaf pbb_core_igmp_profile; //type: string
        ydk::YLeaf enable; //type: empty
        class PbbCoreMac; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac
        class PbbCoreEvis; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis
        class PbbCoreDhcpProfile; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile> pbb_core_dhcp_profile;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis> pbb_core_evis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac> pbb_core_mac;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile : public ydk::Entity
{
    public:
        PbbCoreDhcpProfile();
        ~PbbCoreDhcpProfile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_id; //type: InterfaceProfile
        ydk::YLeaf dhcp_snooping_id; //type: string

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis : public ydk::Entity
{
    public:
        PbbCoreEvis();
        ~PbbCoreEvis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PbbCoreEvi; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi> > pbb_core_evi;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi : public ydk::Entity
{
    public:
        PbbCoreEvi();
        ~PbbCoreEvi();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eviid; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac : public ydk::Entity
{
    public:
        PbbCoreMac();
        ~PbbCoreMac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pbb_core_mac_learning; //type: MacLearn
        class PbbCoreMacAging; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging
        class PbbCoreMacLimit; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging> pbb_core_mac_aging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit> pbb_core_mac_limit;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging : public ydk::Entity
{
    public:
        PbbCoreMacAging();
        ~PbbCoreMacAging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pbb_core_mac_aging_type; //type: MacAging
        ydk::YLeaf pbb_core_mac_aging_time; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit : public ydk::Entity
{
    public:
        PbbCoreMacLimit();
        ~PbbCoreMacLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pbb_core_mac_limit_max; //type: uint32
        ydk::YLeaf pbb_core_mac_limit_notif; //type: MacNotification
        ydk::YLeaf pbb_core_mac_limit_action; //type: MacLimitAction

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges : public ydk::Entity
{
    public:
        PbbEdges();
        ~PbbEdges();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PbbEdge; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge> > pbb_edge;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge : public ydk::Entity
{
    public:
        PbbEdge();
        ~PbbEdge();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf isid; //type: uint32
        ydk::YLeaf core_bd_name; //type: string
        ydk::YLeaf pbb_edge_igmp_profile; //type: string
        ydk::YLeaf unknown_unicast_bmac; //type: string
        class PbbEdgeSplitHorizonGroup; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup
        class PbbStaticMacMappings; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings
        class PbbEdgeDhcpProfile; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile
        class PbbEdgeMac; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile> pbb_edge_dhcp_profile;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac> pbb_edge_mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup> pbb_edge_split_horizon_group;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings> pbb_static_mac_mappings;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile : public ydk::Entity
{
    public:
        PbbEdgeDhcpProfile();
        ~PbbEdgeDhcpProfile();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_id; //type: InterfaceProfile
        ydk::YLeaf dhcp_snooping_id; //type: string

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac : public ydk::Entity
{
    public:
        PbbEdgeMac();
        ~PbbEdgeMac();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pbb_edge_mac_learning; //type: MacLearn
        class PbbEdgeMacLimit; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit
        class PbbEdgeMacAging; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging
        class PbbEdgeMacSecure; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging> pbb_edge_mac_aging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit> pbb_edge_mac_limit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure> pbb_edge_mac_secure;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging : public ydk::Entity
{
    public:
        PbbEdgeMacAging();
        ~PbbEdgeMacAging();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pbb_edge_mac_aging_type; //type: MacAging
        ydk::YLeaf pbb_edge_mac_aging_time; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit : public ydk::Entity
{
    public:
        PbbEdgeMacLimit();
        ~PbbEdgeMacLimit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pbb_edge_mac_limit_action; //type: MacLimitAction
        ydk::YLeaf pbb_edge_mac_limit_max; //type: uint32
        ydk::YLeaf pbb_edge_mac_limit_notif; //type: MacNotification

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure : public ydk::Entity
{
    public:
        PbbEdgeMacSecure();
        ~PbbEdgeMacSecure();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: L2vpnLogging
        ydk::YLeaf disable; //type: empty
        ydk::YLeaf action; //type: MacSecureAction
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf accept_shutdown; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup : public ydk::Entity
{
    public:
        PbbEdgeSplitHorizonGroup();
        ~PbbEdgeSplitHorizonGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings : public ydk::Entity
{
    public:
        PbbStaticMacMappings();
        ~PbbStaticMacMappings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PbbStaticMacMapping; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping> > pbb_static_mac_mapping;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping : public ydk::Entity
{
    public:
        PbbStaticMacMapping();
        ~PbbStaticMacMapping();

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
        ydk::YLeaf pbb_static_mac_mapping_bmac; //type: string

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai : public ydk::Entity
{
    public:
        Dai();
        ~Dai();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: empty
        ydk::YLeaf enable; //type: empty
        class DaiAddressValidation; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation> dai_address_validation;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation : public ydk::Entity
{
    public:
        DaiAddressValidation();
        ~DaiAddressValidation();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_verification; //type: empty
        ydk::YLeaf destination_mac_verification; //type: empty
        ydk::YLeaf source_mac_verification; //type: empty
        ydk::YLeaf enable; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard : public ydk::Entity
{
    public:
        IpSourceGuard();
        ~IpSourceGuard();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: empty
        ydk::YLeaf enable; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis : public ydk::Entity
{
    public:
        MemberVnis();
        ~MemberVnis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MemberVni; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni> > member_vni;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni : public ydk::Entity
{
    public:
        MemberVni();
        ~MemberVni();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vni; //type: uint32
        class MemberVniStaticMacAddresses; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses> member_vni_static_mac_addresses;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses : public ydk::Entity
{
    public:
        MemberVniStaticMacAddresses();
        ~MemberVniStaticMacAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MemberVniStaticMacAddress; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress> > member_vni_static_mac_address;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress : public ydk::Entity
{
    public:
        MemberVniStaticMacAddress();
        ~MemberVniStaticMacAddress();

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
        ydk::YLeaf next_hop_ip; //type: string

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite : public ydk::Entity
{
    public:
        NvSatellite();
        ~NvSatellite();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf offload_ipv4_multicast_enable; //type: empty
        ydk::YLeaf enable; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces : public ydk::Entity
{
    public:
        RoutedInterfaces();
        ~RoutedInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RoutedInterface; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface> > routed_interface;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface : public ydk::Entity
{
    public:
        RoutedInterface();
        ~RoutedInterface();

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
        class RoutedInterfaceSplitHorizonGroup; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup> routed_interface_split_horizon_group;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup : public ydk::Entity
{
    public:
        RoutedInterfaceSplitHorizonGroup();
        ~RoutedInterfaceSplitHorizonGroup();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf routed_interface_split_horizon_group_core; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup

class BgpRouteTarget : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_stitching;
        static const ydk::Enum::YLeaf stitching;

};

class BdmacLearn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable_learning;

};

class LdpVplsId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf two_byte_as;
        static const ydk::Enum::YLeaf ipv4_address;

};

class TypeOfServiceMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf reflect;

};

class StormControl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;
        static const ydk::Enum::YLeaf broadcast;

};

class PreferredPath : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf te_tunnel;
        static const ydk::Enum::YLeaf ip_tunnel;
        static const ydk::Enum::YLeaf tp_tunnel;
        static const ydk::Enum::YLeaf sr_te_policy;

};

class InterfaceTrafficFlood : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf traffic_flooding;
        static const ydk::Enum::YLeaf enable_flooding;
        static const ydk::Enum::YLeaf disable_flooding;

};

class MacWithdrawBehavior : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf legacy;
        static const ydk::Enum::YLeaf optimized;

};

class PwSwitchingPointTlv : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hide;

};

class ControlWord : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class L2Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vlan;
        static const ydk::Enum::YLeaf ethernet;

};

class L2vpnVerification : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class VccvVerification : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf lsp_ping;

};

class BgpRouteTargetFormat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf two_byte_as;
        static const ydk::Enum::YLeaf four_byte_as;
        static const ydk::Enum::YLeaf ipv4_address;
        static const ydk::Enum::YLeaf es_import;

};

class ErpPort : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf virtual_;
        static const ydk::Enum::YLeaf interface;

};

class EvpnEncapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf evpn_encapsulationvxlan;
        static const ydk::Enum::YLeaf evpn_encapsulation_mpls;

};

class EthernetSegmentIdentifier : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf type0;
        static const ydk::Enum::YLeaf legacy;
        static const ydk::Enum::YLeaf override;

};

class PortDownFlush : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf port_down_flush;
        static const ydk::Enum::YLeaf enable_port_down_flush;
        static const ydk::Enum::YLeaf disable_port_down_flush;

};

class MacLearn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_learning;
        static const ydk::Enum::YLeaf enable_learning;
        static const ydk::Enum::YLeaf disable_learning;

};

class TransportMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf vlan;
        static const ydk::Enum::YLeaf vlan_passthrough;

};

class MacAging : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absolute;
        static const ydk::Enum::YLeaf inactivity;

};

class RplRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf owner;
        static const ydk::Enum::YLeaf neighbor;
        static const ydk::Enum::YLeaf next_neighbor;

};

class MplsSignalingProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ldp;

};

class BgpRouteDistinguisher : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf two_byte_as;
        static const ydk::Enum::YLeaf four_byte_as;
        static const ydk::Enum::YLeaf ipv4_address;

};

class L2tpSignalingProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf l2tpv3;

};

class Interworking : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf ipv4;

};

class LoadBalance : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf source_dest_mac;
        static const ydk::Enum::YLeaf source_dest_ip;
        static const ydk::Enum::YLeaf pseudowire_label;

};

class BgpRouteTargetRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf import;
        static const ydk::Enum::YLeaf export_;

};

class L2tpCookieSize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf zero;
        static const ydk::Enum::YLeaf four;
        static const ydk::Enum::YLeaf eight;

};

class FlowLabelLoadBalance : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf transmit;
        static const ydk::Enum::YLeaf both;

};

class BackupDisable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;
        static const ydk::Enum::YLeaf delay;

};

class Erpaps : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interface;
        static const ydk::Enum::YLeaf bridge_domain;
        static const ydk::Enum::YLeaf xconnect;
        static const ydk::Enum::YLeaf none;

};

class ErpPort1 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf port0;
        static const ydk::Enum::YLeaf port1;

};

class L2tpv3Sequencing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf both;

};

class InterfaceProfile : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf snoop;
        static const ydk::Enum::YLeaf dhcp_protocol;

};

class L2vpnLogging : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class FlowLabelTlvCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_17;
        static const ydk::Enum::YLeaf disable;

};

class MplsSequencing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf transmit;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf both;

};

class MacSecureAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf restrict;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf shutdown;

};

class BridgeDomainTransportMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vlan_passthrough;

};

class MacLimitAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf flood;
        static const ydk::Enum::YLeaf no_flood;
        static const ydk::Enum::YLeaf shutdown;

};

class MacNotification : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_notif;
        static const ydk::Enum::YLeaf syslog;
        static const ydk::Enum::YLeaf trap;
        static const ydk::Enum::YLeaf syslog_snmp;

};

class EvpnSide : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf evpn_side_stitching;

};

class L2vpnCapabilityMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf high_mode;
        static const ydk::Enum::YLeaf single_mode;

};


}
}

#endif /* _CISCO_IOS_XR_L2VPN_CFG_0_ */

