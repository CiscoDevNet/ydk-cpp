#ifndef _CISCO_IOS_XR_IPV4_PIM_OPER_10_
#define _CISCO_IOS_XR_IPV4_PIM_OPER_10_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_pim_oper_5.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_7.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_9.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_pim_oper {


class Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange : public Entity
{
    public:
        AnycastRpRange();
        ~AnycastRpRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_length; //type: uint8
        YLeaf ancast_rp_marked; //type: boolean
        class Prefix; //type: Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix> prefix;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange


class Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix


class Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts : public Entity
{
    public:
        TopologyEntryFlagRouteCounts();
        ~TopologyEntryFlagRouteCounts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TopologyEntryFlagRouteCount; //type: Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount> > topology_entry_flag_route_count;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts


class Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount : public Entity
{
    public:
        TopologyEntryFlagRouteCount();
        ~TopologyEntryFlagRouteCount();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entry_flag; //type: PimTopologyEntryFlagEnum
        YLeaf group_ranges; //type: uint32
        YLeaf active_group_ranges; //type: uint32
        YLeaf groute_count; //type: uint32
        YLeaf sg_route_count; //type: uint32
        YLeaf sgr_route_count; //type: uint32
        YLeaf is_node_low_memory; //type: boolean
        class GroupAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress> group_address;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount


class Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress : public Entity
{
    public:
        GroupAddress();
        ~GroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress


class Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect : public Entity
{
    public:
        RpfRedirect();
        ~RpfRedirect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RedirectRouteDatabases; //type: Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases
        class BundleInterfaces; //type: Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces> bundle_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases> redirect_route_databases;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect


class Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases : public Entity
{
    public:
        RedirectRouteDatabases();
        ~RedirectRouteDatabases();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RedirectRouteDatabase; //type: Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase> > redirect_route_database;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases


class Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase : public Entity
{
    public:
        RedirectRouteDatabase();
        ~RedirectRouteDatabase();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_address; //type: string
        YLeaf group_address; //type: string
        YLeaf bandwidth; //type: uint32
        YLeaf uptime; //type: uint64
        class GroupAddressXr; //type: Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr
        class SourceAddressXr; //type: Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr
        class Interface; //type: Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr> group_address_xr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface> > interface;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr> source_address_xr;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase


class Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr : public Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr


class Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr : public Entity
{
    public:
        SourceAddressXr();
        ~SourceAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr


class Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf uptime; //type: uint64
        YLeaf expiry; //type: uint64
        YLeaf is_rpf_interface; //type: boolean
        YLeaf is_outgoing_interface; //type: boolean
        YLeaf is_snoop_interface; //type: boolean
        class RpfAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress> rpf_address;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface


class Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress : public Entity
{
    public:
        RpfAddress();
        ~RpfAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress


class Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces : public Entity
{
    public:
        BundleInterfaces();
        ~BundleInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BundleInterface; //type: Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface> > bundle_interface;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces


class Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface : public Entity
{
    public:
        BundleInterface();
        ~BundleInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_name; //type: string
        YLeaf interface_name; //type: string
        YLeaf rpf_redirect_bundle_name; //type: string
        YLeaf rpf_redirect_interface_name; //type: string
        YLeaf available_bandwidth; //type: int32
        YLeaf allocated_bandwidth; //type: int32
        YLeaf total_bandwidth; //type: int32
        YLeaf topology_bandwidth_used; //type: int32
        YLeaf snooping_bandwidth_used; //type: int32
        YLeaf allocated_threshold_bandwidth; //type: int32
        YLeaf available_threshold_bandwidth; //type: int32

}; // Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface


class Ipv6Pim::Active::Vrfs::Vrf::Tunnels : public Entity
{
    public:
        Tunnels();
        ~Tunnels();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tunnel; //type: Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel> > tunnel;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Tunnels


class Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel : public Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_name; //type: string
        YLeaf vrf_name; //type: string
        class SourceAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress
        class RpAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress
        class SourceAddressNetio; //type: Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio
        class GroupAddressNetio; //type: Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio> group_address_netio;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress> rp_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress> source_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio> source_address_netio;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel


class Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress


class Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress


class Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio : public Entity
{
    public:
        SourceAddressNetio();
        ~SourceAddressNetio();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio


class Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio : public Entity
{
    public:
        GroupAddressNetio();
        ~GroupAddressNetio();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio


class Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes : public Entity
{
    public:
        MulticastStaticRoutes();
        ~MulticastStaticRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class MulticastStaticRoute; //type: Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute> > multicast_static_route;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes


class Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute : public Entity
{
    public:
        MulticastStaticRoute();
        ~MulticastStaticRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf prefix_length; //type: int32
        YLeaf interface_name; //type: string
        YLeaf distance; //type: uint32
        YLeaf prefix_length_xr; //type: uint8
        YLeaf is_via_lsm; //type: boolean
        class Prefix; //type: Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix
        class Nexthop; //type: Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop> nexthop;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix> prefix;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute


class Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix


class Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop


class Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources : public Entity
{
    public:
        GroupMapMatchSources();
        ~GroupMapMatchSources();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class GroupMapMatchSource; //type: Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource> > group_map_match_source;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources


class Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource : public Entity
{
    public:
        GroupMapMatchSource();
        ~GroupMapMatchSource();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_address; //type: string
        YLeaf holdtime; //type: int32
        YLeaf expires; //type: uint64
        YLeaf uptime; //type: uint64
        class SourceOfInformation; //type: Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation
        class GroupMapInformation; //type: Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation> group_map_information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation> source_of_information;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource


class Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation : public Entity
{
    public:
        SourceOfInformation();
        ~SourceOfInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation


class Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation : public Entity
{
    public:
        GroupMapInformation();
        ~GroupMapInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix_length; //type: int32
        YLeaf client; //type: PimShowRangeClientEnum
        YLeaf protocol; //type: PimShowProtocolEnum
        YLeaf group_count; //type: uint32
        YLeaf is_used; //type: boolean
        YLeaf mrib_active; //type: boolean
        YLeaf is_override; //type: boolean
        YLeaf priority; //type: uint32
        class Prefix; //type: Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix
        class RpAddress; //type: Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix> prefix;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress> rp_address;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation


class Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix


class Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress


class Ipv6Pim::Active::Vrfs::Vrf::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Neighbor; //type: Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor> > neighbor;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Neighbors


class Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf uptime; //type: uint64
        YLeaf expires; //type: uint64
        YLeaf expiry_timer; //type: uint64
        YLeaf is_this_neighbor_us; //type: boolean
        YLeaf is_this_neighbor_dr; //type: boolean
        YLeaf is_dr_priority_capable; //type: boolean
        YLeaf dr_priority; //type: uint32
        YLeaf is_bidirectional_capable; //type: boolean
        YLeaf is_proxy_capable; //type: boolean
        YLeaf is_batch_asserts_capable; //type: boolean
        YLeaf is_ecmp_redirect_capable; //type: boolean
        YLeaf is_bfd_state; //type: boolean
        YLeaf propagation_delay; //type: uint16
        YLeaf override_interval; //type: uint16
        class NeighborAddressXr; //type: Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr> > neighbor_address_xr;
        
}; // Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor


class Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr : public Entity
{
    public:
        NeighborAddressXr();
        ~NeighborAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr

class Pim6Ma : public Entity
{
    public:
        Pim6Ma();
        ~Pim6Ma();

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

        class Active; //type: Pim6Ma::Active
        class Standby; //type: Pim6Ma::Standby

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Active> active;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Standby> standby;
        
}; // Pim6Ma


class Pim6Ma::Active : public Entity
{
    public:
        Active();
        ~Active();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceTable; //type: Pim6Ma::Active::InterfaceTable
        class PimMaSummary; //type: Pim6Ma::Active::PimMaSummary

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Active::InterfaceTable> interface_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Active::PimMaSummary> pim_ma_summary;
        
}; // Pim6Ma::Active


class Pim6Ma::Active::InterfaceTable : public Entity
{
    public:
        InterfaceTable();
        ~InterfaceTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceByHandles; //type: Pim6Ma::Active::InterfaceTable::InterfaceByHandles
        class InterfaceByNames; //type: Pim6Ma::Active::InterfaceTable::InterfaceByNames

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Active::InterfaceTable::InterfaceByHandles> interface_by_handles;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Active::InterfaceTable::InterfaceByNames> interface_by_names;
        
}; // Pim6Ma::Active::InterfaceTable


class Pim6Ma::Active::InterfaceTable::InterfaceByHandles : public Entity
{
    public:
        InterfaceByHandles();
        ~InterfaceByHandles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceByHandle; //type: Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle> > interface_by_handle;
        
}; // Pim6Ma::Active::InterfaceTable::InterfaceByHandles


class Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle : public Entity
{
    public:
        InterfaceByHandle();
        ~InterfaceByHandle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_handle; //type: int32
        YLeaf interface_name_xr; //type: string
        YLeaf vrf_name; //type: string
        YLeaf interface_type; //type: PimInterfaceEnum
        class RpAddress; //type: Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress
        class SourceAddress; //type: Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress> rp_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress> source_address;
        
}; // Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle


class Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress


class Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress


class Pim6Ma::Active::InterfaceTable::InterfaceByNames : public Entity
{
    public:
        InterfaceByNames();
        ~InterfaceByNames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceByName; //type: Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName> > interface_by_name;
        
}; // Pim6Ma::Active::InterfaceTable::InterfaceByNames


class Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName : public Entity
{
    public:
        InterfaceByName();
        ~InterfaceByName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf vrf_name; //type: string
        YLeaf interface_type; //type: PimInterfaceEnum
        class RpAddress; //type: Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress
        class SourceAddress; //type: Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress> rp_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress> source_address;
        
}; // Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName


class Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress


class Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress


class Pim6Ma::Active::PimMaSummary : public Entity
{
    public:
        PimMaSummary();
        ~PimMaSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_im_connection_open; //type: boolean
        YLeaf is_netio_connection_open; //type: boolean
        YLeaf is_edm_connection_open; //type: boolean
        YLeaf is_standby_edm_connection_open; //type: boolean
        YLeaf encap_interface_count; //type: uint32
        YLeaf decap_interface_count; //type: uint32
        YLeaf mdt_interface_count; //type: uint32

}; // Pim6Ma::Active::PimMaSummary


class Pim6Ma::Standby : public Entity
{
    public:
        Standby();
        ~Standby();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceTable; //type: Pim6Ma::Standby::InterfaceTable
        class PimMaSummary; //type: Pim6Ma::Standby::PimMaSummary

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Standby::InterfaceTable> interface_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Standby::PimMaSummary> pim_ma_summary;
        
}; // Pim6Ma::Standby


class Pim6Ma::Standby::InterfaceTable : public Entity
{
    public:
        InterfaceTable();
        ~InterfaceTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceByHandles; //type: Pim6Ma::Standby::InterfaceTable::InterfaceByHandles
        class InterfaceByNames; //type: Pim6Ma::Standby::InterfaceTable::InterfaceByNames

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Standby::InterfaceTable::InterfaceByHandles> interface_by_handles;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Standby::InterfaceTable::InterfaceByNames> interface_by_names;
        
}; // Pim6Ma::Standby::InterfaceTable


class Pim6Ma::Standby::InterfaceTable::InterfaceByHandles : public Entity
{
    public:
        InterfaceByHandles();
        ~InterfaceByHandles();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceByHandle; //type: Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle> > interface_by_handle;
        
}; // Pim6Ma::Standby::InterfaceTable::InterfaceByHandles


class Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle : public Entity
{
    public:
        InterfaceByHandle();
        ~InterfaceByHandle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_handle; //type: int32
        YLeaf interface_name_xr; //type: string
        YLeaf vrf_name; //type: string
        YLeaf interface_type; //type: PimInterfaceEnum
        class RpAddress; //type: Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress
        class SourceAddress; //type: Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress> rp_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress> source_address;
        
}; // Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle


class Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress


class Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress


class Pim6Ma::Standby::InterfaceTable::InterfaceByNames : public Entity
{
    public:
        InterfaceByNames();
        ~InterfaceByNames();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceByName; //type: Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName> > interface_by_name;
        
}; // Pim6Ma::Standby::InterfaceTable::InterfaceByNames


class Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName : public Entity
{
    public:
        InterfaceByName();
        ~InterfaceByName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf vrf_name; //type: string
        YLeaf interface_type; //type: PimInterfaceEnum
        class RpAddress; //type: Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress
        class SourceAddress; //type: Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress> rp_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress> source_address;
        
}; // Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName


class Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress


class Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string

}; // Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress


class Pim6Ma::Standby::PimMaSummary : public Entity
{
    public:
        PimMaSummary();
        ~PimMaSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf is_im_connection_open; //type: boolean
        YLeaf is_netio_connection_open; //type: boolean
        YLeaf is_edm_connection_open; //type: boolean
        YLeaf is_standby_edm_connection_open; //type: boolean
        YLeaf encap_interface_count; //type: uint32
        YLeaf decap_interface_count; //type: uint32
        YLeaf mdt_interface_count; //type: uint32

}; // Pim6Ma::Standby::PimMaSummary


}
}

#endif /* _CISCO_IOS_XR_IPV4_PIM_OPER_10_ */

