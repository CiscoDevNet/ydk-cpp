#ifndef _CISCO_IOS_XR_L2VPN_CFG_0_
#define _CISCO_IOS_XR_L2VPN_CFG_0_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_l2vpn_cfg {

class L2Vpn : public Entity
{
    public:
        L2Vpn();
        ~L2Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


        YLeaf nsr; //type: empty
        YLeaf mtu_mismatch_ignore; //type: empty
        YLeaf tcn_propagation; //type: empty
        YLeaf pwoam_refresh; //type: uint32
        YLeaf load_balance; //type: LoadBalanceEnum
        YLeaf mspw_description; //type: string
        YLeaf pw_status_disable; //type: empty
        YLeaf enable; //type: empty
        YLeaf pw_grouping; //type: empty
        YLeaf capability; //type: L2VpnCapabilityModeEnum
        YLeaf l2vpn_router_id; //type: string

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


class L2Vpn::PwRouting : public Entity
{
    public:
        PwRouting();
        ~PwRouting();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pw_routing_global_id; //type: uint32

        class PwRoutingBgp; //type: L2Vpn::PwRouting::PwRoutingBgp

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::PwRouting::PwRoutingBgp> pw_routing_bgp;


}; // L2Vpn::PwRouting


class L2Vpn::PwRouting::PwRoutingBgp : public Entity
{
    public:
        PwRoutingBgp();
        ~PwRoutingBgp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty

        class EvpnRouteDistinguisher; //type: L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher> evpn_route_distinguisher;


}; // L2Vpn::PwRouting::PwRoutingBgp


class L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher : public Entity
{
    public:
        EvpnRouteDistinguisher();
        ~EvpnRouteDistinguisher();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: BgpRouteDistinguisherEnum
        YLeaf as; //type: uint32
        YLeaf as_index; //type: uint32
        YLeaf address; //type: string
        YLeaf addr_index; //type: uint32



}; // L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher


class L2Vpn::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ldp_flap; //type: empty



}; // L2Vpn::Neighbor


class L2Vpn::Database : public Entity
{
    public:
        Database();
        ~Database();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



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


class L2Vpn::Database::G8032Rings : public Entity
{
    public:
        G8032Rings();
        ~G8032Rings();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class G8032Ring; //type: L2Vpn::Database::G8032Rings::G8032Ring

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring> > g8032_ring;


}; // L2Vpn::Database::G8032Rings


class L2Vpn::Database::G8032Rings::G8032Ring : public Entity
{
    public:
        G8032Ring();
        ~G8032Ring();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf g8032_ring_name; //type: string
        YLeaf open_ring; //type: empty
        YLeaf exclusion_list; //type: string
        YLeaf erp_provider_bridge; //type: empty

        class ErpPort0S; //type: L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S
        class ErpInstances; //type: L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances
        class ErpPort1S; //type: L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances> erp_instances;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S> erp_port0s;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S> erp_port1s;


}; // L2Vpn::Database::G8032Rings::G8032Ring


class L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S : public Entity
{
    public:
        ErpPort0S();
        ~ErpPort0S();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ErpPort0; //type: L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0> > erp_port0;


}; // L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S


class L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0 : public Entity
{
    public:
        ErpPort0();
        ~ErpPort0();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf monitor; //type: string



}; // L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0


class L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances : public Entity
{
    public:
        ErpInstances();
        ~ErpInstances();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ErpInstance; //type: L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance> > erp_instance;


}; // L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances


class L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance : public Entity
{
    public:
        ErpInstance();
        ~ErpInstance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf erp_instance_id; //type: uint32
        YLeaf description; //type: string
        YLeaf inclusion_list; //type: string
        YLeaf profile; //type: string

        class Rpl; //type: L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl
        class Aps; //type: L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps> aps;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl> rpl;


}; // L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance


class L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl : public Entity
{
    public:
        Rpl();
        ~Rpl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf port; //type: ErpPort1Enum
        YLeaf role; //type: RplRoleEnum



}; // L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl


class L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps : public Entity
{
    public:
        Aps();
        ~Aps();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf port0; //type: string
        YLeaf enable; //type: empty
        YLeaf level; //type: uint32

        class Port1; //type: L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1> port1;


}; // L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps


class L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1 : public Entity
{
    public:
        Port1();
        ~Port1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf aps_type; //type: ErpapsEnum
        YLeaf aps_channel; //type: string



}; // L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1


class L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S : public Entity
{
    public:
        ErpPort1S();
        ~ErpPort1S();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class ErpPort1; //type: L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1> > erp_port1;


}; // L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S


class L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1 : public Entity
{
    public:
        ErpPort1();
        ~ErpPort1();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf erp_port_type; //type: ErpPortEnum

        class NoneOrVirtual; //type: L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual
        class Interface; //type: L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface> > interface;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual> none_or_virtual; // presence node


}; // L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1


class L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual : public Entity
{
    public:
        NoneOrVirtual();
        ~NoneOrVirtual();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf monitor; //type: string



}; // L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual


class L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf monitor; //type: string



}; // L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface


class L2Vpn::Database::XconnectGroups : public Entity
{
    public:
        XconnectGroups();
        ~XconnectGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class XconnectGroup; //type: L2Vpn::Database::XconnectGroups::XconnectGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup> > xconnect_group;


}; // L2Vpn::Database::XconnectGroups


class L2Vpn::Database::XconnectGroups::XconnectGroup : public Entity
{
    public:
        XconnectGroup();
        ~XconnectGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class P2PXconnects; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects
        class Mp2MpXconnects; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects> mp2mp_xconnects;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects> p2p_xconnects;


}; // L2Vpn::Database::XconnectGroups::XconnectGroup


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects : public Entity
{
    public:
        P2PXconnects();
        ~P2PXconnects();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class P2PXconnect; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect> > p2p_xconnect;


}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect : public Entity
{
    public:
        P2PXconnect();
        ~P2PXconnect();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf p2p_description; //type: string
        YLeaf interworking; //type: InterworkingEnum

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


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits : public Entity
{
    public:
        BackupAttachmentCircuits();
        ~BackupAttachmentCircuits();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BackupAttachmentCircuit; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit> > backup_attachment_circuit;


}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit : public Entity
{
    public:
        BackupAttachmentCircuit();
        ~BackupAttachmentCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string



}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns : public Entity
{
    public:
        PseudowireEvpns();
        ~PseudowireEvpns();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PseudowireEvpn; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn> > pseudowire_evpn;


}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn : public Entity
{
    public:
        PseudowireEvpn();
        ~PseudowireEvpn();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf eviid; //type: uint32
        YLeaf remote_acid; //type: uint32
        YLeaf source_acid; //type: uint32



}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires : public Entity
{
    public:
        Pseudowires();
        ~Pseudowires();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Pseudowire; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire> > pseudowire;


}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire : public Entity
{
    public:
        Pseudowire();
        ~Pseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pseudowire_id; //type: uint32

        class Neighbor; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor
        class PseudowireAddress; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor> > neighbor;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress> > pseudowire_address;


}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor; //type: string
        YLeaf tag_impose; //type: uint32
        YLeaf class_; //type: string
        YLeaf source_address; //type: string
        YLeaf bandwidth; //type: uint32

        class MplsStaticLabels; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels
        class BackupPseudowires; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires
        class L2TpStaticAttributes; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes
        class L2TpStatic; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires> backup_pseudowires;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic> l2tp_static;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes> l2tp_static_attributes;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels> mpls_static_labels;


}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels : public Entity
{
    public:
        MplsStaticLabels();
        ~MplsStaticLabels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_static_label; //type: uint32
        YLeaf remote_static_label; //type: uint32



}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires : public Entity
{
    public:
        BackupPseudowires();
        ~BackupPseudowires();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BackupPseudowire; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire> > backup_pseudowire;


}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire : public Entity
{
    public:
        BackupPseudowire();
        ~BackupPseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor; //type: string
        YLeaf pseudowire_id; //type: uint32
        YLeaf backup_pw_class; //type: string

        class BackupMplsStaticLabels; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels> backup_mpls_static_labels;


}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels : public Entity
{
    public:
        BackupMplsStaticLabels();
        ~BackupMplsStaticLabels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_static_label; //type: uint32
        YLeaf remote_static_label; //type: uint32



}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes : public Entity
{
    public:
        L2TpStaticAttributes();
        ~L2TpStaticAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2tp_remote_session_id; //type: uint32
        YLeaf l2tp_local_session_id; //type: uint32

        class L2TpRemoteCookie; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie
        class L2TpSecondaryLocalCookie; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie
        class L2TpLocalCookie; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie> l2tp_local_cookie;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie> l2tp_remote_cookie;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie> l2tp_secondary_local_cookie;


}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie : public Entity
{
    public:
        L2TpRemoteCookie();
        ~L2TpRemoteCookie();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf size; //type: L2TpCookieSizeEnum
        YLeaf lower_value; //type: uint32
        YLeaf higher_value; //type: uint32



}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie : public Entity
{
    public:
        L2TpSecondaryLocalCookie();
        ~L2TpSecondaryLocalCookie();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf size; //type: L2TpCookieSizeEnum
        YLeaf lower_value; //type: uint32
        YLeaf higher_value; //type: uint32



}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie : public Entity
{
    public:
        L2TpLocalCookie();
        ~L2TpLocalCookie();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf size; //type: L2TpCookieSizeEnum
        YLeaf lower_value; //type: uint32
        YLeaf higher_value; //type: uint32



}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic : public Entity
{
    public:
        L2TpStatic();
        ~L2TpStatic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty



}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress : public Entity
{
    public:
        PseudowireAddress();
        ~PseudowireAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pseudowire_address; //type: string
        YLeaf tag_impose; //type: uint32
        YLeaf class_; //type: string
        YLeaf source_address; //type: string
        YLeaf bandwidth; //type: uint32

        class MplsStaticLabels; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels
        class BackupPseudowires; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires
        class L2TpStaticAttributes; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes
        class L2TpStatic; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires> backup_pseudowires;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic> l2tp_static;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes> l2tp_static_attributes;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels> mpls_static_labels;


}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels : public Entity
{
    public:
        MplsStaticLabels();
        ~MplsStaticLabels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_static_label; //type: uint32
        YLeaf remote_static_label; //type: uint32



}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires : public Entity
{
    public:
        BackupPseudowires();
        ~BackupPseudowires();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BackupPseudowire; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire> > backup_pseudowire;


}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire : public Entity
{
    public:
        BackupPseudowire();
        ~BackupPseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor; //type: string
        YLeaf pseudowire_id; //type: uint32
        YLeaf backup_pw_class; //type: string

        class BackupMplsStaticLabels; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels> backup_mpls_static_labels;


}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels : public Entity
{
    public:
        BackupMplsStaticLabels();
        ~BackupMplsStaticLabels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_static_label; //type: uint32
        YLeaf remote_static_label; //type: uint32



}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes : public Entity
{
    public:
        L2TpStaticAttributes();
        ~L2TpStaticAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf l2tp_remote_session_id; //type: uint32
        YLeaf l2tp_local_session_id; //type: uint32

        class L2TpRemoteCookie; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie
        class L2TpSecondaryLocalCookie; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie
        class L2TpLocalCookie; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie> l2tp_local_cookie;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie> l2tp_remote_cookie;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie> l2tp_secondary_local_cookie;


}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie : public Entity
{
    public:
        L2TpRemoteCookie();
        ~L2TpRemoteCookie();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf size; //type: L2TpCookieSizeEnum
        YLeaf lower_value; //type: uint32
        YLeaf higher_value; //type: uint32



}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie : public Entity
{
    public:
        L2TpSecondaryLocalCookie();
        ~L2TpSecondaryLocalCookie();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf size; //type: L2TpCookieSizeEnum
        YLeaf lower_value; //type: uint32
        YLeaf higher_value; //type: uint32



}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie : public Entity
{
    public:
        L2TpLocalCookie();
        ~L2TpLocalCookie();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf size; //type: L2TpCookieSizeEnum
        YLeaf lower_value; //type: uint32
        YLeaf higher_value; //type: uint32



}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic : public Entity
{
    public:
        L2TpStatic();
        ~L2TpStatic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty



}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions : public Entity
{
    public:
        MonitorSessions();
        ~MonitorSessions();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MonitorSession; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession> > monitor_session;


}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession : public Entity
{
    public:
        MonitorSession();
        ~MonitorSession();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf enable; //type: empty



}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds : public Entity
{
    public:
        PseudowireRouteds();
        ~PseudowireRouteds();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PseudowireRouted; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted> > pseudowire_routed;


}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted : public Entity
{
    public:
        PseudowireRouted();
        ~PseudowireRouted();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf global_id; //type: uint32
        YLeaf prefix; //type: string
        YLeaf acid; //type: uint32
        YLeaf sacid; //type: uint32
        YLeaf tag_impose; //type: uint32
        YLeaf class_; //type: string



}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits : public Entity
{
    public:
        AttachmentCircuits();
        ~AttachmentCircuits();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AttachmentCircuit; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit> > attachment_circuit;


}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits


class L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit : public Entity
{
    public:
        AttachmentCircuit();
        ~AttachmentCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf enable; //type: empty



}; // L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects : public Entity
{
    public:
        Mp2MpXconnects();
        ~Mp2MpXconnects();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Mp2MpXconnect; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect> > mp2mp_xconnect;


}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect : public Entity
{
    public:
        Mp2MpXconnect();
        ~Mp2MpXconnect();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf mp2mpmtu; //type: uint32
        YLeaf mp2mp_control_word; //type: empty
        YLeaf mp2mpl2_encapsulation; //type: L2EncapsulationEnum
        YLeaf mp2mp_interworking; //type: InterworkingEnum
        YLeaf mp2mp_shutdown; //type: empty
        YLeaf mp2mpvpn_id; //type: uint32

        class Mp2MpAutoDiscovery; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery> mp2mp_auto_discovery;


}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery : public Entity
{
    public:
        Mp2MpAutoDiscovery();
        ~Mp2MpAutoDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty

        class RouteDistinguisher; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher
        class Mp2MpRoutePolicy; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy
        class Mp2MpRouteTargets; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets
        class Mp2MpSignalingProtocol; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy> mp2mp_route_policy;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets> mp2mp_route_targets;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol> mp2mp_signaling_protocol;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher> route_distinguisher;


}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher : public Entity
{
    public:
        RouteDistinguisher();
        ~RouteDistinguisher();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: BgpRouteDistinguisherEnum
        YLeaf as; //type: uint32
        YLeaf as_index; //type: uint32
        YLeaf address; //type: string
        YLeaf addr_index; //type: uint32



}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy : public Entity
{
    public:
        Mp2MpRoutePolicy();
        ~Mp2MpRoutePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf export_; //type: string



}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets : public Entity
{
    public:
        Mp2MpRouteTargets();
        ~Mp2MpRouteTargets();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Mp2MpRouteTarget; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget> > mp2mp_route_target;


}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget : public Entity
{
    public:
        Mp2MpRouteTarget();
        ~Mp2MpRouteTarget();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf role; //type: BgpRouteTargetRoleEnum
        YLeaf format; //type: BgpRouteTargetFormatEnum

        class TwoByteAsOrFourByteAs; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs
        class Ipv4Address; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address> > ipv4_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs> > two_byte_as_or_four_byte_as;


}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs : public Entity
{
    public:
        TwoByteAsOrFourByteAs();
        ~TwoByteAsOrFourByteAs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf as; //type: uint32
        YLeaf as_index; //type: uint32



}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address : public Entity
{
    public:
        Ipv4Address();
        ~Ipv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf addr_index; //type: uint32



}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol : public Entity
{
    public:
        Mp2MpSignalingProtocol();
        ~Mp2MpSignalingProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ce_range; //type: uint32
        YLeaf enable; //type: empty

        class FlowLabelLoadBalance; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance
        class Ceids; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids> ceids;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance> flow_label_load_balance;


}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance : public Entity
{
    public:
        FlowLabelLoadBalance();
        ~FlowLabelLoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf flow_label; //type: FlowLabelLoadBalanceEnum
        YLeaf static_; //type: empty



}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids : public Entity
{
    public:
        Ceids();
        ~Ceids();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ceid; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid> > ceid;


}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid : public Entity
{
    public:
        Ceid();
        ~Ceid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ce_id; //type: uint32

        class RemoteCeidAttachmentCircuits; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits> remote_ceid_attachment_circuits;


}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits : public Entity
{
    public:
        RemoteCeidAttachmentCircuits();
        ~RemoteCeidAttachmentCircuits();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RemoteCeidAttachmentCircuit; //type: L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit> > remote_ceid_attachment_circuit;


}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits


class L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit : public Entity
{
    public:
        RemoteCeidAttachmentCircuit();
        ~RemoteCeidAttachmentCircuit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf remote_ce_id; //type: uint32



}; // L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit


class L2Vpn::Database::BridgeDomainGroups : public Entity
{
    public:
        BridgeDomainGroups();
        ~BridgeDomainGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BridgeDomainGroup; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup> > bridge_domain_group;


}; // L2Vpn::Database::BridgeDomainGroups


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup : public Entity
{
    public:
        BridgeDomainGroup();
        ~BridgeDomainGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class BridgeDomains; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains> bridge_domains;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains : public Entity
{
    public:
        BridgeDomains();
        ~BridgeDomains();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BridgeDomain; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain> > bridge_domain;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain : public Entity
{
    public:
        BridgeDomain();
        ~BridgeDomain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf coupled_mode; //type: empty
        YLeaf shutdown; //type: empty
        YLeaf flooding_unknown_unicast; //type: empty
        YLeaf igmp_snooping_disable; //type: empty
        YLeaf transport_mode; //type: BridgeDomainTransportModeEnum
        YLeaf mld_snooping; //type: string
        YLeaf bridge_domain_mtu; //type: uint32
        YLeaf dhcp; //type: string
        YLeaf bridge_description; //type: string
        YLeaf igmp_snooping; //type: string
        YLeaf flooding; //type: empty

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


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls : public Entity
{
    public:
        BdStormControls();
        ~BdStormControls();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BdStormControl; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl> > bd_storm_control;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl : public Entity
{
    public:
        BdStormControl();
        ~BdStormControl();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sctype; //type: StormControlEnum

        class StormControlUnit; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit> storm_control_unit;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit : public Entity
{
    public:
        StormControlUnit();
        ~StormControlUnit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf kbits_per_sec; //type: uint32
        YLeaf pkts_per_sec; //type: uint32



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis : public Entity
{
    public:
        MemberVnis();
        ~MemberVnis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MemberVni; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni> > member_vni;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni : public Entity
{
    public:
        MemberVni();
        ~MemberVni();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vni; //type: uint32

        class MemberVniStaticMacAddresses; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses> member_vni_static_mac_addresses;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses : public Entity
{
    public:
        MemberVniStaticMacAddresses();
        ~MemberVniStaticMacAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MemberVniStaticMacAddress; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress> > member_vni_static_mac_address;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress : public Entity
{
    public:
        MemberVniStaticMacAddress();
        ~MemberVniStaticMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mac_address; //type: string
        YLeaf next_hop_ip; //type: string



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac : public Entity
{
    public:
        BridgeDomainMac();
        ~BridgeDomainMac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bd_mac_withdraw_relay; //type: empty
        YLeaf bd_mac_withdraw_access_pw_disable; //type: empty
        YLeaf bd_mac_port_down_flush; //type: empty
        YLeaf bd_mac_withdraw; //type: empty
        YLeaf bd_mac_withdraw_behavior; //type: MacWithdrawBehaviorEnum
        YLeaf bd_mac_learn; //type: BdmacLearnEnum

        class BdMacLimit; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit
        class BdMacFilters; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters
        class MacSecure; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure
        class BdMacAging; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging> bd_mac_aging;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters> bd_mac_filters;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit> bd_mac_limit;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure> mac_secure;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit : public Entity
{
    public:
        BdMacLimit();
        ~BdMacLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bd_mac_limit_action; //type: MacLimitActionEnum
        YLeaf bd_mac_limit_notif; //type: MacNotificationEnum
        YLeaf bd_mac_limit_max; //type: uint32



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters : public Entity
{
    public:
        BdMacFilters();
        ~BdMacFilters();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BdMacFilter; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter> > bd_mac_filter;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter : public Entity
{
    public:
        BdMacFilter();
        ~BdMacFilter();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf drop; //type: empty



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure : public Entity
{
    public:
        MacSecure();
        ~MacSecure();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf logging; //type: empty
        YLeaf action; //type: MacSecureActionEnum
        YLeaf enable; //type: empty



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging : public Entity
{
    public:
        BdMacAging();
        ~BdMacAging();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf bd_mac_aging_type; //type: MacAgingEnum
        YLeaf bd_mac_aging_time; //type: uint32



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite : public Entity
{
    public:
        NvSatellite();
        ~NvSatellite();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf offload_ipv4_multicast_enable; //type: empty
        YLeaf enable; //type: empty



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb : public Entity
{
    public:
        BridgeDomainPbb();
        ~BridgeDomainPbb();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PbbEdges; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges
        class PbbCore; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore> pbb_core;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges> pbb_edges;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges : public Entity
{
    public:
        PbbEdges();
        ~PbbEdges();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PbbEdge; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge> > pbb_edge;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge : public Entity
{
    public:
        PbbEdge();
        ~PbbEdge();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf isid; //type: uint32
        YLeaf core_bd_name; //type: string
        YLeaf pbb_edge_igmp_profile; //type: string
        YLeaf unknown_unicast_bmac; //type: string

        class PbbEdgeSplitHorizonGroup; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup
        class PbbStaticMacMappings; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings
        class PbbEdgeDhcpProfile; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile
        class PbbEdgeMac; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile> pbb_edge_dhcp_profile;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac> pbb_edge_mac;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup> pbb_edge_split_horizon_group;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings> pbb_static_mac_mappings;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup : public Entity
{
    public:
        PbbEdgeSplitHorizonGroup();
        ~PbbEdgeSplitHorizonGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf disable; //type: empty



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings : public Entity
{
    public:
        PbbStaticMacMappings();
        ~PbbStaticMacMappings();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PbbStaticMacMapping; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping> > pbb_static_mac_mapping;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping : public Entity
{
    public:
        PbbStaticMacMapping();
        ~PbbStaticMacMapping();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf pbb_static_mac_mapping_bmac; //type: string



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile : public Entity
{
    public:
        PbbEdgeDhcpProfile();
        ~PbbEdgeDhcpProfile();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_id; //type: InterfaceProfileEnum
        YLeaf dhcp_snooping_id; //type: string



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac : public Entity
{
    public:
        PbbEdgeMac();
        ~PbbEdgeMac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pbb_edge_mac_learning; //type: MacLearnEnum

        class PbbEdgeMacLimit; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit
        class PbbEdgeMacAging; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging
        class PbbEdgeMacSecure; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging> pbb_edge_mac_aging;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit> pbb_edge_mac_limit;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure> pbb_edge_mac_secure;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit : public Entity
{
    public:
        PbbEdgeMacLimit();
        ~PbbEdgeMacLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pbb_edge_mac_limit_action; //type: MacLimitActionEnum
        YLeaf pbb_edge_mac_limit_max; //type: uint32
        YLeaf pbb_edge_mac_limit_notif; //type: MacNotificationEnum



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging : public Entity
{
    public:
        PbbEdgeMacAging();
        ~PbbEdgeMacAging();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pbb_edge_mac_aging_type; //type: MacAgingEnum
        YLeaf pbb_edge_mac_aging_time; //type: uint32



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure : public Entity
{
    public:
        PbbEdgeMacSecure();
        ~PbbEdgeMacSecure();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf logging; //type: L2VpnLoggingEnum
        YLeaf disable; //type: empty
        YLeaf action; //type: MacSecureActionEnum
        YLeaf enable; //type: empty
        YLeaf accept_shutdown; //type: empty



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore : public Entity
{
    public:
        PbbCore();
        ~PbbCore();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pbb_core_mmrp_flood_optimization; //type: empty
        YLeaf vlan_id; //type: uint32
        YLeaf pbb_core_igmp_profile; //type: string
        YLeaf enable; //type: empty

        class PbbCoreMac; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac
        class PbbCoreEvis; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis
        class PbbCoreDhcpProfile; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile> pbb_core_dhcp_profile;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis> pbb_core_evis;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac> pbb_core_mac;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac : public Entity
{
    public:
        PbbCoreMac();
        ~PbbCoreMac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pbb_core_mac_learning; //type: MacLearnEnum

        class PbbCoreMacAging; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging
        class PbbCoreMacLimit; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging> pbb_core_mac_aging;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit> pbb_core_mac_limit;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging : public Entity
{
    public:
        PbbCoreMacAging();
        ~PbbCoreMacAging();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pbb_core_mac_aging_type; //type: MacAgingEnum
        YLeaf pbb_core_mac_aging_time; //type: uint32



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit : public Entity
{
    public:
        PbbCoreMacLimit();
        ~PbbCoreMacLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pbb_core_mac_limit_max; //type: uint32
        YLeaf pbb_core_mac_limit_notif; //type: MacNotificationEnum
        YLeaf pbb_core_mac_limit_action; //type: MacLimitActionEnum



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis : public Entity
{
    public:
        PbbCoreEvis();
        ~PbbCoreEvis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PbbCoreEvi; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi> > pbb_core_evi;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi : public Entity
{
    public:
        PbbCoreEvi();
        ~PbbCoreEvi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf eviid; //type: uint32



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile : public Entity
{
    public:
        PbbCoreDhcpProfile();
        ~PbbCoreDhcpProfile();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_id; //type: InterfaceProfileEnum
        YLeaf dhcp_snooping_id; //type: string



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis : public Entity
{
    public:
        BridgeDomainEvis();
        ~BridgeDomainEvis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BridgeDomainEvi; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi> > bridge_domain_evi;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi : public Entity
{
    public:
        BridgeDomainEvi();
        ~BridgeDomainEvi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf eviid; //type: uint32



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis : public Entity
{
    public:
        AccessVfis();
        ~AccessVfis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AccessVfi; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi> > access_vfi;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi : public Entity
{
    public:
        AccessVfi();
        ~AccessVfi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class AccessVfiPseudowires; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires> access_vfi_pseudowires;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires : public Entity
{
    public:
        AccessVfiPseudowires();
        ~AccessVfiPseudowires();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AccessVfiPseudowire; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire> > access_vfi_pseudowire;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire : public Entity
{
    public:
        AccessVfiPseudowire();
        ~AccessVfiPseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor; //type: string
        YLeaf pseudowire_id; //type: uint32

        class AccessVfiPseudowireStaticMacAddresses; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses> access_vfi_pseudowire_static_mac_addresses;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses : public Entity
{
    public:
        AccessVfiPseudowireStaticMacAddresses();
        ~AccessVfiPseudowireStaticMacAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AccessVfiPseudowireStaticMacAddress; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress> > access_vfi_pseudowire_static_mac_address;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress : public Entity
{
    public:
        AccessVfiPseudowireStaticMacAddress();
        ~AccessVfiPseudowireStaticMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires : public Entity
{
    public:
        BdPseudowires();
        ~BdPseudowires();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BdPseudowire; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire> > bd_pseudowire;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire : public Entity
{
    public:
        BdPseudowire();
        ~BdPseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor; //type: string
        YLeaf pseudowire_id; //type: uint32
        YLeaf pseudowire_mld_snoop; //type: string
        YLeaf pseudowire_igmp_snoop; //type: string
        YLeaf pseudowire_flooding; //type: InterfaceTrafficFloodEnum
        YLeaf bd_pw_class; //type: string
        YLeaf pseudowire_flooding_unknown_unicast; //type: InterfaceTrafficFloodEnum

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


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai : public Entity
{
    public:
        PseudowireDai();
        ~PseudowireDai();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf logging; //type: L2VpnLoggingEnum
        YLeaf disable; //type: empty
        YLeaf enable; //type: empty

        class PseudowireDaiAddressValidation; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation> pseudowire_dai_address_validation;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation : public Entity
{
    public:
        PseudowireDaiAddressValidation();
        ~PseudowireDaiAddressValidation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv4_verification; //type: L2VpnVerificationEnum
        YLeaf destination_mac_verification; //type: L2VpnVerificationEnum
        YLeaf source_mac_verification; //type: L2VpnVerificationEnum



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes : public Entity
{
    public:
        BdpwStormControlTypes();
        ~BdpwStormControlTypes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BdpwStormControlType; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType> > bdpw_storm_control_type;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType : public Entity
{
    public:
        BdpwStormControlType();
        ~BdpwStormControlType();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf sctype; //type: StormControlEnum

        class StormControlUnit; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit> storm_control_unit;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit : public Entity
{
    public:
        StormControlUnit();
        ~StormControlUnit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf kbits_per_sec; //type: uint32
        YLeaf pkts_per_sec; //type: uint32



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile : public Entity
{
    public:
        PseudowireProfile();
        ~PseudowireProfile();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_id; //type: InterfaceProfileEnum
        YLeaf dhcp_snooping_id; //type: string



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses : public Entity
{
    public:
        BdPwStaticMacAddresses();
        ~BdPwStaticMacAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BdPwStaticMacAddress; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress> > bd_pw_static_mac_address;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress : public Entity
{
    public:
        BdPwStaticMacAddress();
        ~BdPwStaticMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard : public Entity
{
    public:
        PseudowireIpSourceGuard();
        ~PseudowireIpSourceGuard();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf logging; //type: L2VpnLoggingEnum
        YLeaf disable; //type: empty
        YLeaf enable; //type: empty



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac : public Entity
{
    public:
        PseudowireMac();
        ~PseudowireMac();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pseudowire_mac_port_down_flush; //type: PortDownFlushEnum
        YLeaf enable; //type: empty
        YLeaf pseudowire_mac_learning; //type: MacLearnEnum

        class PseudowireMacSecure; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure
        class PseudowireMacAging; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging
        class PseudowireMacLimit; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging> pseudowire_mac_aging;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit> pseudowire_mac_limit;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure> pseudowire_mac_secure;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure : public Entity
{
    public:
        PseudowireMacSecure();
        ~PseudowireMacSecure();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf logging; //type: L2VpnLoggingEnum
        YLeaf disable; //type: empty
        YLeaf action; //type: MacSecureActionEnum
        YLeaf enable; //type: empty



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging : public Entity
{
    public:
        PseudowireMacAging();
        ~PseudowireMacAging();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pseudowire_mac_aging_type; //type: MacAgingEnum
        YLeaf pseudowire_mac_aging_time; //type: uint32



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit : public Entity
{
    public:
        PseudowireMacLimit();
        ~PseudowireMacLimit();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pseudowire_mac_limit_action; //type: MacLimitActionEnum
        YLeaf pseudowire_mac_limit_notif; //type: MacNotificationEnum
        YLeaf pseudowire_mac_limit_max; //type: uint32



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon : public Entity
{
    public:
        BdPwSplitHorizon();
        ~BdPwSplitHorizon();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BdPwSplitHorizonGroup; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup> bd_pw_split_horizon_group;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup : public Entity
{
    public:
        BdPwSplitHorizonGroup();
        ~BdPwSplitHorizonGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels : public Entity
{
    public:
        BdPwMplsStaticLabels();
        ~BdPwMplsStaticLabels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_static_label; //type: uint32
        YLeaf remote_static_label; //type: uint32



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires : public Entity
{
    public:
        BridgeDomainBackupPseudowires();
        ~BridgeDomainBackupPseudowires();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BridgeDomainBackupPseudowire; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire> > bridge_domain_backup_pseudowire;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire : public Entity
{
    public:
        BridgeDomainBackupPseudowire();
        ~BridgeDomainBackupPseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor; //type: string
        YLeaf pseudowire_id; //type: uint32
        YLeaf bridge_domain_backup_pw_class; //type: string



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis : public Entity
{
    public:
        Vfis();
        ~Vfis();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Vfi; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi> > vfi;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi : public Entity
{
    public:
        Vfi();
        ~Vfi();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string
        YLeaf vfi_shutdown; //type: empty
        YLeaf vpnid; //type: uint32

        class MulticastP2Mp; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp
        class VfiPseudowires; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires
        class BgpAutoDiscovery; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery> bgp_auto_discovery;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp> multicast_p2mp;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires> vfi_pseudowires;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp : public Entity
{
    public:
        MulticastP2Mp();
        ~MulticastP2Mp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty

        class Transports; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports
        class Signalings; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings> signalings;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports> transports;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports : public Entity
{
    public:
        Transports();
        ~Transports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Transport; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport> > transport;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport : public Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf transport_name; //type: string
        YLeaf attribute_set_name; //type: string



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings : public Entity
{
    public:
        Signalings();
        ~Signalings();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Signaling; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling> > signaling;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling : public Entity
{
    public:
        Signaling();
        ~Signaling();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf signaling_name; //type: string



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires : public Entity
{
    public:
        VfiPseudowires();
        ~VfiPseudowires();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VfiPseudowire; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire> > vfi_pseudowire;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire : public Entity
{
    public:
        VfiPseudowire();
        ~VfiPseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf neighbor; //type: string
        YLeaf pseudowire_id; //type: uint32
        YLeaf vfi_pw_class; //type: string
        YLeaf vfi_pw_igmp_snoop; //type: string
        YLeaf vfi_pw_mld_snoop; //type: string

        class VfiPwDhcpSnoop; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop
        class VfiPwMplsStaticLabels; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels
        class PseudowireStaticMacAddresses; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses> pseudowire_static_mac_addresses;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop> vfi_pw_dhcp_snoop;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels> vfi_pw_mpls_static_labels;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop : public Entity
{
    public:
        VfiPwDhcpSnoop();
        ~VfiPwDhcpSnoop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf profile_id; //type: InterfaceProfileEnum
        YLeaf dhcp_snooping_id; //type: string



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels : public Entity
{
    public:
        VfiPwMplsStaticLabels();
        ~VfiPwMplsStaticLabels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf local_static_label; //type: uint32
        YLeaf remote_static_label; //type: uint32



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses : public Entity
{
    public:
        PseudowireStaticMacAddresses();
        ~PseudowireStaticMacAddresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PseudowireStaticMacAddress; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress

        std::vector<std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress> > pseudowire_static_mac_address;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress : public Entity
{
    public:
        PseudowireStaticMacAddress();
        ~PseudowireStaticMacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery : public Entity
{
    public:
        BgpAutoDiscovery();
        ~BgpAutoDiscovery();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf table_policy; //type: string
        YLeaf ad_control_word; //type: empty
        YLeaf enable; //type: empty

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


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol : public Entity
{
    public:
        LdpSignalingProtocol();
        ~LdpSignalingProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: empty

        class Vplsid; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::Vplsid
        class FlowLabelLoadBalance; //type: L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance

        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance> flow_label_load_balance;
        std::shared_ptr<Cisco_IOS_XR_l2vpn_cfg::L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::Vplsid> vplsid;


}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol


class L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::Vplsid : public Entity
{
    public:
        Vplsid();
        ~Vplsid();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf type; //type: LdpVplsIdEnum
        YLeaf as; //type: uint32
        YLeaf as_index; //type: uint32
        YLeaf address; //type: string
        YLeaf address_index; //type: uint32



}; // L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::Vplsid

class FlowLabelTlvCodeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_17;
        static const Enum::YLeaf disable;

};

class BackupDisableEnum : public Enum
{
    public:
        static const Enum::YLeaf never;
        static const Enum::YLeaf delay;

};

class BgpRouteTargetFormatEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf two_byte_as;
        static const Enum::YLeaf four_byte_as;
        static const Enum::YLeaf ipv4_address;

};

class LoadBalanceEnum : public Enum
{
    public:
        static const Enum::YLeaf source_dest_mac;
        static const Enum::YLeaf source_dest_ip;
        static const Enum::YLeaf pseudowire_label;

};

class BdmacLearnEnum : public Enum
{
    public:
        static const Enum::YLeaf disable_learning;

};

class InterworkingEnum : public Enum
{
    public:
        static const Enum::YLeaf ethernet;
        static const Enum::YLeaf ipv4;

};

class PwSwitchingPointTlvEnum : public Enum
{
    public:
        static const Enum::YLeaf hide;

};

class MacAgingEnum : public Enum
{
    public:
        static const Enum::YLeaf absolute;
        static const Enum::YLeaf inactivity;

};

class L2Tpv3SequencingEnum : public Enum
{
    public:
        static const Enum::YLeaf off;
        static const Enum::YLeaf both;

};

class ErpPort1Enum : public Enum
{
    public:
        static const Enum::YLeaf port0;
        static const Enum::YLeaf port1;

};

class InterfaceProfileEnum : public Enum
{
    public:
        static const Enum::YLeaf snoop;
        static const Enum::YLeaf dhcp_protocol;

};

class L2EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf vlan;
        static const Enum::YLeaf ethernet;

};

class InterfaceTrafficFloodEnum : public Enum
{
    public:
        static const Enum::YLeaf traffic_flooding;
        static const Enum::YLeaf enable_flooding;
        static const Enum::YLeaf disable_flooding;

};

class L2VpnLoggingEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;
        static const Enum::YLeaf disable;

};

class BgpRouteTargetRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf import;
        static const Enum::YLeaf export_;

};

class ErpPortEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf virtual_;
        static const Enum::YLeaf interface;

};

class MacWithdrawBehaviorEnum : public Enum
{
    public:
        static const Enum::YLeaf legacy;
        static const Enum::YLeaf optimized;

};

class L2TpCookieSizeEnum : public Enum
{
    public:
        static const Enum::YLeaf zero;
        static const Enum::YLeaf four;
        static const Enum::YLeaf eight;

};

class StormControlEnum : public Enum
{
    public:
        static const Enum::YLeaf unicast;
        static const Enum::YLeaf multicast;
        static const Enum::YLeaf broadcast;

};

class L2TpSignalingProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf l2tpv3;

};

class RplRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf owner;
        static const Enum::YLeaf neighbor;
        static const Enum::YLeaf next_neighbor;

};

class MacLimitActionEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf flood;
        static const Enum::YLeaf no_flood;
        static const Enum::YLeaf shutdown;

};

class TypeOfServiceModeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf reflect;

};

class MacNotificationEnum : public Enum
{
    public:
        static const Enum::YLeaf no_notif;
        static const Enum::YLeaf syslog;
        static const Enum::YLeaf trap;
        static const Enum::YLeaf syslog_snmp;

};

class L2VpnVerificationEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;
        static const Enum::YLeaf disable;

};

class LdpVplsIdEnum : public Enum
{
    public:
        static const Enum::YLeaf two_byte_as;
        static const Enum::YLeaf ipv4_address;

};

class MacLearnEnum : public Enum
{
    public:
        static const Enum::YLeaf default_learning;
        static const Enum::YLeaf enable_learning;
        static const Enum::YLeaf disable_learning;

};

class PortDownFlushEnum : public Enum
{
    public:
        static const Enum::YLeaf port_down_flush;
        static const Enum::YLeaf enable_port_down_flush;
        static const Enum::YLeaf disable_port_down_flush;

};

class L2VpnCapabilityModeEnum : public Enum
{
    public:
        static const Enum::YLeaf high_mode;
        static const Enum::YLeaf single_mode;

};

class MplsSignalingProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf ldp;

};

class BgpRouteTargetEnum : public Enum
{
    public:
        static const Enum::YLeaf no_stitching;
        static const Enum::YLeaf stitching;

};

class EthernetSegmentIdentifierEnum : public Enum
{
    public:
        static const Enum::YLeaf type0;
        static const Enum::YLeaf legacy;
        static const Enum::YLeaf override;

};

class ControlWordEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;
        static const Enum::YLeaf disable;

};

class PreferredPathEnum : public Enum
{
    public:
        static const Enum::YLeaf te_tunnel;
        static const Enum::YLeaf ip_tunnel;
        static const Enum::YLeaf tp_tunnel;

};

class BridgeDomainTransportModeEnum : public Enum
{
    public:
        static const Enum::YLeaf vlan_passthrough;

};

class FlowLabelLoadBalanceEnum : public Enum
{
    public:
        static const Enum::YLeaf off;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf transmit;
        static const Enum::YLeaf both;

};

class BgpRouteDistinguisherEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf two_byte_as;
        static const Enum::YLeaf four_byte_as;
        static const Enum::YLeaf ipv4_address;

};

class ErpapsEnum : public Enum
{
    public:
        static const Enum::YLeaf interface;
        static const Enum::YLeaf bridge_domain;
        static const Enum::YLeaf xconnect;
        static const Enum::YLeaf none;

};

class VccvVerificationEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf lsp_ping;

};

class TransportModeEnum : public Enum
{
    public:
        static const Enum::YLeaf ethernet;
        static const Enum::YLeaf vlan;
        static const Enum::YLeaf vlan_passthrough;

};

class MplsSequencingEnum : public Enum
{
    public:
        static const Enum::YLeaf off;
        static const Enum::YLeaf transmit;
        static const Enum::YLeaf receive;
        static const Enum::YLeaf both;

};

class MacSecureActionEnum : public Enum
{
    public:
        static const Enum::YLeaf restrict;
        static const Enum::YLeaf none;
        static const Enum::YLeaf shutdown;

};


}
}

#endif /* _CISCO_IOS_XR_L2VPN_CFG_0_ */

