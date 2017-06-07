#ifndef _CISCO_IOS_XE_NATIVE_149_
#define _CISCO_IOS_XE_NATIVE_149_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_147.hpp"
#include "Cisco_IOS_XE_native_148.hpp"
#include "Cisco_IOS_XE_native_84.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal : public Entity
{
    public:
        NssaExternal();
        ~NssaExternal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nssa_external_routes; //type: RedistOspfExternalTypeEnum
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_ : public Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_ : public Entity
{
    public:
        Rip_();
        ~Rip_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Basic; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers::Basic

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers::Basic> basic;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers::Basic : public Entity
{
    public:
        Basic();
        ~Basic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf updates; //type: uint32
        YLeaf invalid; //type: uint32
        YLeaf holddown; //type: uint32
        YLeaf flush; //type: uint32
        YLeaf sleep; //type: uint32

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers::Basic


class Native::Router::Rip::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auto_summary; //type: empty
        YLeaf maximum_paths; //type: uint8
        YLeaf validate_update_source; //type: boolean
        YLeaf default_metric; //type: empty
        YLeaf flash_update_threshold; //type: empty
        YLeaf input_queue; //type: empty
        YLeaf output_delay; //type: empty
        YLeaf version; //type: empty
        class AddressFamily; //type: Native::Router::Rip::Default_::AddressFamily
        class Neighbor; //type: Native::Router::Rip::Default_::Neighbor
        class Network; //type: Native::Router::Rip::Default_::Network
        class DefaultInformation; //type: Native::Router::Rip::Default_::DefaultInformation
        class Distance; //type: Native::Router::Rip::Default_::Distance
        class DistributeList; //type: Native::Router::Rip::Default_::DistributeList
        class OffsetList; //type: Native::Router::Rip::Default_::OffsetList
        class PassiveInterface; //type: Native::Router::Rip::Default_::PassiveInterface
        class Disable; //type: Native::Router::Rip::Default_::Disable
        class Redistribute; //type: Native::Router::Rip::Default_::Redistribute
        class Timers; //type: Native::Router::Rip::Default_::Timers
        class TrafficShare; //type: Native::Router::Rip::Default_::TrafficShare

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::AddressFamily> address_family;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::DefaultInformation> default_information;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Disable> disable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::DistributeList> distribute_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Neighbor> > neighbor;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Network> > network;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::OffsetList> > offset_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::PassiveInterface> passive_interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute> redistribute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Timers> timers;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::TrafficShare> traffic_share;
        
}; // Native::Router::Rip::Default_


class Native::Router::Rip::Default_::AddressFamily : public Entity
{
    public:
        AddressFamily();
        ~AddressFamily();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Native::Router::Rip::Default_::AddressFamily::Ipv4

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::AddressFamily::Ipv4> ipv4; // presence node
        
}; // Native::Router::Rip::Default_::AddressFamily


class Native::Router::Rip::Default_::AddressFamily::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf unicast; //type: empty
        class Vrf; //type: Native::Router::Rip::Default_::AddressFamily::Ipv4::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::AddressFamily::Ipv4::Vrf> > vrf;
        
}; // Native::Router::Rip::Default_::AddressFamily::Ipv4


class Native::Router::Rip::Default_::AddressFamily::Ipv4::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Router::Rip::Default_::AddressFamily::Ipv4::Vrf


class Native::Router::Rip::Default_::Neighbor : public Entity
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

        YLeaf ip; //type: string

}; // Native::Router::Rip::Default_::Neighbor


class Native::Router::Rip::Default_::Network : public Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string

}; // Native::Router::Rip::Default_::Network


class Native::Router::Rip::Default_::DefaultInformation : public Entity
{
    public:
        DefaultInformation();
        ~DefaultInformation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf originate; //type: empty

}; // Native::Router::Rip::Default_::DefaultInformation


class Native::Router::Rip::Default_::Distance : public Entity
{
    public:
        Distance();
        ~Distance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf distance_leaf; //type: uint8
        class DistanceList; //type: Native::Router::Rip::Default_::Distance::DistanceList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Distance::DistanceList> > distance_list;
        
}; // Native::Router::Rip::Default_::Distance


class Native::Router::Rip::Default_::Distance::DistanceList : public Entity
{
    public:
        DistanceList();
        ~DistanceList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint8
        YLeaf ip; //type: string
        YLeaf mask; //type: string
        YLeaf access_list; //type: one of uint16, uint8

}; // Native::Router::Rip::Default_::Distance::DistanceList


class Native::Router::Rip::Default_::DistributeList : public Entity
{
    public:
        DistributeList();
        ~DistributeList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Accesslist; //type: Native::Router::Rip::Default_::DistributeList::Accesslist
        class AccesslistIfname; //type: Native::Router::Rip::Default_::DistributeList::AccesslistIfname
        class AccesslistPrefixGateway; //type: Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGateway
        class AccesslistPrefixGatewayIfname; //type: Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGatewayIfname

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::DistributeList::Accesslist> > accesslist;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::DistributeList::AccesslistIfname> > accesslist_ifname;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGateway> > accesslist_prefix_gateway;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGatewayIfname> > accesslist_prefix_gateway_ifname;
        
}; // Native::Router::Rip::Default_::DistributeList


class Native::Router::Rip::Default_::DistributeList::Accesslist : public Entity
{
    public:
        Accesslist();
        ~Accesslist();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf in_out; //type: AccessListInOutTypeEnum
        YLeaf id; //type: uint32

}; // Native::Router::Rip::Default_::DistributeList::Accesslist


class Native::Router::Rip::Default_::DistributeList::AccesslistIfname : public Entity
{
    public:
        AccesslistIfname();
        ~AccesslistIfname();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf in_out; //type: AccessListInOutTypeEnum
        YLeaf interface; //type: string
        YLeaf interface_routing_id; //type: uint8
        YLeaf isis_tag; //type: string
        YLeaf vrf; //type: string
        YLeaf id; //type: uint32

}; // Native::Router::Rip::Default_::DistributeList::AccesslistIfname


class Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGateway : public Entity
{
    public:
        AccesslistPrefixGateway();
        ~AccesslistPrefixGateway();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf in_out; //type: AccessListInOutTypeEnum
        YLeaf prefix_gateway; //type: PrefixGatewayEnum
        YLeaf name; //type: string
        class PrefixGatewayEnum;

}; // Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGateway


class Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGatewayIfname : public Entity
{
    public:
        AccesslistPrefixGatewayIfname();
        ~AccesslistPrefixGatewayIfname();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf in_out; //type: AccessListInOutTypeEnum
        YLeaf interface; //type: string
        YLeaf prefix_gateway; //type: PrefixGatewayEnum
        YLeaf name; //type: string
        YLeaf interface_routing_id; //type: uint8
        YLeaf isis_tag; //type: string
        YLeaf vrf; //type: string
        class PrefixGatewayEnum;

}; // Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGatewayIfname


class Native::Router::Rip::Default_::OffsetList : public Entity
{
    public:
        OffsetList();
        ~OffsetList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf in_out; //type: OffsetListInOutTypeEnum
        YLeaf offset; //type: uint8
        YLeaf id; //type: uint32

}; // Native::Router::Rip::Default_::OffsetList


class Native::Router::Rip::Default_::PassiveInterface : public Entity
{
    public:
        PassiveInterface();
        ~PassiveInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_; //type: empty
        YLeaf interface; //type: string

}; // Native::Router::Rip::Default_::PassiveInterface


class Native::Router::Rip::Default_::Disable : public Entity
{
    public:
        Disable();
        ~Disable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PassiveInterface; //type: Native::Router::Rip::Default_::Disable::PassiveInterface

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Disable::PassiveInterface> > passive_interface;
        
}; // Native::Router::Rip::Default_::Disable


class Native::Router::Rip::Default_::Disable::PassiveInterface : public Entity
{
    public:
        PassiveInterface();
        ~PassiveInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string

}; // Native::Router::Rip::Default_::Disable::PassiveInterface


class Native::Router::Rip::Default_::Redistribute : public Entity
{
    public:
        Redistribute();
        ~Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Connected; //type: Native::Router::Rip::Default_::Redistribute::Connected
        class Bgp; //type: Native::Router::Rip::Default_::Redistribute::Bgp
        class Eigrp; //type: Native::Router::Rip::Default_::Redistribute::Eigrp
        class Isis; //type: Native::Router::Rip::Default_::Redistribute::Isis
        class IsoIgrp; //type: Native::Router::Rip::Default_::Redistribute::IsoIgrp
        class Mobile; //type: Native::Router::Rip::Default_::Redistribute::Mobile
        class Odr; //type: Native::Router::Rip::Default_::Redistribute::Odr
        class Ospf; //type: Native::Router::Rip::Default_::Redistribute::Ospf
        class Static_; //type: Native::Router::Rip::Default_::Redistribute::Static_
        class Rip_; //type: Native::Router::Rip::Default_::Redistribute::Rip_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Connected> connected; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Isis> isis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Odr> odr; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Ospf> > ospf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Rip_> rip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Static_> static_; // presence node
        
}; // Native::Router::Rip::Default_::Redistribute


class Native::Router::Rip::Default_::Redistribute::Connected : public Entity
{
    public:
        Connected();
        ~Connected();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RipMetricRouteMap; //type: Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::Default_::Redistribute::Connected


class Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap


class Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Router::Rip::Default_::Redistribute::Connected::RipMetricRouteMap::Metric


class Native::Router::Rip::Default_::Redistribute::Bgp : public Entity
{
    public:
        Bgp();
        ~Bgp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as_number; //type: one of uint32, string
        class RipMetricRouteMap; //type: Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::Default_::Redistribute::Bgp


class Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap


class Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Router::Rip::Default_::Redistribute::Bgp::RipMetricRouteMap::Metric


class Native::Router::Rip::Default_::Redistribute::Eigrp : public Entity
{
    public:
        Eigrp();
        ~Eigrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf as_number; //type: uint16
        class RipMetricRouteMap; //type: Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::Default_::Redistribute::Eigrp


class Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap


class Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Router::Rip::Default_::Redistribute::Eigrp::RipMetricRouteMap::Metric


class Native::Router::Rip::Default_::Redistribute::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IsisArea; //type: Native::Router::Rip::Default_::Redistribute::Isis::IsisArea
        class RipIsisRedist; //type: Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Isis::IsisArea> > isis_area;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist> rip_isis_redist;
        
}; // Native::Router::Rip::Default_::Redistribute::Isis


class Native::Router::Rip::Default_::Redistribute::Isis::IsisArea : public Entity
{
    public:
        IsisArea();
        ~IsisArea();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class RipIsisRedist; //type: Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist> rip_isis_redist;
        
}; // Native::Router::Rip::Default_::Redistribute::Isis::IsisArea


class Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist : public Entity
{
    public:
        RipIsisRedist();
        ~RipIsisRedist();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf isis_level_routes; //type: IsisLevelRoutesEnum
        class RipMetricRouteMap; //type: Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap> rip_metric_route_map;
                class IsisLevelRoutesEnum;

}; // Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist


class Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap


class Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric


class Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist : public Entity
{
    public:
        RipIsisRedist();
        ~RipIsisRedist();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf isis_level_routes; //type: IsisLevelRoutesEnum
        class RipMetricRouteMap; //type: Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap> rip_metric_route_map;
                class IsisLevelRoutesEnum;

}; // Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist


class Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap


class Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric


class Native::Router::Rip::Default_::Redistribute::IsoIgrp : public Entity
{
    public:
        IsoIgrp();
        ~IsoIgrp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class IsoigrpList; //type: Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList
        class RipMetricRouteMap; //type: Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList> > isoigrp_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::Default_::Redistribute::IsoIgrp


class Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList : public Entity
{
    public:
        IsoigrpList();
        ~IsoigrpList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf iso_area_tag; //type: string
        class RipMetricRouteMap; //type: Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList


class Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap


class Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Router::Rip::Default_::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric


class Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap


class Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Router::Rip::Default_::Redistribute::IsoIgrp::RipMetricRouteMap::Metric


class Native::Router::Rip::Default_::Redistribute::Mobile : public Entity
{
    public:
        Mobile();
        ~Mobile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RipMetricRouteMap; //type: Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::Default_::Redistribute::Mobile


class Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap


class Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Router::Rip::Default_::Redistribute::Mobile::RipMetricRouteMap::Metric


class Native::Router::Rip::Default_::Redistribute::Odr : public Entity
{
    public:
        Odr();
        ~Odr();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RipMetricRouteMap; //type: Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::Default_::Redistribute::Odr


class Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap


class Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Router::Rip::Default_::Redistribute::Odr::RipMetricRouteMap::Metric


class Native::Router::Rip::Default_::Redistribute::Ospf : public Entity
{
    public:
        Ospf();
        ~Ospf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf process_id; //type: uint16
        class Vrf; //type: Native::Router::Rip::Default_::Redistribute::Ospf::Vrf
        class Match; //type: Native::Router::Rip::Default_::Redistribute::Ospf::Match
        class RipMetricRouteMap; //type: Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Ospf::Match> match;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap> rip_metric_route_map;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Ospf::Vrf> > vrf;
        
}; // Native::Router::Rip::Default_::Redistribute::Ospf


class Native::Router::Rip::Default_::Redistribute::Ospf::Vrf : public Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Router::Rip::Default_::Redistribute::Ospf::Vrf


class Native::Router::Rip::Default_::Redistribute::Ospf::Match : public Entity
{
    public:
        Match();
        ~Match();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Internal; //type: Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal
        class External; //type: Native::Router::Rip::Default_::Redistribute::Ospf::Match::External
        class NssaExternal; //type: Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Ospf::Match::External> external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal> internal; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Rip::Default_::Redistribute::Ospf::Match


class Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal : public Entity
{
    public:
        Internal();
        ~Internal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RipMetricRouteMap; //type: Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal


class Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap


class Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Router::Rip::Default_::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric


class Native::Router::Rip::Default_::Redistribute::Ospf::Match::External : public Entity
{
    public:
        External();
        ~External();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf external_routes; //type: RedistOspfExternalTypeEnum
        class RipMetricRouteMap; //type: Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::Default_::Redistribute::Ospf::Match::External


class Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap


class Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Router::Rip::Default_::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric


class Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal : public Entity
{
    public:
        NssaExternal();
        ~NssaExternal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nssa_external_routes; //type: RedistOspfExternalTypeEnum
        class RipMetricRouteMap; //type: Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal


class Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap


class Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Router::Rip::Default_::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric


class Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap


class Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Router::Rip::Default_::Redistribute::Ospf::RipMetricRouteMap::Metric


class Native::Router::Rip::Default_::Redistribute::Static_ : public Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RipMetricRouteMap; //type: Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::Default_::Redistribute::Static_


class Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap


class Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Router::Rip::Default_::Redistribute::Static_::RipMetricRouteMap::Metric


class Native::Router::Rip::Default_::Redistribute::Rip_ : public Entity
{
    public:
        Rip_();
        ~Rip_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RipMetricRouteMap; //type: Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::Default_::Redistribute::Rip_


class Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap : public Entity
{
    public:
        RipMetricRouteMap();
        ~RipMetricRouteMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string
        class Metric; //type: Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap


class Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::Metric : public Entity
{
    public:
        Metric();
        ~Metric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric_value; //type: uint32
        YLeaf transparent; //type: empty

}; // Native::Router::Rip::Default_::Redistribute::Rip_::RipMetricRouteMap::Metric


class Native::Router::Rip::Default_::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf basic; //type: empty

}; // Native::Router::Rip::Default_::Timers


class Native::Router::Rip::Default_::TrafficShare : public Entity
{
    public:
        TrafficShare();
        ~TrafficShare();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Min; //type: Native::Router::Rip::Default_::TrafficShare::Min

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Default_::TrafficShare::Min> min;
        
}; // Native::Router::Rip::Default_::TrafficShare


class Native::Router::Rip::Default_::TrafficShare::Min : public Entity
{
    public:
        Min();
        ~Min();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf across_interfaces; //type: empty

}; // Native::Router::Rip::Default_::TrafficShare::Min


class Native::ServiceChain : public Entity
{
    public:
        ServiceChain();
        ~ServiceChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServiceFunction; //type: Native::ServiceChain::ServiceFunction
        class ServiceFunctionForwarder; //type: Native::ServiceChain::ServiceFunctionForwarder
        class ServicePath; //type: Native::ServiceChain::ServicePath

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceChain::ServiceFunction> > service_function;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceChain::ServiceFunctionForwarder> service_function_forwarder;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceChain::ServicePath> > service_path;
        
}; // Native::ServiceChain


class Native::ServiceChain::ServiceFunction : public Entity
{
    public:
        ServiceFunction();
        ~ServiceFunction();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class ConfigServiceChainSfMode; //type: Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode

        std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode> config_service_chain_sf_mode;
        
}; // Native::ServiceChain::ServiceFunction


class Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode : public Entity
{
    public:
        ConfigServiceChainSfMode();
        ~ConfigServiceChainSfMode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        class Encapsulation; //type: Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation
        class Ip; //type: Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip> ip;
        
}; // Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode


class Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation : public Entity
{
    public:
        Encapsulation();
        ~Encapsulation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf none; //type: empty
        class Gre; //type: Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre

        std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre> gre; // presence node
        
}; // Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation


class Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre : public Entity
{
    public:
        Gre();
        ~Gre();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enhanced; //type: EnhancedEnum
        class EnhancedEnum;

}; // Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre


class Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Ip


class Native::ServiceChain::ServiceFunctionForwarder : public Entity
{
    public:
        ServiceFunctionForwarder();
        ~ServiceFunctionForwarder();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServiceFfName; //type: Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName
        class Local; //type: Native::ServiceChain::ServiceFunctionForwarder::Local

        std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceChain::ServiceFunctionForwarder::Local> local; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName> > service_ff_name;
        
}; // Native::ServiceChain::ServiceFunctionForwarder


class Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName : public Entity
{
    public:
        ServiceFfName();
        ~ServiceFfName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf description; //type: string
        class Ip; //type: Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip> ip;
        
}; // Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName


class Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // Native::ServiceChain::ServiceFunctionForwarder::ServiceFfName::Ip


class Native::ServiceChain::ServiceFunctionForwarder::Local : public Entity
{
    public:
        Local();
        ~Local();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        class Ip; //type: Native::ServiceChain::ServiceFunctionForwarder::Local::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceChain::ServiceFunctionForwarder::Local::Ip> ip;
        
}; // Native::ServiceChain::ServiceFunctionForwarder::Local


class Native::ServiceChain::ServiceFunctionForwarder::Local::Ip : public Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string

}; // Native::ServiceChain::ServiceFunctionForwarder::Local::Ip


class Native::ServiceChain::ServicePath : public Entity
{
    public:
        ServicePath();
        ~ServicePath();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_path_id; //type: uint32
        class ConfigServiceChainPathMode; //type: Native::ServiceChain::ServicePath::ConfigServiceChainPathMode

        std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceChain::ServicePath::ConfigServiceChainPathMode> config_service_chain_path_mode;
        
}; // Native::ServiceChain::ServicePath


class Native::ServiceChain::ServicePath::ConfigServiceChainPathMode : public Entity
{
    public:
        ConfigServiceChainPathMode();
        ~ConfigServiceChainPathMode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        class ServiceIndex; //type: Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex

        std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex> service_index;
        
}; // Native::ServiceChain::ServicePath::ConfigServiceChainPathMode


class Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex : public Entity
{
    public:
        ServiceIndex();
        ~ServiceIndex();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Services; //type: Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services> > services;
        
}; // Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex


class Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services : public Entity
{
    public:
        Services();
        ~Services();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf service_index_id; //type: uint8
        YLeaf service_function; //type: string
        YLeaf service_function_forwarder; //type: string
        YLeaf terminate; //type: empty

}; // Native::ServiceChain::ServicePath::ConfigServiceChainPathMode::ServiceIndex::Services


class Native::Performance : public Entity
{
    public:
        Performance();
        ~Performance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Monitor; //type: Native::Performance::Monitor

        std::shared_ptr<Cisco_IOS_XE_native::Native::Performance::Monitor> monitor;
        
}; // Native::Performance


class Native::Performance::Monitor : public Entity
{
    public:
        Monitor();
        ~Monitor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Context; //type: Native::Performance::Monitor::Context
        class ObservationPoint; //type: Native::Performance::Monitor::ObservationPoint

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Performance::Monitor::Context> > context;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Performance::Monitor::ObservationPoint> observation_point;
        
}; // Native::Performance::Monitor


class Native::Performance::Monitor::Context : public Entity
{
    public:
        Context();
        ~Context();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf profile; //type: ProfileEnum
        YLeaf description; //type: string
        class Default_; //type: Native::Performance::Monitor::Context::Default_
        class Exporter; //type: Native::Performance::Monitor::Context::Exporter
        class TrafficMonitor; //type: Native::Performance::Monitor::Context::TrafficMonitor

        std::shared_ptr<Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Exporter> exporter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Performance::Monitor::Context::TrafficMonitor> traffic_monitor;
                class ProfileEnum;

}; // Native::Performance::Monitor::Context


class Native::Performance::Monitor::Context::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: empty
        class Exporter; //type: Native::Performance::Monitor::Context::Default_::Exporter
        class TrafficMonitor; //type: Native::Performance::Monitor::Context::Default_::TrafficMonitor

        std::shared_ptr<Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default_::Exporter> exporter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default_::TrafficMonitor> traffic_monitor;
        
}; // Native::Performance::Monitor::Context::Default_


class Native::Performance::Monitor::Context::Default_::Exporter : public Entity
{
    public:
        Exporter();
        ~Exporter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination; //type: string
        YLeaf source; //type: string
        YLeaf port; //type: uint16
        YLeaf transport; //type: TransportEnum
        YLeaf vrf; //type: string
        class TransportEnum;

}; // Native::Performance::Monitor::Context::Default_::Exporter


class Native::Performance::Monitor::Context::Default_::TrafficMonitor : public Entity
{
    public:
        TrafficMonitor();
        ~TrafficMonitor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class All; //type: Native::Performance::Monitor::Context::Default_::TrafficMonitor::All
        class ApplicationResponseTime; //type: Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime
        class ApplicationTrafficStats; //type: Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats
        class ConversationTrafficStats; //type: Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats
        class Media; //type: Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media
        class Url; //type: Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url
        class ApplicationClientServerStats; //type: Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats
        class ApplicationStats; //type: Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats

        std::shared_ptr<Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default_::TrafficMonitor::All> all; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats> application_client_server_stats; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime> application_response_time; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats> application_stats; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats> application_traffic_stats; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats> conversation_traffic_stats; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media> media; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url> url; // presence node
        
}; // Native::Performance::Monitor::Context::Default_::TrafficMonitor


class Native::Performance::Monitor::Context::Default_::TrafficMonitor::All : public Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: empty
        YLeaf ipv6; //type: empty

}; // Native::Performance::Monitor::Context::Default_::TrafficMonitor::All


class Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime : public Entity
{
    public:
        ApplicationResponseTime();
        ~ApplicationResponseTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cache_size; //type: uint32
        YLeaf class_replace; //type: string
        YLeaf interval_timeout; //type: uint32
        YLeaf cache_type; //type: CacheTypeEnum
        YLeaf class_and; //type: string
        YLeaf ipv4; //type: empty
        YLeaf ipv6; //type: empty
        class CacheTypeEnum;

}; // Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime


class Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats : public Entity
{
    public:
        ApplicationTrafficStats();
        ~ApplicationTrafficStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cache_size; //type: uint32
        YLeaf class_replace; //type: string
        YLeaf interval_timeout; //type: uint32

}; // Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationTrafficStats


class Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats : public Entity
{
    public:
        ConversationTrafficStats();
        ~ConversationTrafficStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cache_size; //type: uint32
        YLeaf class_replace; //type: string
        YLeaf interval_timeout; //type: uint32
        YLeaf cache_type; //type: CacheTypeEnum
        YLeaf ipv4; //type: empty
        YLeaf ipv6; //type: empty
        class CacheTypeEnum;

}; // Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats


class Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media : public Entity
{
    public:
        Media();
        ~Media();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cache_size; //type: uint32
        YLeaf class_replace; //type: string
        YLeaf interval_timeout; //type: uint32
        YLeaf class_and; //type: string
        YLeaf egress; //type: empty
        YLeaf ingress; //type: empty
        YLeaf ipv4; //type: empty
        YLeaf ipv6; //type: empty

}; // Native::Performance::Monitor::Context::Default_::TrafficMonitor::Media


class Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url : public Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cache_size; //type: uint32
        YLeaf class_and; //type: string
        YLeaf class_replace; //type: string
        YLeaf ipv4; //type: empty
        YLeaf ipv6; //type: empty
        YLeaf sampling_rate; //type: uint32

}; // Native::Performance::Monitor::Context::Default_::TrafficMonitor::Url


class Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats : public Entity
{
    public:
        ApplicationClientServerStats();
        ~ApplicationClientServerStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cache_size; //type: uint32
        YLeaf class_replace; //type: string
        YLeaf interval_timeout; //type: uint32
        YLeaf cache_type; //type: CacheTypeEnum
        YLeaf ipv4; //type: empty
        YLeaf ipv6; //type: empty
        class CacheTypeEnum;

}; // Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats


class Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats : public Entity
{
    public:
        ApplicationStats();
        ~ApplicationStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cache_size; //type: uint32
        YLeaf class_replace; //type: string
        YLeaf interval_timeout; //type: uint32

}; // Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationStats


class Native::Performance::Monitor::Context::Exporter : public Entity
{
    public:
        Exporter();
        ~Exporter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf destination; //type: string
        YLeaf source; //type: string
        YLeaf port; //type: uint16
        YLeaf transport; //type: TransportEnum
        YLeaf vrf; //type: string
        class TransportEnum;

}; // Native::Performance::Monitor::Context::Exporter


class Native::Performance::Monitor::Context::TrafficMonitor : public Entity
{
    public:
        TrafficMonitor();
        ~TrafficMonitor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class All; //type: Native::Performance::Monitor::Context::TrafficMonitor::All
        class ApplicationResponseTime; //type: Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime
        class ApplicationTrafficStats; //type: Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats
        class ConversationTrafficStats; //type: Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats
        class Media; //type: Native::Performance::Monitor::Context::TrafficMonitor::Media
        class Url; //type: Native::Performance::Monitor::Context::TrafficMonitor::Url
        class ApplicationClientServerStats; //type: Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats
        class ApplicationStats; //type: Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats

        std::shared_ptr<Cisco_IOS_XE_native::Native::Performance::Monitor::Context::TrafficMonitor::All> all; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats> application_client_server_stats; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime> application_response_time; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats> application_stats; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats> application_traffic_stats; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats> conversation_traffic_stats; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Performance::Monitor::Context::TrafficMonitor::Media> media; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Performance::Monitor::Context::TrafficMonitor::Url> url; // presence node
        
}; // Native::Performance::Monitor::Context::TrafficMonitor


class Native::Performance::Monitor::Context::TrafficMonitor::All : public Entity
{
    public:
        All();
        ~All();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: empty
        YLeaf ipv6; //type: empty

}; // Native::Performance::Monitor::Context::TrafficMonitor::All


class Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime : public Entity
{
    public:
        ApplicationResponseTime();
        ~ApplicationResponseTime();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cache_size; //type: uint32
        YLeaf class_replace; //type: string
        YLeaf interval_timeout; //type: uint32
        YLeaf cache_type; //type: CacheTypeEnum
        YLeaf class_and; //type: string
        YLeaf ipv4; //type: empty
        YLeaf ipv6; //type: empty
        class CacheTypeEnum;

}; // Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime


class Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats : public Entity
{
    public:
        ApplicationTrafficStats();
        ~ApplicationTrafficStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cache_size; //type: uint32
        YLeaf class_replace; //type: string
        YLeaf interval_timeout; //type: uint32

}; // Native::Performance::Monitor::Context::TrafficMonitor::ApplicationTrafficStats


class Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats : public Entity
{
    public:
        ConversationTrafficStats();
        ~ConversationTrafficStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cache_size; //type: uint32
        YLeaf class_replace; //type: string
        YLeaf interval_timeout; //type: uint32
        YLeaf cache_type; //type: CacheTypeEnum
        YLeaf ipv4; //type: empty
        YLeaf ipv6; //type: empty
        class CacheTypeEnum;

}; // Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats


class Native::Performance::Monitor::Context::TrafficMonitor::Media : public Entity
{
    public:
        Media();
        ~Media();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cache_size; //type: uint32
        YLeaf class_replace; //type: string
        YLeaf interval_timeout; //type: uint32
        YLeaf class_and; //type: string
        YLeaf egress; //type: empty
        YLeaf ingress; //type: empty
        YLeaf ipv4; //type: empty
        YLeaf ipv6; //type: empty

}; // Native::Performance::Monitor::Context::TrafficMonitor::Media


class Native::Performance::Monitor::Context::TrafficMonitor::Url : public Entity
{
    public:
        Url();
        ~Url();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cache_size; //type: uint32
        YLeaf class_and; //type: string
        YLeaf class_replace; //type: string
        YLeaf ipv4; //type: empty
        YLeaf ipv6; //type: empty
        YLeaf sampling_rate; //type: uint32

}; // Native::Performance::Monitor::Context::TrafficMonitor::Url


class Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats : public Entity
{
    public:
        ApplicationClientServerStats();
        ~ApplicationClientServerStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cache_size; //type: uint32
        YLeaf class_replace; //type: string
        YLeaf interval_timeout; //type: uint32
        YLeaf cache_type; //type: CacheTypeEnum
        YLeaf ipv4; //type: empty
        YLeaf ipv6; //type: empty
        class CacheTypeEnum;

}; // Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats


class Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats : public Entity
{
    public:
        ApplicationStats();
        ~ApplicationStats();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cache_size; //type: uint32
        YLeaf class_replace; //type: string
        YLeaf interval_timeout; //type: uint32

}; // Native::Performance::Monitor::Context::TrafficMonitor::ApplicationStats


class Native::Performance::Monitor::ObservationPoint : public Entity
{
    public:
        ObservationPoint();
        ~ObservationPoint();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encrypted_text; //type: empty

}; // Native::Performance::Monitor::ObservationPoint


class Native::Otv : public Entity
{
    public:
        Otv();
        ~Otv();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf site_identifier; //type: one of uint32, string
        class Fragmentation; //type: Native::Otv::Fragmentation
        class Isis; //type: Native::Otv::Isis
        class Site; //type: Native::Otv::Site

        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Fragmentation> fragmentation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Isis> isis;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Site> > site;
        
}; // Native::Otv


class Native::Otv::Fragmentation : public Entity
{
    public:
        Fragmentation();
        ~Fragmentation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class JoinInterface; //type: Native::Otv::Fragmentation::JoinInterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Fragmentation::JoinInterface> join_interface;
        
}; // Native::Otv::Fragmentation


class Native::Otv::Fragmentation::JoinInterface : public Entity
{
    public:
        JoinInterface();
        ~JoinInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf appnav_compress; //type: uint16
        YLeaf appnav_uncompress; //type: uint16
        YLeaf atm; //type: string
        YLeaf atm_acr; //type: string
        YLeaf bdi; //type: string
        YLeaf cem; //type: string
        YLeaf cem_acr; //type: uint8
        YLeaf embedded_service_engine; //type: string
        YLeaf fastethernet; //type: string
        YLeaf gigabitethernet; //type: string
        YLeaf lisp; //type: uint16
        YLeaf loopback; //type: uint32
        YLeaf multilink; //type: uint16
        YLeaf nve; //type: uint16
        YLeaf overlay; //type: uint16
        YLeaf port_channel; //type: uint32
        YLeaf pseudowire; //type: uint32
        YLeaf sm; //type: string
        YLeaf cellular; //type: string
        YLeaf serial; //type: string
        YLeaf tengigabitethernet; //type: string
        YLeaf tunnel; //type: uint32
        YLeaf virtual_template; //type: uint16
        YLeaf vlan; //type: uint16
        YLeaf virtualportgroup; //type: uint16
        YLeaf vasileft; //type: uint16
        YLeaf vasiright; //type: uint16
        class AtmSubinterface; //type: Native::Otv::Fragmentation::JoinInterface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Otv::Fragmentation::JoinInterface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Otv::Fragmentation::JoinInterface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Fragmentation::JoinInterface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Fragmentation::JoinInterface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Fragmentation::JoinInterface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Otv::Fragmentation::JoinInterface


class Native::Otv::Fragmentation::JoinInterface::AtmSubinterface : public Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm; //type: string

}; // Native::Otv::Fragmentation::JoinInterface::AtmSubinterface


class Native::Otv::Fragmentation::JoinInterface::AtmAcrsubinterface : public Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf atm_acr; //type: string

}; // Native::Otv::Fragmentation::JoinInterface::AtmAcrsubinterface


class Native::Otv::Fragmentation::JoinInterface::LispSubinterface : public Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf lisp; //type: string

}; // Native::Otv::Fragmentation::JoinInterface::LispSubinterface


class Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface : public Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_channel; //type: string

}; // Native::Otv::Fragmentation::JoinInterface::PortChannelSubinterface


class Native::Otv::Isis : public Entity
{
    public:
        Isis();
        ~Isis();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Overlay; //type: Native::Otv::Isis::Overlay
        class Site; //type: Native::Otv::Isis::Site

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Isis::Overlay> > overlay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Isis::Site> site;
        
}; // Native::Otv::Isis


class Native::Otv::Isis::Overlay : public Entity
{
    public:
        Overlay();
        ~Overlay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint16
        YLeaf delayed_deletion_interval; //type: uint32
        YLeaf lsp_mtu; //type: uint32
        YLeaf lsp_refresh_interval; //type: uint32
        YLeaf max_lsp_lifetime; //type: uint32
        class Authentication; //type: Native::Otv::Isis::Overlay::Authentication
        class Default_; //type: Native::Otv::Isis::Overlay::Default_
        class Hostname; //type: Native::Otv::Isis::Overlay::Hostname
        class LogAdjacencyChanges; //type: Native::Otv::Isis::Overlay::LogAdjacencyChanges
        class LspGenInterval; //type: Native::Otv::Isis::Overlay::LspGenInterval
        class Nsf; //type: Native::Otv::Isis::Overlay::Nsf
        class PrcInterval; //type: Native::Otv::Isis::Overlay::PrcInterval
        class Skeptical; //type: Native::Otv::Isis::Overlay::Skeptical
        class SpfInterval; //type: Native::Otv::Isis::Overlay::SpfInterval

        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Isis::Overlay::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Isis::Overlay::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Isis::Overlay::Hostname> hostname;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Isis::Overlay::LogAdjacencyChanges> log_adjacency_changes; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Isis::Overlay::LspGenInterval> lsp_gen_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Isis::Overlay::Nsf> nsf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Isis::Overlay::PrcInterval> prc_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Isis::Overlay::Skeptical> skeptical;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Isis::Overlay::SpfInterval> spf_interval;
        
}; // Native::Otv::Isis::Overlay


class Native::Otv::Isis::Overlay::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key_chain; //type: string
        YLeaf mode; //type: ModeEnum
        YLeaf send_only; //type: empty
        class ModeEnum;

}; // Native::Otv::Isis::Overlay::Authentication


class Native::Otv::Isis::Overlay::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf delayed_deletion_interval; //type: empty
        YLeaf log_adjacency_changes; //type: empty
        YLeaf lsp_gen_interval; //type: empty
        YLeaf lsp_mtu; //type: empty
        YLeaf lsp_refresh_interval; //type: empty
        YLeaf max_lsp_lifetime; //type: empty
        YLeaf prc_interval; //type: empty
        YLeaf spf_interval; //type: empty
        class Authentication; //type: Native::Otv::Isis::Overlay::Default_::Authentication
        class Hostname; //type: Native::Otv::Isis::Overlay::Default_::Hostname
        class Nsf; //type: Native::Otv::Isis::Overlay::Default_::Nsf
        class Skeptical; //type: Native::Otv::Isis::Overlay::Default_::Skeptical

        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Isis::Overlay::Default_::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Isis::Overlay::Default_::Hostname> hostname;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Isis::Overlay::Default_::Nsf> nsf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Isis::Overlay::Default_::Skeptical> skeptical;
        
}; // Native::Otv::Isis::Overlay::Default_


class Native::Otv::Isis::Overlay::Default_::Authentication : public Entity
{
    public:
        Authentication();
        ~Authentication();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key_chain; //type: string
        YLeaf mode; //type: ModeEnum
        YLeaf send_only; //type: empty
        class ModeEnum;

}; // Native::Otv::Isis::Overlay::Default_::Authentication


class Native::Otv::Isis::Overlay::Default_::Hostname : public Entity
{
    public:
        Hostname();
        ~Hostname();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dynamic; //type: empty

}; // Native::Otv::Isis::Overlay::Default_::Hostname


class Native::Otv::Isis::Overlay::Default_::Nsf : public Entity
{
    public:
        Nsf();
        ~Nsf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cisco; //type: empty
        YLeaf interval; //type: empty

}; // Native::Otv::Isis::Overlay::Default_::Nsf


class Native::Otv::Isis::Overlay::Default_::Skeptical : public Entity
{
    public:
        Skeptical();
        ~Skeptical();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: empty

}; // Native::Otv::Isis::Overlay::Default_::Skeptical


class Native::Otv::Isis::Overlay::Hostname : public Entity
{
    public:
        Hostname();
        ~Hostname();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dynamic; //type: empty

}; // Native::Otv::Isis::Overlay::Hostname


class Native::Otv::Isis::Overlay::LogAdjacencyChanges : public Entity
{
    public:
        LogAdjacencyChanges();
        ~LogAdjacencyChanges();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all; //type: empty

}; // Native::Otv::Isis::Overlay::LogAdjacencyChanges


class Native::Otv::Isis::Overlay::LspGenInterval : public Entity
{
    public:
        LspGenInterval();
        ~LspGenInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint8
        YLeaf milliseconds; //type: uint32
        YLeaf wait; //type: uint32

}; // Native::Otv::Isis::Overlay::LspGenInterval


class Native::Otv::Isis::Overlay::Nsf : public Entity
{
    public:
        Nsf();
        ~Nsf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cisco; //type: empty
        YLeaf interval; //type: uint32

}; // Native::Otv::Isis::Overlay::Nsf


class Native::Otv::Isis::Overlay::PrcInterval : public Entity
{
    public:
        PrcInterval();
        ~PrcInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint8
        YLeaf milliseconds; //type: uint32
        YLeaf wait; //type: uint32

}; // Native::Otv::Isis::Overlay::PrcInterval


class Native::Otv::Isis::Overlay::Skeptical : public Entity
{
    public:
        Skeptical();
        ~Skeptical();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: uint32

}; // Native::Otv::Isis::Overlay::Skeptical


class Native::Otv::Isis::Overlay::SpfInterval : public Entity
{
    public:
        SpfInterval();
        ~SpfInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seconds; //type: uint8
        YLeaf milliseconds; //type: uint32
        YLeaf wait; //type: uint32

}; // Native::Otv::Isis::Overlay::SpfInterval


class Native::Otv::Isis::Site : public Entity
{
    public:
        Site();
        ~Site();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf net; //type: string
        class Default_; //type: Native::Otv::Isis::Site::Default_
        class LogAdjacencyChanges; //type: Native::Otv::Isis::Site::LogAdjacencyChanges
        class Skeptical; //type: Native::Otv::Isis::Site::Skeptical

        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Isis::Site::Default_> default_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Isis::Site::LogAdjacencyChanges> log_adjacency_changes; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Isis::Site::Skeptical> skeptical;
        
}; // Native::Otv::Isis::Site


class Native::Otv::Isis::Site::Default_ : public Entity
{
    public:
        Default_();
        ~Default_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf log_adjacency_changes; //type: empty
        YLeaf net; //type: empty
        class Skeptical; //type: Native::Otv::Isis::Site::Default_::Skeptical

        std::shared_ptr<Cisco_IOS_XE_native::Native::Otv::Isis::Site::Default_::Skeptical> skeptical;
        
}; // Native::Otv::Isis::Site::Default_


class Native::Otv::Isis::Site::Default_::Skeptical : public Entity
{
    public:
        Skeptical();
        ~Skeptical();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interval; //type: empty

}; // Native::Otv::Isis::Site::Default_::Skeptical

class Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGateway::PrefixGatewayEnum : public Enum
{
    public:
        static const Enum::YLeaf prefix;
        static const Enum::YLeaf gateway;
        static const Enum::YLeaf route_map;

};

class Native::Router::Rip::Default_::DistributeList::AccesslistPrefixGatewayIfname::PrefixGatewayEnum : public Enum
{
    public:
        static const Enum::YLeaf prefix;
        static const Enum::YLeaf gateway;
        static const Enum::YLeaf route_map;

};

class Native::Router::Rip::Default_::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutesEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};

class Native::Router::Rip::Default_::Redistribute::Isis::RipIsisRedist::IsisLevelRoutesEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};

class Native::ServiceChain::ServiceFunction::ConfigServiceChainSfMode::Encapsulation::Gre::EnhancedEnum : public Enum
{
    public:
        static const Enum::YLeaf copy;
        static const Enum::YLeaf divert;

};

class Native::Performance::Monitor::Context::ProfileEnum : public Enum
{
    public:
        static const Enum::YLeaf application_experience;
        static const Enum::YLeaf application_performance;
        static const Enum::YLeaf application_statistics;

};

class Native::Performance::Monitor::Context::Default_::Exporter::TransportEnum : public Enum
{
    public:
        static const Enum::YLeaf udp;

};

class Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationResponseTime::CacheTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf normal;
        static const Enum::YLeaf synchronized;

};

class Native::Performance::Monitor::Context::Default_::TrafficMonitor::ConversationTrafficStats::CacheTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf normal;
        static const Enum::YLeaf synchronized;

};

class Native::Performance::Monitor::Context::Default_::TrafficMonitor::ApplicationClientServerStats::CacheTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf normal;
        static const Enum::YLeaf synchronized;

};

class Native::Performance::Monitor::Context::Exporter::TransportEnum : public Enum
{
    public:
        static const Enum::YLeaf udp;

};

class Native::Performance::Monitor::Context::TrafficMonitor::ApplicationResponseTime::CacheTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf normal;
        static const Enum::YLeaf synchronized;

};

class Native::Performance::Monitor::Context::TrafficMonitor::ConversationTrafficStats::CacheTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf normal;
        static const Enum::YLeaf synchronized;

};

class Native::Performance::Monitor::Context::TrafficMonitor::ApplicationClientServerStats::CacheTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf normal;
        static const Enum::YLeaf synchronized;

};

class Native::Otv::Isis::Overlay::Authentication::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf md5;
        static const Enum::YLeaf text;

};

class Native::Otv::Isis::Overlay::Default_::Authentication::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf md5;
        static const Enum::YLeaf text;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_149_ */

