#ifndef _CISCO_IOS_XR_IPV4_OSPF_OPER_5_
#define _CISCO_IOS_XR_IPV4_OSPF_OPER_5_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XR_ipv4_ospf_oper_0.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_3.hpp"
#include "Cisco_IOS_XR_ipv4_ospf_oper_4.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_ospf_oper {


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime : public Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime : public Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_interface_name; //type: string
        YLeaf route_next_hop_address; //type: string
        YLeaf route_source; //type: string
        YLeaf route_lsaid; //type: string
        YLeaf route_path_is_mcast_intact; //type: boolean
        YLeaf route_path_is_ucmp_path; //type: boolean
        YLeaf route_metric; //type: uint32
        YLeaf lsa_type; //type: uint8
        YLeaf area_id; //type: uint32
        YLeaf area_format; //type: boolean
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath : public Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf microloop_repair_list_size; //type: uint32
        YLeaf microloop_tunnel_interface_name; //type: string
        YLeaf microloop_strict_spf; //type: boolean
        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::RouteTable::Route::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes : public Entity
{
    public:
        ExternalRoutes();
        ~ExternalRoutes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ExternalRoute; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute> > external_route;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute : public Entity
{
    public:
        ExternalRoute();
        ~ExternalRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf prefix_length; //type: uint32
        class RouteInformation_; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_
        class ProtocolName; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName
        class RouteExtendedCommunity; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName> protocol_name;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity> route_extended_community;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_> route_information;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_ : public Entity
{
    public:
        RouteInformation_();
        ~RouteInformation_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_prefix; //type: string
        YLeaf route_prefix_length; //type: uint32
        YLeaf route_metric; //type: uint32
        YLeaf route_type; //type: OspfRouteEnum
        YLeaf route_connected; //type: boolean
        class RouteInfo; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo
        class RoutePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo> route_info;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath> > route_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo : public Entity
{
    public:
        RouteInfo();
        ~RouteInfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_area_id; //type: uint32
        YLeaf route_te_metric; //type: uint32
        YLeaf route_rib_version; //type: uint32
        YLeaf route_spf_version; //type: uint64
        YLeaf route_forward_distance; //type: uint32
        YLeaf route_source; //type: uint16
        YLeaf route_spf_priority; //type: uint8
        YLeaf route_auto_excluded; //type: boolean
        YLeaf route_srte_prefix_registered; //type: boolean
        YLeaf route_srte_nbr_registered; //type: uint16
        class RouteUpdateTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime
        class RouteFailTime; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime> route_fail_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime> route_update_time;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime : public Entity
{
    public:
        RouteUpdateTime();
        ~RouteUpdateTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteUpdateTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime : public Entity
{
    public:
        RouteFailTime();
        ~RouteFailTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RouteInfo::RouteFailTime


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath : public Entity
{
    public:
        RoutePath();
        ~RoutePath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_interface_name; //type: string
        YLeaf route_next_hop_address; //type: string
        YLeaf route_source; //type: string
        YLeaf route_lsaid; //type: string
        YLeaf route_path_is_mcast_intact; //type: boolean
        YLeaf route_path_is_ucmp_path; //type: boolean
        YLeaf route_metric; //type: uint32
        YLeaf lsa_type; //type: uint8
        YLeaf area_id; //type: uint32
        YLeaf area_format; //type: boolean
        class SrMicroloopAvoidancePath; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath> sr_microloop_avoidance_path;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath : public Entity
{
    public:
        SrMicroloopAvoidancePath();
        ~SrMicroloopAvoidancePath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf microloop_repair_list_size; //type: uint32
        YLeaf microloop_tunnel_interface_name; //type: string
        YLeaf microloop_strict_spf; //type: boolean
        class MicroloopRepair; //type: Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair> > microloop_repair;
        
}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair : public Entity
{
    public:
        MicroloopRepair();
        ~MicroloopRepair();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf repair_element_id; //type: string
        YLeaf repair_label; //type: uint32
        YLeaf repair_element_type; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteInformation_::RoutePath::SrMicroloopAvoidancePath::MicroloopRepair


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName : public Entity
{
    public:
        ProtocolName();
        ~ProtocolName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol_type; //type: RedistProtocolEnum
        YLeaf isis_instance_id; //type: string
        YLeaf ospf_process_id; //type: string
        YLeaf bgp_as_number; //type: string
        YLeaf eigrp_as_number; //type: string
        YLeaf connected_instance; //type: string

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::ProtocolName


class Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity : public Entity
{
    public:
        RouteExtendedCommunity();
        ~RouteExtendedCommunity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf extended_community_domain_id_value; //type: string
        YLeaf extended_communityl_domain_id_type; //type: uint16
        YLeaf extended_community_area_id; //type: uint32
        YLeaf extended_community_router_id; //type: string
        YLeaf extended_community_route_type; //type: uint8
        YLeaf extended_community_options; //type: uint8

}; // Ospf::Processes::Process::DefaultVrf::RouteInformation::ExternalRoutes::ExternalRoute::RouteExtendedCommunity


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation : public Entity
{
    public:
        InterfaceInformation();
        ~InterfaceInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class VirtualLinks; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks
        class InterfaceBriefs; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs
        class Interfaces; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs> interface_briefs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks> virtual_links;
        
}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks : public Entity
{
    public:
        VirtualLinks();
        ~VirtualLinks();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class VirtualLink; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink> > virtual_link;
        
}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink : public Entity
{
    public:
        VirtualLink();
        ~VirtualLink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf virtual_link_name; //type: string
        YLeaf virtual_link_name_xr; //type: string
        YLeaf virtual_link_neighbor_id; //type: string
        YLeaf virtual_link_state; //type: OspfInterfaceStateEnum
        YLeaf virtual_link_demand_circuit; //type: boolean
        YLeaf virtual_link_dc_bitless_lsa; //type: uint32
        YLeaf transit_area; //type: string
        YLeaf virtual_link_interface_name; //type: string
        YLeaf virtual_link_cost; //type: uint16
        YLeaf virual_link_transmission_delay; //type: uint16
        YLeaf virtual_link_hello_interval; //type: uint32
        YLeaf virtual_link_hello_interval_ms; //type: uint32
        YLeaf virtual_link_dead_interval; //type: uint32
        YLeaf virtual_link_wait_interval; //type: uint32
        YLeaf virtaul_link_retransmission_interval; //type: uint32
        YLeaf virtual_link_next_hello; //type: uint32
        YLeaf virtual_link_next_hello_ms; //type: uint32
        YLeaf virtual_link_passive; //type: boolean
        YLeaf virtual_link_authentication_type; //type: AuthenticationEnum
        YLeaf virtual_link_youngest_md_key; //type: boolean
        YLeaf virtual_link_youngest_md_key_id; //type: uint16
        YLeaf virtual_link_old_md_key_count; //type: uint32
        YLeaf virtual_link_keychain_id; //type: uint64
        YLeaf virtual_link_nsf_enabled; //type: boolean
        YLeaf virtual_link_nsf; //type: boolean
        YLeaf virtual_link_last_nsf; //type: uint32
        YLeafList virtual_link_md_key; //type: list of  uint16
        class VirtualLinkNeighbor; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor> virtual_link_neighbor;
        
}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor : public Entity
{
    public:
        VirtualLinkNeighbor();
        ~VirtualLinkNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf virtual_link_suppress_hello; //type: boolean
        YLeaf virtual_link_state; //type: NeighborStateEnum
        class VirtualLinkRetransmissoin; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin> virtual_link_retransmissoin;
        
}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin : public Entity
{
    public:
        VirtualLinkRetransmissoin();
        ~VirtualLinkRetransmissoin();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dbd_retransmission_count; //type: uint32
        YLeaf dbd_retransmission_total_count; //type: uint32
        YLeaf area_flooding_index; //type: uint32
        YLeaf as_flood_index; //type: uint32
        YLeaf neighbor_retransmission_count; //type: uint32
        YLeaf number_of_retransmissions; //type: uint32
        YLeaf area_first_flood_information; //type: uint32
        YLeaf area_first_flood_information_index; //type: uint32
        YLeaf as_first_flood_information; //type: uint32
        YLeaf as_first_flood_information_index; //type: uint32
        YLeaf area_next_flood_information; //type: uint32
        YLeaf area_next_flood_information_index; //type: uint32
        YLeaf as_next_flood_information; //type: uint32
        YLeaf as_next_flood_information_index; //type: uint32
        YLeaf last_retransmission_length; //type: uint32
        YLeaf maximum_retransmission_length; //type: uint32
        YLeaf last_retransmission_time; //type: uint32
        YLeaf maximum_retransmission_time; //type: uint32
        YLeaf lsa_retransmission_timer; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::VirtualLinks::VirtualLink::VirtualLinkNeighbor::VirtualLinkRetransmissoin


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs : public Entity
{
    public:
        InterfaceBriefs();
        ~InterfaceBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceBrief; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief> > interface_brief;
        
}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief : public Entity
{
    public:
        InterfaceBrief();
        ~InterfaceBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf interface_area; //type: string
        YLeaf interface_address; //type: string
        YLeaf interface_mask; //type: uint32
        YLeaf interface_link_cost; //type: uint16
        YLeaf ospf_interface_state; //type: OspfInterfaceStateEnum
        YLeaf interface_fast_detect_hold_down; //type: boolean
        YLeaf interface_neighbor_count; //type: uint16
        YLeaf interface_adj_neighbor_count; //type: uint16
        YLeaf interfaceis_madj; //type: boolean
        YLeaf interface_madj_count; //type: uint16
        class InterfaceMadj; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj> > interface_madj;
        
}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj : public Entity
{
    public:
        InterfaceMadj();
        ~InterfaceMadj();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_area; //type: string
        YLeaf madj_area_id; //type: uint32
        YLeaf interface_neighbor_count; //type: uint16
        YLeaf interface_adj_neighbor_count; //type: uint16
        YLeaf interface_link_cost; //type: uint16
        YLeaf ospf_interface_state; //type: OspfInterfaceStateEnum

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::InterfaceBriefs::InterfaceBrief::InterfaceMadj


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface> > interface;
        
}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface : public Entity
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
        YLeaf interface_name_xr; //type: string
        YLeaf interface_state; //type: InterfaceStateEnum
        YLeaf interface_line_state; //type: boolean
        YLeaf interface_address; //type: string
        YLeaf interface_mask; //type: uint32
        YLeaf interface_area; //type: string
        YLeaf interface_sid; //type: uint32
        YLeaf interface_sid_php_off; //type: boolean
        YLeaf interface_sid_n_flag_clear; //type: boolean
        YLeaf interface_strict_spf_sid; //type: uint32
        YLeaf interface_strict_spf_sid_php_off; //type: boolean
        YLeaf interface_strict_spf_sid_n_flag_clear; //type: boolean
        YLeaf interface_router_id; //type: string
        YLeaf network_type; //type: InterfaceEnum
        YLeaf ip_mtu; //type: uint16
        YLeaf maximum_packet_size; //type: uint16
        YLeaf interface_tunnel_flags; //type: uint32
        YLeaf interface_link_cost; //type: uint16
        YLeaf interface_bandwidth; //type: uint32
        YLeaf cfg_cost_fallback; //type: boolean
        YLeaf interface_cost_fallback; //type: uint16
        YLeaf cost_fallback_active; //type: boolean
        YLeaf configured_ldp_sync; //type: boolean
        YLeaf configured_ldp_sync_igp_shortcuts; //type: boolean
        YLeaf interface_ldp_sync; //type: boolean
        YLeaf configured_demand_circuit; //type: boolean
        YLeaf interface_demand_circuit; //type: boolean
        YLeaf interface_dc_bitless_lsa_count; //type: uint32
        YLeaf transmission_delay; //type: uint16
        YLeaf ospf_interface_state; //type: OspfInterfaceStateEnum
        YLeaf interface_priority; //type: uint8
        YLeaf designated_router; //type: boolean
        YLeaf designated_router_id; //type: string
        YLeaf designated_router_address; //type: string
        YLeaf backup_designated_router; //type: boolean
        YLeaf backup_designated_router_id; //type: string
        YLeaf backup_designated_router_address; //type: string
        YLeaf network_lsa_flush_timer; //type: uint32
        YLeaf interface_lsa_filter; //type: boolean
        YLeaf hello_interval; //type: uint32
        YLeaf hello_interval_ms; //type: uint32
        YLeaf dead_interval; //type: uint32
        YLeaf wait_interval; //type: uint32
        YLeaf interface_retransmission_interrval; //type: uint32
        YLeaf interface_nsf_enabled; //type: boolean
        YLeaf interface_nsf; //type: boolean
        YLeaf interface_last_nsf; //type: uint32
        YLeaf passive_interface; //type: boolean
        YLeaf next_hello_time; //type: uint32
        YLeaf next_hello_time_ms; //type: uint32
        YLeaf ttl_security_enabled; //type: boolean
        YLeaf ttl_security_hop_count; //type: uint32
        YLeaf interfaceis_madj; //type: boolean
        YLeaf interface_madj_count; //type: uint16
        YLeaf prefix_suppress_primary_addresses; //type: boolean
        YLeaf prefix_suppress_secondary_addresses; //type: boolean
        YLeaf is_loopback_stub_network; //type: boolean
        YLeaf interface_ack_list_count; //type: uint32
        YLeaf interface_ack_list_high_watermark; //type: uint32
        YLeaf registered_for_link_down_fast_detection; //type: boolean
        YLeaf fast_detect_hold_down_time; //type: uint32
        YLeaf interface_fast_detect_hold_down; //type: boolean
        YLeaf fast_detect_hold_down_time_remaining; //type: uint32
        YLeaf fast_reroute_type; //type: IpfrrEnum
        YLeaf fast_reroute_topology_independent_lfa; //type: boolean
        YLeafList srlg; //type: list of  uint32
        class InterfaceBfdInformation; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation
        class ActiveInterface; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface
        class InterfaceNeighbor; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor
        class InterfaceMadj; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj
        class IpfrrTiebreakers; //type: Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface> active_interface;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation> interface_bfd_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj> > interface_madj;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor> > interface_neighbor;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers> > ipfrr_tiebreakers;
        
}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation : public Entity
{
    public:
        InterfaceBfdInformation();
        ~InterfaceBfdInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bfd_intf_enable_mode; //type: uint32
        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceBfdInformation


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface : public Entity
{
    public:
        ActiveInterface();
        ~ActiveInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf wait_time; //type: uint32
        YLeaf interface_area_flood_index; //type: uint32
        YLeaf interface_as_flood_index; //type: uint32
        YLeaf interface_flood_length; //type: uint32
        YLeaf interface_area_next_flood; //type: uint32
        YLeaf interface_area_next_flood_index; //type: uint32
        YLeaf interface_as_next_flood; //type: uint32
        YLeaf interface_as_next_flood_index; //type: uint32
        YLeaf flood_scan_length; //type: uint32
        YLeaf maximum_flood_length; //type: uint32
        YLeaf last_flood_time; //type: uint32
        YLeaf maximum_flood_time; //type: uint32
        YLeaf interface_flood_pacing_timer; //type: uint32
        YLeaf interface_neighbor_count; //type: uint16
        YLeaf suppress_hello_count; //type: uint16
        YLeaf interface_authentication_type; //type: AuthenticationEnum
        YLeaf youngest_md_key; //type: boolean
        YLeaf old_md5_key_neighbor_count; //type: uint32
        YLeaf youngest_md_key_id; //type: uint16
        YLeaf keychain_id; //type: uint64
        YLeafList md_keys; //type: list of  uint16

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::ActiveInterface


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor : public Entity
{
    public:
        InterfaceNeighbor();
        ~InterfaceNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_neighbor_id; //type: string
        YLeaf interface_neighbor_cost; //type: uint32
        YLeaf neighbor_dr; //type: boolean
        YLeaf neighbor_bdr; //type: boolean
        YLeaf suppress_hello; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceNeighbor


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj : public Entity
{
    public:
        InterfaceMadj();
        ~InterfaceMadj();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_area; //type: string
        YLeaf madj_area_id; //type: uint32
        YLeaf interface_neighbor_count; //type: uint16
        YLeaf interface_adj_neighbor_count; //type: uint16
        YLeaf interface_link_cost; //type: uint16
        YLeaf ospf_interface_state; //type: OspfInterfaceStateEnum

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::InterfaceMadj


class Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers : public Entity
{
    public:
        IpfrrTiebreakers();
        ~IpfrrTiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tiebreaker_type; //type: IpfrrTbrkrEnum
        YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::InterfaceInformation::Interfaces::Interface::IpfrrTiebreakers


class Ospf::Processes::Process::DefaultVrf::BorderRouters : public Entity
{
    public:
        BorderRouters();
        ~BorderRouters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class BorderRouter; //type: Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter> > border_router;
        
}; // Ospf::Processes::Process::DefaultVrf::BorderRouters


class Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter : public Entity
{
    public:
        BorderRouter();
        ~BorderRouter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf border_router_id; //type: string
        YLeaf border_router_id_xr; //type: string
        class BorderRouterPath; //type: Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath> > border_router_path;
        
}; // Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter


class Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath : public Entity
{
    public:
        BorderRouterPath();
        ~BorderRouterPath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf border_router_route_type; //type: OspfRouteEnum
        YLeaf border_router_route_metric; //type: uint32
        YLeaf border_router_next_hop; //type: string
        YLeaf border_router_next_hop_interface_name; //type: string
        YLeaf border_router_type; //type: OspfBrEnum
        YLeaf border_router_area_id; //type: string
        YLeaf spf_version; //type: uint64

}; // Ospf::Processes::Process::DefaultVrf::BorderRouters::BorderRouter::BorderRouterPath


class Ospf::Processes::Process::DefaultVrf::ProcessInformation : public Entity
{
    public:
        ProcessInformation();
        ~ProcessInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ProtocolAreas; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas
        class ProtocolSummary; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary
        class Redistributions; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions
        class ProcessAreas; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas
        class ProcessSummary; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas> process_areas;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary> process_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas> protocol_areas;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary> protocol_summary;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions> redistributions;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas : public Entity
{
    public:
        ProtocolAreas();
        ~ProtocolAreas();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ProtocolArea; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea> > protocol_area;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea : public Entity
{
    public:
        ProtocolArea();
        ~ProtocolArea();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_id; //type: int32
        YLeaf address; //type: string
        YLeaf protcol_area; //type: string
        YLeaf protocol_mpls; //type: boolean
        YLeaf protocol_area_dist_list_in; //type: string
        class ProtocolInterface; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface> > protocol_interface;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface : public Entity
{
    public:
        ProtocolInterface();
        ~ProtocolInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol_interface_name; //type: string
        YLeaf protocol_authentication_type; //type: AuthenticationEnum
        YLeaf protocol_interface_dist_list_in; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolAreas::ProtocolArea::ProtocolInterface


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary : public Entity
{
    public:
        ProtocolSummary();
        ~ProtocolSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol_router_id; //type: string
        YLeaf protocol_distance; //type: uint32
        YLeaf administrative_distance_inter_area; //type: uint32
        YLeaf administrative_distance_external; //type: uint32
        YLeaf protocol_nsf; //type: boolean
        YLeaf dist_list_in; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProtocolSummary


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions : public Entity
{
    public:
        Redistributions();
        ~Redistributions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Redistribution; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution> > redistribution;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution : public Entity
{
    public:
        Redistribution();
        ~Redistribution();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol_name; //type: string
        YLeaf process_name; //type: string
        YLeaf metric_flag; //type: boolean
        YLeaf metric; //type: uint32
        YLeaf classless; //type: boolean
        YLeaf nssa_only; //type: boolean
        class RedistributionProtocol; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol> redistribution_protocol;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol : public Entity
{
    public:
        RedistributionProtocol();
        ~RedistributionProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol_type; //type: RedistProtocolEnum
        YLeaf isis_instance_id; //type: string
        YLeaf ospf_process_id; //type: string
        YLeaf bgp_as_number; //type: string
        YLeaf eigrp_as_number; //type: string
        YLeaf connected_instance; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::Redistributions::Redistribution::RedistributionProtocol


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas : public Entity
{
    public:
        ProcessAreas();
        ~ProcessAreas();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ProcessArea; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea> > process_area;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea : public Entity
{
    public:
        ProcessArea();
        ~ProcessArea();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_id; //type: int32
        YLeaf address; //type: string
        YLeaf area_id_string; //type: string
        YLeaf backbone_area_active; //type: boolean
        YLeaf area_interface_count; //type: uint16
        YLeaf area_stub; //type: boolean
        YLeaf area_total_stub; //type: boolean
        YLeaf stub_default_cost; //type: uint16
        YLeaf area_nssa; //type: boolean
        YLeaf nssa_no_redistribution; //type: boolean
        YLeaf nssa_translate; //type: boolean
        YLeaf nssa_default; //type: boolean
        YLeaf te_enabled; //type: boolean
        YLeaf te_topology_version; //type: uint32
        YLeaf external_out; //type: boolean
        YLeaf summary_in; //type: boolean
        YLeaf segment_routing; //type: uint32
        YLeaf sr_strict_spf_cap; //type: boolean
        YLeaf sr_strict_spfsids_available; //type: boolean
        YLeaf sr_microloop_avoidance_active; //type: boolean
        YLeaf sr_microloop_avoidance_event_type; //type: SrUloopEventEnum
        YLeaf sr_microloop_avoidance_near_end_id; //type: string
        YLeaf sr_microloop_avoidance_far_end_id; //type: string
        YLeaf sr_microloop_avoidance_pseudonode_id; //type: string
        YLeaf authentication_type; //type: AuthenticationEnum
        YLeaf spf_count; //type: uint32
        YLeaf area_policy_in; //type: boolean
        YLeaf area_policy_in_name; //type: string
        YLeaf area_policy_out; //type: boolean
        YLeaf area_policy_out_name; //type: string
        YLeaf area_lsa_count; //type: uint32
        YLeaf area_lsa_checksum; //type: uint32
        YLeaf area_opaque_lsa_count; //type: uint32
        YLeaf area_opaque_lsa_checksum; //type: uint32
        YLeaf area_dc_bitless_lsa_count; //type: uint32
        YLeaf indication_lsa_count; //type: uint32
        YLeaf dna_lsa_count; //type: uint32
        YLeaf flood_list_length; //type: uint32
        YLeaf area_lfa_interface_count; //type: uint32
        YLeaf area_per_prefix_lfa_interface_count; //type: uint32
        YLeaf area_lfa_revision; //type: uint32
        YLeaf area_adj_stag_num_nbr_forming; //type: uint16
        YLeaf area_num_nbr_full; //type: uint16
        class AreaRange; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange> > area_range;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange : public Entity
{
    public:
        AreaRange();
        ~AreaRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf range_prefix; //type: string
        YLeaf range_mask; //type: string
        YLeaf cost; //type: uint32
        YLeaf advertise_flag; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessAreas::ProcessArea::AreaRange


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary : public Entity
{
    public:
        ProcessSummary();
        ~ProcessSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf role_standby; //type: boolean
        YLeaf role; //type: uint32
        YLeaf nsr_enabled; //type: boolean
        YLeaf nsr_switchover_on_restart; //type: boolean
        YLeaf igp_intact_on; //type: boolean
        YLeaf router_id; //type: string
        YLeaf tos_options; //type: uint8
        YLeaf opaque_capable; //type: boolean
        YLeaf area_border_router; //type: boolean
        YLeaf as_border_router; //type: boolean
        YLeaf vrf_lite_enabled; //type: boolean
        YLeaf maximum_metric_start; //type: boolean
        YLeaf maximum_metric_start_timer; //type: uint32
        YLeaf maximum_metric_set_reason; //type: MaxMetricSetReasonEnum
        YLeaf maximum_metric_abr_off_mode; //type: boolean
        YLeaf maximum_metric_abr_off_reasons; //type: OspfMaxMetricAbrOffReasonsEnum
        YLeaf maximum_metric_abr_off_buffer_time; //type: uint32
        YLeaf spf_start_time; //type: uint16
        YLeaf spf_hold_time; //type: uint16
        YLeaf spf_maximum_time; //type: uint16
        YLeaf spf_start_time_u32; //type: uint32
        YLeaf spf_hold_time_u32; //type: uint32
        YLeaf spf_maximum_time_u32; //type: uint32
        YLeaf spf_prefix_priority; //type: boolean
        YLeaf spf_prefix_priority_route_policy; //type: string
        YLeaf lsa_start_time; //type: int32
        YLeaf lsa_hold_time; //type: uint32
        YLeaf lsa_maximum_time; //type: uint32
        YLeaf minimum_lsa_interval; //type: uint16
        YLeaf minimum_lsa_interval_u32; //type: uint32
        YLeaf lsa_refresh_interval; //type: uint32
        YLeaf minimum_lsa_arrival_interval; //type: uint16
        YLeaf minimum_lsa_arrival_interval_u32; //type: uint32
        YLeaf if_flood_pacing_interval; //type: uint16
        YLeaf if_retrans_pacing_interval; //type: uint16
        YLeaf adj_stag_init_num_nbr; //type: uint16
        YLeaf adj_stag_max_num_nbr; //type: uint16
        YLeaf adj_stagger_enabled; //type: boolean
        YLeaf adj_stag_num_nbr_forming; //type: uint16
        YLeaf number_nbrs_full; //type: uint16
        YLeaf as_lsa_count; //type: uint32
        YLeaf as_lsa_checksum; //type: uint32
        YLeaf opaque_lsa_count; //type: uint32
        YLeaf opaque_lsa_checksum; //type: uint32
        YLeaf as_dc_bitless_lsa_count; //type: uint32
        YLeaf as_dna_lsa_count; //type: uint32
        YLeaf area_count; //type: uint16
        YLeaf normal_area_count; //type: uint16
        YLeaf stub_area_count; //type: uint16
        YLeaf nssa_area_count; //type: uint16
        YLeaf maximum_interfaces; //type: uint32
        YLeaf as_lsa_flood_list_length; //type: uint32
        YLeaf nsf_enabled; //type: boolean
        YLeaf last_nsf_time; //type: uint32
        YLeaf nsf_time; //type: uint32
        YLeaf redistribution_limit; //type: uint32
        YLeaf redistribution_threshold; //type: uint32
        YLeaf redistribution_limit_warn; //type: boolean
        YLeaf graceful_shutdown_retention_time; //type: uint32
        YLeaf graceful_shutdown_state; //type: GsStateEnum
        YLeaf table_prefix_limit_reached; //type: boolean
        YLeaf non_self_lsa_count; //type: uint32
        YLeaf max_lsa_enabled; //type: boolean
        YLeaf max_lsa_limit; //type: uint32
        YLeaf max_lsa_treshold; //type: uint32
        YLeaf max_lsa_warning_only; //type: boolean
        YLeaf max_lsa_ignore_time; //type: uint32
        YLeaf max_lsa_reset_time; //type: uint32
        YLeaf max_lsa_ignore_limit; //type: uint32
        YLeaf max_lsa_ignore_count; //type: uint32
        YLeaf max_lsa_ignore_timer; //type: uint32
        YLeaf max_lsa_reset_timer; //type: uint32
        YLeaf context_name; //type: string
        YLeaf snmp_trap_enabled; //type: boolean
        YLeaf ucmp; //type: boolean
        YLeaf ucmp_prefix_list; //type: string
        YLeaf ucmp_variance; //type: int32
        YLeaf ucmp_delay; //type: uint32
        YLeaf microloop_avoidance_type; //type: UloopAvoidanceEnum
        YLeaf microloop_avoidance_delay; //type: uint32
        YLeaf microloop_avoidance_active; //type: boolean
        YLeaf microloop_avoidance_delay_expiry; //type: uint32
        YLeaf lsd_connected; //type: boolean
        YLeaf lsd_registered; //type: boolean
        YLeaf lsd_bound; //type: boolean
        YLeaf lsd_connection_revision; //type: uint32
        YLeaf srgb_configured; //type: boolean
        YLeaf srgb_start; //type: uint32
        YLeaf srgb_end; //type: uint32
        YLeaf srgb_status; //type: OspfSrgbStatusEnum
        YLeaf sr_strict_spf_cap; //type: boolean
        class DomainId; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId
        class MaximumMetric; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric
        class Redistribution; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId> domain_id;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric> > maximum_metric;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution> > redistribution;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId : public Entity
{
    public:
        DomainId();
        ~DomainId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PrimaryDomainId; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId
        class SecondaryDomainId; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId> primary_domain_id;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId> > secondary_domain_id;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId : public Entity
{
    public:
        PrimaryDomainId();
        ~PrimaryDomainId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf domain_id_type; //type: uint16
        YLeaf domain_id_value; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::PrimaryDomainId


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId : public Entity
{
    public:
        SecondaryDomainId();
        ~SecondaryDomainId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf domain_id_type; //type: uint16
        YLeaf domain_id_value; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::DomainId::SecondaryDomainId


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric : public Entity
{
    public:
        MaximumMetric();
        ~MaximumMetric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_metric_reason; //type: uint8
        YLeaf max_metric_enabled; //type: boolean
        YLeaf unset_maximum_metric; //type: boolean
        YLeaf saved_unset_maximum_metric; //type: boolean
        YLeaf maximum_metric_start_time; //type: uint32
        YLeaf saved_startup_time; //type: uint32
        YLeaf maximum_metric_include_stubs; //type: boolean
        YLeaf maximum_metric_summary_lsa; //type: boolean
        YLeaf maximum_metric_summary_lsa_metric; //type: uint32
        YLeaf maximum_metric_external_lsa; //type: boolean
        YLeaf maximum_metric_external_lsa_metric; //type: uint32
        YLeaf maximum_metric_originated_for; //type: uint32
        YLeaf maximum_metric_unset_reason; //type: MaxMetricUnsetReasonEnum
        class MaximumMetricTimeUnset; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset> maximum_metric_time_unset;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset : public Entity
{
    public:
        MaximumMetricTimeUnset();
        ~MaximumMetricTimeUnset();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::MaximumMetric::MaximumMetricTimeUnset


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution : public Entity
{
    public:
        Redistribution();
        ~Redistribution();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric_flag; //type: boolean
        YLeaf metric; //type: uint32
        YLeaf classless; //type: boolean
        YLeaf nssa_only; //type: boolean
        class RedistributionProtocol; //type: Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol> redistribution_protocol;
        
}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution


class Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol : public Entity
{
    public:
        RedistributionProtocol();
        ~RedistributionProtocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol_type; //type: RedistProtocolEnum
        YLeaf isis_instance_id; //type: string
        YLeaf ospf_process_id; //type: string
        YLeaf bgp_as_number; //type: string
        YLeaf eigrp_as_number; //type: string
        YLeaf connected_instance; //type: string

}; // Ospf::Processes::Process::DefaultVrf::ProcessInformation::ProcessSummary::Redistribution::RedistributionProtocol


class Ospf::Processes::Process::DefaultVrf::Areas : public Entity
{
    public:
        Areas();
        ~Areas();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Area; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area> > area;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas


class Ospf::Processes::Process::DefaultVrf::Areas::Area : public Entity
{
    public:
        Area();
        ~Area();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_id; //type: int32
        class FloodListAreaTable; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable
        class Neighbors; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors
        class InterfaceBriefs; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs
        class Requests; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests
        class Retransmissions; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions
        class AreaStatistics; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics
        class NeighborDetails; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails
        class Interfaces; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics> area_statistics;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable> flood_list_area_table;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs> interface_briefs;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces> interfaces;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails> neighbor_details;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors> neighbors;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests> requests;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions> retransmissions;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area


class Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable : public Entity
{
    public:
        FloodListAreaTable();
        ~FloodListAreaTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Flood; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood> > flood;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable


class Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood : public Entity
{
    public:
        Flood();
        ~Flood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf flood_interface_name; //type: string
        YLeaf flood_pacing_timer; //type: uint32
        YLeaf flood_lsa_count; //type: uint32
        class AreaFlood; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood
        class AsFlood; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood> > area_flood;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood> > as_flood;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood


class Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood : public Entity
{
    public:
        AreaFlood();
        ~AreaFlood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf header_lsa_type; //type: LsaEnum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_ls_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: uint32
        YLeaf header_lsa_checksum; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AreaFlood


class Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood : public Entity
{
    public:
        AsFlood();
        ~AsFlood();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf header_lsa_type; //type: LsaEnum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_ls_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: uint32
        YLeaf header_lsa_checksum; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::FloodListAreaTable::Flood::AsFlood


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors : public Entity
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

        class Neighbor; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor> > neighbor;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor : public Entity
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
        YLeaf neighbor_id; //type: string
        YLeaf neighbor_address_xr; //type: string
        YLeaf neighbor_interface_name; //type: string
        YLeaf neighbor_dr_priority; //type: uint8
        YLeaf neighbor_state; //type: NeighborStateEnum
        YLeaf dr_bdr_state; //type: DrBdrStateEnum
        YLeaf neighbor_dead_timer; //type: uint32
        YLeaf neighbor_up_time; //type: uint32
        YLeaf neighbor_madj_interface; //type: boolean
        class NeighborBfdInformation; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation> neighbor_bfd_information;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation : public Entity
{
    public:
        NeighborBfdInformation();
        ~NeighborBfdInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bfd_intf_enable_mode; //type: uint32
        YLeaf bfd_status_flag; //type: uint8

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Neighbors::Neighbor::NeighborBfdInformation


class Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs : public Entity
{
    public:
        InterfaceBriefs();
        ~InterfaceBriefs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceBrief; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief> > interface_brief;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs


class Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief : public Entity
{
    public:
        InterfaceBrief();
        ~InterfaceBrief();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf interface_name_xr; //type: string
        YLeaf interface_area; //type: string
        YLeaf interface_address; //type: string
        YLeaf interface_mask; //type: uint32
        YLeaf interface_link_cost; //type: uint16
        YLeaf ospf_interface_state; //type: OspfInterfaceStateEnum
        YLeaf interface_fast_detect_hold_down; //type: boolean
        YLeaf interface_neighbor_count; //type: uint16
        YLeaf interface_adj_neighbor_count; //type: uint16
        YLeaf interfaceis_madj; //type: boolean
        YLeaf interface_madj_count; //type: uint16
        class InterfaceMadj; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj> > interface_madj;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief


class Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj : public Entity
{
    public:
        InterfaceMadj();
        ~InterfaceMadj();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_area; //type: string
        YLeaf madj_area_id; //type: uint32
        YLeaf interface_neighbor_count; //type: uint16
        YLeaf interface_adj_neighbor_count; //type: uint16
        YLeaf interface_link_cost; //type: uint16
        YLeaf ospf_interface_state; //type: OspfInterfaceStateEnum

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::InterfaceBriefs::InterfaceBrief::InterfaceMadj


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests : public Entity
{
    public:
        Requests();
        ~Requests();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Request; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request> > request;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request : public Entity
{
    public:
        Request();
        ~Request();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf request_neighbor_id; //type: string
        YLeaf request_neighbor_address; //type: string
        YLeaf request_interface_name; //type: string
        class Request_; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_> > request;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_ : public Entity
{
    public:
        Request_();
        ~Request_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf header_lsa_type; //type: LsaEnum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_ls_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: uint32
        YLeaf header_lsa_checksum; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Requests::Request::Request_


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions : public Entity
{
    public:
        Retransmissions();
        ~Retransmissions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Retransmission; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission> > retransmission;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission : public Entity
{
    public:
        Retransmission();
        ~Retransmission();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf retransmission_neighbor_id; //type: string
        YLeaf retransmission_neighbor_ip_address; //type: string
        YLeaf retransmission_interface_name; //type: string
        YLeaf retransmission_timer; //type: uint32
        YLeaf retransmission_count; //type: uint32
        class RetransmissionAreaDb; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb
        class RetransmissionAsdb; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb> > retransmission_area_db;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb> > retransmission_asdb;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb : public Entity
{
    public:
        RetransmissionAreaDb();
        ~RetransmissionAreaDb();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf header_lsa_type; //type: LsaEnum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_ls_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: uint32
        YLeaf header_lsa_checksum; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAreaDb


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb : public Entity
{
    public:
        RetransmissionAsdb();
        ~RetransmissionAsdb();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf header_lsa_type; //type: LsaEnum
        YLeaf header_lsa_age; //type: uint16
        YLeaf header_ls_id; //type: string
        YLeaf header_advertising_router; //type: string
        YLeaf header_sequence_number; //type: uint32
        YLeaf header_lsa_checksum; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Retransmissions::Retransmission::RetransmissionAsdb


class Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics : public Entity
{
    public:
        AreaStatistics();
        ~AreaStatistics();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceStatsEntries; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries> interface_stats_entries;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics


class Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries : public Entity
{
    public:
        InterfaceStatsEntries();
        ~InterfaceStatsEntries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class InterfaceStatsEntry; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry> > interface_stats_entry;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries


class Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry : public Entity
{
    public:
        InterfaceStatsEntry();
        ~InterfaceStatsEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf handle; //type: string
        YLeaf if_name_str; //type: string
        class IfEntry; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry> > if_entry;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry


class Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry : public Entity
{
    public:
        IfEntry();
        ~IfEntry();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf madj_intf; //type: boolean
        YLeaf area_id; //type: uint32
        YLeaf area_id_str; //type: string
        YLeafList if_stat; //type: list of  uint32

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::AreaStatistics::InterfaceStatsEntries::InterfaceStatsEntry::IfEntry


class Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails : public Entity
{
    public:
        NeighborDetails();
        ~NeighborDetails();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NeighborDetail; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail> > neighbor_detail;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails


class Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail : public Entity
{
    public:
        NeighborDetail();
        ~NeighborDetail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_name; //type: string
        YLeaf neighbor_address; //type: string
        YLeaf neighbor_area_id; //type: string
        YLeaf state_change_count; //type: uint16
        YLeaf neighbor_cost; //type: uint16
        YLeaf neighbor_filter; //type: boolean
        YLeaf neighbor_designated_router_address; //type: string
        YLeaf neighbor_backup_designated_router_address; //type: string
        YLeaf interface_type; //type: InterfaceEnum
        YLeaf poll_interval; //type: uint32
        YLeaf next_poll_interval; //type: uint32
        YLeaf neighbor_option; //type: uint8
        YLeaf pending_events; //type: uint16
        YLeaf neighbor_lls_option; //type: uint16
        YLeaf oob_resynchronization; //type: boolean
        YLeaf nsf_router_state; //type: NsfRtrEnum
        YLeaf last_oob_time; //type: uint32
        YLeaf lfa_interface; //type: string
        YLeaf lfa_next_hop; //type: string
        YLeaf lfa_neighbor_id; //type: string
        YLeaf lfa_neighbor_revision; //type: uint32
        YLeaf neighbor_ack_list_count; //type: uint32
        YLeaf neighbor_ack_list_high_watermark; //type: uint32
        YLeaf adjacency_sid_label; //type: uint32
        YLeaf adjacency_sid_protected; //type: boolean
        YLeaf adjacency_sid_unprotected_label; //type: uint32
        class NeighborSummary; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary
        class NeighborBfdInformation; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation
        class NeighborRetransmissionInformation; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation> neighbor_bfd_information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation> neighbor_retransmission_information;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary> neighbor_summary;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail


class Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary : public Entity
{
    public:
        NeighborSummary();
        ~NeighborSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf neighbor_id; //type: string
        YLeaf neighbor_address_xr; //type: string
        YLeaf neighbor_interface_name; //type: string
        YLeaf neighbor_dr_priority; //type: uint8
        YLeaf neighbor_state; //type: NeighborStateEnum
        YLeaf dr_bdr_state; //type: DrBdrStateEnum
        YLeaf neighbor_dead_timer; //type: uint32
        YLeaf neighbor_up_time; //type: uint32
        YLeaf neighbor_madj_interface; //type: boolean
        class NeighborBfdInformation; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation> neighbor_bfd_information;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary


class Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation : public Entity
{
    public:
        NeighborBfdInformation();
        ~NeighborBfdInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bfd_intf_enable_mode; //type: uint32
        YLeaf bfd_status_flag; //type: uint8

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborSummary::NeighborBfdInformation


class Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation : public Entity
{
    public:
        NeighborBfdInformation();
        ~NeighborBfdInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bfd_intf_enable_mode; //type: uint32
        YLeaf bfd_status_flag; //type: uint8

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborBfdInformation


class Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation : public Entity
{
    public:
        NeighborRetransmissionInformation();
        ~NeighborRetransmissionInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dbd_retransmission_count; //type: uint32
        YLeaf dbd_retransmission_total_count; //type: uint32
        YLeaf area_flooding_index; //type: uint32
        YLeaf as_flood_index; //type: uint32
        YLeaf neighbor_retransmission_count; //type: uint32
        YLeaf number_of_retransmissions; //type: uint32
        YLeaf area_first_flood_information; //type: uint32
        YLeaf area_first_flood_information_index; //type: uint32
        YLeaf as_first_flood_information; //type: uint32
        YLeaf as_first_flood_information_index; //type: uint32
        YLeaf area_next_flood_information; //type: uint32
        YLeaf area_next_flood_information_index; //type: uint32
        YLeaf as_next_flood_information; //type: uint32
        YLeaf as_next_flood_information_index; //type: uint32
        YLeaf last_retransmission_length; //type: uint32
        YLeaf maximum_retransmission_length; //type: uint32
        YLeaf last_retransmission_time; //type: uint32
        YLeaf maximum_retransmission_time; //type: uint32
        YLeaf lsa_retransmission_timer; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::NeighborDetails::NeighborDetail::NeighborRetransmissionInformation


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces : public Entity
{
    public:
        Interfaces();
        ~Interfaces();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface> > interface;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface : public Entity
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
        YLeaf interface_name_xr; //type: string
        YLeaf interface_state; //type: InterfaceStateEnum
        YLeaf interface_line_state; //type: boolean
        YLeaf interface_address; //type: string
        YLeaf interface_mask; //type: uint32
        YLeaf interface_area; //type: string
        YLeaf interface_sid; //type: uint32
        YLeaf interface_sid_php_off; //type: boolean
        YLeaf interface_sid_n_flag_clear; //type: boolean
        YLeaf interface_strict_spf_sid; //type: uint32
        YLeaf interface_strict_spf_sid_php_off; //type: boolean
        YLeaf interface_strict_spf_sid_n_flag_clear; //type: boolean
        YLeaf interface_router_id; //type: string
        YLeaf network_type; //type: InterfaceEnum
        YLeaf ip_mtu; //type: uint16
        YLeaf maximum_packet_size; //type: uint16
        YLeaf interface_tunnel_flags; //type: uint32
        YLeaf interface_link_cost; //type: uint16
        YLeaf interface_bandwidth; //type: uint32
        YLeaf cfg_cost_fallback; //type: boolean
        YLeaf interface_cost_fallback; //type: uint16
        YLeaf cost_fallback_active; //type: boolean
        YLeaf configured_ldp_sync; //type: boolean
        YLeaf configured_ldp_sync_igp_shortcuts; //type: boolean
        YLeaf interface_ldp_sync; //type: boolean
        YLeaf configured_demand_circuit; //type: boolean
        YLeaf interface_demand_circuit; //type: boolean
        YLeaf interface_dc_bitless_lsa_count; //type: uint32
        YLeaf transmission_delay; //type: uint16
        YLeaf ospf_interface_state; //type: OspfInterfaceStateEnum
        YLeaf interface_priority; //type: uint8
        YLeaf designated_router; //type: boolean
        YLeaf designated_router_id; //type: string
        YLeaf designated_router_address; //type: string
        YLeaf backup_designated_router; //type: boolean
        YLeaf backup_designated_router_id; //type: string
        YLeaf backup_designated_router_address; //type: string
        YLeaf network_lsa_flush_timer; //type: uint32
        YLeaf interface_lsa_filter; //type: boolean
        YLeaf hello_interval; //type: uint32
        YLeaf hello_interval_ms; //type: uint32
        YLeaf dead_interval; //type: uint32
        YLeaf wait_interval; //type: uint32
        YLeaf interface_retransmission_interrval; //type: uint32
        YLeaf interface_nsf_enabled; //type: boolean
        YLeaf interface_nsf; //type: boolean
        YLeaf interface_last_nsf; //type: uint32
        YLeaf passive_interface; //type: boolean
        YLeaf next_hello_time; //type: uint32
        YLeaf next_hello_time_ms; //type: uint32
        YLeaf ttl_security_enabled; //type: boolean
        YLeaf ttl_security_hop_count; //type: uint32
        YLeaf interfaceis_madj; //type: boolean
        YLeaf interface_madj_count; //type: uint16
        YLeaf prefix_suppress_primary_addresses; //type: boolean
        YLeaf prefix_suppress_secondary_addresses; //type: boolean
        YLeaf is_loopback_stub_network; //type: boolean
        YLeaf interface_ack_list_count; //type: uint32
        YLeaf interface_ack_list_high_watermark; //type: uint32
        YLeaf registered_for_link_down_fast_detection; //type: boolean
        YLeaf fast_detect_hold_down_time; //type: uint32
        YLeaf interface_fast_detect_hold_down; //type: boolean
        YLeaf fast_detect_hold_down_time_remaining; //type: uint32
        YLeaf fast_reroute_type; //type: IpfrrEnum
        YLeaf fast_reroute_topology_independent_lfa; //type: boolean
        YLeafList srlg; //type: list of  uint32
        class InterfaceBfdInformation; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation
        class ActiveInterface; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface
        class InterfaceNeighbor; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor
        class InterfaceMadj; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj
        class IpfrrTiebreakers; //type: Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface> active_interface;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation> interface_bfd_information;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj> > interface_madj;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor> > interface_neighbor;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers> > ipfrr_tiebreakers;
        
}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation : public Entity
{
    public:
        InterfaceBfdInformation();
        ~InterfaceBfdInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bfd_intf_enable_mode; //type: uint32
        YLeaf interval; //type: uint32
        YLeaf detection_multiplier; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceBfdInformation


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface : public Entity
{
    public:
        ActiveInterface();
        ~ActiveInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf wait_time; //type: uint32
        YLeaf interface_area_flood_index; //type: uint32
        YLeaf interface_as_flood_index; //type: uint32
        YLeaf interface_flood_length; //type: uint32
        YLeaf interface_area_next_flood; //type: uint32
        YLeaf interface_area_next_flood_index; //type: uint32
        YLeaf interface_as_next_flood; //type: uint32
        YLeaf interface_as_next_flood_index; //type: uint32
        YLeaf flood_scan_length; //type: uint32
        YLeaf maximum_flood_length; //type: uint32
        YLeaf last_flood_time; //type: uint32
        YLeaf maximum_flood_time; //type: uint32
        YLeaf interface_flood_pacing_timer; //type: uint32
        YLeaf interface_neighbor_count; //type: uint16
        YLeaf suppress_hello_count; //type: uint16
        YLeaf interface_authentication_type; //type: AuthenticationEnum
        YLeaf youngest_md_key; //type: boolean
        YLeaf old_md5_key_neighbor_count; //type: uint32
        YLeaf youngest_md_key_id; //type: uint16
        YLeaf keychain_id; //type: uint64
        YLeafList md_keys; //type: list of  uint16

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::ActiveInterface


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor : public Entity
{
    public:
        InterfaceNeighbor();
        ~InterfaceNeighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_neighbor_id; //type: string
        YLeaf interface_neighbor_cost; //type: uint32
        YLeaf neighbor_dr; //type: boolean
        YLeaf neighbor_bdr; //type: boolean
        YLeaf suppress_hello; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceNeighbor


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj : public Entity
{
    public:
        InterfaceMadj();
        ~InterfaceMadj();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface_area; //type: string
        YLeaf madj_area_id; //type: uint32
        YLeaf interface_neighbor_count; //type: uint16
        YLeaf interface_adj_neighbor_count; //type: uint16
        YLeaf interface_link_cost; //type: uint16
        YLeaf ospf_interface_state; //type: OspfInterfaceStateEnum

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::InterfaceMadj


class Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers : public Entity
{
    public:
        IpfrrTiebreakers();
        ~IpfrrTiebreakers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tiebreaker_type; //type: IpfrrTbrkrEnum
        YLeaf tiebreaker_index; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Areas::Area::Interfaces::Interface::IpfrrTiebreakers


class Ospf::Processes::Process::DefaultVrf::Database : public Entity
{
    public:
        Database();
        ~Database();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DatabaseAreas; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas
        class DatabaseSummaries; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries
        class DatabaseSummaryAs; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs
        class Lsas; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas
        class LsaSummaries; //type: Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas> database_areas;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries> database_summaries;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs> database_summary_as;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::LsaSummaries> lsa_summaries;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas> lsas;
        
}; // Ospf::Processes::Process::DefaultVrf::Database


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas : public Entity
{
    public:
        DatabaseAreas();
        ~DatabaseAreas();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DatabaseArea; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea> > database_area;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea : public Entity
{
    public:
        DatabaseArea();
        ~DatabaseArea();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_id; //type: int32
        class Lsas; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas
        class LsaSummaries; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries> lsa_summaries;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas> lsas;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas : public Entity
{
    public:
        Lsas();
        ~Lsas();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Lsa; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa> > lsa;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa : public Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_id; //type: int32
        YLeaf ls_type; //type: OspfLsEnum
        YLeaf ls_id; //type: string
        YLeaf advertising_router; //type: string
        YLeaf interface_name; //type: string
        class LsaHeader; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader
        class LsaDetailData; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData
        class LsaInternalData; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData> lsa_detail_data;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader> lsa_header;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData> lsa_internal_data;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ls_type; //type: LsaEnum
        YLeaf lsid; //type: string
        YLeaf advertising_router; //type: string
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf dn_age_lsa; //type: boolean
        YLeaf nsf; //type: boolean
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaHeader


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData : public Entity
{
    public:
        LsaDetailData();
        ~LsaDetailData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tos_capable; //type: boolean
        YLeaf nssa_translation; //type: boolean
        YLeaf demand_circuit; //type: boolean
        YLeaf dn_bit; //type: boolean
        YLeaf lsa_rate_limit_due_time; //type: uint32
        YLeaf lsadb_base_clock; //type: uint64
        YLeaf routing_bit; //type: boolean
        YLeaf advertising_router_reachable; //type: boolean
        YLeaf length; //type: uint16
        YLeaf sum_origin; //type: uint16
        YLeaf ase_origin; //type: uint16
        YLeaf in_sync; //type: uint8
        YLeaf lsa_prefix_priority; //type: uint8
        YLeaf new_lsa_prefix_priority; //type: uint8
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        class LsaThrottleTimer; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer
        class LsaLastUpdatedTime; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime
        class LsadbBaseTimeStamp; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp
        class NotDelete; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime> lsa_last_updated_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer> lsa_throttle_timer;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp> lsadb_base_time_stamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete> not_delete;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer : public Entity
{
    public:
        LsaThrottleTimer();
        ~LsaThrottleTimer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timer_location; //type: TimerTableEnum
        YLeaf timer_type; //type: TimerEnum
        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf last_inst_second_table_index; //type: uint8
        YLeaf last_inst_minute_table_index; //type: uint8

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaThrottleTimer


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime : public Entity
{
    public:
        LsaLastUpdatedTime();
        ~LsaLastUpdatedTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp : public Entity
{
    public:
        LsadbBaseTimeStamp();
        ~LsadbBaseTimeStamp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete : public Entity
{
    public:
        NotDelete();
        ~NotDelete();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf free_time; //type: uint32
        YLeaf no_delete; //type: boolean
        YLeaf neighbor_exchange; //type: boolean
        YLeaf routing_table; //type: boolean
        YLeaf acknowledgement; //type: boolean
        YLeaf maximum_age; //type: boolean
        YLeaf partial_spf; //type: boolean
        YLeaf flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf nsr_ack_pending; //type: boolean
        YLeaf sum_orig_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaDetailData::NotDelete


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData : public Entity
{
    public:
        LsaInternalData();
        ~LsaInternalData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf internal_lsa_type; //type: OspfInternalLsaTypesEnum
        class RouterLsaType; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType
        class NetworkLsaType; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType
        class SummaryLsaType; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType
        class ExternalLsaType; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType
        class OpaqueLinkLsaType; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType
        class OpaqueMplsTeLsaType; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType
        class OpaqueGraceLsa; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa
        class OpaqueRouterInfoLsaType; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType
        class OpaqueEpLsaType; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType
        class OpaqueElLsaType; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType> external_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType> network_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType> opaque_el_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType> opaque_ep_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa> opaque_grace_lsa;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType> opaque_link_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType> opaque_mpls_te_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType> opaque_router_info_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType> router_lsa_type;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType> summary_lsa_type;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType : public Entity
{
    public:
        RouterLsaType();
        ~RouterLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_asbr; //type: boolean
        YLeaf router_abr; //type: boolean
        YLeaf internal_lsa; //type: boolean
        class Link; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link
        class InternalLink; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink> > internal_link;
        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link> > link;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link : public Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_id; //type: string
        YLeaf link_data; //type: string
        YLeaf link_type; //type: OspfLinkTypesEnum
        YLeaf link_metric; //type: uint16
        class LinkTos; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos> > link_tos;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos : public Entity
{
    public:
        LinkTos();
        ~LinkTos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_tos; //type: uint16
        YLeaf tos_cost; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::Link::LinkTos


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink : public Entity
{
    public:
        InternalLink();
        ~InternalLink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link_id; //type: string
        YLeaf link_data; //type: string
        YLeaf link_type; //type: OspfLinkTypesEnum
        YLeaf link_metric; //type: uint16
        class LinkTos; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos> > link_tos;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos : public Entity
{
    public:
        LinkTos();
        ~LinkTos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_tos; //type: uint16
        YLeaf tos_cost; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::RouterLsaType::InternalLink::LinkTos


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType : public Entity
{
    public:
        NetworkLsaType();
        ~NetworkLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf network_prefix_length; //type: uint32
        YLeafList neighbor_router; //type: list of  string

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::NetworkLsaType


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType : public Entity
{
    public:
        SummaryLsaType();
        ~SummaryLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf summary_prefix_length; //type: uint32
        YLeaf internal_sum_lsa; //type: boolean
        YLeafList summary_lsa_metric; //type: list of  uint32

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::SummaryLsaType


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType : public Entity
{
    public:
        ExternalLsaType();
        ~ExternalLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf external_prefix_length; //type: uint32
        YLeaf internal_external_lsa; //type: boolean
        class ExternalTosMetric; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric> > external_tos_metric;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric : public Entity
{
    public:
        ExternalTosMetric();
        ~ExternalTosMetric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf external_metric; //type: uint32
        YLeaf external_metric_type; //type: ExMetricEnum
        YLeaf external_tos; //type: uint32
        YLeaf forwarding_address; //type: string
        YLeaf external_tag; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::ExternalLsaType::ExternalTosMetric


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType : public Entity
{
    public:
        OpaqueLinkLsaType();
        ~OpaqueLinkLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf opaque_interface_name; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueLinkLsaType


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType : public Entity
{
    public:
        OpaqueMplsTeLsaType();
        ~OpaqueMplsTeLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv> > tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv : public Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tlv_type; //type: uint16
        YLeaf tlv_length; //type: uint16
        YLeaf mpls_router_id; //type: uint32
        YLeaf mpls_dste_link; //type: boolean
        YLeaf tlv_data; //type: string
        class TeLinkSubTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv> > te_link_sub_tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv : public Entity
{
    public:
        TeLinkSubTlv();
        ~TeLinkSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sub_tlv_type; //type: StlvEnum
        YLeaf sub_tlv_length; //type: uint16
        YLeaf sub_tlv_value; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueMplsTeLsaType::Tlv::TeLinkSubTlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa : public Entity
{
    public:
        OpaqueGraceLsa();
        ~OpaqueGraceLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf grace_period; //type: uint32
        YLeaf grace_reason; //type: OspfGrReasonEnum
        YLeaf ip_address; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueGraceLsa


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType : public Entity
{
    public:
        OpaqueRouterInfoLsaType();
        ~OpaqueRouterInfoLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf opaque_rilsa_scope; //type: OspfLsaOpqRiScopeEnum
        YLeaf opaque_ri_interface_name; //type: string
        class OpaqueRitlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv> > opaque_ritlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv : public Entity
{
    public:
        OpaqueRitlv();
        ~OpaqueRitlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ritlv_internal_type; //type: OspfShOpqRiTlvTypesEnum
        class UnknownTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv
        class RtrCapTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv
        class Pcedtlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv
        class SrAlgoTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv
        class SrRangeTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv> pcedtlv;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv> rtr_cap_tlv;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv> sr_algo_tlv;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv> sr_range_tlv;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv> unknown_tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv : public Entity
{
    public:
        UnknownTlv();
        ~UnknownTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ri_gen_tlv_type; //type: uint16
        YLeaf ri_gen_tlv_length; //type: uint16
        YLeaf ri_genvalue; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::UnknownTlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv : public Entity
{
    public:
        RtrCapTlv();
        ~RtrCapTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rtr_cap_tlv_length; //type: uint16
        YLeaf rtr_cap_graceful_restart; //type: boolean
        YLeaf rtr_cap_graceful_restart_helper; //type: boolean
        YLeaf rtr_cap_stub_rtr; //type: boolean
        YLeaf rtr_cap_area_te; //type: boolean
        YLeaf rtr_cap_p2plan; //type: boolean
        YLeaf rtr_cap_te_exp; //type: boolean
        YLeaf rtr_cap_all_bits; //type: uint32
        YLeaf rtr_cap_additional_info; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::RtrCapTlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv : public Entity
{
    public:
        Pcedtlv();
        ~Pcedtlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pcedtlv_length; //type: uint16
        class PcedAddr; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr
        class PcedScope; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr> pced_addr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope> pced_scope;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr : public Entity
{
    public:
        PcedAddr();
        ~PcedAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pce_addr_type; //type: OspfShOpqRiPceAddrTypesEnum
        class PceAddrUnknownTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv
        class Ipv4PceAddr; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr
        class Ipv6PceAddr; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr> ipv4pce_addr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr> ipv6pce_addr;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv> pce_addr_unknown_tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv : public Entity
{
    public:
        PceAddrUnknownTlv();
        ~PceAddrUnknownTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ri_gen_tlv_type; //type: uint16
        YLeaf ri_gen_tlv_length; //type: uint16
        YLeaf ri_genvalue; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::PceAddrUnknownTlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr : public Entity
{
    public:
        Ipv4PceAddr();
        ~Ipv4PceAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pceipv4_addr; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv4PceAddr


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr : public Entity
{
    public:
        Ipv6PceAddr();
        ~Ipv6PceAddr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pceipv6_addr; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedAddr::Ipv6PceAddr


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope : public Entity
{
    public:
        PcedScope();
        ~PcedScope();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lbit; //type: boolean
        YLeaf rbit; //type: boolean
        YLeaf rd_bit; //type: boolean
        YLeaf sbit; //type: boolean
        YLeaf sd_bit; //type: boolean
        YLeaf ybit; //type: boolean
        YLeaf pref_l; //type: uint8
        YLeaf pref_r; //type: uint8
        YLeaf pref_s; //type: uint8
        YLeaf pref_y; //type: uint8
        YLeaf all_scope_info_bits; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::Pcedtlv::PcedScope


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv : public Entity
{
    public:
        SrAlgoTlv();
        ~SrAlgoTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sr_algo_length; //type: uint16
        YLeaf sr_algo_value; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrAlgoTlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv : public Entity
{
    public:
        SrRangeTlv();
        ~SrRangeTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sr_range_length; //type: uint16
        YLeaf sr_range_size; //type: uint32
        class Sidtlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv> sidtlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv : public Entity
{
    public:
        Sidtlv();
        ~Sidtlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sr_sid_length; //type: uint16
        YLeaf sr_sid_value; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueRouterInfoLsaType::OpaqueRitlv::SrRangeTlv::Sidtlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType : public Entity
{
    public:
        OpaqueEpLsaType();
        ~OpaqueEpLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv> > tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv : public Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tlv_type; //type: uint16
        YLeaf tlv_length; //type: uint16
        YLeaf mpls_router_id; //type: uint32
        YLeaf mpls_dste_link; //type: boolean
        YLeaf tlv_data; //type: string
        class TeLinkSubTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv> > te_link_sub_tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv : public Entity
{
    public:
        TeLinkSubTlv();
        ~TeLinkSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sub_tlv_type; //type: StlvEnum
        YLeaf sub_tlv_length; //type: uint16
        YLeaf sub_tlv_value; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueEpLsaType::Tlv::TeLinkSubTlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType : public Entity
{
    public:
        OpaqueElLsaType();
        ~OpaqueElLsaType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Tlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv> > tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv : public Entity
{
    public:
        Tlv();
        ~Tlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tlv_type; //type: uint16
        YLeaf tlv_length; //type: uint16
        YLeaf mpls_router_id; //type: uint32
        YLeaf mpls_dste_link; //type: boolean
        YLeaf tlv_data; //type: string
        class TeLinkSubTlv; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv> > te_link_sub_tlv;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv : public Entity
{
    public:
        TeLinkSubTlv();
        ~TeLinkSubTlv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sub_tlv_type; //type: StlvEnum
        YLeaf sub_tlv_length; //type: uint16
        YLeaf sub_tlv_value; //type: string

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::Lsas::Lsa::LsaInternalData::OpaqueElLsaType::Tlv::TeLinkSubTlv


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries : public Entity
{
    public:
        LsaSummaries();
        ~LsaSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LsaSummary; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary> > lsa_summary;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary : public Entity
{
    public:
        LsaSummary();
        ~LsaSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_id; //type: int32
        YLeaf ls_type; //type: OspfLsEnum
        YLeaf ls_id; //type: string
        YLeaf advertising_router; //type: string
        YLeaf interface_name; //type: string
        YLeaf external_tag; //type: uint32
        YLeaf link_count; //type: uint16
        class LsaHeader; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader> lsa_header;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ls_type; //type: LsaEnum
        YLeaf lsid; //type: string
        YLeaf advertising_router; //type: string
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf dn_age_lsa; //type: boolean
        YLeaf nsf; //type: boolean
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseAreas::DatabaseArea::LsaSummaries::LsaSummary::LsaHeader


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries : public Entity
{
    public:
        DatabaseSummaries();
        ~DatabaseSummaries();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DatabaseSummary; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary> > database_summary;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary : public Entity
{
    public:
        DatabaseSummary();
        ~DatabaseSummary();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_id; //type: int32
        YLeaf dbase_sum_area_id_string; //type: string
        class AreaLsaCounter; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter> > area_lsa_counter;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter : public Entity
{
    public:
        AreaLsaCounter();
        ~AreaLsaCounter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: LsaEnum
        YLeaf lsa_count; //type: int32
        YLeaf lsa_delete_count; //type: int32
        YLeaf lsa_maxage_count; //type: int32
        YLeaf lsa_self_count; //type: int32

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaries::DatabaseSummary::AreaLsaCounter


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs : public Entity
{
    public:
        DatabaseSummaryAs();
        ~DatabaseSummaryAs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AsLsaCounter; //type: Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter> > as_lsa_counter;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs


class Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter : public Entity
{
    public:
        AsLsaCounter();
        ~AsLsaCounter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lsa_type; //type: LsaEnum
        YLeaf lsa_count; //type: int32
        YLeaf lsa_delete_count; //type: int32
        YLeaf lsa_maxage_count; //type: int32
        YLeaf lsa_self_count; //type: int32

}; // Ospf::Processes::Process::DefaultVrf::Database::DatabaseSummaryAs::AsLsaCounter


class Ospf::Processes::Process::DefaultVrf::Database::Lsas : public Entity
{
    public:
        Lsas();
        ~Lsas();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Lsa; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa

        std::vector<std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa> > lsa;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa : public Entity
{
    public:
        Lsa();
        ~Lsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_id; //type: int32
        YLeaf ls_type; //type: OspfLsEnum
        YLeaf ls_id; //type: string
        YLeaf advertising_router; //type: string
        YLeaf interface_name; //type: string
        class LsaHeader; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader
        class LsaDetailData; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData
        class LsaInternalData; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData> lsa_detail_data;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader> lsa_header;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaInternalData> lsa_internal_data;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader : public Entity
{
    public:
        LsaHeader();
        ~LsaHeader();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ls_type; //type: LsaEnum
        YLeaf lsid; //type: string
        YLeaf advertising_router; //type: string
        YLeaf lsa_area_id; //type: string
        YLeaf lsa_age; //type: uint16
        YLeaf dn_age_lsa; //type: boolean
        YLeaf nsf; //type: boolean
        YLeaf sequence_number; //type: uint32
        YLeaf checksum; //type: uint16

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaHeader


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData : public Entity
{
    public:
        LsaDetailData();
        ~LsaDetailData();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tos_capable; //type: boolean
        YLeaf nssa_translation; //type: boolean
        YLeaf demand_circuit; //type: boolean
        YLeaf dn_bit; //type: boolean
        YLeaf lsa_rate_limit_due_time; //type: uint32
        YLeaf lsadb_base_clock; //type: uint64
        YLeaf routing_bit; //type: boolean
        YLeaf advertising_router_reachable; //type: boolean
        YLeaf length; //type: uint16
        YLeaf sum_origin; //type: uint16
        YLeaf ase_origin; //type: uint16
        YLeaf in_sync; //type: uint8
        YLeaf lsa_prefix_priority; //type: uint8
        YLeaf new_lsa_prefix_priority; //type: uint8
        YLeaf lsa_flood_required_post_fail_over; //type: boolean
        class LsaThrottleTimer; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer
        class LsaLastUpdatedTime; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime
        class LsadbBaseTimeStamp; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp
        class NotDelete; //type: Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete

        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime> lsa_last_updated_time;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer> lsa_throttle_timer;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp> lsadb_base_time_stamp;
        std::shared_ptr<Cisco_IOS_XR_ipv4_ospf_oper::Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete> not_delete;
        
}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer : public Entity
{
    public:
        LsaThrottleTimer();
        ~LsaThrottleTimer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timer_location; //type: TimerTableEnum
        YLeaf timer_type; //type: TimerEnum
        YLeaf second_table_index; //type: uint8
        YLeaf minute_table_index; //type: uint8
        YLeaf last_inst_second_table_index; //type: uint8
        YLeaf last_inst_minute_table_index; //type: uint8

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaThrottleTimer


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime : public Entity
{
    public:
        LsaLastUpdatedTime();
        ~LsaLastUpdatedTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsaLastUpdatedTime


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp : public Entity
{
    public:
        LsadbBaseTimeStamp();
        ~LsadbBaseTimeStamp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf second; //type: uint32
        YLeaf nanosecond; //type: uint32

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::LsadbBaseTimeStamp


class Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete : public Entity
{
    public:
        NotDelete();
        ~NotDelete();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf free_time; //type: uint32
        YLeaf no_delete; //type: boolean
        YLeaf neighbor_exchange; //type: boolean
        YLeaf routing_table; //type: boolean
        YLeaf acknowledgement; //type: boolean
        YLeaf maximum_age; //type: boolean
        YLeaf partial_spf; //type: boolean
        YLeaf flood_pending; //type: boolean
        YLeaf rate_limit; //type: boolean
        YLeaf nsr_ack_pending; //type: boolean
        YLeaf sum_orig_pending; //type: boolean
        YLeaf nsr_flood_required; //type: boolean

}; // Ospf::Processes::Process::DefaultVrf::Database::Lsas::Lsa::LsaDetailData::NotDelete


}
}

#endif /* _CISCO_IOS_XR_IPV4_OSPF_OPER_5_ */

