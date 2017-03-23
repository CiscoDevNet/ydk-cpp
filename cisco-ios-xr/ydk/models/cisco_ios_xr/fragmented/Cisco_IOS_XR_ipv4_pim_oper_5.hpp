#ifndef _CISCO_IOS_XR_IPV4_PIM_OPER_5_
#define _CISCO_IOS_XR_IPV4_PIM_OPER_5_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_pim_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_2.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_3.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_pim_oper {


class Pim::Active::Vrfs::Vrf::RpfRedirect : public Entity
{
    public:
        RpfRedirect();
        ~RpfRedirect();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RedirectRouteDatabases; //type: Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases
        class BundleInterfaces; //type: Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces> bundle_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases> redirect_route_databases;


}; // Pim::Active::Vrfs::Vrf::RpfRedirect


class Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases : public Entity
{
    public:
        RedirectRouteDatabases();
        ~RedirectRouteDatabases();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RedirectRouteDatabase; //type: Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase> > redirect_route_database;


}; // Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases


class Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase : public Entity
{
    public:
        RedirectRouteDatabase();
        ~RedirectRouteDatabase();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf group_address; //type: string
        YLeaf bandwidth; //type: uint32
        YLeaf uptime; //type: uint64

        class GroupAddressXr; //type: Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr
        class SourceAddressXr; //type: Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr
        class Interface; //type: Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr> group_address_xr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface> > interface;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr> source_address_xr;


}; // Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase


class Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr : public Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr


class Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr : public Entity
{
    public:
        SourceAddressXr();
        ~SourceAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr


class Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface : public Entity
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
        YLeaf uptime; //type: uint64
        YLeaf expiry; //type: uint64
        YLeaf is_rpf_interface; //type: boolean
        YLeaf is_outgoing_interface; //type: boolean
        YLeaf is_snoop_interface; //type: boolean

        class RpfAddress; //type: Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress> rpf_address;


}; // Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface


class Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress : public Entity
{
    public:
        RpfAddress();
        ~RpfAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress


class Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces : public Entity
{
    public:
        BundleInterfaces();
        ~BundleInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BundleInterface; //type: Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface> > bundle_interface;


}; // Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces


class Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface : public Entity
{
    public:
        BundleInterface();
        ~BundleInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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



}; // Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface


class Pim::Active::Vrfs::Vrf::Tunnels : public Entity
{
    public:
        Tunnels();
        ~Tunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Tunnel; //type: Pim::Active::Vrfs::Vrf::Tunnels::Tunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Tunnels::Tunnel> > tunnel;


}; // Pim::Active::Vrfs::Vrf::Tunnels


class Pim::Active::Vrfs::Vrf::Tunnels::Tunnel : public Entity
{
    public:
        Tunnel();
        ~Tunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_name; //type: string
        YLeaf vrf_name; //type: string

        class SourceAddress; //type: Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress
        class RpAddress; //type: Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress
        class SourceAddressNetio; //type: Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio
        class GroupAddressNetio; //type: Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio> group_address_netio;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress> rp_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress> source_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio> source_address_netio;


}; // Pim::Active::Vrfs::Vrf::Tunnels::Tunnel


class Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress


class Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress


class Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio : public Entity
{
    public:
        SourceAddressNetio();
        ~SourceAddressNetio();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio


class Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio : public Entity
{
    public:
        GroupAddressNetio();
        ~GroupAddressNetio();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio


class Pim::Active::Vrfs::Vrf::MulticastStaticRoutes : public Entity
{
    public:
        MulticastStaticRoutes();
        ~MulticastStaticRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MulticastStaticRoute; //type: Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute> > multicast_static_route;


}; // Pim::Active::Vrfs::Vrf::MulticastStaticRoutes


class Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute : public Entity
{
    public:
        MulticastStaticRoute();
        ~MulticastStaticRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string
        YLeaf prefix_length; //type: int32
        YLeaf interface_name; //type: string
        YLeaf distance; //type: uint32
        YLeaf prefix_length_xr; //type: uint8
        YLeaf is_via_lsm; //type: boolean

        class Prefix; //type: Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix
        class Nexthop; //type: Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop> nexthop;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix> prefix;


}; // Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute


class Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix


class Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop : public Entity
{
    public:
        Nexthop();
        ~Nexthop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop


class Pim::Active::Vrfs::Vrf::GroupMapMatchSources : public Entity
{
    public:
        GroupMapMatchSources();
        ~GroupMapMatchSources();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GroupMapMatchSource; //type: Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource> > group_map_match_source;


}; // Pim::Active::Vrfs::Vrf::GroupMapMatchSources


class Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource : public Entity
{
    public:
        GroupMapMatchSource();
        ~GroupMapMatchSource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf holdtime; //type: int32
        YLeaf expires; //type: uint64
        YLeaf uptime; //type: uint64

        class SourceOfInformation; //type: Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation
        class GroupMapInformation; //type: Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation> group_map_information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation> source_of_information;


}; // Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource


class Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation : public Entity
{
    public:
        SourceOfInformation();
        ~SourceOfInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation


class Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation : public Entity
{
    public:
        GroupMapInformation();
        ~GroupMapInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_length; //type: int32
        YLeaf client; //type: PimShowRangeClientEnum
        YLeaf protocol; //type: PimShowProtocolEnum
        YLeaf group_count; //type: uint32
        YLeaf is_used; //type: boolean
        YLeaf mrib_active; //type: boolean
        YLeaf is_override; //type: boolean
        YLeaf priority; //type: uint32

        class Prefix; //type: Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix
        class RpAddress; //type: Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix> prefix;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress> rp_address;


}; // Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation


class Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix


class Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Active::Vrfs::Vrf::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress


class Pim::Active::Vrfs::Vrf::Neighbors : public Entity
{
    public:
        Neighbors();
        ~Neighbors();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Neighbor; //type: Pim::Active::Vrfs::Vrf::Neighbors::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Neighbors::Neighbor> > neighbor;


}; // Pim::Active::Vrfs::Vrf::Neighbors


class Pim::Active::Vrfs::Vrf::Neighbors::Neighbor : public Entity
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

        class NeighborAddressXr; //type: Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr> > neighbor_address_xr;


}; // Pim::Active::Vrfs::Vrf::Neighbors::Neighbor


class Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr : public Entity
{
    public:
        NeighborAddressXr();
        ~NeighborAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr

class Ipv6Pim : public Entity
{
    public:
        Ipv6Pim();
        ~Ipv6Pim();

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



        class Standby; //type: Ipv6Pim::Standby
        class Active; //type: Ipv6Pim::Active

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Active> active;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby> standby;


}; // Ipv6Pim


class Ipv6Pim::Standby : public Entity
{
    public:
        Standby();
        ~Standby();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class DefaultContext; //type: Ipv6Pim::Standby::DefaultContext
        class Process; //type: Ipv6Pim::Standby::Process
        class Vrfs; //type: Ipv6Pim::Standby::Vrfs

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext> default_context;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Process> process;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::Vrfs> vrfs;


}; // Ipv6Pim::Standby


class Ipv6Pim::Standby::DefaultContext : public Entity
{
    public:
        DefaultContext();
        ~DefaultContext();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GlobalInterfaces; //type: Ipv6Pim::Standby::DefaultContext::GlobalInterfaces
        class IfrsInterfaces; //type: Ipv6Pim::Standby::DefaultContext::IfrsInterfaces
        class Safs; //type: Ipv6Pim::Standby::DefaultContext::Safs
        class InterfaceStatistics; //type: Ipv6Pim::Standby::DefaultContext::InterfaceStatistics
        class TopologyRouteCount; //type: Ipv6Pim::Standby::DefaultContext::TopologyRouteCount
        class JpStatistics; //type: Ipv6Pim::Standby::DefaultContext::JpStatistics
        class MibDatabases; //type: Ipv6Pim::Standby::DefaultContext::MibDatabases
        class GroupMapMatchRpfs; //type: Ipv6Pim::Standby::DefaultContext::GroupMapMatchRpfs
        class NeighborOldFormats; //type: Ipv6Pim::Standby::DefaultContext::NeighborOldFormats
        class IfrsSummary; //type: Ipv6Pim::Standby::DefaultContext::IfrsSummary
        class Ranges; //type: Ipv6Pim::Standby::DefaultContext::Ranges
        class InterfaceOldFormats; //type: Ipv6Pim::Standby::DefaultContext::InterfaceOldFormats
        class Bsr; //type: Ipv6Pim::Standby::DefaultContext::Bsr
        class RoutePolicy; //type: Ipv6Pim::Standby::DefaultContext::RoutePolicy
        class RpfSummary; //type: Ipv6Pim::Standby::DefaultContext::RpfSummary
        class Interfaces; //type: Ipv6Pim::Standby::DefaultContext::Interfaces
        class NetIoTunnels; //type: Ipv6Pim::Standby::DefaultContext::NetIoTunnels
        class BidirDfStates; //type: Ipv6Pim::Standby::DefaultContext::BidirDfStates
        class Topologies; //type: Ipv6Pim::Standby::DefaultContext::Topologies
        class BgpAfs; //type: Ipv6Pim::Standby::DefaultContext::BgpAfs
        class AutoRp; //type: Ipv6Pim::Standby::DefaultContext::AutoRp
        class TopologyInterfaceFlagRouteCounts; //type: Ipv6Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts
        class GroupMapSources; //type: Ipv6Pim::Standby::DefaultContext::GroupMapSources
        class TrafficCounters; //type: Ipv6Pim::Standby::DefaultContext::TrafficCounters
        class GroupMapRpfs; //type: Ipv6Pim::Standby::DefaultContext::GroupMapRpfs
        class Summary; //type: Ipv6Pim::Standby::DefaultContext::Summary
        class Gre; //type: Ipv6Pim::Standby::DefaultContext::Gre
        class BidirDfWinners; //type: Ipv6Pim::Standby::DefaultContext::BidirDfWinners
        class TableContexts; //type: Ipv6Pim::Standby::DefaultContext::TableContexts
        class NeighborSummaries; //type: Ipv6Pim::Standby::DefaultContext::NeighborSummaries
        class Context; //type: Ipv6Pim::Standby::DefaultContext::Context
        class TopologyEntryFlagRouteCounts; //type: Ipv6Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts
        class RpfRedirect; //type: Ipv6Pim::Standby::DefaultContext::RpfRedirect
        class Tunnels; //type: Ipv6Pim::Standby::DefaultContext::Tunnels
        class MulticastStaticRoutes; //type: Ipv6Pim::Standby::DefaultContext::MulticastStaticRoutes
        class GroupMapMatchSources; //type: Ipv6Pim::Standby::DefaultContext::GroupMapMatchSources
        class Neighbors; //type: Ipv6Pim::Standby::DefaultContext::Neighbors

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::AutoRp> auto_rp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::BgpAfs> bgp_afs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::BidirDfStates> bidir_df_states;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::BidirDfWinners> bidir_df_winners;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Bsr> bsr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Context> context;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::GlobalInterfaces> global_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Gre> gre;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::GroupMapMatchRpfs> group_map_match_rpfs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::GroupMapMatchSources> group_map_match_sources;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::GroupMapRpfs> group_map_rpfs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::GroupMapSources> group_map_sources;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::IfrsInterfaces> ifrs_interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::IfrsSummary> ifrs_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::InterfaceOldFormats> interface_old_formats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::InterfaceStatistics> interface_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::JpStatistics> jp_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::MibDatabases> mib_databases;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::MulticastStaticRoutes> multicast_static_routes;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::NeighborOldFormats> neighbor_old_formats;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::NeighborSummaries> neighbor_summaries;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Neighbors> neighbors;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::NetIoTunnels> net_io_tunnels;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Ranges> ranges;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::RoutePolicy> route_policy;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::RpfRedirect> rpf_redirect;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::RpfSummary> rpf_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Safs> safs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Summary> summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::TableContexts> table_contexts;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Topologies> topologies;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts> topology_entry_flag_route_counts;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts> topology_interface_flag_route_counts;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::TopologyRouteCount> topology_route_count;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::TrafficCounters> traffic_counters;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Tunnels> tunnels;


}; // Ipv6Pim::Standby::DefaultContext


class Ipv6Pim::Standby::DefaultContext::GlobalInterfaces : public Entity
{
    public:
        GlobalInterfaces();
        ~GlobalInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GlobalInterface; //type: Ipv6Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface> > global_interface;


}; // Ipv6Pim::Standby::DefaultContext::GlobalInterfaces


class Ipv6Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface : public Entity
{
    public:
        GlobalInterface();
        ~GlobalInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf interface_address_mask; //type: uint8
        YLeaf is_enabled; //type: boolean
        YLeaf neighbor_count; //type: uint16
        YLeaf external_neighbor_count; //type: uint16
        YLeaf hello_interval; //type: uint16
        YLeaf dr_priority; //type: uint32
        YLeaf hello_expiry; //type: uint64
        YLeaf are_we_dr; //type: boolean
        YLeaf bfd_enabled; //type: boolean
        YLeaf bfd_interval; //type: uint32
        YLeaf bfd_multiplier; //type: uint32
        YLeaf virtual_interface; //type: boolean
        YLeaf passive_interface; //type: boolean
        YLeaf neighbor_filter_name; //type: string
        YLeaf join_prune_interval; //type: uint16
        YLeaf prune_delay_enabled; //type: boolean
        YLeaf configured_propagation_delay; //type: uint16
        YLeaf propagation_delay; //type: uint16
        YLeaf configured_override_interval; //type: uint16
        YLeaf override_interval; //type: uint16
        YLeaf generation_id; //type: uint32
        YLeaf is_bidirectional_capable; //type: boolean
        YLeaf is_proxy_capable; //type: boolean
        YLeaf is_batch_asserts_capable; //type: boolean
        YLeaf idb_oor_enabled; //type: boolean
        YLeaf idb_acl_provided; //type: boolean
        YLeaf idb_max_count; //type: uint32
        YLeaf idb_threshold_count; //type: uint32
        YLeaf idb_current_count; //type: uint32
        YLeaf idb_acl_name; //type: string

        class DrAddress; //type: Ipv6Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress
        class InterfaceAddress; //type: Ipv6Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress> dr_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress> > interface_address;


}; // Ipv6Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface


class Ipv6Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress : public Entity
{
    public:
        DrAddress();
        ~DrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::DrAddress


class Ipv6Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress : public Entity
{
    public:
        InterfaceAddress();
        ~InterfaceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::GlobalInterfaces::GlobalInterface::InterfaceAddress


class Ipv6Pim::Standby::DefaultContext::IfrsInterfaces : public Entity
{
    public:
        IfrsInterfaces();
        ~IfrsInterfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class IfrsInterface; //type: Ipv6Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface> > ifrs_interface;


}; // Ipv6Pim::Standby::DefaultContext::IfrsInterfaces


class Ipv6Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface : public Entity
{
    public:
        IfrsInterface();
        ~IfrsInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf interface_address_mask; //type: uint8
        YLeaf is_enabled; //type: boolean
        YLeaf neighbor_count; //type: uint16
        YLeaf external_neighbor_count; //type: uint16
        YLeaf hello_interval; //type: uint16
        YLeaf dr_priority; //type: uint32
        YLeaf hello_expiry; //type: uint64
        YLeaf are_we_dr; //type: boolean
        YLeaf bfd_enabled; //type: boolean
        YLeaf bfd_interval; //type: uint32
        YLeaf bfd_multiplier; //type: uint32
        YLeaf virtual_interface; //type: boolean
        YLeaf passive_interface; //type: boolean
        YLeaf neighbor_filter_name; //type: string
        YLeaf join_prune_interval; //type: uint16
        YLeaf prune_delay_enabled; //type: boolean
        YLeaf configured_propagation_delay; //type: uint16
        YLeaf propagation_delay; //type: uint16
        YLeaf configured_override_interval; //type: uint16
        YLeaf override_interval; //type: uint16
        YLeaf generation_id; //type: uint32
        YLeaf is_bidirectional_capable; //type: boolean
        YLeaf is_proxy_capable; //type: boolean
        YLeaf is_batch_asserts_capable; //type: boolean
        YLeaf idb_oor_enabled; //type: boolean
        YLeaf idb_acl_provided; //type: boolean
        YLeaf idb_max_count; //type: uint32
        YLeaf idb_threshold_count; //type: uint32
        YLeaf idb_current_count; //type: uint32
        YLeaf idb_acl_name; //type: string

        class DrAddress; //type: Ipv6Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress
        class InterfaceAddress; //type: Ipv6Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress> dr_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress> > interface_address;


}; // Ipv6Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface


class Ipv6Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress : public Entity
{
    public:
        DrAddress();
        ~DrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::DrAddress


class Ipv6Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress : public Entity
{
    public:
        InterfaceAddress();
        ~InterfaceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::InterfaceAddress


class Ipv6Pim::Standby::DefaultContext::Safs : public Entity
{
    public:
        Safs();
        ~Safs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Saf; //type: Ipv6Pim::Standby::DefaultContext::Safs::Saf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Safs::Saf> > saf;


}; // Ipv6Pim::Standby::DefaultContext::Safs


class Ipv6Pim::Standby::DefaultContext::Safs::Saf : public Entity
{
    public:
        Saf();
        ~Saf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf saf_name; //type: PimSafiEnum
        YLeaf topology_name; //type: string

        class RpfHashSourceGroups; //type: Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups
        class RpfHashSources; //type: Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources
        class Rpfs; //type: Ipv6Pim::Standby::DefaultContext::Safs::Saf::Rpfs

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups> rpf_hash_source_groups;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources> rpf_hash_sources;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Safs::Saf::Rpfs> rpfs;


}; // Ipv6Pim::Standby::DefaultContext::Safs::Saf


class Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups : public Entity
{
    public:
        RpfHashSourceGroups();
        ~RpfHashSourceGroups();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RpfHashSourceGroup; //type: Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup> > rpf_hash_source_group;


}; // Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups


class Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup : public Entity
{
    public:
        RpfHashSourceGroup();
        ~RpfHashSourceGroup();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf group_address; //type: string
        YLeaf mask_length; //type: int32
        YLeaf mofrr; //type: int32
        YLeaf next_hop_multipath_enabled; //type: boolean
        YLeaf next_hop_interface; //type: string
        YLeaf secondary_next_hop_interface; //type: string

        class NextHopAddress; //type: Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress
        class SecondaryNextHopAddress; //type: Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress> next_hop_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress> secondary_next_hop_address;


}; // Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup


class Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress : public Entity
{
    public:
        NextHopAddress();
        ~NextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress


class Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress : public Entity
{
    public:
        SecondaryNextHopAddress();
        ~SecondaryNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress


class Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources : public Entity
{
    public:
        RpfHashSources();
        ~RpfHashSources();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RpfHashSource; //type: Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource> > rpf_hash_source;


}; // Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources


class Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource : public Entity
{
    public:
        RpfHashSource();
        ~RpfHashSource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf mofrr; //type: int32
        YLeaf next_hop_multipath_enabled; //type: boolean
        YLeaf next_hop_interface; //type: string
        YLeaf secondary_next_hop_interface; //type: string

        class NextHopAddress; //type: Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress
        class SecondaryNextHopAddress; //type: Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress> next_hop_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress> secondary_next_hop_address;


}; // Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource


class Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress : public Entity
{
    public:
        NextHopAddress();
        ~NextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress


class Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress : public Entity
{
    public:
        SecondaryNextHopAddress();
        ~SecondaryNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress


class Ipv6Pim::Standby::DefaultContext::Safs::Saf::Rpfs : public Entity
{
    public:
        Rpfs();
        ~Rpfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Rpf; //type: Ipv6Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf> > rpf;


}; // Ipv6Pim::Standby::DefaultContext::Safs::Saf::Rpfs


class Ipv6Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf : public Entity
{
    public:
        Rpf();
        ~Rpf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf registered_address; //type: string
        YLeaf metric; //type: uint32
        YLeaf metric_preference; //type: uint32
        YLeaf is_connected; //type: uint8
        YLeaf is_rpf_bgp_route; //type: boolean

        class RegisteredAddressXr; //type: Ipv6Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr
        class RpfPath; //type: Ipv6Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr> registered_address_xr;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath> > rpf_path;


}; // Ipv6Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf


class Ipv6Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr : public Entity
{
    public:
        RegisteredAddressXr();
        ~RegisteredAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr


class Ipv6Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath : public Entity
{
    public:
        RpfPath();
        ~RpfPath();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rpf_interface_name; //type: string
        YLeaf is_rpf_interface_disabled; //type: boolean
        YLeaf is_via_lsm; //type: boolean
        YLeaf is_via_mlsm; //type: boolean
        YLeaf is_connector_attribute_present; //type: boolean
        YLeaf connector; //type: string
        YLeaf extranet_vrf_name; //type: string

        class RpfNeighbor; //type: Ipv6Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor
        class RpfNexthop; //type: Ipv6Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor> rpf_neighbor;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop> rpf_nexthop;


}; // Ipv6Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath


class Ipv6Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor : public Entity
{
    public:
        RpfNeighbor();
        ~RpfNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor


class Ipv6Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop : public Entity
{
    public:
        RpfNexthop();
        ~RpfNexthop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop


class Ipv6Pim::Standby::DefaultContext::InterfaceStatistics : public Entity
{
    public:
        InterfaceStatistics();
        ~InterfaceStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceStatistic; //type: Ipv6Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic> > interface_statistic;


}; // Ipv6Pim::Standby::DefaultContext::InterfaceStatistics


class Ipv6Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic : public Entity
{
    public:
        InterfaceStatistic();
        ~InterfaceStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf input_hello; //type: uint32
        YLeaf output_hello; //type: uint32
        YLeaf input_register; //type: uint32
        YLeaf output_register; //type: uint32
        YLeaf input_register_stop; //type: uint32
        YLeaf output_register_stop; //type: uint32
        YLeaf input_jp; //type: uint32
        YLeaf output_jp; //type: uint32
        YLeaf input_bsr_message; //type: uint32
        YLeaf output_bsr_message; //type: uint32
        YLeaf input_assert; //type: uint32
        YLeaf output_assert; //type: uint32
        YLeaf input_graft_message; //type: uint32
        YLeaf output_graft_message; //type: uint32
        YLeaf input_graft_ack_message; //type: uint32
        YLeaf output_graft_ack_message; //type: uint32
        YLeaf input_candidate_rp_advertisement; //type: uint32
        YLeaf output_candidate_rp_advertisement; //type: uint32
        YLeaf input_df_election; //type: uint32
        YLeaf output_df_election; //type: uint32
        YLeaf input_miscellaneous; //type: uint32



}; // Ipv6Pim::Standby::DefaultContext::InterfaceStatistics::InterfaceStatistic


class Ipv6Pim::Standby::DefaultContext::TopologyRouteCount : public Entity
{
    public:
        TopologyRouteCount();
        ~TopologyRouteCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_ranges; //type: uint32
        YLeaf active_group_ranges; //type: uint32
        YLeaf groute_count; //type: uint32
        YLeaf sg_route_count; //type: uint32
        YLeaf sgr_route_count; //type: uint32
        YLeaf is_node_low_memory; //type: boolean

        class GroupAddress; //type: Ipv6Pim::Standby::DefaultContext::TopologyRouteCount::GroupAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::TopologyRouteCount::GroupAddress> group_address;


}; // Ipv6Pim::Standby::DefaultContext::TopologyRouteCount


class Ipv6Pim::Standby::DefaultContext::TopologyRouteCount::GroupAddress : public Entity
{
    public:
        GroupAddress();
        ~GroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::TopologyRouteCount::GroupAddress


class Ipv6Pim::Standby::DefaultContext::JpStatistics : public Entity
{
    public:
        JpStatistics();
        ~JpStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class JpStatistic; //type: Ipv6Pim::Standby::DefaultContext::JpStatistics::JpStatistic

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::JpStatistics::JpStatistic> > jp_statistic;


}; // Ipv6Pim::Standby::DefaultContext::JpStatistics


class Ipv6Pim::Standby::DefaultContext::JpStatistics::JpStatistic : public Entity
{
    public:
        JpStatistic();
        ~JpStatistic();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf mtu; //type: uint32
        YLeaf transmitted; //type: uint32
        YLeaf transmitted100; //type: uint16
        YLeaf transmitted_1k; //type: uint16
        YLeaf transmitted_10k; //type: uint16
        YLeaf transmitted_50k; //type: uint16
        YLeaf received; //type: uint32
        YLeaf received100; //type: uint16
        YLeaf received_1k; //type: uint16
        YLeaf received_10k; //type: uint16
        YLeaf received_50k; //type: uint16



}; // Ipv6Pim::Standby::DefaultContext::JpStatistics::JpStatistic


class Ipv6Pim::Standby::DefaultContext::MibDatabases : public Entity
{
    public:
        MibDatabases();
        ~MibDatabases();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MibDatabase; //type: Ipv6Pim::Standby::DefaultContext::MibDatabases::MibDatabase

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::MibDatabases::MibDatabase> > mib_database;


}; // Ipv6Pim::Standby::DefaultContext::MibDatabases


class Ipv6Pim::Standby::DefaultContext::MibDatabases::MibDatabase : public Entity
{
    public:
        MibDatabase();
        ~MibDatabase();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf group_address; //type: string
        YLeaf source_netmask; //type: int32
        YLeaf upstream_assert_timer; //type: int32
        YLeaf assert_metric; //type: uint32
        YLeaf assert_metric_preference; //type: uint32
        YLeaf assert_rpt_bit; //type: boolean
        YLeaf spt_bit; //type: boolean
        YLeaf rpf_mask; //type: uint32
        YLeaf rpf_safi; //type: uint8
        YLeaf rpf_table_name; //type: string
        YLeaf rpf_drop; //type: boolean
        YLeaf rpf_extranet; //type: boolean
        YLeaf rpf_interface_name; //type: string
        YLeaf rpf_vrf_name; //type: string
        YLeaf bidirectional_route; //type: boolean
        YLeaf uptime; //type: uint64
        YLeaf protocol; //type: PimShowProtocolEnum

        class SourceAddressXr; //type: Ipv6Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr
        class GroupAddressXr; //type: Ipv6Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr
        class RpfNeighbor; //type: Ipv6Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor
        class RpfRoot; //type: Ipv6Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor> rpf_neighbor;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot> rpf_root;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr> source_address_xr;


}; // Ipv6Pim::Standby::DefaultContext::MibDatabases::MibDatabase


class Ipv6Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr : public Entity
{
    public:
        SourceAddressXr();
        ~SourceAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::MibDatabases::MibDatabase::SourceAddressXr


class Ipv6Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr : public Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::MibDatabases::MibDatabase::GroupAddressXr


class Ipv6Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor : public Entity
{
    public:
        RpfNeighbor();
        ~RpfNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfNeighbor


class Ipv6Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot : public Entity
{
    public:
        RpfRoot();
        ~RpfRoot();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::MibDatabases::MibDatabase::RpfRoot


class Ipv6Pim::Standby::DefaultContext::GroupMapMatchRpfs : public Entity
{
    public:
        GroupMapMatchRpfs();
        ~GroupMapMatchRpfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GroupMapMatchRpf; //type: Ipv6Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf> > group_map_match_rpf;


}; // Ipv6Pim::Standby::DefaultContext::GroupMapMatchRpfs


class Ipv6Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf : public Entity
{
    public:
        GroupMapMatchRpf();
        ~GroupMapMatchRpf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_address; //type: string
        YLeaf are_we_rp; //type: boolean
        YLeaf rpf_interface_name; //type: string
        YLeaf rpf_vrf_name; //type: string

        class RpfNeighbor; //type: Ipv6Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor
        class GroupMapInformation; //type: Ipv6Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation> group_map_information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor> rpf_neighbor;


}; // Ipv6Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf


class Ipv6Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor : public Entity
{
    public:
        RpfNeighbor();
        ~RpfNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor


class Ipv6Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation : public Entity
{
    public:
        GroupMapInformation();
        ~GroupMapInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_length; //type: int32
        YLeaf client; //type: PimShowRangeClientEnum
        YLeaf protocol; //type: PimShowProtocolEnum
        YLeaf group_count; //type: uint32
        YLeaf is_used; //type: boolean
        YLeaf mrib_active; //type: boolean
        YLeaf is_override; //type: boolean
        YLeaf priority; //type: uint32

        class Prefix; //type: Ipv6Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix
        class RpAddress; //type: Ipv6Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix> prefix;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress> rp_address;


}; // Ipv6Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation


class Ipv6Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix


class Ipv6Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress


class Ipv6Pim::Standby::DefaultContext::NeighborOldFormats : public Entity
{
    public:
        NeighborOldFormats();
        ~NeighborOldFormats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NeighborOldFormat; //type: Ipv6Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat> > neighbor_old_format;


}; // Ipv6Pim::Standby::DefaultContext::NeighborOldFormats


class Ipv6Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat : public Entity
{
    public:
        NeighborOldFormat();
        ~NeighborOldFormat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


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

        class NeighborAddressXr; //type: Ipv6Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr> > neighbor_address_xr;


}; // Ipv6Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat


class Ipv6Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr : public Entity
{
    public:
        NeighborAddressXr();
        ~NeighborAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr


class Ipv6Pim::Standby::DefaultContext::IfrsSummary : public Entity
{
    public:
        IfrsSummary();
        ~IfrsSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_count; //type: uint32
        YLeaf configuration_count; //type: uint32



}; // Ipv6Pim::Standby::DefaultContext::IfrsSummary


class Ipv6Pim::Standby::DefaultContext::Ranges : public Entity
{
    public:
        Ranges();
        ~Ranges();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Range; //type: Ipv6Pim::Standby::DefaultContext::Ranges::Range

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Ranges::Range> > range;


}; // Ipv6Pim::Standby::DefaultContext::Ranges


class Ipv6Pim::Standby::DefaultContext::Ranges::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rp_address; //type: string
        YLeaf client; //type: PimClientEnum
        YLeaf protocol; //type: PimShowProtocolEnum
        YLeaf client_xr; //type: PimShowRangeClientEnum
        YLeaf expires; //type: uint64

        class RpAddressXr; //type: Ipv6Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr
        class SourceOfInformation; //type: Ipv6Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation
        class GroupRange; //type: Ipv6Pim::Standby::DefaultContext::Ranges::Range::GroupRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Ranges::Range::GroupRange> > group_range;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr> rp_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation> source_of_information;


}; // Ipv6Pim::Standby::DefaultContext::Ranges::Range


class Ipv6Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr : public Entity
{
    public:
        RpAddressXr();
        ~RpAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::Ranges::Range::RpAddressXr


class Ipv6Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation : public Entity
{
    public:
        SourceOfInformation();
        ~SourceOfInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::Ranges::Range::SourceOfInformation


class Ipv6Pim::Standby::DefaultContext::Ranges::Range::GroupRange : public Entity
{
    public:
        GroupRange();
        ~GroupRange();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_length; //type: int32
        YLeaf uptime; //type: uint64
        YLeaf expires; //type: uint64

        class Prefix; //type: Ipv6Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix
        class SourceOfInformation; //type: Ipv6Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix> prefix;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation> source_of_information;


}; // Ipv6Pim::Standby::DefaultContext::Ranges::Range::GroupRange


class Ipv6Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::Ranges::Range::GroupRange::Prefix


class Ipv6Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation : public Entity
{
    public:
        SourceOfInformation();
        ~SourceOfInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::Ranges::Range::GroupRange::SourceOfInformation


class Ipv6Pim::Standby::DefaultContext::InterfaceOldFormats : public Entity
{
    public:
        InterfaceOldFormats();
        ~InterfaceOldFormats();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class InterfaceOldFormat; //type: Ipv6Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat> > interface_old_format;


}; // Ipv6Pim::Standby::DefaultContext::InterfaceOldFormats


class Ipv6Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat : public Entity
{
    public:
        InterfaceOldFormat();
        ~InterfaceOldFormat();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf interface_address_mask; //type: uint8
        YLeaf is_enabled; //type: boolean
        YLeaf neighbor_count; //type: uint16
        YLeaf external_neighbor_count; //type: uint16
        YLeaf hello_interval; //type: uint16
        YLeaf dr_priority; //type: uint32
        YLeaf hello_expiry; //type: uint64
        YLeaf are_we_dr; //type: boolean
        YLeaf bfd_enabled; //type: boolean
        YLeaf bfd_interval; //type: uint32
        YLeaf bfd_multiplier; //type: uint32
        YLeaf virtual_interface; //type: boolean
        YLeaf passive_interface; //type: boolean
        YLeaf neighbor_filter_name; //type: string
        YLeaf join_prune_interval; //type: uint16
        YLeaf prune_delay_enabled; //type: boolean
        YLeaf configured_propagation_delay; //type: uint16
        YLeaf propagation_delay; //type: uint16
        YLeaf configured_override_interval; //type: uint16
        YLeaf override_interval; //type: uint16
        YLeaf generation_id; //type: uint32
        YLeaf is_bidirectional_capable; //type: boolean
        YLeaf is_proxy_capable; //type: boolean
        YLeaf is_batch_asserts_capable; //type: boolean
        YLeaf idb_oor_enabled; //type: boolean
        YLeaf idb_acl_provided; //type: boolean
        YLeaf idb_max_count; //type: uint32
        YLeaf idb_threshold_count; //type: uint32
        YLeaf idb_current_count; //type: uint32
        YLeaf idb_acl_name; //type: string

        class DrAddress; //type: Ipv6Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress
        class InterfaceAddress; //type: Ipv6Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress> dr_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress> > interface_address;


}; // Ipv6Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat


class Ipv6Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress : public Entity
{
    public:
        DrAddress();
        ~DrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::DrAddress


class Ipv6Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress : public Entity
{
    public:
        InterfaceAddress();
        ~InterfaceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress


class Ipv6Pim::Standby::DefaultContext::Bsr : public Entity
{
    public:
        Bsr();
        ~Bsr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RpCaches; //type: Ipv6Pim::Standby::DefaultContext::Bsr::RpCaches
        class CandidateRps; //type: Ipv6Pim::Standby::DefaultContext::Bsr::CandidateRps
        class BsrElections; //type: Ipv6Pim::Standby::DefaultContext::Bsr::BsrElections

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Bsr::BsrElections> bsr_elections;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Bsr::CandidateRps> candidate_rps;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Bsr::RpCaches> rp_caches;


}; // Ipv6Pim::Standby::DefaultContext::Bsr


class Ipv6Pim::Standby::DefaultContext::Bsr::RpCaches : public Entity
{
    public:
        RpCaches();
        ~RpCaches();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RpCache; //type: Ipv6Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache> > rp_cache;


}; // Ipv6Pim::Standby::DefaultContext::Bsr::RpCaches


class Ipv6Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache : public Entity
{
    public:
        RpCache();
        ~RpCache();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf group_prefix; //type: string
        YLeaf group_prefix_length; //type: uint32
        YLeaf candidate_rp_group_count; //type: uint32

        class GroupPrefixXr; //type: Ipv6Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr
        class CandidateRpList; //type: Ipv6Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList> candidate_rp_list;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr> group_prefix_xr;


}; // Ipv6Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache


class Ipv6Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr : public Entity
{
    public:
        GroupPrefixXr();
        ~GroupPrefixXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::GroupPrefixXr


class Ipv6Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList : public Entity
{
    public:
        CandidateRpList();
        ~CandidateRpList();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class PimBsrCrpBag; //type: Ipv6Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag> > pim_bsr_crp_bag;


}; // Ipv6Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList


class Ipv6Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag : public Entity
{
    public:
        PimBsrCrpBag();
        ~PimBsrCrpBag();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf candidate_rp_holdtime; //type: uint16
        YLeaf candidate_rp_priority; //type: uint8
        YLeaf candidate_rp_up_time; //type: uint16
        YLeaf candidate_rp_expires; //type: uint16
        YLeaf protocol; //type: PimShowProtocolEnum

        class CandidateRpAddress; //type: Ipv6Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress> candidate_rp_address;


}; // Ipv6Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag


class Ipv6Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress : public Entity
{
    public:
        CandidateRpAddress();
        ~CandidateRpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress


class Ipv6Pim::Standby::DefaultContext::Bsr::CandidateRps : public Entity
{
    public:
        CandidateRps();
        ~CandidateRps();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class CandidateRp; //type: Ipv6Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp> > candidate_rp;


}; // Ipv6Pim::Standby::DefaultContext::Bsr::CandidateRps


class Ipv6Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp : public Entity
{
    public:
        CandidateRp();
        ~CandidateRp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rp_address; //type: string
        YLeaf candidate_rp_mode; //type: PimShowProtocolEnum
        YLeaf candidate_rp_scope; //type: int32
        YLeaf crp_priority; //type: uint8
        YLeaf crp_holdtime; //type: uint16
        YLeaf candidate_rp_advance_interval; //type: uint16
        YLeaf candidate_rp_uptime; //type: uint16
        YLeaf acl_name; //type: string

        class CandidateRp_; //type: Ipv6Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_
        class CrpAccess; //type: Ipv6Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_> candidate_rp;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess> > crp_access;


}; // Ipv6Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp


class Ipv6Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_ : public Entity
{
    public:
        CandidateRp_();
        ~CandidateRp_();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CandidateRp_


class Ipv6Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess : public Entity
{
    public:
        CrpAccess();
        ~CrpAccess();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf candidate_rp_mode; //type: PimShowProtocolEnum
        YLeaf acl_name; //type: string



}; // Ipv6Pim::Standby::DefaultContext::Bsr::CandidateRps::CandidateRp::CrpAccess


class Ipv6Pim::Standby::DefaultContext::Bsr::BsrElections : public Entity
{
    public:
        BsrElections();
        ~BsrElections();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BsrElection; //type: Ipv6Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection> > bsr_election;


}; // Ipv6Pim::Standby::DefaultContext::Bsr::BsrElections


class Ipv6Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection : public Entity
{
    public:
        BsrElection();
        ~BsrElection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf pim_scope; //type: int32
        YLeaf bsr_priority; //type: uint8
        YLeaf bsr_mask_length; //type: uint8
        YLeaf bsr_up_time; //type: uint16
        YLeaf bootstrap_timeout; //type: uint16
        YLeaf candidate_bsr_state; //type: uint32
        YLeaf bsr_election_state; //type: uint32
        YLeaf bsr_scope; //type: uint16
        YLeaf candidate_bsr_flag; //type: boolean
        YLeaf candidate_bsr_priority; //type: uint8
        YLeaf candidate_bsr_mask_length; //type: uint8

        class BsrAddress; //type: Ipv6Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress
        class CandidateBsrAddress; //type: Ipv6Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress> bsr_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress> candidate_bsr_address;


}; // Ipv6Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection


class Ipv6Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress : public Entity
{
    public:
        BsrAddress();
        ~BsrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::BsrAddress


class Ipv6Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress : public Entity
{
    public:
        CandidateBsrAddress();
        ~CandidateBsrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::Bsr::BsrElections::BsrElection::CandidateBsrAddress


class Ipv6Pim::Standby::DefaultContext::RoutePolicy : public Entity
{
    public:
        RoutePolicy();
        ~RoutePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RoutePolicyStatistics; //type: Ipv6Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics
        class RoutePolicyTests; //type: Ipv6Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics> route_policy_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests> route_policy_tests;


}; // Ipv6Pim::Standby::DefaultContext::RoutePolicy


class Ipv6Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics : public Entity
{
    public:
        RoutePolicyStatistics();
        ~RoutePolicyStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf policy_name; //type: string
        YLeaf requests; //type: uint32
        YLeaf pass; //type: uint32
        YLeaf drop; //type: uint32
        YLeaf default_table; //type: uint32
        YLeaf any_table; //type: uint32



}; // Ipv6Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyStatistics


class Ipv6Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests : public Entity
{
    public:
        RoutePolicyTests();
        ~RoutePolicyTests();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class RoutePolicyTest; //type: Ipv6Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest> > route_policy_test;


}; // Ipv6Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests


class Ipv6Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest : public Entity
{
    public:
        RoutePolicyTest();
        ~RoutePolicyTest();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf group_address; //type: string
        YLeaf ext_comm; //type: string
        YLeaf policy_name; //type: string
        YLeaf extended_community_rt; //type: string
        YLeaf pass; //type: boolean
        YLeaf default_table; //type: boolean
        YLeaf vrf_name; //type: string
        YLeaf afi; //type: uint32
        YLeaf safi; //type: uint32
        YLeaf table_name; //type: string
        YLeaf table_exists; //type: boolean
        YLeaf table_active; //type: boolean

        class SourceAddressXr; //type: Ipv6Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr
        class GroupAddressXr; //type: Ipv6Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr> source_address_xr;


}; // Ipv6Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest


class Ipv6Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr : public Entity
{
    public:
        SourceAddressXr();
        ~SourceAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr


class Ipv6Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr : public Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr


class Ipv6Pim::Standby::DefaultContext::RpfSummary : public Entity
{
    public:
        RpfSummary();
        ~RpfSummary();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf default_safi; //type: uint32
        YLeaf default_table_name; //type: string
        YLeaf is_mbgp_configured; //type: boolean
        YLeaf is_ospf_te_configured; //type: boolean
        YLeaf is_isis_te_configured; //type: boolean
        YLeaf is_isis_mtr_configured; //type: boolean
        YLeaf mo_frr_configured; //type: boolean
        YLeaf rib_mo_frr_configured; //type: boolean
        YLeaf rump_enabled; //type: boolean
        YLeaf rib_convergence_timeout; //type: uint32
        YLeaf rib_convergence_time_left; //type: uint32
        YLeaf is_multipath_enabled; //type: boolean
        YLeaf is_multipath_interface_hash_enabled; //type: boolean
        YLeaf is_multipath_source_hash_enabled; //type: boolean
        YLeaf is_multipath_source_next_hop_hash_enabled; //type: boolean
        YLeaf rpf_registrations; //type: uint32
        YLeaf is_rib_convergence; //type: boolean



}; // Ipv6Pim::Standby::DefaultContext::RpfSummary


class Ipv6Pim::Standby::DefaultContext::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Interface; //type: Ipv6Pim::Standby::DefaultContext::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Interfaces::Interface> > interface;


}; // Ipv6Pim::Standby::DefaultContext::Interfaces


class Ipv6Pim::Standby::DefaultContext::Interfaces::Interface : public Entity
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
        YLeaf interface_name_xr; //type: string
        YLeaf interface_address_mask; //type: uint8
        YLeaf is_enabled; //type: boolean
        YLeaf neighbor_count; //type: uint16
        YLeaf external_neighbor_count; //type: uint16
        YLeaf hello_interval; //type: uint16
        YLeaf dr_priority; //type: uint32
        YLeaf hello_expiry; //type: uint64
        YLeaf are_we_dr; //type: boolean
        YLeaf bfd_enabled; //type: boolean
        YLeaf bfd_interval; //type: uint32
        YLeaf bfd_multiplier; //type: uint32
        YLeaf virtual_interface; //type: boolean
        YLeaf passive_interface; //type: boolean
        YLeaf neighbor_filter_name; //type: string
        YLeaf join_prune_interval; //type: uint16
        YLeaf prune_delay_enabled; //type: boolean
        YLeaf configured_propagation_delay; //type: uint16
        YLeaf propagation_delay; //type: uint16
        YLeaf configured_override_interval; //type: uint16
        YLeaf override_interval; //type: uint16
        YLeaf generation_id; //type: uint32
        YLeaf is_bidirectional_capable; //type: boolean
        YLeaf is_proxy_capable; //type: boolean
        YLeaf is_batch_asserts_capable; //type: boolean
        YLeaf idb_oor_enabled; //type: boolean
        YLeaf idb_acl_provided; //type: boolean
        YLeaf idb_max_count; //type: uint32
        YLeaf idb_threshold_count; //type: uint32
        YLeaf idb_current_count; //type: uint32
        YLeaf idb_acl_name; //type: string

        class DrAddress; //type: Ipv6Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress
        class InterfaceAddress; //type: Ipv6Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress> dr_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress> > interface_address;


}; // Ipv6Pim::Standby::DefaultContext::Interfaces::Interface


class Ipv6Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress : public Entity
{
    public:
        DrAddress();
        ~DrAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::Interfaces::Interface::DrAddress


class Ipv6Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress : public Entity
{
    public:
        InterfaceAddress();
        ~InterfaceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::Interfaces::Interface::InterfaceAddress


class Ipv6Pim::Standby::DefaultContext::NetIoTunnels : public Entity
{
    public:
        NetIoTunnels();
        ~NetIoTunnels();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class NetIoTunnel; //type: Ipv6Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel> > net_io_tunnel;


}; // Ipv6Pim::Standby::DefaultContext::NetIoTunnels


class Ipv6Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel : public Entity
{
    public:
        NetIoTunnel();
        ~NetIoTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf tunnel_name; //type: string
        YLeaf vrf_name; //type: string

        class SourceAddress; //type: Ipv6Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress
        class RpAddress; //type: Ipv6Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress
        class SourceAddressNetio; //type: Ipv6Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio
        class GroupAddressNetio; //type: Ipv6Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio> group_address_netio;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress> rp_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress> source_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio> source_address_netio;


}; // Ipv6Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel


class Ipv6Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress : public Entity
{
    public:
        SourceAddress();
        ~SourceAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddress


class Ipv6Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::RpAddress


class Ipv6Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio : public Entity
{
    public:
        SourceAddressNetio();
        ~SourceAddressNetio();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::SourceAddressNetio


class Ipv6Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio : public Entity
{
    public:
        GroupAddressNetio();
        ~GroupAddressNetio();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::NetIoTunnels::NetIoTunnel::GroupAddressNetio


class Ipv6Pim::Standby::DefaultContext::BidirDfStates : public Entity
{
    public:
        BidirDfStates();
        ~BidirDfStates();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BidirDfState; //type: Ipv6Pim::Standby::DefaultContext::BidirDfStates::BidirDfState

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::BidirDfStates::BidirDfState> > bidir_df_state;


}; // Ipv6Pim::Standby::DefaultContext::BidirDfStates


class Ipv6Pim::Standby::DefaultContext::BidirDfStates::BidirDfState : public Entity
{
    public:
        BidirDfState();
        ~BidirDfState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf rp_address; //type: string
        YLeaf interface_name; //type: string
        YLeaf pim_interface_name; //type: string
        YLeaf election_state; //type: string
        YLeaf time_seconds; //type: uint64
        YLeaf time_nano_seconds; //type: uint64
        YLeaf our_metric; //type: uint32
        YLeaf our_metric_preference; //type: uint32

        class RpAddressXr; //type: Ipv6Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr> rp_address_xr;


}; // Ipv6Pim::Standby::DefaultContext::BidirDfStates::BidirDfState


class Ipv6Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr : public Entity
{
    public:
        RpAddressXr();
        ~RpAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::BidirDfStates::BidirDfState::RpAddressXr


class Ipv6Pim::Standby::DefaultContext::Topologies : public Entity
{
    public:
        Topologies();
        ~Topologies();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Topology; //type: Ipv6Pim::Standby::DefaultContext::Topologies::Topology

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Topologies::Topology> > topology;


}; // Ipv6Pim::Standby::DefaultContext::Topologies


class Ipv6Pim::Standby::DefaultContext::Topologies::Topology : public Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf group_address; //type: string
        YLeaf rpt; //type: int32
        YLeaf limit_reached; //type: boolean
        YLeaf low_memory; //type: boolean
        YLeaf protocol; //type: PimShowProtocolEnum
        YLeaf wildcard; //type: boolean
        YLeaf rpt_xr; //type: boolean
        YLeaf spt; //type: boolean
        YLeaf uptime; //type: uint64
        YLeaf expiry; //type: uint64
        YLeaf alive; //type: int32
        YLeaf register_received_timer; //type: int32
        YLeaf remote_source; //type: boolean
        YLeaf rpf_interface_name; //type: string
        YLeaf rpf_vrf_name; //type: string
        YLeaf rpf_safi; //type: uint8
        YLeaf rpf_table_name; //type: string
        YLeaf rpf_drop; //type: boolean
        YLeaf rpf_extranet; //type: boolean
        YLeaf is_via_lsm; //type: boolean
        YLeaf secondary_rpf_interface_name; //type: string
        YLeaf connected; //type: boolean
        YLeaf proxy; //type: boolean
        YLeaf rpf_proxy_enabled; //type: boolean
        YLeaf mofrr_enabled; //type: boolean
        YLeaf rib_mo_frr_enabled; //type: boolean
        YLeaf jp_timer; //type: int32
        YLeaf jp_status; //type: int32
        YLeaf suppress_registers; //type: int32
        YLeaf assume_alive; //type: boolean
        YLeaf probe_alive; //type: boolean
        YLeaf really_alive; //type: boolean
        YLeaf inherit_alive; //type: boolean
        YLeaf inherit_spt; //type: boolean
        YLeaf signal_sources; //type: boolean
        YLeaf dont_check_connected; //type: boolean
        YLeaf register_received; //type: boolean
        YLeaf last_hop; //type: boolean
        YLeaf sending_registers; //type: boolean
        YLeaf sending_null_registers; //type: boolean
        YLeaf sa_sent; //type: boolean
        YLeaf sa_received; //type: boolean
        YLeaf sa_joined; //type: boolean
        YLeaf anycast_rp_match; //type: boolean
        YLeaf anycast_rp_route_target; //type: string
        YLeaf bgp_join; //type: boolean
        YLeaf bgpjp_time; //type: uint64
        YLeaf customer_routing_type; //type: int32
        YLeaf extranet_route; //type: boolean
        YLeaf mofrr_active; //type: boolean
        YLeaf mofrr_primary; //type: boolean
        YLeaf mofrr_backup; //type: boolean
        YLeaf vxlan; //type: boolean

        class GroupAddressXr; //type: Ipv6Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr
        class SourceAddressXr; //type: Ipv6Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr
        class RpAddress; //type: Ipv6Pim::Standby::DefaultContext::Topologies::Topology::RpAddress
        class RpfNeighbor; //type: Ipv6Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor
        class SecondaryRpfNeighbor; //type: Ipv6Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor
        class RpfRoot; //type: Ipv6Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot
        class ProxyAddress; //type: Ipv6Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress
        class OrigSrcAddress; //type: Ipv6Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress
        class OutgoingInterface; //type: Ipv6Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr> group_address_xr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress> orig_src_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface> > outgoing_interface;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress> proxy_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Topologies::Topology::RpAddress> rp_address;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor> rpf_neighbor;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot> rpf_root;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor> secondary_rpf_neighbor;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr> source_address_xr;


}; // Ipv6Pim::Standby::DefaultContext::Topologies::Topology


class Ipv6Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr : public Entity
{
    public:
        GroupAddressXr();
        ~GroupAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::Topologies::Topology::GroupAddressXr


class Ipv6Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr : public Entity
{
    public:
        SourceAddressXr();
        ~SourceAddressXr();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::Topologies::Topology::SourceAddressXr


class Ipv6Pim::Standby::DefaultContext::Topologies::Topology::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::Topologies::Topology::RpAddress


class Ipv6Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor : public Entity
{
    public:
        RpfNeighbor();
        ~RpfNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::Topologies::Topology::RpfNeighbor


class Ipv6Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor : public Entity
{
    public:
        SecondaryRpfNeighbor();
        ~SecondaryRpfNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::Topologies::Topology::SecondaryRpfNeighbor


class Ipv6Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot : public Entity
{
    public:
        RpfRoot();
        ~RpfRoot();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::Topologies::Topology::RpfRoot


class Ipv6Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress : public Entity
{
    public:
        ProxyAddress();
        ~ProxyAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::Topologies::Topology::ProxyAddress


class Ipv6Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress : public Entity
{
    public:
        OrigSrcAddress();
        ~OrigSrcAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::Topologies::Topology::OrigSrcAddress


class Ipv6Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface : public Entity
{
    public:
        OutgoingInterface();
        ~OutgoingInterface();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf uptime; //type: uint64
        YLeaf expiry; //type: uint64
        YLeaf bgp_c_mcast_prune_delay_timer; //type: uint64
        YLeaf jp_timer; //type: int32
        YLeaf jp_state; //type: int32
        YLeaf assert_timer; //type: int32
        YLeaf local_members; //type: int32
        YLeaf internal_interest_info; //type: int32
        YLeaf forwarding_state; //type: int32
        YLeaf immediate_state; //type: int32
        YLeaf last_hop; //type: boolean
        YLeaf mldp_inband_mdt; //type: boolean
        YLeaf mldp_stale; //type: boolean
        YLeaf sa_prune; //type: boolean
        YLeaf admin_boundary; //type: boolean
        YLeaf igmp_membership; //type: boolean
        YLeaf mdt_safi_join; //type: boolean
        YLeaf mvpn_safi_join; //type: boolean
        YLeaf local_mdt_join; //type: boolean
        YLeaf data_mdt_join; //type: boolean
        YLeaf mvp_nv6_safi_join; //type: boolean
        YLeaf bgp_c_mcast_join; //type: boolean
        YLeaf vrf_name; //type: string
        YLeaf extranet_interface; //type: boolean

        class AssertWinner; //type: Ipv6Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner> assert_winner;


}; // Ipv6Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface


class Ipv6Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner : public Entity
{
    public:
        AssertWinner();
        ~AssertWinner();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::Topologies::Topology::OutgoingInterface::AssertWinner


class Ipv6Pim::Standby::DefaultContext::BgpAfs : public Entity
{
    public:
        BgpAfs();
        ~BgpAfs();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class BgpAf; //type: Ipv6Pim::Standby::DefaultContext::BgpAfs::BgpAf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::BgpAfs::BgpAf> > bgp_af;


}; // Ipv6Pim::Standby::DefaultContext::BgpAfs


class Ipv6Pim::Standby::DefaultContext::BgpAfs::BgpAf : public Entity
{
    public:
        BgpAf();
        ~BgpAf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf source_address; //type: string
        YLeaf group_address; //type: string
        YLeaf route_distinguisher; //type: string
        YLeaf extranet_path_count; //type: uint32
        YLeaf is_bgp_added; //type: boolean

        class Source; //type: Ipv6Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source
        class Group; //type: Ipv6Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group
        class NextHop; //type: Ipv6Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group> group;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop> next_hop;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source> source;


}; // Ipv6Pim::Standby::DefaultContext::BgpAfs::BgpAf


class Ipv6Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source : public Entity
{
    public:
        Source();
        ~Source();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::BgpAfs::BgpAf::Source


class Ipv6Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group : public Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::BgpAfs::BgpAf::Group


class Ipv6Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop : public Entity
{
    public:
        NextHop();
        ~NextHop();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::BgpAfs::BgpAf::NextHop


class Ipv6Pim::Standby::DefaultContext::AutoRp : public Entity
{
    public:
        AutoRp();
        ~AutoRp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;





}; // Ipv6Pim::Standby::DefaultContext::AutoRp


class Ipv6Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts : public Entity
{
    public:
        TopologyInterfaceFlagRouteCounts();
        ~TopologyInterfaceFlagRouteCounts();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class TopologyInterfaceFlagRouteCount; //type: Ipv6Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount> > topology_interface_flag_route_count;


}; // Ipv6Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts


class Ipv6Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount : public Entity
{
    public:
        TopologyInterfaceFlagRouteCount();
        ~TopologyInterfaceFlagRouteCount();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_flag; //type: PimTopologyInterfaceFlagEnum
        YLeaf group_ranges; //type: uint32
        YLeaf active_group_ranges; //type: uint32
        YLeaf groute_count; //type: uint32
        YLeaf sg_route_count; //type: uint32
        YLeaf sgr_route_count; //type: uint32
        YLeaf is_node_low_memory; //type: boolean

        class GroupAddress; //type: Ipv6Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress> group_address;


}; // Ipv6Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount


class Ipv6Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress : public Entity
{
    public:
        GroupAddress();
        ~GroupAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::TopologyInterfaceFlagRouteCounts::TopologyInterfaceFlagRouteCount::GroupAddress


class Ipv6Pim::Standby::DefaultContext::GroupMapSources : public Entity
{
    public:
        GroupMapSources();
        ~GroupMapSources();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class GroupMapSource; //type: Ipv6Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource> > group_map_source;


}; // Ipv6Pim::Standby::DefaultContext::GroupMapSources


class Ipv6Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource : public Entity
{
    public:
        GroupMapSource();
        ~GroupMapSource();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: int32
        YLeaf client; //type: PimClientEnum
        YLeaf protocol; //type: PimProtocolEnum
        YLeaf rp_address; //type: string
        YLeaf priority; //type: int32
        YLeaf holdtime; //type: int32
        YLeaf expires; //type: uint64
        YLeaf uptime; //type: uint64

        class SourceOfInformation; //type: Ipv6Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation
        class GroupMapInformation; //type: Ipv6Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation> group_map_information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation> source_of_information;


}; // Ipv6Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource


class Ipv6Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation : public Entity
{
    public:
        SourceOfInformation();
        ~SourceOfInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::SourceOfInformation


class Ipv6Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation : public Entity
{
    public:
        GroupMapInformation();
        ~GroupMapInformation();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix_length; //type: int32
        YLeaf client; //type: PimShowRangeClientEnum
        YLeaf protocol; //type: PimShowProtocolEnum
        YLeaf group_count; //type: uint32
        YLeaf is_used; //type: boolean
        YLeaf mrib_active; //type: boolean
        YLeaf is_override; //type: boolean
        YLeaf priority; //type: uint32

        class Prefix; //type: Ipv6Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix
        class RpAddress; //type: Ipv6Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress

        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix> prefix;
        std::shared_ptr<Cisco_IOS_XR_ipv4_pim_oper::Ipv6Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress> rp_address;


}; // Ipv6Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation


class Ipv6Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix : public Entity
{
    public:
        Prefix();
        ~Prefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::Prefix


class Ipv6Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress : public Entity
{
    public:
        RpAddress();
        ~RpAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf af_name; //type: PimAfiEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // Ipv6Pim::Standby::DefaultContext::GroupMapSources::GroupMapSource::GroupMapInformation::RpAddress


}
}

#endif /* _CISCO_IOS_XR_IPV4_PIM_OPER_5_ */

