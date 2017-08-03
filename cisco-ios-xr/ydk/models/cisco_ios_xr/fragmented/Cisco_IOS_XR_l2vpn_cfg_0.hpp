#ifndef _CISCO_IOS_XR_L2VPN_CFG_0_
#define _CISCO_IOS_XR_L2VPN_CFG_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_cfg {

class L2Vpn : public ydk::Entity
{
    public:
        L2Vpn();
        ~L2Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        ydk::YLeaf pw_status_disable; //type: empty
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf pw_grouping; //type: empty
        ydk::YLeaf capability; //type: L2VpnCapabilityMode
        ydk::YLeaf l2vpn_router_id; //type: string
        class PwRouting; //type: L2Vpn::PwRouting
        class Neighbor; //type: L2Vpn::Neighbor
        class Database; //type: L2Vpn::Database
        class Pbb; //type: L2Vpn::Pbb
        class AutoDiscovery; //type: L2Vpn::AutoDiscovery
        class Utility; //type: L2Vpn::Utility
        class Snmp; //type: L2Vpn::Snmp

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::AutoDiscovery> auto_discovery;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database> database;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Neighbor> neighbor;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Pbb> pbb;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::PwRouting> pw_routing;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Snmp> snmp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Utility> utility;
        
}; // L2Vpn


class L2Vpn::PwRouting : public ydk::Entity
{
    public:
        PwRouting();
        ~PwRouting();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pw_routing_global_id; //type: uint32
        class PwRoutingBgp; //type: L2Vpn::PwRouting::PwRoutingBgp

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::PwRouting::PwRoutingBgp> pw_routing_bgp;
        
}; // L2Vpn::PwRouting


class L2Vpn::PwRouting::PwRoutingBgp : public ydk::Entity
{
    public:
        PwRoutingBgp();
        ~PwRoutingBgp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        class EvpnRouteDistinguisher; //type: L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher> evpn_route_distinguisher;
        
}; // L2Vpn::PwRouting::PwRoutingBgp


class L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher : public ydk::Entity
{
    public:
        EvpnRouteDistinguisher();
        ~EvpnRouteDistinguisher();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher


class L2Vpn::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ldp_flap; //type: empty

}; // L2Vpn::Neighbor


class L2Vpn::Database : public ydk::Entity
{
    public:
        Database();
        ~Database();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class G8032Rings; //type: L2Vpn::Database::G8032Rings
        class XconnectGroups; //type: L2Vpn::Database::XconnectGroups
        class BridgeDomainGroups; //type: L2Vpn::Database::BridgeDomainGroups
        class PseudowireClasses; //type: L2Vpn::Database::PseudowireClasses
        class FlexibleXconnectServiceTable; //type: L2Vpn::Database::FlexibleXconnectServiceTable
        class Redundancy; //type: L2Vpn::Database::Redundancy

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups> bridge_domain_groups;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::FlexibleXconnectServiceTable> flexible_xconnect_service_table;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings> g8032_rings;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::PseudowireClasses> pseudowire_classes;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::Redundancy> redundancy;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups> xconnect_groups;
        
}; // L2Vpn::Database


class L2Vpn::Database::G8032Rings : public ydk::Entity
{
    public:
        G8032Rings();
        ~G8032Rings();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class G8032Ring; //type: L2Vpn::Database::G8032Rings::G8032Ring

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring> > g8032_ring;
        
}; // L2Vpn::Database::G8032Rings


class L2Vpn::Database::G8032Rings::G8032Ring : public ydk::Entity
{
    public:
        G8032Ring();
        ~G8032Ring();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf g8032_ring_name; //type: string
        ydk::YLeaf open_ring; //type: empty
        ydk::YLeaf exclusion_list; //type: string
        ydk::YLeaf erp_provider_bridge; //type: empty
        class ErpPort0S; //type: L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S
        class ErpInstances; //type: L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances
        class ErpPort1S; //type: L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances> erp_instances;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S> erp_port0s;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S> erp_port1s;
        
}; // L2Vpn::Database::G8032Rings::G8032Ring


class L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S : public ydk::Entity
{
    public:
        ErpPort0S();
        ~ErpPort0S();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ErpPort0; //type: L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0> > erp_port0;
        
}; // L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S


class L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0 : public ydk::Entity
{
    public:
        ErpPort0();
        ~ErpPort0();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf monitor; //type: string

}; // L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0


class L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances : public ydk::Entity
{
    public:
        ErpInstances();
        ~ErpInstances();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ErpInstance; //type: L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance> > erp_instance;
        
}; // L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances


class L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance : public ydk::Entity
{
    public:
        ErpInstance();
        ~ErpInstance();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class Rpl; //type: L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl
        class Aps; //type: L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps> aps;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl> rpl;
        
}; // L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance


class L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl : public ydk::Entity
{
    public:
        Rpl();
        ~Rpl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port; //type: ErpPort1
        ydk::YLeaf role; //type: RplRole

}; // L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl


class L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps : public ydk::Entity
{
    public:
        Aps();
        ~Aps();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port0; //type: string
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf level; //type: uint32
        class Port1; //type: L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1> port1;
        
}; // L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps


class L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1 : public ydk::Entity
{
    public:
        Port1();
        ~Port1();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf aps_type; //type: Erpaps
        ydk::YLeaf aps_channel; //type: string

}; // L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1


class L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S : public ydk::Entity
{
    public:
        ErpPort1S();
        ~ErpPort1S();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ErpPort1; //type: L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1> > erp_port1;
        
}; // L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S


class L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1 : public ydk::Entity
{
    public:
        ErpPort1();
        ~ErpPort1();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf erp_port_type; //type: ErpPort
        class NoneOrVirtual; //type: L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual
        class Interface; //type: L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface> > interface;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual> none_or_virtual; // presence node
        
}; // L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1


class L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual : public ydk::Entity
{
    public:
        NoneOrVirtual();
        ~NoneOrVirtual();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf monitor; //type: string

}; // L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual


class L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string
        ydk::YLeaf monitor; //type: string

}; // L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface


class L2Vpn::Database::XconnectGroups : public ydk::Entity
{
    public:
        XconnectGroups();
        ~XconnectGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class XconnectGroup; //type: L2Vpn::Database::XconnectGroups::XconnectGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup> > xconnect_group;
        
}; // L2Vpn::Database::XconnectGroups


class L2Vpn::Database::XconnectGroups::XconnectGroup : public ydk::Entity
{
    public:
        XconnectGroup();
        ~XconnectGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class P2PXconnects; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects
        class Mp2MpXconnects; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects> mp2mp_xconnects;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects> p2p_xconnects;
        
}; // L2Vpn::Database::XconnectGroups::XconnectGroup


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects : public ydk::Entity
{
    public:
        P2PXconnects();
        ~P2PXconnects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class P2PXconnect; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect> > p2p_xconnect;
        
}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect : public ydk::Entity
{
    public:
        P2PXconnect();
        ~P2PXconnect();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf p2p_description; //type: string
        ydk::YLeaf interworking; //type: Interworking
        class BackupAttachmentCircuits; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits
        class PseudowireEvpns; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns
        class Pseudowires; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires
        class MonitorSessions; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions
        class PseudowireRouteds; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds
        class AttachmentCircuits; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits> attachment_circuits;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits> backup_attachment_circuits;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions> monitor_sessions;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns> pseudowire_evpns;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds> pseudowire_routeds;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires> pseudowires;
        
}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits : public ydk::Entity
{
    public:
        BackupAttachmentCircuits();
        ~BackupAttachmentCircuits();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BackupAttachmentCircuit; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit> > backup_attachment_circuit;
        
}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit : public ydk::Entity
{
    public:
        BackupAttachmentCircuit();
        ~BackupAttachmentCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interface_name; //type: string

}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns : public ydk::Entity
{
    public:
        PseudowireEvpns();
        ~PseudowireEvpns();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PseudowireEvpn; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn> > pseudowire_evpn;
        
}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn : public ydk::Entity
{
    public:
        PseudowireEvpn();
        ~PseudowireEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eviid; //type: uint32
        ydk::YLeaf remote_acid; //type: uint32
        ydk::YLeaf source_acid; //type: uint32

}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires : public ydk::Entity
{
    public:
        Pseudowires();
        ~Pseudowires();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Pseudowire; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire> > pseudowire;
        
}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire : public ydk::Entity
{
    public:
        Pseudowire();
        ~Pseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pseudowire_id; //type: uint32
        class Neighbor; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor
        class PseudowireAddress; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor> > neighbor;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress> > pseudowire_address;
        
}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class MplsStaticLabels; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels
        class BackupPseudowires; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires
        class L2TpStaticAttributes; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes
        class L2TpStatic; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires> backup_pseudowires;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic> l2tp_static;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes> l2tp_static_attributes;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels> mpls_static_labels;
        
}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels : public ydk::Entity
{
    public:
        MplsStaticLabels();
        ~MplsStaticLabels();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_static_label; //type: uint32
        ydk::YLeaf remote_static_label; //type: uint32

}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires : public ydk::Entity
{
    public:
        BackupPseudowires();
        ~BackupPseudowires();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BackupPseudowire; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire> > backup_pseudowire;
        
}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire : public ydk::Entity
{
    public:
        BackupPseudowire();
        ~BackupPseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor; //type: string
        ydk::YLeaf pseudowire_id; //type: uint32
        ydk::YLeaf backup_pw_class; //type: string
        class BackupMplsStaticLabels; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels> backup_mpls_static_labels;
        
}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels : public ydk::Entity
{
    public:
        BackupMplsStaticLabels();
        ~BackupMplsStaticLabels();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_static_label; //type: uint32
        ydk::YLeaf remote_static_label; //type: uint32

}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes : public ydk::Entity
{
    public:
        L2TpStaticAttributes();
        ~L2TpStaticAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2tp_remote_session_id; //type: uint32
        ydk::YLeaf l2tp_local_session_id; //type: uint32
        class L2TpRemoteCookie; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie
        class L2TpSecondaryLocalCookie; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie
        class L2TpLocalCookie; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie> l2tp_local_cookie;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie> l2tp_remote_cookie;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie> l2tp_secondary_local_cookie;
        
}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie : public ydk::Entity
{
    public:
        L2TpRemoteCookie();
        ~L2TpRemoteCookie();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: L2TpCookieSize
        ydk::YLeaf lower_value; //type: uint32
        ydk::YLeaf higher_value; //type: uint32

}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie : public ydk::Entity
{
    public:
        L2TpSecondaryLocalCookie();
        ~L2TpSecondaryLocalCookie();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: L2TpCookieSize
        ydk::YLeaf lower_value; //type: uint32
        ydk::YLeaf higher_value; //type: uint32

}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie : public ydk::Entity
{
    public:
        L2TpLocalCookie();
        ~L2TpLocalCookie();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: L2TpCookieSize
        ydk::YLeaf lower_value; //type: uint32
        ydk::YLeaf higher_value; //type: uint32

}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic : public ydk::Entity
{
    public:
        L2TpStatic();
        ~L2TpStatic();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress : public ydk::Entity
{
    public:
        PseudowireAddress();
        ~PseudowireAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class MplsStaticLabels; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels
        class BackupPseudowires; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires
        class L2TpStaticAttributes; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes
        class L2TpStatic; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires> backup_pseudowires;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic> l2tp_static;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes> l2tp_static_attributes;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels> mpls_static_labels;
        
}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels : public ydk::Entity
{
    public:
        MplsStaticLabels();
        ~MplsStaticLabels();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_static_label; //type: uint32
        ydk::YLeaf remote_static_label; //type: uint32

}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires : public ydk::Entity
{
    public:
        BackupPseudowires();
        ~BackupPseudowires();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BackupPseudowire; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire> > backup_pseudowire;
        
}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire : public ydk::Entity
{
    public:
        BackupPseudowire();
        ~BackupPseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor; //type: string
        ydk::YLeaf pseudowire_id; //type: uint32
        ydk::YLeaf backup_pw_class; //type: string
        class BackupMplsStaticLabels; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels> backup_mpls_static_labels;
        
}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels : public ydk::Entity
{
    public:
        BackupMplsStaticLabels();
        ~BackupMplsStaticLabels();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_static_label; //type: uint32
        ydk::YLeaf remote_static_label; //type: uint32

}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes : public ydk::Entity
{
    public:
        L2TpStaticAttributes();
        ~L2TpStaticAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2tp_remote_session_id; //type: uint32
        ydk::YLeaf l2tp_local_session_id; //type: uint32
        class L2TpRemoteCookie; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie
        class L2TpSecondaryLocalCookie; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie
        class L2TpLocalCookie; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie> l2tp_local_cookie;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie> l2tp_remote_cookie;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie> l2tp_secondary_local_cookie;
        
}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie : public ydk::Entity
{
    public:
        L2TpRemoteCookie();
        ~L2TpRemoteCookie();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: L2TpCookieSize
        ydk::YLeaf lower_value; //type: uint32
        ydk::YLeaf higher_value; //type: uint32

}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie : public ydk::Entity
{
    public:
        L2TpSecondaryLocalCookie();
        ~L2TpSecondaryLocalCookie();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: L2TpCookieSize
        ydk::YLeaf lower_value; //type: uint32
        ydk::YLeaf higher_value; //type: uint32

}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie : public ydk::Entity
{
    public:
        L2TpLocalCookie();
        ~L2TpLocalCookie();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf size; //type: L2TpCookieSize
        ydk::YLeaf lower_value; //type: uint32
        ydk::YLeaf higher_value; //type: uint32

}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic : public ydk::Entity
{
    public:
        L2TpStatic();
        ~L2TpStatic();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions : public ydk::Entity
{
    public:
        MonitorSessions();
        ~MonitorSessions();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MonitorSession; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession> > monitor_session;
        
}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession : public ydk::Entity
{
    public:
        MonitorSession();
        ~MonitorSession();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf enable; //type: empty

}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds : public ydk::Entity
{
    public:
        PseudowireRouteds();
        ~PseudowireRouteds();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PseudowireRouted; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted> > pseudowire_routed;
        
}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted : public ydk::Entity
{
    public:
        PseudowireRouted();
        ~PseudowireRouted();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits : public ydk::Entity
{
    public:
        AttachmentCircuits();
        ~AttachmentCircuits();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AttachmentCircuit; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit> > attachment_circuit;
        
}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit : public ydk::Entity
{
    public:
        AttachmentCircuit();
        ~AttachmentCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf enable; //type: empty

}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects : public ydk::Entity
{
    public:
        Mp2MpXconnects();
        ~Mp2MpXconnects();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mp2MpXconnect; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect> > mp2mp_xconnect;
        
}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect : public ydk::Entity
{
    public:
        Mp2MpXconnect();
        ~Mp2MpXconnect();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class Mp2MpAutoDiscovery; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery> mp2mp_auto_discovery;
        
}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery : public ydk::Entity
{
    public:
        Mp2MpAutoDiscovery();
        ~Mp2MpAutoDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        class RouteDistinguisher; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher
        class Mp2MpRoutePolicy; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy
        class Mp2MpRouteTargets; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets
        class Mp2MpSignalingProtocol; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy> mp2mp_route_policy;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets> mp2mp_route_targets;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol> mp2mp_signaling_protocol;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher> route_distinguisher;
        
}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher : public ydk::Entity
{
    public:
        RouteDistinguisher();
        ~RouteDistinguisher();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy : public ydk::Entity
{
    public:
        Mp2MpRoutePolicy();
        ~Mp2MpRoutePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf export_; //type: string

}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets : public ydk::Entity
{
    public:
        Mp2MpRouteTargets();
        ~Mp2MpRouteTargets();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mp2MpRouteTarget; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget> > mp2mp_route_target;
        
}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget : public ydk::Entity
{
    public:
        Mp2MpRouteTarget();
        ~Mp2MpRouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf role; //type: BgpRouteTargetRole
        ydk::YLeaf format; //type: BgpRouteTargetFormat
        class TwoByteAsOrFourByteAs; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs
        class Ipv4Address; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address> > ipv4_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs> > two_byte_as_or_four_byte_as;
        
}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs : public ydk::Entity
{
    public:
        TwoByteAsOrFourByteAs();
        ~TwoByteAsOrFourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf as; //type: uint32
        ydk::YLeaf as_index; //type: uint32

}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address : public ydk::Entity
{
    public:
        Ipv4Address();
        ~Ipv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf addr_index; //type: uint32

}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol : public ydk::Entity
{
    public:
        Mp2MpSignalingProtocol();
        ~Mp2MpSignalingProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ce_range; //type: uint32
        ydk::YLeaf enable; //type: empty
        class FlowLabelLoadBalance; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance
        class Ceids; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids> ceids;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance> flow_label_load_balance;
        
}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance : public ydk::Entity
{
    public:
        FlowLabelLoadBalance();
        ~FlowLabelLoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf flow_label; //type: FlowLabelLoadBalance
        ydk::YLeaf static_; //type: empty

}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids : public ydk::Entity
{
    public:
        Ceids();
        ~Ceids();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ceid; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid> > ceid;
        
}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid : public ydk::Entity
{
    public:
        Ceid();
        ~Ceid();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ce_id; //type: uint32
        class RemoteCeidAttachmentCircuits; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits> remote_ceid_attachment_circuits;
        
}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits : public ydk::Entity
{
    public:
        RemoteCeidAttachmentCircuits();
        ~RemoteCeidAttachmentCircuits();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class RemoteCeidAttachmentCircuit; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit> > remote_ceid_attachment_circuit;
        
}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit : public ydk::Entity
{
    public:
        RemoteCeidAttachmentCircuit();
        ~RemoteCeidAttachmentCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf remote_ce_id; //type: uint32

}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit


class L2Vpn::Database::BridgeDomainGroups : public ydk::Entity
{
    public:
        BridgeDomainGroups();
        ~BridgeDomainGroups();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BridgeDomainGroup; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup> > bridge_domain_group;
        
}; // L2Vpn::Database::BridgeDomainGroups


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup : public ydk::Entity
{
    public:
        BridgeDomainGroup();
        ~BridgeDomainGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class BridgeDomains; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains> bridge_domains;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains : public ydk::Entity
{
    public:
        BridgeDomains();
        ~BridgeDomains();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BridgeDomain; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain> > bridge_domain;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain : public ydk::Entity
{
    public:
        BridgeDomain();
        ~BridgeDomain();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis> access_vfis;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits> bd_attachment_circuits;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns> bd_pseudowire_evpns;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires> bd_pseudowires;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls> bd_storm_controls;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis> bridge_domain_evis;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac> bridge_domain_mac;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb> bridge_domain_pbb;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai> dai;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard> ip_source_guard;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis> member_vnis;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite> nv_satellite;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces> routed_interfaces;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis> vfis;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls : public ydk::Entity
{
    public:
        BdStormControls();
        ~BdStormControls();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BdStormControl; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl> > bd_storm_control;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl : public ydk::Entity
{
    public:
        BdStormControl();
        ~BdStormControl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sctype; //type: StormControl
        class StormControlUnit; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit> storm_control_unit;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit : public ydk::Entity
{
    public:
        StormControlUnit();
        ~StormControlUnit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf kbits_per_sec; //type: uint32
        ydk::YLeaf pkts_per_sec; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis : public ydk::Entity
{
    public:
        MemberVnis();
        ~MemberVnis();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MemberVni; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni> > member_vni;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni : public ydk::Entity
{
    public:
        MemberVni();
        ~MemberVni();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vni; //type: uint32
        class MemberVniStaticMacAddresses; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses> member_vni_static_mac_addresses;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses : public ydk::Entity
{
    public:
        MemberVniStaticMacAddresses();
        ~MemberVniStaticMacAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MemberVniStaticMacAddress; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress> > member_vni_static_mac_address;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress : public ydk::Entity
{
    public:
        MemberVniStaticMacAddress();
        ~MemberVniStaticMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mac_address; //type: string
        ydk::YLeaf next_hop_ip; //type: string

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac : public ydk::Entity
{
    public:
        BridgeDomainMac();
        ~BridgeDomainMac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging> bd_mac_aging;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters> bd_mac_filters;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit> bd_mac_limit;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure> mac_secure;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit : public ydk::Entity
{
    public:
        BdMacLimit();
        ~BdMacLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters : public ydk::Entity
{
    public:
        BdMacFilters();
        ~BdMacFilters();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BdMacFilter; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter> > bd_mac_filter;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter : public ydk::Entity
{
    public:
        BdMacFilter();
        ~BdMacFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf drop; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure : public ydk::Entity
{
    public:
        MacSecure();
        ~MacSecure();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: empty
        ydk::YLeaf action; //type: MacSecureAction
        ydk::YLeaf enable; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging : public ydk::Entity
{
    public:
        BdMacAging();
        ~BdMacAging();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf bd_mac_aging_type; //type: MacAging
        ydk::YLeaf bd_mac_aging_time; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite : public ydk::Entity
{
    public:
        NvSatellite();
        ~NvSatellite();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf offload_ipv4_multicast_enable; //type: empty
        ydk::YLeaf enable; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb : public ydk::Entity
{
    public:
        BridgeDomainPbb();
        ~BridgeDomainPbb();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PbbEdges; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges
        class PbbCore; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore> pbb_core;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges> pbb_edges;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges : public ydk::Entity
{
    public:
        PbbEdges();
        ~PbbEdges();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PbbEdge; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge> > pbb_edge;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge : public ydk::Entity
{
    public:
        PbbEdge();
        ~PbbEdge();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile> pbb_edge_dhcp_profile;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac> pbb_edge_mac;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup> pbb_edge_split_horizon_group;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings> pbb_static_mac_mappings;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup : public ydk::Entity
{
    public:
        PbbEdgeSplitHorizonGroup();
        ~PbbEdgeSplitHorizonGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PbbStaticMacMapping; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping> > pbb_static_mac_mapping;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping : public ydk::Entity
{
    public:
        PbbStaticMacMapping();
        ~PbbStaticMacMapping();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf pbb_static_mac_mapping_bmac; //type: string

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile : public ydk::Entity
{
    public:
        PbbEdgeDhcpProfile();
        ~PbbEdgeDhcpProfile();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging> pbb_edge_mac_aging;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit> pbb_edge_mac_limit;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure> pbb_edge_mac_secure;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit : public ydk::Entity
{
    public:
        PbbEdgeMacLimit();
        ~PbbEdgeMacLimit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging : public ydk::Entity
{
    public:
        PbbEdgeMacAging();
        ~PbbEdgeMacAging();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pbb_edge_mac_aging_type; //type: MacAging
        ydk::YLeaf pbb_edge_mac_aging_time; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure : public ydk::Entity
{
    public:
        PbbEdgeMacSecure();
        ~PbbEdgeMacSecure();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: L2VpnLogging
        ydk::YLeaf disable; //type: empty
        ydk::YLeaf action; //type: MacSecureAction
        ydk::YLeaf enable; //type: empty
        ydk::YLeaf accept_shutdown; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore : public ydk::Entity
{
    public:
        PbbCore();
        ~PbbCore();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile> pbb_core_dhcp_profile;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis> pbb_core_evis;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac> pbb_core_mac;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac : public ydk::Entity
{
    public:
        PbbCoreMac();
        ~PbbCoreMac();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pbb_core_mac_learning; //type: MacLearn
        class PbbCoreMacAging; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging
        class PbbCoreMacLimit; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging> pbb_core_mac_aging;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit> pbb_core_mac_limit;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging : public ydk::Entity
{
    public:
        PbbCoreMacAging();
        ~PbbCoreMacAging();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis : public ydk::Entity
{
    public:
        PbbCoreEvis();
        ~PbbCoreEvis();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PbbCoreEvi; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi> > pbb_core_evi;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi : public ydk::Entity
{
    public:
        PbbCoreEvi();
        ~PbbCoreEvi();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eviid; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile : public ydk::Entity
{
    public:
        PbbCoreDhcpProfile();
        ~PbbCoreDhcpProfile();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_id; //type: InterfaceProfile
        ydk::YLeaf dhcp_snooping_id; //type: string

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis : public ydk::Entity
{
    public:
        BridgeDomainEvis();
        ~BridgeDomainEvis();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BridgeDomainEvi; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi> > bridge_domain_evi;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi : public ydk::Entity
{
    public:
        BridgeDomainEvi();
        ~BridgeDomainEvi();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf eviid; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis : public ydk::Entity
{
    public:
        AccessVfis();
        ~AccessVfis();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessVfi; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi> > access_vfi;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi : public ydk::Entity
{
    public:
        AccessVfi();
        ~AccessVfi();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class AccessVfiPseudowires; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires> access_vfi_pseudowires;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires : public ydk::Entity
{
    public:
        AccessVfiPseudowires();
        ~AccessVfiPseudowires();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessVfiPseudowire; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire> > access_vfi_pseudowire;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire : public ydk::Entity
{
    public:
        AccessVfiPseudowire();
        ~AccessVfiPseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor; //type: string
        ydk::YLeaf pseudowire_id; //type: uint32
        class AccessVfiPseudowireStaticMacAddresses; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses> access_vfi_pseudowire_static_mac_addresses;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses : public ydk::Entity
{
    public:
        AccessVfiPseudowireStaticMacAddresses();
        ~AccessVfiPseudowireStaticMacAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AccessVfiPseudowireStaticMacAddress; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress> > access_vfi_pseudowire_static_mac_address;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress : public ydk::Entity
{
    public:
        AccessVfiPseudowireStaticMacAddress();
        ~AccessVfiPseudowireStaticMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires : public ydk::Entity
{
    public:
        BdPseudowires();
        ~BdPseudowires();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BdPseudowire; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire> > bd_pseudowire;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire : public ydk::Entity
{
    public:
        BdPseudowire();
        ~BdPseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels> bd_pw_mpls_static_labels;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon> bd_pw_split_horizon;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses> bd_pw_static_mac_addresses;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes> bdpw_storm_control_types;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires> bridge_domain_backup_pseudowires;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai> pseudowire_dai;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard> pseudowire_ip_source_guard;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac> pseudowire_mac;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile> pseudowire_profile;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai : public ydk::Entity
{
    public:
        PseudowireDai();
        ~PseudowireDai();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: L2VpnLogging
        ydk::YLeaf disable; //type: empty
        ydk::YLeaf enable; //type: empty
        class PseudowireDaiAddressValidation; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation> pseudowire_dai_address_validation;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation : public ydk::Entity
{
    public:
        PseudowireDaiAddressValidation();
        ~PseudowireDaiAddressValidation();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ipv4_verification; //type: L2VpnVerification
        ydk::YLeaf destination_mac_verification; //type: L2VpnVerification
        ydk::YLeaf source_mac_verification; //type: L2VpnVerification

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes : public ydk::Entity
{
    public:
        BdpwStormControlTypes();
        ~BdpwStormControlTypes();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BdpwStormControlType; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType> > bdpw_storm_control_type;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType : public ydk::Entity
{
    public:
        BdpwStormControlType();
        ~BdpwStormControlType();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf sctype; //type: StormControl
        class StormControlUnit; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit> storm_control_unit;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit : public ydk::Entity
{
    public:
        StormControlUnit();
        ~StormControlUnit();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf kbits_per_sec; //type: uint32
        ydk::YLeaf pkts_per_sec; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile : public ydk::Entity
{
    public:
        PseudowireProfile();
        ~PseudowireProfile();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_id; //type: InterfaceProfile
        ydk::YLeaf dhcp_snooping_id; //type: string

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses : public ydk::Entity
{
    public:
        BdPwStaticMacAddresses();
        ~BdPwStaticMacAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BdPwStaticMacAddress; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress> > bd_pw_static_mac_address;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress : public ydk::Entity
{
    public:
        BdPwStaticMacAddress();
        ~BdPwStaticMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard : public ydk::Entity
{
    public:
        PseudowireIpSourceGuard();
        ~PseudowireIpSourceGuard();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: L2VpnLogging
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging> pseudowire_mac_aging;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit> pseudowire_mac_limit;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure> pseudowire_mac_secure;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure : public ydk::Entity
{
    public:
        PseudowireMacSecure();
        ~PseudowireMacSecure();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf logging; //type: L2VpnLogging
        ydk::YLeaf disable; //type: empty
        ydk::YLeaf action; //type: MacSecureAction
        ydk::YLeaf enable; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging : public ydk::Entity
{
    public:
        PseudowireMacAging();
        ~PseudowireMacAging();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon : public ydk::Entity
{
    public:
        BdPwSplitHorizon();
        ~BdPwSplitHorizon();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BdPwSplitHorizonGroup; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup> bd_pw_split_horizon_group;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup : public ydk::Entity
{
    public:
        BdPwSplitHorizonGroup();
        ~BdPwSplitHorizonGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels : public ydk::Entity
{
    public:
        BdPwMplsStaticLabels();
        ~BdPwMplsStaticLabels();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_static_label; //type: uint32
        ydk::YLeaf remote_static_label; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires : public ydk::Entity
{
    public:
        BridgeDomainBackupPseudowires();
        ~BridgeDomainBackupPseudowires();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class BridgeDomainBackupPseudowire; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire> > bridge_domain_backup_pseudowire;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire : public ydk::Entity
{
    public:
        BridgeDomainBackupPseudowire();
        ~BridgeDomainBackupPseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis : public ydk::Entity
{
    public:
        Vfis();
        ~Vfis();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vfi; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi> > vfi;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi : public ydk::Entity
{
    public:
        Vfi();
        ~Vfi();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf vfi_shutdown; //type: empty
        ydk::YLeaf vpnid; //type: uint32
        class MulticastP2Mp; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp
        class VfiPseudowires; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires
        class BgpAutoDiscovery; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery> bgp_auto_discovery;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp> multicast_p2mp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires> vfi_pseudowires;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp : public ydk::Entity
{
    public:
        MulticastP2Mp();
        ~MulticastP2Mp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        class Transports; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports
        class Signalings; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings> signalings;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports> transports;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports : public ydk::Entity
{
    public:
        Transports();
        ~Transports();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Transport; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport> > transport;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf transport_name; //type: string
        ydk::YLeaf attribute_set_name; //type: string

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings : public ydk::Entity
{
    public:
        Signalings();
        ~Signalings();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Signaling; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling> > signaling;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling : public ydk::Entity
{
    public:
        Signaling();
        ~Signaling();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf signaling_name; //type: string

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires : public ydk::Entity
{
    public:
        VfiPseudowires();
        ~VfiPseudowires();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class VfiPseudowire; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire> > vfi_pseudowire;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire : public ydk::Entity
{
    public:
        VfiPseudowire();
        ~VfiPseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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
        class VfiPwDhcpSnoop; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop
        class VfiPwMplsStaticLabels; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels
        class PseudowireStaticMacAddresses; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses> pseudowire_static_mac_addresses;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop> vfi_pw_dhcp_snoop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels> vfi_pw_mpls_static_labels;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop : public ydk::Entity
{
    public:
        VfiPwDhcpSnoop();
        ~VfiPwDhcpSnoop();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf profile_id; //type: InterfaceProfile
        ydk::YLeaf dhcp_snooping_id; //type: string

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels : public ydk::Entity
{
    public:
        VfiPwMplsStaticLabels();
        ~VfiPwMplsStaticLabels();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf local_static_label; //type: uint32
        ydk::YLeaf remote_static_label; //type: uint32

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses : public ydk::Entity
{
    public:
        PseudowireStaticMacAddresses();
        ~PseudowireStaticMacAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PseudowireStaticMacAddress; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress> > pseudowire_static_mac_address;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress : public ydk::Entity
{
    public:
        PseudowireStaticMacAddress();
        ~PseudowireStaticMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery : public ydk::Entity
{
    public:
        BgpAutoDiscovery();
        ~BgpAutoDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf table_policy; //type: string
        ydk::YLeaf ad_control_word; //type: empty
        ydk::YLeaf enable; //type: empty
        class LdpSignalingProtocol; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol
        class BgpRoutePolicy; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy
        class RouteDistinguisher; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher
        class BgpSignalingProtocol; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol
        class RouteTargets; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy> bgp_route_policy;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol> bgp_signaling_protocol;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol> ldp_signaling_protocol;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher> route_distinguisher;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets> route_targets;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol : public ydk::Entity
{
    public:
        LdpSignalingProtocol();
        ~LdpSignalingProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        class Vplsid; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::Vplsid
        class FlowLabelLoadBalance; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance> flow_label_load_balance;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::Vplsid> vplsid;
        
}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::Vplsid : public ydk::Entity
{
    public:
        Vplsid();
        ~Vplsid();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
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

}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::Vplsid

class BgpRouteTargetRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf both;
        static const ydk::Enum::YLeaf import;
        static const ydk::Enum::YLeaf export_;

};

class LoadBalance : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf source_dest_mac;
        static const ydk::Enum::YLeaf source_dest_ip;
        static const ydk::Enum::YLeaf pseudowire_label;

};

class MplsSequencing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf transmit;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf both;

};

class InterfaceProfile : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf snoop;
        static const ydk::Enum::YLeaf dhcp_protocol;

};

class ControlWord : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class BackupDisable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf never;
        static const ydk::Enum::YLeaf delay;

};

class PortDownFlush : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf port_down_flush;
        static const ydk::Enum::YLeaf enable_port_down_flush;
        static const ydk::Enum::YLeaf disable_port_down_flush;

};

class MacWithdrawBehavior : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf legacy;
        static const ydk::Enum::YLeaf optimized;

};

class LdpVplsId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf two_byte_as;
        static const ydk::Enum::YLeaf ipv4_address;

};

class FlowLabelTlvCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_17;
        static const ydk::Enum::YLeaf disable;

};

class ErpPort1 : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf port0;
        static const ydk::Enum::YLeaf port1;

};

class VccvVerification : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf lsp_ping;

};

class PreferredPath : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf te_tunnel;
        static const ydk::Enum::YLeaf ip_tunnel;
        static const ydk::Enum::YLeaf tp_tunnel;

};

class MacNotification : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_notif;
        static const ydk::Enum::YLeaf syslog;
        static const ydk::Enum::YLeaf trap;
        static const ydk::Enum::YLeaf syslog_snmp;

};

class L2VpnVerification : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class FlowLabelLoadBalance : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf receive;
        static const ydk::Enum::YLeaf transmit;
        static const ydk::Enum::YLeaf both;

};

class MacLimitAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf flood;
        static const ydk::Enum::YLeaf no_flood;
        static const ydk::Enum::YLeaf shutdown;

};

class L2VpnLogging : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class EvpnSide : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf evpn_side_stitching;

};

class L2Encapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vlan;
        static const ydk::Enum::YLeaf ethernet;

};

class Interworking : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf ipv4;

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

class BgpRouteDistinguisher : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf auto_;
        static const ydk::Enum::YLeaf two_byte_as;
        static const ydk::Enum::YLeaf four_byte_as;
        static const ydk::Enum::YLeaf ipv4_address;

};

class Erpaps : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interface;
        static const ydk::Enum::YLeaf bridge_domain;
        static const ydk::Enum::YLeaf xconnect;
        static const ydk::Enum::YLeaf none;

};

class L2VpnCapabilityMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf high_mode;
        static const ydk::Enum::YLeaf single_mode;

};

class InterfaceTrafficFlood : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf traffic_flooding;
        static const ydk::Enum::YLeaf enable_flooding;
        static const ydk::Enum::YLeaf disable_flooding;

};

class BridgeDomainTransportMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vlan_passthrough;

};

class TypeOfServiceMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf reflect;

};

class EthernetSegmentIdentifier : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf type0;
        static const ydk::Enum::YLeaf legacy;
        static const ydk::Enum::YLeaf override;

};

class L2Tpv3Sequencing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf off;
        static const ydk::Enum::YLeaf both;

};

class MplsSignalingProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ldp;

};

class MacLearn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf default_learning;
        static const ydk::Enum::YLeaf enable_learning;
        static const ydk::Enum::YLeaf disable_learning;

};

class L2TpCookieSize : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf zero;
        static const ydk::Enum::YLeaf four;
        static const ydk::Enum::YLeaf eight;

};

class BdmacLearn : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable_learning;

};

class TransportMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf vlan;
        static const ydk::Enum::YLeaf vlan_passthrough;

};

class RplRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf owner;
        static const ydk::Enum::YLeaf neighbor;
        static const ydk::Enum::YLeaf next_neighbor;

};

class PwSwitchingPointTlv : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hide;

};

class EvpnEncapsulation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf evpn_encapsulation_mpls;

};

class L2TpSignalingProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf l2tpv3;

};

class MacSecureAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf restrict;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf shutdown;

};

class StormControl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;
        static const ydk::Enum::YLeaf broadcast;

};

class MacAging : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf absolute;
        static const ydk::Enum::YLeaf inactivity;

};

class BgpRouteTarget : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_stitching;
        static const ydk::Enum::YLeaf stitching;

};

class ErpPort : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf virtual_;
        static const ydk::Enum::YLeaf interface;

};


}
}

#endif /* _CISCO_IOS_XR_L2VPN_CFG_0_ */

