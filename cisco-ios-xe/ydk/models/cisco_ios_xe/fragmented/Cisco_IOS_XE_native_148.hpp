#ifndef _CISCO_IOS_XE_NATIVE_148_
#define _CISCO_IOS_XE_NATIVE_148_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_147.hpp"
#include "Cisco_IOS_XE_native_84.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap


class Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric


class Native::Router::Rip::Redistribute::Ospf::Match::External : public Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::Redistribute::Ospf::Match::External


class Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap


class Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric


class Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal : public Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal


class Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap


class Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric


class Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap


class Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric


class Native::Router::Rip::Redistribute::Static_ : public Entity
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

        class RipMetricRouteMap; //type: Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::Redistribute::Static_


class Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap


class Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::Redistribute::Static_::RipMetricRouteMap::Metric


class Native::Router::Rip::Redistribute::Rip_ : public Entity
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

        class RipMetricRouteMap; //type: Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::Redistribute::Rip_


class Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap


class Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric


class Native::Router::Rip::Timers : public Entity
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

        class Basic; //type: Native::Router::Rip::Timers::Basic

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Timers::Basic> basic;
        
}; // Native::Router::Rip::Timers


class Native::Router::Rip::Timers::Basic : public Entity
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

}; // Native::Router::Rip::Timers::Basic


class Native::Router::Rip::PassiveInterface : public Entity
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

}; // Native::Router::Rip::PassiveInterface


class Native::Router::Rip::Disable : public Entity
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

        class PassiveInterface; //type: Native::Router::Rip::Disable::PassiveInterface

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::Disable::PassiveInterface> > passive_interface;
        
}; // Native::Router::Rip::Disable


class Native::Router::Rip::Disable::PassiveInterface : public Entity
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

}; // Native::Router::Rip::Disable::PassiveInterface


class Native::Router::Rip::TrafficShare : public Entity
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

        class Min; //type: Native::Router::Rip::TrafficShare::Min

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::TrafficShare::Min> min;
        
}; // Native::Router::Rip::TrafficShare


class Native::Router::Rip::TrafficShare::Min : public Entity
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

}; // Native::Router::Rip::TrafficShare::Min


class Native::Router::Rip::AddressFamily : public Entity
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

        class Ipv4; //type: Native::Router::Rip::AddressFamily::Ipv4

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4> ipv4;
        
}; // Native::Router::Rip::AddressFamily


class Native::Router::Rip::AddressFamily::Ipv4 : public Entity
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

        class Unicast; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast
        class Vrf; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast> unicast;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf> > vrf;
        
}; // Native::Router::Rip::AddressFamily::Ipv4


class Native::Router::Rip::AddressFamily::Ipv4::Unicast : public Entity
{
    public:
        Unicast();
        ~Unicast();

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
        YLeaf default_metric; //type: uint32
        YLeaf version; //type: uint8
        YLeaf flash_update_threshold; //type: uint8
        YLeaf input_queue; //type: uint16
        YLeaf output_delay; //type: uint8
        class Neighbor; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Neighbor
        class Network; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Network
        class DefaultInformation; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation
        class Distance; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance
        class DistributeList; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList
        class OffsetList; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::OffsetList
        class Redistribute; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute
        class Timers; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers
        class PassiveInterface; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::PassiveInterface
        class Disable; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable
        class TrafficShare; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation> default_information;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable> disable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList> distribute_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Neighbor> > neighbor;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Network> > network;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::OffsetList> > offset_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::PassiveInterface> passive_interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute> redistribute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers> timers;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare> traffic_share;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Neighbor : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Neighbor


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Network : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Network


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation : public Entity
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

        class Originate; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::Originate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::Originate> originate; // presence node
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::Originate : public Entity
{
    public:
        Originate();
        ~Originate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::DefaultInformation::Originate


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance : public Entity
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
        class DistanceList; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::DistanceList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::DistanceList> > distance_list;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::DistanceList : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Distance::DistanceList


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList : public Entity
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

        class Accesslist; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::Accesslist
        class AccesslistIfname; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistIfname
        class AccesslistPrefixGateway; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGateway
        class AccesslistPrefixGatewayIfname; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGatewayIfname

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::Accesslist> > accesslist;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistIfname> > accesslist_ifname;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGateway> > accesslist_prefix_gateway;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGatewayIfname> > accesslist_prefix_gateway_ifname;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::Accesslist : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::Accesslist


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistIfname : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistIfname


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGateway : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGateway


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGatewayIfname : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGatewayIfname


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::OffsetList : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::OffsetList


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute : public Entity
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

        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap
        class Connected; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected
        class Bgp; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp
        class Eigrp; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp
        class Isis; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis
        class IsoIgrp; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp
        class Mobile; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile
        class Odr; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr
        class Ospf; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf
        class Static_; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_
        class Rip_; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected> connected; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis> isis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr> odr; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf> > ospf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_> rip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap> rip_metric_route_map;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_> static_; // presence node
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected : public Entity
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

        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Connected::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp : public Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Bgp::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp : public Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Eigrp::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis : public Entity
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

        class IsisArea; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea
        class RipIsisRedist; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea> > isis_area;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist> rip_isis_redist;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea : public Entity
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
        class RipIsisRedist; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist> rip_isis_redist;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist : public Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap> rip_metric_route_map;
                class IsisLevelRoutesEnum;

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist : public Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap> rip_metric_route_map;
                class IsisLevelRoutesEnum;

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp : public Entity
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

        class IsoigrpList; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList> > isoigrp_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList : public Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::IsoIgrp::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile : public Entity
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

        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Mobile::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr : public Entity
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

        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Odr::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf : public Entity
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
        class Vrf; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Vrf
        class Match; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match> match;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap> rip_metric_route_map;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Vrf> > vrf;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Vrf : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Vrf


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match : public Entity
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

        class Internal; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal
        class External; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External
        class NssaExternal; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External> external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal> internal; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal : public Entity
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

        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External : public Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal : public Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Ospf::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_ : public Entity
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

        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Static_::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_ : public Entity
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

        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Rip_::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers : public Entity
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

        class Basic; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::Basic

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::Basic> basic;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::Basic : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Timers::Basic


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::PassiveInterface : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::PassiveInterface


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable : public Entity
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

        class PassiveInterface; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::PassiveInterface

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::PassiveInterface> > passive_interface;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::PassiveInterface : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::Disable::PassiveInterface


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare : public Entity
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

        class Min; //type: Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::Min

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::Min> min;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare


class Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::Min : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Unicast::TrafficShare::Min


class Native::Router::Rip::AddressFamily::Ipv4::Vrf : public Entity
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
        YLeaf auto_summary; //type: empty
        YLeaf maximum_paths; //type: uint8
        YLeaf validate_update_source; //type: boolean
        YLeaf default_metric; //type: uint32
        YLeaf version; //type: uint8
        class Neighbor; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Neighbor
        class Network; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Network
        class DefaultInformation; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation
        class Distance; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance
        class DistributeList; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList
        class OffsetList; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::OffsetList
        class Redistribute; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute
        class Timers; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation> default_information;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList> distribute_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Neighbor> > neighbor;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Network> > network;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::OffsetList> > offset_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute> redistribute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Timers> timers;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Neighbor : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Neighbor


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Network : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Network


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation : public Entity
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

        class Originate; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate> originate; // presence node
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate : public Entity
{
    public:
        Originate();
        ~Originate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf route_map; //type: string

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance : public Entity
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
        class DistanceList; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::DistanceList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::DistanceList> > distance_list;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::DistanceList : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Distance::DistanceList


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList : public Entity
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

        class Accesslist; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::Accesslist
        class AccesslistIfname; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistIfname
        class AccesslistPrefixGateway; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGateway
        class AccesslistPrefixGatewayIfname; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGatewayIfname

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::Accesslist> > accesslist;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistIfname> > accesslist_ifname;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGateway> > accesslist_prefix_gateway;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGatewayIfname> > accesslist_prefix_gateway_ifname;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::Accesslist : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::Accesslist


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistIfname : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistIfname


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGateway : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGateway


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGatewayIfname : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGatewayIfname


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::OffsetList : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::OffsetList


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute : public Entity
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

        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap
        class Connected; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected
        class Bgp; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp
        class Eigrp; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp
        class Isis; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis
        class IsoIgrp; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp
        class Mobile; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile
        class Odr; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr
        class Ospf; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf
        class Static_; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_
        class Rip_; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected> connected; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis> isis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr> odr; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf> > ospf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Rip_> rip; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap> rip_metric_route_map;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Static_> static_; // presence node
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected : public Entity
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

        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp : public Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp : public Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis : public Entity
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

        class IsisArea; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea
        class RipIsisRedist; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea> > isis_area;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist> rip_isis_redist;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea : public Entity
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
        class RipIsisRedist; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist> rip_isis_redist;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist : public Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap> rip_metric_route_map;
                class IsisLevelRoutesEnum;

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist : public Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap> rip_metric_route_map;
                class IsisLevelRoutesEnum;

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp : public Entity
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

        class IsoigrpList; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList> > isoigrp_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList : public Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile : public Entity
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

        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr : public Entity
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

        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf : public Entity
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
        class Vrf_; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Vrf_
        class Match; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match> match;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::RipMetricRouteMap> rip_metric_route_map;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Vrf_> > vrf;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Vrf_


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match : public Entity
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

        class Internal; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal
        class External; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External
        class NssaExternal; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External> external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal> internal; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal : public Entity
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

        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric : public Entity
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

}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External : public Entity
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
        class RipMetricRouteMap; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap> rip_metric_route_map;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External


class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap : public Entity
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
        class Metric; //type: Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric> metric;
        
}; // Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap

class Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGateway::PrefixGatewayEnum : public Enum
{
    public:
        static const Enum::YLeaf prefix;
        static const Enum::YLeaf gateway;
        static const Enum::YLeaf route_map;

};

class Native::Router::Rip::AddressFamily::Ipv4::Unicast::DistributeList::AccesslistPrefixGatewayIfname::PrefixGatewayEnum : public Enum
{
    public:
        static const Enum::YLeaf prefix;
        static const Enum::YLeaf gateway;
        static const Enum::YLeaf route_map;

};

class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutesEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};

class Native::Router::Rip::AddressFamily::Ipv4::Unicast::Redistribute::Isis::RipIsisRedist::IsisLevelRoutesEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};

class Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGateway::PrefixGatewayEnum : public Enum
{
    public:
        static const Enum::YLeaf prefix;
        static const Enum::YLeaf gateway;
        static const Enum::YLeaf route_map;

};

class Native::Router::Rip::AddressFamily::Ipv4::Vrf::DistributeList::AccesslistPrefixGatewayIfname::PrefixGatewayEnum : public Enum
{
    public:
        static const Enum::YLeaf prefix;
        static const Enum::YLeaf gateway;
        static const Enum::YLeaf route_map;

};

class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutesEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};

class Native::Router::Rip::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RipIsisRedist::IsisLevelRoutesEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_148_ */

