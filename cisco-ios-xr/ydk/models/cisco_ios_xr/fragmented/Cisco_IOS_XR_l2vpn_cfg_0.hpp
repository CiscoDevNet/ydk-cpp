#ifndef _CISCO_IOS_XR_L2VPN_CFG_0_
#define _CISCO_IOS_XR_L2VPN_CFG_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_cfg {

class L2vpn : public ydk::Entity
{
    public:
        L2vpn();
        ~L2vpn();

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
        class PwRouting; //type: L2vpn::PwRouting
        class Neighbor; //type: L2vpn::Neighbor
        class Database; //type: L2vpn::Database
        class Pbb; //type: L2vpn::Pbb
        class AutoDiscovery; //type: L2vpn::AutoDiscovery
        class Utility; //type: L2vpn::Utility
        class Snmp; //type: L2vpn::Snmp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::PwRouting> pw_routing;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Neighbor> neighbor;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database> database;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Pbb> pbb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::AutoDiscovery> auto_discovery;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Utility> utility;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Snmp> snmp;
        
}; // L2vpn


class L2vpn::PwRouting : public ydk::Entity
{
    public:
        PwRouting();
        ~PwRouting();

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

        ydk::YLeaf pw_routing_global_id; //type: uint32
        class PwRoutingBgp; //type: L2vpn::PwRouting::PwRoutingBgp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::PwRouting::PwRoutingBgp> pw_routing_bgp;
        
}; // L2vpn::PwRouting


class L2vpn::PwRouting::PwRoutingBgp : public ydk::Entity
{
    public:
        PwRoutingBgp();
        ~PwRoutingBgp();

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
        class EvpnRouteDistinguisher; //type: L2vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher> evpn_route_distinguisher;
        
}; // L2vpn::PwRouting::PwRoutingBgp


class L2vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher : public ydk::Entity
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

}; // L2vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher


class L2vpn::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

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

        ydk::YLeaf ldp_flap; //type: empty

}; // L2vpn::Neighbor


class L2vpn::Database : public ydk::Entity
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

        class G8032Rings; //type: L2vpn::Database::G8032Rings
        class XconnectGroups; //type: L2vpn::Database::XconnectGroups
        class BridgeDomainGroups; //type: L2vpn::Database::BridgeDomainGroups
        class PseudowireClasses; //type: L2vpn::Database::PseudowireClasses
        class VlanSwitches; //type: L2vpn::Database::VlanSwitches
        class FlexibleXconnectServiceTable; //type: L2vpn::Database::FlexibleXconnectServiceTable
        class Redundancy; //type: L2vpn::Database::Redundancy

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::G8032Rings> g8032_rings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups> xconnect_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups> bridge_domain_groups;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::PseudowireClasses> pseudowire_classes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::VlanSwitches> vlan_switches;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::FlexibleXconnectServiceTable> flexible_xconnect_service_table;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::Redundancy> redundancy;
        
}; // L2vpn::Database


class L2vpn::Database::G8032Rings : public ydk::Entity
{
    public:
        G8032Rings();
        ~G8032Rings();

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

        class G8032Ring; //type: L2vpn::Database::G8032Rings::G8032Ring

        ydk::YList g8032_ring;
        
}; // L2vpn::Database::G8032Rings


class L2vpn::Database::G8032Rings::G8032Ring : public ydk::Entity
{
    public:
        G8032Ring();
        ~G8032Ring();

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

        ydk::YLeaf g8032_ring_name; //type: string
        ydk::YLeaf open_ring; //type: empty
        ydk::YLeaf exclusion_list; //type: string
        ydk::YLeaf erp_provider_bridge; //type: empty
        class ErpPort0s; //type: L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s
        class ErpInstances; //type: L2vpn::Database::G8032Rings::G8032Ring::ErpInstances
        class ErpPort1s; //type: L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s> erp_port0s;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::G8032Rings::G8032Ring::ErpInstances> erp_instances;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s> erp_port1s;
        
}; // L2vpn::Database::G8032Rings::G8032Ring


class L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s : public ydk::Entity
{
    public:
        ErpPort0s();
        ~ErpPort0s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ErpPort0; //type: L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s::ErpPort0

        ydk::YList erp_port0;
        
}; // L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s


class L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s::ErpPort0 : public ydk::Entity
{
    public:
        ErpPort0();
        ~ErpPort0();

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
        ydk::YLeaf monitor; //type: string

}; // L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s::ErpPort0


class L2vpn::Database::G8032Rings::G8032Ring::ErpInstances : public ydk::Entity
{
    public:
        ErpInstances();
        ~ErpInstances();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ErpInstance; //type: L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance

        ydk::YList erp_instance;
        
}; // L2vpn::Database::G8032Rings::G8032Ring::ErpInstances


class L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance : public ydk::Entity
{
    public:
        ErpInstance();
        ~ErpInstance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf erp_instance_id; //type: uint32
        ydk::YLeaf description; //type: string
        ydk::YLeaf inclusion_list; //type: string
        ydk::YLeaf profile; //type: string
        class Rpl; //type: L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl
        class Aps; //type: L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl> rpl;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps> aps;
        
}; // L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance


class L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl : public ydk::Entity
{
    public:
        Rpl();
        ~Rpl();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: ErpPort1
        ydk::YLeaf role; //type: RplRole

}; // L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl


class L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps : public ydk::Entity
{
    public:
        Aps();
        ~Aps();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port0; //type: string
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf level; //type: uint32
        class Port1; //type: L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1> port1;
        
}; // L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps


class L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1 : public ydk::Entity
{
    public:
        Port1();
        ~Port1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aps_type; //type: Erpaps
        ydk::YLeaf aps_channel; //type: string

}; // L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1


class L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s : public ydk::Entity
{
    public:
        ErpPort1s();
        ~ErpPort1s();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ErpPort1; //type: L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1

        ydk::YList erp_port1;
        
}; // L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s


class L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1 : public ydk::Entity
{
    public:
        ErpPort1();
        ~ErpPort1();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf erp_port_type; //type: ErpPort
        class NoneOrVirtual; //type: L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::NoneOrVirtual
        class Interface; //type: L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::Interface

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::NoneOrVirtual> none_or_virtual; // presence node
        ydk::YList interface;
        
}; // L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1


class L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::NoneOrVirtual : public ydk::Entity
{
    public:
        NoneOrVirtual();
        ~NoneOrVirtual();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf monitor; //type: string

}; // L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::NoneOrVirtual


class L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::Interface : public ydk::Entity
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
        ydk::YLeaf monitor; //type: string

}; // L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::Interface


class L2vpn::Database::XconnectGroups : public ydk::Entity
{
    public:
        XconnectGroups();
        ~XconnectGroups();

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

        class XconnectGroup; //type: L2vpn::Database::XconnectGroups::XconnectGroup

        ydk::YList xconnect_group;
        
}; // L2vpn::Database::XconnectGroups


class L2vpn::Database::XconnectGroups::XconnectGroup : public ydk::Entity
{
    public:
        XconnectGroup();
        ~XconnectGroup();

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
        class P2pXconnects; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects
        class Mp2mpXconnects; //type: L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects> p2p_xconnects;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects> mp2mp_xconnects;
        
}; // L2vpn::Database::XconnectGroups::XconnectGroup


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects : public ydk::Entity
{
    public:
        P2pXconnects();
        ~P2pXconnects();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class P2pXconnect; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect

        ydk::YList p2p_xconnect;
        
}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect : public ydk::Entity
{
    public:
        P2pXconnect();
        ~P2pXconnect();

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
        ydk::YLeaf p2p_description; //type: string
        ydk::YLeaf interworking; //type: Interworking
        class BackupAttachmentCircuits; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits
        class PseudowireEvpns; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns
        class Pseudowires; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires
        class MonitorSessions; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions
        class PseudowireRouteds; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds
        class AttachmentCircuits; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits> backup_attachment_circuits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns> pseudowire_evpns;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires> pseudowires;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions> monitor_sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds> pseudowire_routeds;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits> attachment_circuits;
        
}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits : public ydk::Entity
{
    public:
        BackupAttachmentCircuits();
        ~BackupAttachmentCircuits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BackupAttachmentCircuit; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit

        ydk::YList backup_attachment_circuit;
        
}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit : public ydk::Entity
{
    public:
        BackupAttachmentCircuit();
        ~BackupAttachmentCircuit();

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

}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns : public ydk::Entity
{
    public:
        PseudowireEvpns();
        ~PseudowireEvpns();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PseudowireEvpn; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns::PseudowireEvpn

        ydk::YList pseudowire_evpn;
        
}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns::PseudowireEvpn : public ydk::Entity
{
    public:
        PseudowireEvpn();
        ~PseudowireEvpn();

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
        ydk::YLeaf remote_acid; //type: uint32
        ydk::YLeaf source_acid; //type: uint32
        ydk::YLeaf class_; //type: string

}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns::PseudowireEvpn


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires : public ydk::Entity
{
    public:
        Pseudowires();
        ~Pseudowires();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pseudowire; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire

        ydk::YList pseudowire;
        
}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire : public ydk::Entity
{
    public:
        Pseudowire();
        ~Pseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pseudowire_id; //type: uint32
        class Neighbor; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor
        class PseudowireAddress; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress

        ydk::YList neighbor;
        ydk::YList pseudowire_address;
        
}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

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
        ydk::YLeaf tag_impose; //type: uint32
        ydk::YLeaf class_; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf bandwidth; //type: uint32
        class MplsStaticLabels; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels
        class BackupPseudowires; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires
        class L2tpStaticAttributes; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes
        class L2tpStatic; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStatic

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels> mpls_static_labels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires> backup_pseudowires;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes> l2tp_static_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStatic> l2tp_static;
        
}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels : public ydk::Entity
{
    public:
        MplsStaticLabels();
        ~MplsStaticLabels();

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

}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires : public ydk::Entity
{
    public:
        BackupPseudowires();
        ~BackupPseudowires();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BackupPseudowire; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire

        ydk::YList backup_pseudowire;
        
}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire : public ydk::Entity
{
    public:
        BackupPseudowire();
        ~BackupPseudowire();

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
        ydk::YLeaf backup_pw_class; //type: string
        class BackupMplsStaticLabels; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels> backup_mpls_static_labels;
        
}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels : public ydk::Entity
{
    public:
        BackupMplsStaticLabels();
        ~BackupMplsStaticLabels();

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

}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes : public ydk::Entity
{
    public:
        L2tpStaticAttributes();
        ~L2tpStaticAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2tp_remote_session_id; //type: uint32
        ydk::YLeaf l2tp_local_session_id; //type: uint32
        class L2tpRemoteCookie; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpRemoteCookie
        class L2tpSecondaryLocalCookie; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpSecondaryLocalCookie
        class L2tpLocalCookie; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpLocalCookie

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpRemoteCookie> l2tp_remote_cookie;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpSecondaryLocalCookie> l2tp_secondary_local_cookie;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpLocalCookie> l2tp_local_cookie;
        
}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpRemoteCookie : public ydk::Entity
{
    public:
        L2tpRemoteCookie();
        ~L2tpRemoteCookie();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: L2tpCookieSize
        ydk::YLeaf lower_value; //type: uint32
        ydk::YLeaf higher_value; //type: uint32

}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpRemoteCookie


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpSecondaryLocalCookie : public ydk::Entity
{
    public:
        L2tpSecondaryLocalCookie();
        ~L2tpSecondaryLocalCookie();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: L2tpCookieSize
        ydk::YLeaf lower_value; //type: uint32
        ydk::YLeaf higher_value; //type: uint32

}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpSecondaryLocalCookie


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpLocalCookie : public ydk::Entity
{
    public:
        L2tpLocalCookie();
        ~L2tpLocalCookie();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: L2tpCookieSize
        ydk::YLeaf lower_value; //type: uint32
        ydk::YLeaf higher_value; //type: uint32

}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpLocalCookie


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStatic : public ydk::Entity
{
    public:
        L2tpStatic();
        ~L2tpStatic();

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

}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStatic


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress : public ydk::Entity
{
    public:
        PseudowireAddress();
        ~PseudowireAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pseudowire_address; //type: string
        ydk::YLeaf tag_impose; //type: uint32
        ydk::YLeaf class_; //type: string
        ydk::YLeaf source_address; //type: string
        ydk::YLeaf bandwidth; //type: uint32
        class MplsStaticLabels; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels
        class BackupPseudowires; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires
        class L2tpStaticAttributes; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes
        class L2tpStatic; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStatic

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels> mpls_static_labels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires> backup_pseudowires;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes> l2tp_static_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStatic> l2tp_static;
        
}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels : public ydk::Entity
{
    public:
        MplsStaticLabels();
        ~MplsStaticLabels();

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

}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires : public ydk::Entity
{
    public:
        BackupPseudowires();
        ~BackupPseudowires();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BackupPseudowire; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire

        ydk::YList backup_pseudowire;
        
}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire : public ydk::Entity
{
    public:
        BackupPseudowire();
        ~BackupPseudowire();

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
        ydk::YLeaf backup_pw_class; //type: string
        class BackupMplsStaticLabels; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels> backup_mpls_static_labels;
        
}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels : public ydk::Entity
{
    public:
        BackupMplsStaticLabels();
        ~BackupMplsStaticLabels();

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

}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes : public ydk::Entity
{
    public:
        L2tpStaticAttributes();
        ~L2tpStaticAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2tp_remote_session_id; //type: uint32
        ydk::YLeaf l2tp_local_session_id; //type: uint32
        class L2tpRemoteCookie; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpRemoteCookie
        class L2tpSecondaryLocalCookie; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpSecondaryLocalCookie
        class L2tpLocalCookie; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpLocalCookie

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpRemoteCookie> l2tp_remote_cookie;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpSecondaryLocalCookie> l2tp_secondary_local_cookie;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpLocalCookie> l2tp_local_cookie;
        
}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpRemoteCookie : public ydk::Entity
{
    public:
        L2tpRemoteCookie();
        ~L2tpRemoteCookie();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: L2tpCookieSize
        ydk::YLeaf lower_value; //type: uint32
        ydk::YLeaf higher_value; //type: uint32

}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpRemoteCookie


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpSecondaryLocalCookie : public ydk::Entity
{
    public:
        L2tpSecondaryLocalCookie();
        ~L2tpSecondaryLocalCookie();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: L2tpCookieSize
        ydk::YLeaf lower_value; //type: uint32
        ydk::YLeaf higher_value; //type: uint32

}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpSecondaryLocalCookie


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpLocalCookie : public ydk::Entity
{
    public:
        L2tpLocalCookie();
        ~L2tpLocalCookie();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: L2tpCookieSize
        ydk::YLeaf lower_value; //type: uint32
        ydk::YLeaf higher_value; //type: uint32

}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpLocalCookie


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStatic : public ydk::Entity
{
    public:
        L2tpStatic();
        ~L2tpStatic();

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

}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStatic


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions : public ydk::Entity
{
    public:
        MonitorSessions();
        ~MonitorSessions();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MonitorSession; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions::MonitorSession

        ydk::YList monitor_session;
        
}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions::MonitorSession : public ydk::Entity
{
    public:
        MonitorSession();
        ~MonitorSession();

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
        ydk::YLeaf enable; //type: empty

}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions::MonitorSession


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds : public ydk::Entity
{
    public:
        PseudowireRouteds();
        ~PseudowireRouteds();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PseudowireRouted; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds::PseudowireRouted

        ydk::YList pseudowire_routed;
        
}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds::PseudowireRouted : public ydk::Entity
{
    public:
        PseudowireRouted();
        ~PseudowireRouted();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf global_id; //type: uint32
        ydk::YLeaf prefix; //type: string
        ydk::YLeaf acid; //type: uint32
        ydk::YLeaf sacid; //type: uint32
        ydk::YLeaf tag_impose; //type: uint32
        ydk::YLeaf class_; //type: string

}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds::PseudowireRouted


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits : public ydk::Entity
{
    public:
        AttachmentCircuits();
        ~AttachmentCircuits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AttachmentCircuit; //type: L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits::AttachmentCircuit

        ydk::YList attachment_circuit;
        
}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits


class L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits::AttachmentCircuit : public ydk::Entity
{
    public:
        AttachmentCircuit();
        ~AttachmentCircuit();

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
        ydk::YLeaf enable; //type: empty

}; // L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits::AttachmentCircuit


class L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects : public ydk::Entity
{
    public:
        Mp2mpXconnects();
        ~Mp2mpXconnects();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mp2mpXconnect; //type: L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect

        ydk::YList mp2mp_xconnect;
        
}; // L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects


class L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect : public ydk::Entity
{
    public:
        Mp2mpXconnect();
        ~Mp2mpXconnect();

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
        ydk::YLeaf mp2mpmtu; //type: uint32
        ydk::YLeaf mp2mp_control_word; //type: empty
        ydk::YLeaf mp2mpl2_encapsulation; //type: L2Encapsulation
        ydk::YLeaf mp2mp_interworking; //type: Interworking
        ydk::YLeaf mp2mp_shutdown; //type: empty
        ydk::YLeaf mp2mpvpn_id; //type: uint32
        class Mp2mpAutoDiscovery; //type: L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery> mp2mp_auto_discovery;
        
}; // L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect


class L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery : public ydk::Entity
{
    public:
        Mp2mpAutoDiscovery();
        ~Mp2mpAutoDiscovery();

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
        class RouteDistinguisher; //type: L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::RouteDistinguisher
        class Mp2mpRoutePolicy; //type: L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRoutePolicy
        class Mp2mpRouteTargets; //type: L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets
        class Mp2mpSignalingProtocol; //type: L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::RouteDistinguisher> route_distinguisher;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRoutePolicy> mp2mp_route_policy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets> mp2mp_route_targets;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol> mp2mp_signaling_protocol;
        
}; // L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery


class L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::RouteDistinguisher : public ydk::Entity
{
    public:
        RouteDistinguisher();
        ~RouteDistinguisher();

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

}; // L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::RouteDistinguisher


class L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRoutePolicy : public ydk::Entity
{
    public:
        Mp2mpRoutePolicy();
        ~Mp2mpRoutePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf export_; //type: string

}; // L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRoutePolicy


class L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets : public ydk::Entity
{
    public:
        Mp2mpRouteTargets();
        ~Mp2mpRouteTargets();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mp2mpRouteTarget; //type: L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget

        ydk::YList mp2mp_route_target;
        
}; // L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets


class L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget : public ydk::Entity
{
    public:
        Mp2mpRouteTarget();
        ~Mp2mpRouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf role; //type: BgpRouteTargetRole
        ydk::YLeaf format; //type: BgpRouteTargetFormat
        class TwoByteAsOrFourByteAs; //type: L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::TwoByteAsOrFourByteAs
        class Ipv4Address; //type: L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::Ipv4Address

        ydk::YList two_byte_as_or_four_byte_as;
        ydk::YList ipv4_address;
        
}; // L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget


class L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::TwoByteAsOrFourByteAs : public ydk::Entity
{
    public:
        TwoByteAsOrFourByteAs();
        ~TwoByteAsOrFourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as_index; //type: uint32

}; // L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::TwoByteAsOrFourByteAs


class L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::Ipv4Address : public ydk::Entity
{
    public:
        Ipv4Address();
        ~Ipv4Address();

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
        ydk::YLeaf addr_index; //type: uint32

}; // L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::Ipv4Address


class L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol : public ydk::Entity
{
    public:
        Mp2mpSignalingProtocol();
        ~Mp2mpSignalingProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ce_range; //type: uint32
        ydk::YLeaf enable; //type: empty
        class FlowLabelLoadBalance; //type: L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::FlowLabelLoadBalance
        class Ceids; //type: L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::FlowLabelLoadBalance> flow_label_load_balance;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids> ceids;
        
}; // L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol


class L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::FlowLabelLoadBalance : public ydk::Entity
{
    public:
        FlowLabelLoadBalance();
        ~FlowLabelLoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flow_label; //type: FlowLabelLoadBalance
        ydk::YLeaf static_; //type: empty

}; // L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::FlowLabelLoadBalance


class L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids : public ydk::Entity
{
    public:
        Ceids();
        ~Ceids();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ceid; //type: L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid

        ydk::YList ceid;
        
}; // L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids


class L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid : public ydk::Entity
{
    public:
        Ceid();
        ~Ceid();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ce_id; //type: uint32
        class RemoteCeidAttachmentCircuits; //type: L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits> remote_ceid_attachment_circuits;
        
}; // L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid


class L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits : public ydk::Entity
{
    public:
        RemoteCeidAttachmentCircuits();
        ~RemoteCeidAttachmentCircuits();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemoteCeidAttachmentCircuit; //type: L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit

        ydk::YList remote_ceid_attachment_circuit;
        
}; // L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits


class L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit : public ydk::Entity
{
    public:
        RemoteCeidAttachmentCircuit();
        ~RemoteCeidAttachmentCircuit();

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
        ydk::YLeaf remote_ce_id; //type: uint32

}; // L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit


class L2vpn::Database::BridgeDomainGroups : public ydk::Entity
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

        class BridgeDomainGroup; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup

        ydk::YList bridge_domain_group;
        
}; // L2vpn::Database::BridgeDomainGroups


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup : public ydk::Entity
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
        class BridgeDomains; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains> bridge_domains;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains : public ydk::Entity
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

        class BridgeDomain; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain

        ydk::YList bridge_domain;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain : public ydk::Entity
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
        class BdStormControls; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls
        class MemberVnis; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis
        class BridgeDomainMac; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac
        class NvSatellite; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite
        class BridgeDomainPbb; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb
        class BridgeDomainEvis; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis
        class AccessVfis; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis
        class BdPseudowires; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires
        class Vfis; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis
        class BridgeDomainvnis; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainvnis
        class BdAttachmentCircuits; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits
        class BdPseudowireEvpns; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns
        class IpSourceGuard; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard
        class Dai; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai
        class RoutedInterfaces; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls> bd_storm_controls;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis> member_vnis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac> bridge_domain_mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite> nv_satellite;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb> bridge_domain_pbb;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis> bridge_domain_evis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis> access_vfis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires> bd_pseudowires;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis> vfis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainvnis> bridge_domainvnis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits> bd_attachment_circuits;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns> bd_pseudowire_evpns;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard> ip_source_guard;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai> dai;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces> routed_interfaces;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls : public ydk::Entity
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

        class BdStormControl; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl

        ydk::YList bd_storm_control;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl : public ydk::Entity
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
        class StormControlUnit; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit> storm_control_unit;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis : public ydk::Entity
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

        class MemberVni; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni

        ydk::YList member_vni;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni : public ydk::Entity
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
        class MemberVniStaticMacAddresses; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses> member_vni_static_mac_addresses;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses : public ydk::Entity
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

        class MemberVniStaticMacAddress; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress

        ydk::YList member_vni_static_mac_address;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac : public ydk::Entity
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
        class BdMacLimit; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit
        class BdMacFilters; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters
        class MacSecure; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure
        class BdMacAging; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit> bd_mac_limit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters> bd_mac_filters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure> mac_secure;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging> bd_mac_aging;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters : public ydk::Entity
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

        class BdMacFilter; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter

        ydk::YList bd_mac_filter;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb : public ydk::Entity
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

        class PbbEdges; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges
        class PbbCore; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges> pbb_edges;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore> pbb_core;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges : public ydk::Entity
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

        class PbbEdge; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge

        ydk::YList pbb_edge;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge : public ydk::Entity
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
        class PbbEdgeSplitHorizonGroup; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup
        class PbbStaticMacMappings; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings
        class PbbEdgeDhcpProfile; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile
        class PbbEdgeMac; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup> pbb_edge_split_horizon_group;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings> pbb_static_mac_mappings;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile> pbb_edge_dhcp_profile;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac> pbb_edge_mac;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings : public ydk::Entity
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

        class PbbStaticMacMapping; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping

        ydk::YList pbb_static_mac_mapping;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac : public ydk::Entity
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
        class PbbEdgeMacLimit; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit
        class PbbEdgeMacAging; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging
        class PbbEdgeMacSecure; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit> pbb_edge_mac_limit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging> pbb_edge_mac_aging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure> pbb_edge_mac_secure;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore : public ydk::Entity
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
        class PbbCoreMac; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac
        class PbbCoreEvis; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis
        class PbbCoreDhcpProfile; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac> pbb_core_mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis> pbb_core_evis;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile> pbb_core_dhcp_profile;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac : public ydk::Entity
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
        class PbbCoreMacAging; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging
        class PbbCoreMacLimit; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging> pbb_core_mac_aging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit> pbb_core_mac_limit;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis : public ydk::Entity
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

        class PbbCoreEvi; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi

        ydk::YList pbb_core_evi;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis : public ydk::Entity
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

        class BridgeDomainEvi; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi

        ydk::YList bridge_domain_evi;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi : public ydk::Entity
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

        ydk::YLeaf vpn_id; //type: uint32

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis : public ydk::Entity
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

        class AccessVfi; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi

        ydk::YList access_vfi;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi : public ydk::Entity
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
        class AccessVfiPseudowires; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires> access_vfi_pseudowires;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires : public ydk::Entity
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

        class AccessVfiPseudowire; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire

        ydk::YList access_vfi_pseudowire;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire : public ydk::Entity
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
        class AccessVfiPseudowireStaticMacAddresses; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses> access_vfi_pseudowire_static_mac_addresses;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses : public ydk::Entity
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

        class AccessVfiPseudowireStaticMacAddress; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress

        ydk::YList access_vfi_pseudowire_static_mac_address;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires : public ydk::Entity
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

        class BdPseudowire; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire

        ydk::YList bd_pseudowire;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire : public ydk::Entity
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
        class PseudowireDai; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai
        class BdpwStormControlTypes; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes
        class PseudowireProfile; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile
        class BdPwStaticMacAddresses; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses
        class PseudowireIpSourceGuard; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard
        class PseudowireMac; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac
        class BdPwSplitHorizon; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon
        class BdPwMplsStaticLabels; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels
        class BridgeDomainBackupPseudowires; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai> pseudowire_dai;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes> bdpw_storm_control_types;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile> pseudowire_profile;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses> bd_pw_static_mac_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard> pseudowire_ip_source_guard;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac> pseudowire_mac;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon> bd_pw_split_horizon;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels> bd_pw_mpls_static_labels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires> bridge_domain_backup_pseudowires;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai : public ydk::Entity
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
        class PseudowireDaiAddressValidation; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation> pseudowire_dai_address_validation;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes : public ydk::Entity
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

        class BdpwStormControlType; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType

        ydk::YList bdpw_storm_control_type;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType : public ydk::Entity
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
        class StormControlUnit; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit> storm_control_unit;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses : public ydk::Entity
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

        class BdPwStaticMacAddress; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress

        ydk::YList bd_pw_static_mac_address;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac : public ydk::Entity
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
        class PseudowireMacSecure; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure
        class PseudowireMacAging; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging
        class PseudowireMacLimit; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure> pseudowire_mac_secure;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging> pseudowire_mac_aging;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit> pseudowire_mac_limit;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon : public ydk::Entity
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

        class BdPwSplitHorizonGroup; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup> bd_pw_split_horizon_group;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires : public ydk::Entity
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

        class BridgeDomainBackupPseudowire; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire

        ydk::YList bridge_domain_backup_pseudowire;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire : public ydk::Entity
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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis : public ydk::Entity
{
    public:
        Vfis();
        ~Vfis();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vfi; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi

        ydk::YList vfi;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi : public ydk::Entity
{
    public:
        Vfi();
        ~Vfi();

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
        ydk::YLeaf vfi_shutdown; //type: empty
        ydk::YLeaf vpnid; //type: uint32
        class MulticastP2mp; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp
        class VfiPseudowires; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires
        class BgpAutoDiscovery; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp> multicast_p2mp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires> vfi_pseudowires;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery> bgp_auto_discovery;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp : public ydk::Entity
{
    public:
        MulticastP2mp();
        ~MulticastP2mp();

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
        class Transports; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports
        class Signalings; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports> transports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings> signalings;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports : public ydk::Entity
{
    public:
        Transports();
        ~Transports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Transport; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transport

        ydk::YList transport;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transport_name; //type: string
        ydk::YLeaf attribute_set_name; //type: string

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transport


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings : public ydk::Entity
{
    public:
        Signalings();
        ~Signalings();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Signaling; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signaling

        ydk::YList signaling;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signaling : public ydk::Entity
{
    public:
        Signaling();
        ~Signaling();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signaling_name; //type: string

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signaling


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires : public ydk::Entity
{
    public:
        VfiPseudowires();
        ~VfiPseudowires();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VfiPseudowire; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire

        ydk::YList vfi_pseudowire;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire : public ydk::Entity
{
    public:
        VfiPseudowire();
        ~VfiPseudowire();

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
        ydk::YLeaf vfi_pw_class; //type: string
        ydk::YLeaf vfi_pw_igmp_snoop; //type: string
        ydk::YLeaf vfi_pw_mld_snoop; //type: string
        class VfiPwDhcpSnoop; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop
        class VfiPwMplsStaticLabels; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels
        class PseudowireStaticMacAddresses; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop> vfi_pw_dhcp_snoop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels> vfi_pw_mpls_static_labels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses> pseudowire_static_mac_addresses;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop : public ydk::Entity
{
    public:
        VfiPwDhcpSnoop();
        ~VfiPwDhcpSnoop();

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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels : public ydk::Entity
{
    public:
        VfiPwMplsStaticLabels();
        ~VfiPwMplsStaticLabels();

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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses : public ydk::Entity
{
    public:
        PseudowireStaticMacAddresses();
        ~PseudowireStaticMacAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PseudowireStaticMacAddress; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress

        ydk::YList pseudowire_static_mac_address;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress : public ydk::Entity
{
    public:
        PseudowireStaticMacAddress();
        ~PseudowireStaticMacAddress();

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

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery : public ydk::Entity
{
    public:
        BgpAutoDiscovery();
        ~BgpAutoDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_policy; //type: string
        ydk::YLeaf ad_control_word; //type: empty
        ydk::YLeaf enable; //type: empty
        class LdpSignalingProtocol; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol
        class BgpRoutePolicy; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy
        class RouteDistinguisher; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher
        class BgpSignalingProtocol; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol
        class RouteTargets; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol> ldp_signaling_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy> bgp_route_policy;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher> route_distinguisher;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol> bgp_signaling_protocol;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets> route_targets;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol : public ydk::Entity
{
    public:
        LdpSignalingProtocol();
        ~LdpSignalingProtocol();

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
        class VplsId; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId
        class FlowLabelLoadBalance; //type: L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId> vpls_id;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_l2vpn_cfg::L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance> flow_label_load_balance;
        
}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol


class L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId : public ydk::Entity
{
    public:
        VplsId();
        ~VplsId();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf type; //type: LdpVplsId
        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as_index; //type: uint32
        ydk::YLeaf address; //type: string
        ydk::YLeaf address_index; //type: uint32

}; // L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId

class FlowLabelTlvCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_17;
        static const ydk::Enum::YLeaf disable;

};

class MacAging : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absolute;
        static const ydk::Enum::YLeaf inactivity;

};

class MacLimitAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf flood;
        static const ydk::Enum::YLeaf no_flood;
        static const ydk::Enum::YLeaf shutdown;

};

class BdmacLearn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable_learning;

};

class Interworking : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf ipv4;

};

class PwSwitchingPointTlv : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hide;

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

class BgpRouteTargetRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf import;
        static const ydk::Enum::YLeaf export_;

};

class ErpPort : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf virtual_;
        static const ydk::Enum::YLeaf interface;

};

class BgpRouteTarget : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_stitching;
        static const ydk::Enum::YLeaf stitching;

};

class FlowLabelLoadBalance : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf transmit;
        static const ydk::Enum::YLeaf both;

};

class L2vpnVerification : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class MacLearn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_learning;
        static const ydk::Enum::YLeaf enable_learning;
        static const ydk::Enum::YLeaf disable_learning;

};

class Erpaps : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interface;
        static const ydk::Enum::YLeaf bridge_domain;
        static const ydk::Enum::YLeaf xconnect;
        static const ydk::Enum::YLeaf none;

};

class VccvVerification : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf lsp_ping;

};

class TransportMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf vlan;
        static const ydk::Enum::YLeaf vlan_passthrough;

};

class BackupDisable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;
        static const ydk::Enum::YLeaf delay;

};

class LoadBalance : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf source_dest_mac;
        static const ydk::Enum::YLeaf source_dest_ip;
        static const ydk::Enum::YLeaf pseudowire_label;

};

class ErpPort1 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf port0;
        static const ydk::Enum::YLeaf port1;

};

class InterfaceTrafficFlood : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf traffic_flooding;
        static const ydk::Enum::YLeaf enable_flooding;
        static const ydk::Enum::YLeaf disable_flooding;

};

class MacFlushMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf mvrp;

};

class L2tpCookieSize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf zero;
        static const ydk::Enum::YLeaf four;
        static const ydk::Enum::YLeaf eight;

};

class StormControl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;
        static const ydk::Enum::YLeaf broadcast;

};

class BgpRouteDistinguisher : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf two_byte_as;
        static const ydk::Enum::YLeaf four_byte_as;
        static const ydk::Enum::YLeaf ipv4_address;

};

class MacNotification : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_notif;
        static const ydk::Enum::YLeaf syslog;
        static const ydk::Enum::YLeaf trap;
        static const ydk::Enum::YLeaf syslog_snmp;

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

class MplsSignalingProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ldp;

};

class EvpnSide : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf evpn_side_regular;
        static const ydk::Enum::YLeaf evpn_side_stitching;

};

class ControlWord : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class PreferredPath : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf te_tunnel;
        static const ydk::Enum::YLeaf ip_tunnel;
        static const ydk::Enum::YLeaf tp_tunnel;
        static const ydk::Enum::YLeaf sr_te_policy;

};

class EvpnEncapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf evpn_encapsulationvxlan;
        static const ydk::Enum::YLeaf evpn_encapsulation_mpls;

};

class MplsSequencing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf transmit;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf both;

};

class EthernetSegmentLoadBalance : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf single_active;

};

class L2tpSignalingProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf l2tpv3;

};

class EthernetSegmentIdentifier : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf type0;
        static const ydk::Enum::YLeaf legacy;
        static const ydk::Enum::YLeaf override;

};

class BridgeDomainTransportMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vlan_passthrough;

};

class LdpVplsId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf two_byte_as;
        static const ydk::Enum::YLeaf ipv4_address;

};

class L2Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vlan;
        static const ydk::Enum::YLeaf ethernet;

};

class EthernetSegmentServiceCarving : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hrw;

};

class L2vpnLogging : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class MacWithdrawBehavior : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf legacy;
        static const ydk::Enum::YLeaf optimized;

};

class RplRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf owner;
        static const ydk::Enum::YLeaf neighbor;
        static const ydk::Enum::YLeaf next_neighbor;

};

class TypeOfServiceMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf reflect;

};

class PortDownFlush : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf port_down_flush;
        static const ydk::Enum::YLeaf enable_port_down_flush;
        static const ydk::Enum::YLeaf disable_port_down_flush;

};

class L2vpnCapabilityMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf high_mode;
        static const ydk::Enum::YLeaf single_mode;

};

class MacSecureAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf restrict;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf shutdown;

};


}
}

#endif /* _CISCO_IOS_XR_L2VPN_CFG_0_ */

