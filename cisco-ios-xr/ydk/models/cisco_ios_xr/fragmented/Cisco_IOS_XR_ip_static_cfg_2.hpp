#ifndef _CISCO_IOS_XR_IP_STATIC_CFG_2_
#define _CISCO_IOS_XR_IP_STATIC_CFG_2_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ip_static_cfg_0.hpp"
#include "Cisco_IOS_XR_ip_static_cfg_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_static_cfg {


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress : public Entity
{
    public:
        VrfNextHopNextHopAddress();
        ~VrfNextHopNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName : public Entity
{
    public:
        VrfNextHopNextHopAddressExplicitPathName();
        ~VrfNextHopNextHopAddressExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName : public Entity
{
    public:
        VrfNextHopExplicitPathName();
        ~VrfNextHopExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute : public Entity
{
    public:
        VrfSegRoute();
        ~VrfSegRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SegmentRouteNextHopTable; //type: RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable> segment_route_next_hop_table;


}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable : public Entity
{
    public:
        SegmentRouteNextHopTable();
        ~SegmentRouteNextHopTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfNextHopInterfaceName; //type: RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName
        class VrfNextHopInterfaceNameNextHopAddress; //type: RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress
        class VrfNextHopNextHopAddress; //type: RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress
        class VrfNextHopNextHopAddressExplicitPathName; //type: RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName
        class VrfNextHopExplicitPathName; //type: RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName> > vrf_next_hop_explicit_path_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName> > vrf_next_hop_interface_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress> > vrf_next_hop_interface_name_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress> > vrf_next_hop_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName> > vrf_next_hop_next_hop_address_explicit_path_name;


}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName : public Entity
{
    public:
        VrfNextHopInterfaceName();
        ~VrfNextHopInterfaceName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress : public Entity
{
    public:
        VrfNextHopInterfaceNameNextHopAddress();
        ~VrfNextHopInterfaceNameNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress : public Entity
{
    public:
        VrfNextHopNextHopAddress();
        ~VrfNextHopNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName : public Entity
{
    public:
        VrfNextHopNextHopAddressExplicitPathName();
        ~VrfNextHopNextHopAddressExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName


class RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName : public Entity
{
    public:
        VrfNextHopExplicitPathName();
        ~VrfNextHopExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::Vrfs::Vrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName


class RouterStatic::DefaultVrf : public Entity
{
    public:
        DefaultVrf();
        ~DefaultVrf();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class AddressFamily; //type: RouterStatic::DefaultVrf::AddressFamily

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily> address_family;


}; // RouterStatic::DefaultVrf


class RouterStatic::DefaultVrf::AddressFamily : public Entity
{
    public:
        AddressFamily();
        ~AddressFamily();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Vrfipv4; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4
        class Vrfipv6; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv6

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4> vrfipv4;
        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv6> vrfipv6;


}; // RouterStatic::DefaultVrf::AddressFamily


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4 : public Entity
{
    public:
        Vrfipv4();
        ~Vrfipv4();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfUnicast; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast
        class VrfMulticast; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast> vrf_multicast;
        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast> vrf_unicast;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast : public Entity
{
    public:
        VrfUnicast();
        ~VrfUnicast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Topologies; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies
        class VrfPrefixes; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes
        class DefaultTopology; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology> default_topology;
        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies> topologies;
        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes> vrf_prefixes;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies : public Entity
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



        class Topology; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology> > topology;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology : public Entity
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


        YLeaf topology_name; //type: string

        class VrfPrefixTopologies; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies> vrf_prefix_topologies;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies : public Entity
{
    public:
        VrfPrefixTopologies();
        ~VrfPrefixTopologies();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfPrefixTopology; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology> > vrf_prefix_topology;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology : public Entity
{
    public:
        VrfPrefixTopology();
        ~VrfPrefixTopology();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32

        class VrfRoute; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute
        class VrfRecurseRoutes; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes
        class VrfSegRoute; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes> vrf_recurse_routes;
        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute> vrf_route;
        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute> vrf_seg_route;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute : public Entity
{
    public:
        VrfRoute();
        ~VrfRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfNextHopTable; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable> vrf_next_hop_table;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable : public Entity
{
    public:
        VrfNextHopTable();
        ~VrfNextHopTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfNextHopInterfaceName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName
        class VrfNextHopInterfaceNameNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress
        class VrfNextHopNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress
        class VrfNextHopNextHopAddressExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName
        class VrfNextHopExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName> > vrf_next_hop_explicit_path_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName> > vrf_next_hop_interface_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress> > vrf_next_hop_interface_name_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress> > vrf_next_hop_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName> > vrf_next_hop_next_hop_address_explicit_path_name;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName : public Entity
{
    public:
        VrfNextHopInterfaceName();
        ~VrfNextHopInterfaceName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress : public Entity
{
    public:
        VrfNextHopInterfaceNameNextHopAddress();
        ~VrfNextHopInterfaceNameNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress : public Entity
{
    public:
        VrfNextHopNextHopAddress();
        ~VrfNextHopNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName : public Entity
{
    public:
        VrfNextHopNextHopAddressExplicitPathName();
        ~VrfNextHopNextHopAddressExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName : public Entity
{
    public:
        VrfNextHopExplicitPathName();
        ~VrfNextHopExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes : public Entity
{
    public:
        VrfRecurseRoutes();
        ~VrfRecurseRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfRecurseRoute; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute> > vrf_recurse_route;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute : public Entity
{
    public:
        VrfRecurseRoute();
        ~VrfRecurseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string

        class VrfRecursiveNextHopTable; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable> vrf_recursive_next_hop_table;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable : public Entity
{
    public:
        VrfRecursiveNextHopTable();
        ~VrfRecursiveNextHopTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfNextHopInterfaceName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName
        class VrfNextHopInterfaceNameNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress
        class VrfNextHopNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress
        class VrfNextHopNextHopAddressExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName
        class VrfNextHopExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName> > vrf_next_hop_explicit_path_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName> > vrf_next_hop_interface_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress> > vrf_next_hop_interface_name_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress> > vrf_next_hop_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName> > vrf_next_hop_next_hop_address_explicit_path_name;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName : public Entity
{
    public:
        VrfNextHopInterfaceName();
        ~VrfNextHopInterfaceName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress : public Entity
{
    public:
        VrfNextHopInterfaceNameNextHopAddress();
        ~VrfNextHopInterfaceNameNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress : public Entity
{
    public:
        VrfNextHopNextHopAddress();
        ~VrfNextHopNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName : public Entity
{
    public:
        VrfNextHopNextHopAddressExplicitPathName();
        ~VrfNextHopNextHopAddressExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName : public Entity
{
    public:
        VrfNextHopExplicitPathName();
        ~VrfNextHopExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute : public Entity
{
    public:
        VrfSegRoute();
        ~VrfSegRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SegmentRouteNextHopTable; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable> segment_route_next_hop_table;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable : public Entity
{
    public:
        SegmentRouteNextHopTable();
        ~SegmentRouteNextHopTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfNextHopInterfaceName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName
        class VrfNextHopInterfaceNameNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress
        class VrfNextHopNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress
        class VrfNextHopNextHopAddressExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName
        class VrfNextHopExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName> > vrf_next_hop_explicit_path_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName> > vrf_next_hop_interface_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress> > vrf_next_hop_interface_name_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress> > vrf_next_hop_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName> > vrf_next_hop_next_hop_address_explicit_path_name;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName : public Entity
{
    public:
        VrfNextHopInterfaceName();
        ~VrfNextHopInterfaceName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress : public Entity
{
    public:
        VrfNextHopInterfaceNameNextHopAddress();
        ~VrfNextHopInterfaceNameNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress : public Entity
{
    public:
        VrfNextHopNextHopAddress();
        ~VrfNextHopNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName : public Entity
{
    public:
        VrfNextHopNextHopAddressExplicitPathName();
        ~VrfNextHopNextHopAddressExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName : public Entity
{
    public:
        VrfNextHopExplicitPathName();
        ~VrfNextHopExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes : public Entity
{
    public:
        VrfPrefixes();
        ~VrfPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfPrefix; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix> > vrf_prefix;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix : public Entity
{
    public:
        VrfPrefix();
        ~VrfPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32

        class VrfRoute; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute
        class VrfRecurseRoutes; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes
        class VrfSegRoute; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes> vrf_recurse_routes;
        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute> vrf_route;
        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute> vrf_seg_route;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute : public Entity
{
    public:
        VrfRoute();
        ~VrfRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfNextHopTable; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable> vrf_next_hop_table;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable : public Entity
{
    public:
        VrfNextHopTable();
        ~VrfNextHopTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfNextHopInterfaceName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName
        class VrfNextHopInterfaceNameNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress
        class VrfNextHopNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress
        class VrfNextHopNextHopAddressExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName
        class VrfNextHopExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName> > vrf_next_hop_explicit_path_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName> > vrf_next_hop_interface_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress> > vrf_next_hop_interface_name_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress> > vrf_next_hop_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName> > vrf_next_hop_next_hop_address_explicit_path_name;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName : public Entity
{
    public:
        VrfNextHopInterfaceName();
        ~VrfNextHopInterfaceName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress : public Entity
{
    public:
        VrfNextHopInterfaceNameNextHopAddress();
        ~VrfNextHopInterfaceNameNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress : public Entity
{
    public:
        VrfNextHopNextHopAddress();
        ~VrfNextHopNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName : public Entity
{
    public:
        VrfNextHopNextHopAddressExplicitPathName();
        ~VrfNextHopNextHopAddressExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName : public Entity
{
    public:
        VrfNextHopExplicitPathName();
        ~VrfNextHopExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes : public Entity
{
    public:
        VrfRecurseRoutes();
        ~VrfRecurseRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfRecurseRoute; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute> > vrf_recurse_route;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute : public Entity
{
    public:
        VrfRecurseRoute();
        ~VrfRecurseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string

        class VrfRecursiveNextHopTable; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable> vrf_recursive_next_hop_table;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable : public Entity
{
    public:
        VrfRecursiveNextHopTable();
        ~VrfRecursiveNextHopTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfNextHopInterfaceName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName
        class VrfNextHopInterfaceNameNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress
        class VrfNextHopNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress
        class VrfNextHopNextHopAddressExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName
        class VrfNextHopExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName> > vrf_next_hop_explicit_path_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName> > vrf_next_hop_interface_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress> > vrf_next_hop_interface_name_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress> > vrf_next_hop_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName> > vrf_next_hop_next_hop_address_explicit_path_name;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName : public Entity
{
    public:
        VrfNextHopInterfaceName();
        ~VrfNextHopInterfaceName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress : public Entity
{
    public:
        VrfNextHopInterfaceNameNextHopAddress();
        ~VrfNextHopInterfaceNameNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress : public Entity
{
    public:
        VrfNextHopNextHopAddress();
        ~VrfNextHopNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName : public Entity
{
    public:
        VrfNextHopNextHopAddressExplicitPathName();
        ~VrfNextHopNextHopAddressExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName : public Entity
{
    public:
        VrfNextHopExplicitPathName();
        ~VrfNextHopExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute : public Entity
{
    public:
        VrfSegRoute();
        ~VrfSegRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SegmentRouteNextHopTable; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable> segment_route_next_hop_table;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable : public Entity
{
    public:
        SegmentRouteNextHopTable();
        ~SegmentRouteNextHopTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfNextHopInterfaceName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName
        class VrfNextHopInterfaceNameNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress
        class VrfNextHopNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress
        class VrfNextHopNextHopAddressExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName
        class VrfNextHopExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName> > vrf_next_hop_explicit_path_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName> > vrf_next_hop_interface_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress> > vrf_next_hop_interface_name_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress> > vrf_next_hop_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName> > vrf_next_hop_next_hop_address_explicit_path_name;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName : public Entity
{
    public:
        VrfNextHopInterfaceName();
        ~VrfNextHopInterfaceName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress : public Entity
{
    public:
        VrfNextHopInterfaceNameNextHopAddress();
        ~VrfNextHopInterfaceNameNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress : public Entity
{
    public:
        VrfNextHopNextHopAddress();
        ~VrfNextHopNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName : public Entity
{
    public:
        VrfNextHopNextHopAddressExplicitPathName();
        ~VrfNextHopNextHopAddressExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName : public Entity
{
    public:
        VrfNextHopExplicitPathName();
        ~VrfNextHopExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology : public Entity
{
    public:
        DefaultTopology();
        ~DefaultTopology();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfPrefixTopologies; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies> vrf_prefix_topologies;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies : public Entity
{
    public:
        VrfPrefixTopologies();
        ~VrfPrefixTopologies();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfPrefixTopology; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology> > vrf_prefix_topology;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology : public Entity
{
    public:
        VrfPrefixTopology();
        ~VrfPrefixTopology();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32

        class VrfRoute; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute
        class VrfRecurseRoutes; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes
        class VrfSegRoute; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes> vrf_recurse_routes;
        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute> vrf_route;
        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute> vrf_seg_route;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute : public Entity
{
    public:
        VrfRoute();
        ~VrfRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfNextHopTable; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable> vrf_next_hop_table;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable : public Entity
{
    public:
        VrfNextHopTable();
        ~VrfNextHopTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfNextHopInterfaceName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName
        class VrfNextHopInterfaceNameNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress
        class VrfNextHopNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress
        class VrfNextHopNextHopAddressExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName
        class VrfNextHopExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName> > vrf_next_hop_explicit_path_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName> > vrf_next_hop_interface_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress> > vrf_next_hop_interface_name_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress> > vrf_next_hop_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName> > vrf_next_hop_next_hop_address_explicit_path_name;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName : public Entity
{
    public:
        VrfNextHopInterfaceName();
        ~VrfNextHopInterfaceName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress : public Entity
{
    public:
        VrfNextHopInterfaceNameNextHopAddress();
        ~VrfNextHopInterfaceNameNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress : public Entity
{
    public:
        VrfNextHopNextHopAddress();
        ~VrfNextHopNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName : public Entity
{
    public:
        VrfNextHopNextHopAddressExplicitPathName();
        ~VrfNextHopNextHopAddressExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName : public Entity
{
    public:
        VrfNextHopExplicitPathName();
        ~VrfNextHopExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes : public Entity
{
    public:
        VrfRecurseRoutes();
        ~VrfRecurseRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfRecurseRoute; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute> > vrf_recurse_route;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute : public Entity
{
    public:
        VrfRecurseRoute();
        ~VrfRecurseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string

        class VrfRecursiveNextHopTable; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable> vrf_recursive_next_hop_table;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable : public Entity
{
    public:
        VrfRecursiveNextHopTable();
        ~VrfRecursiveNextHopTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfNextHopInterfaceName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName
        class VrfNextHopInterfaceNameNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress
        class VrfNextHopNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress
        class VrfNextHopNextHopAddressExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName
        class VrfNextHopExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName> > vrf_next_hop_explicit_path_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName> > vrf_next_hop_interface_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress> > vrf_next_hop_interface_name_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress> > vrf_next_hop_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName> > vrf_next_hop_next_hop_address_explicit_path_name;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName : public Entity
{
    public:
        VrfNextHopInterfaceName();
        ~VrfNextHopInterfaceName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress : public Entity
{
    public:
        VrfNextHopInterfaceNameNextHopAddress();
        ~VrfNextHopInterfaceNameNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress : public Entity
{
    public:
        VrfNextHopNextHopAddress();
        ~VrfNextHopNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName : public Entity
{
    public:
        VrfNextHopNextHopAddressExplicitPathName();
        ~VrfNextHopNextHopAddressExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName : public Entity
{
    public:
        VrfNextHopExplicitPathName();
        ~VrfNextHopExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute : public Entity
{
    public:
        VrfSegRoute();
        ~VrfSegRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SegmentRouteNextHopTable; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable> segment_route_next_hop_table;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable : public Entity
{
    public:
        SegmentRouteNextHopTable();
        ~SegmentRouteNextHopTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfNextHopInterfaceName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName
        class VrfNextHopInterfaceNameNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress
        class VrfNextHopNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress
        class VrfNextHopNextHopAddressExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName
        class VrfNextHopExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName> > vrf_next_hop_explicit_path_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName> > vrf_next_hop_interface_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress> > vrf_next_hop_interface_name_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress> > vrf_next_hop_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName> > vrf_next_hop_next_hop_address_explicit_path_name;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName : public Entity
{
    public:
        VrfNextHopInterfaceName();
        ~VrfNextHopInterfaceName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress : public Entity
{
    public:
        VrfNextHopInterfaceNameNextHopAddress();
        ~VrfNextHopInterfaceNameNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress : public Entity
{
    public:
        VrfNextHopNextHopAddress();
        ~VrfNextHopNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName : public Entity
{
    public:
        VrfNextHopNextHopAddressExplicitPathName();
        ~VrfNextHopNextHopAddressExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName : public Entity
{
    public:
        VrfNextHopExplicitPathName();
        ~VrfNextHopExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfUnicast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast : public Entity
{
    public:
        VrfMulticast();
        ~VrfMulticast();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Topologies; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies
        class VrfPrefixes; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes
        class DefaultTopology; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology> default_topology;
        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies> topologies;
        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes> vrf_prefixes;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies : public Entity
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



        class Topology; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology> > topology;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology : public Entity
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


        YLeaf topology_name; //type: string

        class VrfPrefixTopologies; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies> vrf_prefix_topologies;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies : public Entity
{
    public:
        VrfPrefixTopologies();
        ~VrfPrefixTopologies();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfPrefixTopology; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology> > vrf_prefix_topology;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology : public Entity
{
    public:
        VrfPrefixTopology();
        ~VrfPrefixTopology();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32

        class VrfRoute; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute
        class VrfRecurseRoutes; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes
        class VrfSegRoute; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes> vrf_recurse_routes;
        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute> vrf_route;
        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute> vrf_seg_route;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute : public Entity
{
    public:
        VrfRoute();
        ~VrfRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfNextHopTable; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable> vrf_next_hop_table;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable : public Entity
{
    public:
        VrfNextHopTable();
        ~VrfNextHopTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfNextHopInterfaceName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName
        class VrfNextHopInterfaceNameNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress
        class VrfNextHopNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress
        class VrfNextHopNextHopAddressExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName
        class VrfNextHopExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName> > vrf_next_hop_explicit_path_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName> > vrf_next_hop_interface_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress> > vrf_next_hop_interface_name_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress> > vrf_next_hop_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName> > vrf_next_hop_next_hop_address_explicit_path_name;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName : public Entity
{
    public:
        VrfNextHopInterfaceName();
        ~VrfNextHopInterfaceName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress : public Entity
{
    public:
        VrfNextHopInterfaceNameNextHopAddress();
        ~VrfNextHopInterfaceNameNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress : public Entity
{
    public:
        VrfNextHopNextHopAddress();
        ~VrfNextHopNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName : public Entity
{
    public:
        VrfNextHopNextHopAddressExplicitPathName();
        ~VrfNextHopNextHopAddressExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName : public Entity
{
    public:
        VrfNextHopExplicitPathName();
        ~VrfNextHopExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes : public Entity
{
    public:
        VrfRecurseRoutes();
        ~VrfRecurseRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfRecurseRoute; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute> > vrf_recurse_route;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute : public Entity
{
    public:
        VrfRecurseRoute();
        ~VrfRecurseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string

        class VrfRecursiveNextHopTable; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable> vrf_recursive_next_hop_table;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable : public Entity
{
    public:
        VrfRecursiveNextHopTable();
        ~VrfRecursiveNextHopTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfNextHopInterfaceName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName
        class VrfNextHopInterfaceNameNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress
        class VrfNextHopNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress
        class VrfNextHopNextHopAddressExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName
        class VrfNextHopExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName> > vrf_next_hop_explicit_path_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName> > vrf_next_hop_interface_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress> > vrf_next_hop_interface_name_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress> > vrf_next_hop_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName> > vrf_next_hop_next_hop_address_explicit_path_name;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName : public Entity
{
    public:
        VrfNextHopInterfaceName();
        ~VrfNextHopInterfaceName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress : public Entity
{
    public:
        VrfNextHopInterfaceNameNextHopAddress();
        ~VrfNextHopInterfaceNameNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress : public Entity
{
    public:
        VrfNextHopNextHopAddress();
        ~VrfNextHopNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName : public Entity
{
    public:
        VrfNextHopNextHopAddressExplicitPathName();
        ~VrfNextHopNextHopAddressExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName : public Entity
{
    public:
        VrfNextHopExplicitPathName();
        ~VrfNextHopExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute : public Entity
{
    public:
        VrfSegRoute();
        ~VrfSegRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SegmentRouteNextHopTable; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable> segment_route_next_hop_table;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable : public Entity
{
    public:
        SegmentRouteNextHopTable();
        ~SegmentRouteNextHopTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfNextHopInterfaceName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName
        class VrfNextHopInterfaceNameNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress
        class VrfNextHopNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress
        class VrfNextHopNextHopAddressExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName
        class VrfNextHopExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName> > vrf_next_hop_explicit_path_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName> > vrf_next_hop_interface_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress> > vrf_next_hop_interface_name_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress> > vrf_next_hop_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName> > vrf_next_hop_next_hop_address_explicit_path_name;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName : public Entity
{
    public:
        VrfNextHopInterfaceName();
        ~VrfNextHopInterfaceName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress : public Entity
{
    public:
        VrfNextHopInterfaceNameNextHopAddress();
        ~VrfNextHopInterfaceNameNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress : public Entity
{
    public:
        VrfNextHopNextHopAddress();
        ~VrfNextHopNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName : public Entity
{
    public:
        VrfNextHopNextHopAddressExplicitPathName();
        ~VrfNextHopNextHopAddressExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName : public Entity
{
    public:
        VrfNextHopExplicitPathName();
        ~VrfNextHopExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::Topologies::Topology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes : public Entity
{
    public:
        VrfPrefixes();
        ~VrfPrefixes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfPrefix; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix> > vrf_prefix;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix : public Entity
{
    public:
        VrfPrefix();
        ~VrfPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32

        class VrfRoute; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute
        class VrfRecurseRoutes; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes
        class VrfSegRoute; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes> vrf_recurse_routes;
        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute> vrf_route;
        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute> vrf_seg_route;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute : public Entity
{
    public:
        VrfRoute();
        ~VrfRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfNextHopTable; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable> vrf_next_hop_table;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable : public Entity
{
    public:
        VrfNextHopTable();
        ~VrfNextHopTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfNextHopInterfaceName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName
        class VrfNextHopInterfaceNameNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress
        class VrfNextHopNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress
        class VrfNextHopNextHopAddressExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName
        class VrfNextHopExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName> > vrf_next_hop_explicit_path_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName> > vrf_next_hop_interface_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress> > vrf_next_hop_interface_name_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress> > vrf_next_hop_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName> > vrf_next_hop_next_hop_address_explicit_path_name;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName : public Entity
{
    public:
        VrfNextHopInterfaceName();
        ~VrfNextHopInterfaceName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress : public Entity
{
    public:
        VrfNextHopInterfaceNameNextHopAddress();
        ~VrfNextHopInterfaceNameNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress : public Entity
{
    public:
        VrfNextHopNextHopAddress();
        ~VrfNextHopNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName : public Entity
{
    public:
        VrfNextHopNextHopAddressExplicitPathName();
        ~VrfNextHopNextHopAddressExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName : public Entity
{
    public:
        VrfNextHopExplicitPathName();
        ~VrfNextHopExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes : public Entity
{
    public:
        VrfRecurseRoutes();
        ~VrfRecurseRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfRecurseRoute; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute> > vrf_recurse_route;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute : public Entity
{
    public:
        VrfRecurseRoute();
        ~VrfRecurseRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string

        class VrfRecursiveNextHopTable; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable> vrf_recursive_next_hop_table;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable : public Entity
{
    public:
        VrfRecursiveNextHopTable();
        ~VrfRecursiveNextHopTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfNextHopInterfaceName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName
        class VrfNextHopInterfaceNameNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress
        class VrfNextHopNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress
        class VrfNextHopNextHopAddressExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName
        class VrfNextHopExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName> > vrf_next_hop_explicit_path_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName> > vrf_next_hop_interface_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress> > vrf_next_hop_interface_name_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress> > vrf_next_hop_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName> > vrf_next_hop_next_hop_address_explicit_path_name;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName : public Entity
{
    public:
        VrfNextHopInterfaceName();
        ~VrfNextHopInterfaceName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress : public Entity
{
    public:
        VrfNextHopInterfaceNameNextHopAddress();
        ~VrfNextHopInterfaceNameNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress : public Entity
{
    public:
        VrfNextHopNextHopAddress();
        ~VrfNextHopNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName : public Entity
{
    public:
        VrfNextHopNextHopAddressExplicitPathName();
        ~VrfNextHopNextHopAddressExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName : public Entity
{
    public:
        VrfNextHopExplicitPathName();
        ~VrfNextHopExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute : public Entity
{
    public:
        VrfSegRoute();
        ~VrfSegRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class SegmentRouteNextHopTable; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable> segment_route_next_hop_table;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable : public Entity
{
    public:
        SegmentRouteNextHopTable();
        ~SegmentRouteNextHopTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfNextHopInterfaceName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName
        class VrfNextHopInterfaceNameNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress
        class VrfNextHopNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress
        class VrfNextHopNextHopAddressExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName
        class VrfNextHopExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName> > vrf_next_hop_explicit_path_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName> > vrf_next_hop_interface_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress> > vrf_next_hop_interface_name_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress> > vrf_next_hop_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName> > vrf_next_hop_next_hop_address_explicit_path_name;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName : public Entity
{
    public:
        VrfNextHopInterfaceName();
        ~VrfNextHopInterfaceName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress : public Entity
{
    public:
        VrfNextHopInterfaceNameNextHopAddress();
        ~VrfNextHopInterfaceNameNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress : public Entity
{
    public:
        VrfNextHopNextHopAddress();
        ~VrfNextHopNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName : public Entity
{
    public:
        VrfNextHopNextHopAddressExplicitPathName();
        ~VrfNextHopNextHopAddressExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName : public Entity
{
    public:
        VrfNextHopExplicitPathName();
        ~VrfNextHopExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::VrfPrefixes::VrfPrefix::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology : public Entity
{
    public:
        DefaultTopology();
        ~DefaultTopology();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfPrefixTopologies; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies> vrf_prefix_topologies;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies : public Entity
{
    public:
        VrfPrefixTopologies();
        ~VrfPrefixTopologies();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfPrefixTopology; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology> > vrf_prefix_topology;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology : public Entity
{
    public:
        VrfPrefixTopology();
        ~VrfPrefixTopology();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32

        class VrfRoute; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute
        class VrfRecurseRoutes; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes
        class VrfSegRoute; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes> vrf_recurse_routes;
        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute> vrf_route;
        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute> vrf_seg_route;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute : public Entity
{
    public:
        VrfRoute();
        ~VrfRoute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfNextHopTable; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable> vrf_next_hop_table;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable : public Entity
{
    public:
        VrfNextHopTable();
        ~VrfNextHopTable();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class VrfNextHopInterfaceName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName
        class VrfNextHopInterfaceNameNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress
        class VrfNextHopNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress
        class VrfNextHopNextHopAddressExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName
        class VrfNextHopExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName> > vrf_next_hop_explicit_path_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName> > vrf_next_hop_interface_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress> > vrf_next_hop_interface_name_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress> > vrf_next_hop_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName> > vrf_next_hop_next_hop_address_explicit_path_name;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName : public Entity
{
    public:
        VrfNextHopInterfaceName();
        ~VrfNextHopInterfaceName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress : public Entity
{
    public:
        VrfNextHopInterfaceNameNextHopAddress();
        ~VrfNextHopInterfaceNameNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interface_name; //type: string
        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopInterfaceNameNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress : public Entity
{
    public:
        VrfNextHopNextHopAddress();
        ~VrfNextHopNextHopAddress();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName : public Entity
{
    public:
        VrfNextHopNextHopAddressExplicitPathName();
        ~VrfNextHopNextHopAddressExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf next_hop_address; //type: string
        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName : public Entity
{
    public:
        VrfNextHopExplicitPathName();
        ~VrfNextHopExplicitPathName();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf explicit_path_name; //type: string
        YLeaf bfd_fast_detect; //type: boolean
        YLeaf minimum_interval; //type: uint32
        YLeaf detect_multiplier; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf tag; //type: uint32
        YLeaf permanent; //type: boolean
        YLeaf vrf_lable; //type: uint32
        YLeaf tunnel_id; //type: uint32
        YLeaf object_name; //type: string
        YLeaf description; //type: string
        YLeaf load_metric; //type: uint32
        YLeaf index_; //type: string



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv4::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName


}
}

#endif /* _CISCO_IOS_XR_IP_STATIC_CFG_2_ */

