#ifndef _CISCO_IOS_XR_IP_STATIC_CFG_4_
#define _CISCO_IOS_XR_IP_STATIC_CFG_4_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ip_static_cfg_0.hpp"
#include "Cisco_IOS_XR_ip_static_cfg_2.hpp"
#include "Cisco_IOS_XR_ip_static_cfg_3.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_static_cfg {


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress : public Entity
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



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName : public Entity
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



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopNextHopAddressExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName : public Entity
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



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRoute::VrfNextHopTable::VrfNextHopExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes : public Entity
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



        class VrfRecurseRoute; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute> > vrf_recurse_route;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute : public Entity
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

        class VrfRecursiveNextHopTable; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable> vrf_recursive_next_hop_table;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable : public Entity
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



        class VrfNextHopInterfaceName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName
        class VrfNextHopInterfaceNameNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress
        class VrfNextHopNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress
        class VrfNextHopNextHopAddressExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName
        class VrfNextHopExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName> > vrf_next_hop_explicit_path_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName> > vrf_next_hop_interface_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress> > vrf_next_hop_interface_name_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress> > vrf_next_hop_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName> > vrf_next_hop_next_hop_address_explicit_path_name;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName : public Entity
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



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress : public Entity
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



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopInterfaceNameNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress : public Entity
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



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName : public Entity
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



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopNextHopAddressExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName : public Entity
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



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfRecurseRoutes::VrfRecurseRoute::VrfRecursiveNextHopTable::VrfNextHopExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute : public Entity
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



        class SegmentRouteNextHopTable; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable

        std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable> segment_route_next_hop_table;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable : public Entity
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



        class VrfNextHopInterfaceName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName
        class VrfNextHopInterfaceNameNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress
        class VrfNextHopNextHopAddress; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress
        class VrfNextHopNextHopAddressExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName
        class VrfNextHopExplicitPathName; //type: RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName> > vrf_next_hop_explicit_path_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName> > vrf_next_hop_interface_name;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress> > vrf_next_hop_interface_name_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress> > vrf_next_hop_next_hop_address;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_static_cfg::RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName> > vrf_next_hop_next_hop_address_explicit_path_name;


}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName : public Entity
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



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress : public Entity
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



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopInterfaceNameNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress : public Entity
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



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddress


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName : public Entity
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



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopNextHopAddressExplicitPathName


class RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName : public Entity
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



}; // RouterStatic::DefaultVrf::AddressFamily::Vrfipv6::VrfMulticast::DefaultTopology::VrfPrefixTopologies::VrfPrefixTopology::VrfSegRoute::SegmentRouteNextHopTable::VrfNextHopExplicitPathName


class RouterStatic::MaximumRoutes : public Entity
{
    public:
        MaximumRoutes();
        ~MaximumRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf ipv6_routes; //type: uint32
        YLeaf ipv4_routes; //type: uint32



}; // RouterStatic::MaximumRoutes


}
}

#endif /* _CISCO_IOS_XR_IP_STATIC_CFG_4_ */

