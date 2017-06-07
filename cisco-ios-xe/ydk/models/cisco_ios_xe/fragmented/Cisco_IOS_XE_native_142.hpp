#ifndef _CISCO_IOS_XE_NATIVE_142_
#define _CISCO_IOS_XE_NATIVE_142_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_140.hpp"
#include "Cisco_IOS_XE_native_141.hpp"
#include "Cisco_IOS_XE_native_84.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Router::Ospf::Snmp::Context::User::Permisssion::Access : public Entity
{
    public:
        Access();
        ~Access();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf standard_acl; //type: uint32
        YLeaf acl_name; //type: string
        YLeaf ipv6; //type: string

}; // Native::Router::Ospf::Snmp::Context::User::Permisssion::Access


class Native::Router::Ospf::Snmp::Context::User::Permisssion::Auth : public Entity
{
    public:
        Auth();
        ~Auth();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf md5; //type: string
        YLeaf sha; //type: string

}; // Native::Router::Ospf::Snmp::Context::User::Permisssion::Auth


class Native::Router::Ospf::SummaryAddress : public Entity
{
    public:
        SummaryAddress();
        ~SummaryAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf wildcard; //type: string
        YLeaf nssa_only; //type: empty
        YLeaf tag; //type: uint32
        YLeaf not_advertise; //type: empty

}; // Native::Router::Ospf::SummaryAddress


class Native::Router::Ospfv3 : public Entity
{
    public:
        Ospfv3();
        ~Ospfv3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint16
        YLeaf router_id; //type: string
        YLeaf nsr; //type: empty
        class Area; //type: Native::Router::Ospfv3::Area
        class AutoCost; //type: Native::Router::Ospfv3::AutoCost
        class EventLog; //type: Native::Router::Ospfv3::EventLog
        class Bfd; //type: Native::Router::Ospfv3::Bfd
        class InterfaceId; //type: Native::Router::Ospfv3::InterfaceId
        class LogAdjacencyChanges; //type: Native::Router::Ospfv3::LogAdjacencyChanges
        class MaxLsa; //type: Native::Router::Ospfv3::MaxLsa
        class MaxMetric; //type: Native::Router::Ospfv3::MaxMetric
        class PassiveInterface; //type: Native::Router::Ospfv3::PassiveInterface
        class Disable; //type: Native::Router::Ospfv3::Disable
        class QueueDepth; //type: Native::Router::Ospfv3::QueueDepth
        class Timers; //type: Native::Router::Ospfv3::Timers
        class TrafficShare; //type: Native::Router::Ospfv3::TrafficShare
        class TtlSecurity; //type: Native::Router::Ospfv3::TtlSecurity
        class Authentication; //type: Native::Router::Ospfv3::Authentication
        class GracefulRestart; //type: Native::Router::Ospfv3::GracefulRestart
        class Manet; //type: Native::Router::Ospfv3::Manet
        class AddressFamily; //type: Native::Router::Ospfv3::AddressFamily

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily> address_family;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area> > area;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AutoCost> auto_cost; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Disable> disable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::EventLog> event_log; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::GracefulRestart> graceful_restart; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::InterfaceId> interface_id;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::LogAdjacencyChanges> log_adjacency_changes; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Manet> manet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::MaxLsa> max_lsa;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::MaxMetric> max_metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::PassiveInterface> passive_interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::QueueDepth> queue_depth;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Timers> timers;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::TrafficShare> traffic_share;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::TtlSecurity> ttl_security;
        
}; // Native::Router::Ospfv3


class Native::Router::Ospfv3::Area : public Entity
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

        YLeaf id; //type: one of uint32, string
        YLeaf default_cost; //type: uint32
        class Authentication; //type: Native::Router::Ospfv3::Area::Authentication
        class Capability; //type: Native::Router::Ospfv3::Area::Capability
        class FilterList; //type: Native::Router::Ospfv3::Area::FilterList
        class Nssa; //type: Native::Router::Ospfv3::Area::Nssa
        class Ipv4Range; //type: Native::Router::Ospfv3::Area::Ipv4Range
        class Ipv6Range; //type: Native::Router::Ospfv3::Area::Ipv6Range
        class ShamLink; //type: Native::Router::Ospfv3::Area::ShamLink
        class Stub; //type: Native::Router::Ospfv3::Area::Stub
        class VirtualLink; //type: Native::Router::Ospfv3::Area::VirtualLink

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::Authentication> authentication; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::Capability> capability;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::FilterList> > filter_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::Ipv4Range> ipv4_range;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::Ipv6Range> ipv6_range;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::Nssa> nssa; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::ShamLink> > sham_link;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::Stub> stub; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::VirtualLink> > virtual_link;
        
}; // Native::Router::Ospfv3::Area


class Native::Router::Ospfv3::Area::Authentication : public Entity
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

        YLeaf message_digest; //type: empty

}; // Native::Router::Ospfv3::Area::Authentication


class Native::Router::Ospfv3::Area::Capability : public Entity
{
    public:
        Capability();
        ~Capability();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_exclusion; //type: empty

}; // Native::Router::Ospfv3::Area::Capability


class Native::Router::Ospfv3::Area::FilterList : public Entity
{
    public:
        FilterList();
        ~FilterList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf in_out; //type: InOutEnum
        YLeaf prefix; //type: string
        class InOutEnum;

}; // Native::Router::Ospfv3::Area::FilterList


class Native::Router::Ospfv3::Area::Nssa : public Entity
{
    public:
        Nssa();
        ~Nssa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf no_ext_capability; //type: empty
        YLeaf no_redistribution; //type: empty
        YLeaf no_summary; //type: empty
        YLeaf nssa_only; //type: empty
        class DefaultInformationOriginate; //type: Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate
        class Translate; //type: Native::Router::Ospfv3::Area::Nssa::Translate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate> default_information_originate; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::Nssa::Translate> translate;
        
}; // Native::Router::Ospfv3::Area::Nssa


class Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate : public Entity
{
    public:
        DefaultInformationOriginate();
        ~DefaultInformationOriginate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: int32
        YLeaf metric_type; //type: uint32
        YLeaf no_ext_capability; //type: empty
        YLeaf no_redistribution; //type: empty
        YLeaf no_summary; //type: empty
        YLeaf nssa_only; //type: empty
        class Translate; //type: Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate> translate;
        
}; // Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate


class Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate : public Entity
{
    public:
        Translate();
        ~Translate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Type7; //type: Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate::Type7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate::Type7> type7;
        
}; // Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate


class Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate::Type7 : public Entity
{
    public:
        Type7();
        ~Type7();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf always; //type: empty
        YLeaf suppress_fa; //type: empty

}; // Native::Router::Ospfv3::Area::Nssa::DefaultInformationOriginate::Translate::Type7


class Native::Router::Ospfv3::Area::Nssa::Translate : public Entity
{
    public:
        Translate();
        ~Translate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Type7; //type: Native::Router::Ospfv3::Area::Nssa::Translate::Type7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::Nssa::Translate::Type7> type7;
        
}; // Native::Router::Ospfv3::Area::Nssa::Translate


class Native::Router::Ospfv3::Area::Nssa::Translate::Type7 : public Entity
{
    public:
        Type7();
        ~Type7();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf always; //type: empty
        YLeaf suppress_fa; //type: empty

}; // Native::Router::Ospfv3::Area::Nssa::Translate::Type7


class Native::Router::Ospfv3::Area::Ipv4Range : public Entity
{
    public:
        Ipv4Range();
        ~Ipv4Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Range; //type: Native::Router::Ospfv3::Area::Ipv4Range::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::Ipv4Range::Range> > range;
        
}; // Native::Router::Ospfv3::Area::Ipv4Range


class Native::Router::Ospfv3::Area::Ipv4Range::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf mask; //type: string
        YLeaf advertise; //type: empty
        YLeaf not_advertise; //type: empty
        YLeaf cost; //type: uint32

}; // Native::Router::Ospfv3::Area::Ipv4Range::Range


class Native::Router::Ospfv3::Area::Ipv6Range : public Entity
{
    public:
        Ipv6Range();
        ~Ipv6Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Range; //type: Native::Router::Ospfv3::Area::Ipv6Range::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::Ipv6Range::Range> > range;
        
}; // Native::Router::Ospfv3::Area::Ipv6Range


class Native::Router::Ospfv3::Area::Ipv6Range::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf advertise; //type: empty
        YLeaf not_advertise; //type: empty
        YLeaf cost; //type: uint32

}; // Native::Router::Ospfv3::Area::Ipv6Range::Range


class Native::Router::Ospfv3::Area::ShamLink : public Entity
{
    public:
        ShamLink();
        ~ShamLink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source; //type: string
        YLeaf dest; //type: string
        YLeaf cost; //type: uint16
        class TtlSecurity; //type: Native::Router::Ospfv3::Area::ShamLink::TtlSecurity

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::ShamLink::TtlSecurity> ttl_security;
        
}; // Native::Router::Ospfv3::Area::ShamLink


class Native::Router::Ospfv3::Area::ShamLink::TtlSecurity : public Entity
{
    public:
        TtlSecurity();
        ~TtlSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hops; //type: uint8

}; // Native::Router::Ospfv3::Area::ShamLink::TtlSecurity


class Native::Router::Ospfv3::Area::Stub : public Entity
{
    public:
        Stub();
        ~Stub();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf no_ext_capability; //type: empty
        YLeaf no_summary; //type: empty

}; // Native::Router::Ospfv3::Area::Stub


class Native::Router::Ospfv3::Area::VirtualLink : public Entity
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

        YLeaf id; //type: string
        class Authentication; //type: Native::Router::Ospfv3::Area::VirtualLink::Authentication
        class HelloInterval; //type: Native::Router::Ospfv3::Area::VirtualLink::HelloInterval
        class DeadInterval; //type: Native::Router::Ospfv3::Area::VirtualLink::DeadInterval
        class RetransmitInterval; //type: Native::Router::Ospfv3::Area::VirtualLink::RetransmitInterval
        class TransmitDelay; //type: Native::Router::Ospfv3::Area::VirtualLink::TransmitDelay
        class Topology; //type: Native::Router::Ospfv3::Area::VirtualLink::Topology
        class TtlSecurity; //type: Native::Router::Ospfv3::Area::VirtualLink::TtlSecurity
        class AuthenticationKey; //type: Native::Router::Ospfv3::Area::VirtualLink::AuthenticationKey
        class MessageDigestKey; //type: Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::VirtualLink::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::VirtualLink::AuthenticationKey> authentication_key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::VirtualLink::DeadInterval> dead_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::VirtualLink::HelloInterval> hello_interval;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey> > message_digest_key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::VirtualLink::RetransmitInterval> retransmit_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::VirtualLink::Topology> topology;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::VirtualLink::TransmitDelay> transmit_delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::VirtualLink::TtlSecurity> ttl_security;
        
}; // Native::Router::Ospfv3::Area::VirtualLink


class Native::Router::Ospfv3::Area::VirtualLink::Authentication : public Entity
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

        YLeaf null; //type: empty
        class AuthenticationKey; //type: Native::Router::Ospfv3::Area::VirtualLink::Authentication::AuthenticationKey
        class MessageDigestKey; //type: Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey
        class KeyChain; //type: Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain
        class MessageDigest; //type: Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::VirtualLink::Authentication::AuthenticationKey> authentication_key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain> key_chain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest> message_digest;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey> > message_digest_key;
        
}; // Native::Router::Ospfv3::Area::VirtualLink::Authentication


class Native::Router::Ospfv3::Area::VirtualLink::Authentication::AuthenticationKey : public Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auth_type; //type: uint8
        YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::Area::VirtualLink::Authentication::AuthenticationKey


class Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey : public Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint8
        class Md5; //type: Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey::Md5> md5;
        
}; // Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey


class Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey::Md5 : public Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auth_type; //type: uint8
        YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigestKey::Md5


class Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain : public Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class AuthenticationKey; //type: Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey
        class MessageDigestKey; //type: Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey> authentication_key;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey> > message_digest_key;
        
}; // Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain


class Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey : public Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auth_type; //type: uint8
        YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey


class Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey : public Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint8
        class Md5; //type: Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5> md5;
        
}; // Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey


class Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5 : public Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auth_type; //type: uint8
        YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5


class Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest : public Entity
{
    public:
        MessageDigest();
        ~MessageDigest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AuthenticationKey; //type: Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey
        class MessageDigestKey; //type: Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey> authentication_key;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey> > message_digest_key;
        
}; // Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest


class Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey : public Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auth_type; //type: uint8
        YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey


class Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey : public Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint8
        class Md5; //type: Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5> md5;
        
}; // Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey


class Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5 : public Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auth_type; //type: uint8
        YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5


class Native::Router::Ospfv3::Area::VirtualLink::HelloInterval : public Entity
{
    public:
        HelloInterval();
        ~HelloInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hello_interval_value; //type: int32

}; // Native::Router::Ospfv3::Area::VirtualLink::HelloInterval


class Native::Router::Ospfv3::Area::VirtualLink::DeadInterval : public Entity
{
    public:
        DeadInterval();
        ~DeadInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dead_interval_value; //type: uint16

}; // Native::Router::Ospfv3::Area::VirtualLink::DeadInterval


class Native::Router::Ospfv3::Area::VirtualLink::RetransmitInterval : public Entity
{
    public:
        RetransmitInterval();
        ~RetransmitInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf retransmit_interval_value; //type: uint16

}; // Native::Router::Ospfv3::Area::VirtualLink::RetransmitInterval


class Native::Router::Ospfv3::Area::VirtualLink::TransmitDelay : public Entity
{
    public:
        TransmitDelay();
        ~TransmitDelay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit_delay_value; //type: uint16

}; // Native::Router::Ospfv3::Area::VirtualLink::TransmitDelay


class Native::Router::Ospfv3::Area::VirtualLink::Topology : public Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Router::Ospfv3::Area::VirtualLink::Topology


class Native::Router::Ospfv3::Area::VirtualLink::TtlSecurity : public Entity
{
    public:
        TtlSecurity();
        ~TtlSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hops; //type: uint8

}; // Native::Router::Ospfv3::Area::VirtualLink::TtlSecurity


class Native::Router::Ospfv3::Area::VirtualLink::AuthenticationKey : public Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auth_type; //type: uint8
        YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::Area::VirtualLink::AuthenticationKey


class Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey : public Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint8
        class Md5; //type: Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey::Md5> md5;
        
}; // Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey


class Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey::Md5 : public Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auth_type; //type: uint8
        YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::Area::VirtualLink::MessageDigestKey::Md5


class Native::Router::Ospfv3::AutoCost : public Entity
{
    public:
        AutoCost();
        ~AutoCost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reference_bandwidth; //type: uint32

}; // Native::Router::Ospfv3::AutoCost


class Native::Router::Ospfv3::EventLog : public Entity
{
    public:
        EventLog();
        ~EventLog();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf one_shot; //type: empty
        YLeaf pause; //type: empty
        YLeaf size; //type: uint32

}; // Native::Router::Ospfv3::EventLog


class Native::Router::Ospfv3::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_interfaces; //type: empty

}; // Native::Router::Ospfv3::Bfd


class Native::Router::Ospfv3::InterfaceId : public Entity
{
    public:
        InterfaceId();
        ~InterfaceId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf snmp_if_index; //type: empty

}; // Native::Router::Ospfv3::InterfaceId


class Native::Router::Ospfv3::LogAdjacencyChanges : public Entity
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

        YLeaf detail; //type: empty

}; // Native::Router::Ospfv3::LogAdjacencyChanges


class Native::Router::Ospfv3::MaxLsa : public Entity
{
    public:
        MaxLsa();
        ~MaxLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf ignore_count; //type: uint32
        YLeaf ignore_time; //type: uint32
        YLeaf reset_time; //type: uint32
        YLeaf warning_only; //type: empty

}; // Native::Router::Ospfv3::MaxLsa


class Native::Router::Ospfv3::MaxMetric : public Entity
{
    public:
        MaxMetric();
        ~MaxMetric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RouterLsa; //type: Native::Router::Ospfv3::MaxMetric::RouterLsa

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::MaxMetric::RouterLsa> router_lsa; // presence node
        
}; // Native::Router::Ospfv3::MaxMetric


class Native::Router::Ospfv3::MaxMetric::RouterLsa : public Entity
{
    public:
        RouterLsa();
        ~RouterLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf include_stub; //type: empty
        class ExternalLsa; //type: Native::Router::Ospfv3::MaxMetric::RouterLsa::ExternalLsa
        class OnStartup; //type: Native::Router::Ospfv3::MaxMetric::RouterLsa::OnStartup
        class SummaryLsa; //type: Native::Router::Ospfv3::MaxMetric::RouterLsa::SummaryLsa

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::MaxMetric::RouterLsa::ExternalLsa> external_lsa; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::MaxMetric::RouterLsa::OnStartup> on_startup; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::MaxMetric::RouterLsa::SummaryLsa> summary_lsa; // presence node
        
}; // Native::Router::Ospfv3::MaxMetric::RouterLsa


class Native::Router::Ospfv3::MaxMetric::RouterLsa::ExternalLsa : public Entity
{
    public:
        ExternalLsa();
        ~ExternalLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32

}; // Native::Router::Ospfv3::MaxMetric::RouterLsa::ExternalLsa


class Native::Router::Ospfv3::MaxMetric::RouterLsa::OnStartup : public Entity
{
    public:
        OnStartup();
        ~OnStartup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time; //type: uint32
        YLeaf wait_for_bgp; //type: empty

}; // Native::Router::Ospfv3::MaxMetric::RouterLsa::OnStartup


class Native::Router::Ospfv3::MaxMetric::RouterLsa::SummaryLsa : public Entity
{
    public:
        SummaryLsa();
        ~SummaryLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32

}; // Native::Router::Ospfv3::MaxMetric::RouterLsa::SummaryLsa


class Native::Router::Ospfv3::PassiveInterface : public Entity
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

}; // Native::Router::Ospfv3::PassiveInterface


class Native::Router::Ospfv3::Disable : public Entity
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

        class PassiveInterface; //type: Native::Router::Ospfv3::Disable::PassiveInterface

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Disable::PassiveInterface> > passive_interface;
        
}; // Native::Router::Ospfv3::Disable


class Native::Router::Ospfv3::Disable::PassiveInterface : public Entity
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

}; // Native::Router::Ospfv3::Disable::PassiveInterface


class Native::Router::Ospfv3::QueueDepth : public Entity
{
    public:
        QueueDepth();
        ~QueueDepth();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Hello; //type: Native::Router::Ospfv3::QueueDepth::Hello
        class Update; //type: Native::Router::Ospfv3::QueueDepth::Update

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::QueueDepth::Hello> hello;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::QueueDepth::Update> update;
        
}; // Native::Router::Ospfv3::QueueDepth


class Native::Router::Ospfv3::QueueDepth::Hello : public Entity
{
    public:
        Hello();
        ~Hello();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf options; //type: one of uint32, enumeration
        class OptionsEnum;

}; // Native::Router::Ospfv3::QueueDepth::Hello


class Native::Router::Ospfv3::QueueDepth::Update : public Entity
{
    public:
        Update();
        ~Update();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf options; //type: one of uint32, enumeration
        class OptionsEnum;

}; // Native::Router::Ospfv3::QueueDepth::Update


class Native::Router::Ospfv3::Timers : public Entity
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

        class Lsa; //type: Native::Router::Ospfv3::Timers::Lsa
        class Pacing; //type: Native::Router::Ospfv3::Timers::Pacing
        class Throttle; //type: Native::Router::Ospfv3::Timers::Throttle

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Timers::Lsa> lsa;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Timers::Pacing> pacing;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Timers::Throttle> throttle;
        
}; // Native::Router::Ospfv3::Timers


class Native::Router::Ospfv3::Timers::Lsa : public Entity
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

        YLeaf arrival; //type: uint32

}; // Native::Router::Ospfv3::Timers::Lsa


class Native::Router::Ospfv3::Timers::Pacing : public Entity
{
    public:
        Pacing();
        ~Pacing();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flood; //type: uint32
        YLeaf lsa_group; //type: uint32
        YLeaf retransmission; //type: uint32

}; // Native::Router::Ospfv3::Timers::Pacing


class Native::Router::Ospfv3::Timers::Throttle : public Entity
{
    public:
        Throttle();
        ~Throttle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Lsa; //type: Native::Router::Ospfv3::Timers::Throttle::Lsa
        class Spf; //type: Native::Router::Ospfv3::Timers::Throttle::Spf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Timers::Throttle::Lsa> lsa;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Timers::Throttle::Spf> spf;
        
}; // Native::Router::Ospfv3::Timers::Throttle


class Native::Router::Ospfv3::Timers::Throttle::Lsa : public Entity
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

        class All; //type: Native::Router::Ospfv3::Timers::Throttle::Lsa::All

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Timers::Throttle::Lsa::All> all;
        
}; // Native::Router::Ospfv3::Timers::Throttle::Lsa


class Native::Router::Ospfv3::Timers::Throttle::Lsa::All : public Entity
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

        YLeaf delay; //type: uint32
        YLeaf min_delay; //type: uint32
        YLeaf max_delay; //type: uint32

}; // Native::Router::Ospfv3::Timers::Throttle::Lsa::All


class Native::Router::Ospfv3::Timers::Throttle::Spf : public Entity
{
    public:
        Spf();
        ~Spf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf delay; //type: uint32
        YLeaf min_delay; //type: uint32
        YLeaf max_delay; //type: uint32

}; // Native::Router::Ospfv3::Timers::Throttle::Spf


class Native::Router::Ospfv3::TrafficShare : public Entity
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

        YLeaf min; //type: empty
        YLeaf across_interfaces; //type: empty

}; // Native::Router::Ospfv3::TrafficShare


class Native::Router::Ospfv3::TtlSecurity : public Entity
{
    public:
        TtlSecurity();
        ~TtlSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_interfaces; //type: empty
        YLeaf hops; //type: uint8

}; // Native::Router::Ospfv3::TtlSecurity


class Native::Router::Ospfv3::Authentication : public Entity
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

        YLeaf mode; //type: ModeEnum
        class ModeEnum;

}; // Native::Router::Ospfv3::Authentication


class Native::Router::Ospfv3::GracefulRestart : public Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf restart_interval; //type: uint16
        class Helper; //type: Native::Router::Ospfv3::GracefulRestart::Helper

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::GracefulRestart::Helper> helper; // presence node
        
}; // Native::Router::Ospfv3::GracefulRestart


class Native::Router::Ospfv3::GracefulRestart::Helper : public Entity
{
    public:
        Helper();
        ~Helper();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty
        YLeaf strict_lsa_checking; //type: empty

}; // Native::Router::Ospfv3::GracefulRestart::Helper


class Native::Router::Ospfv3::Manet : public Entity
{
    public:
        Manet();
        ~Manet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hello; //type: HelloEnum
        YLeaf willingness; //type: uint8
        class Cache; //type: Native::Router::Ospfv3::Manet::Cache
        class Peering; //type: Native::Router::Ospfv3::Manet::Peering

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Manet::Cache> cache;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Manet::Peering> peering;
                class HelloEnum;

}; // Native::Router::Ospfv3::Manet


class Native::Router::Ospfv3::Manet::Cache : public Entity
{
    public:
        Cache();
        ~Cache();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acknowledgement; //type: uint64
        YLeaf update; //type: uint64

}; // Native::Router::Ospfv3::Manet::Cache


class Native::Router::Ospfv3::Manet::Peering : public Entity
{
    public:
        Peering();
        ~Peering();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Selective; //type: Native::Router::Ospfv3::Manet::Peering::Selective

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::Manet::Peering::Selective> selective;
        
}; // Native::Router::Ospfv3::Manet::Peering


class Native::Router::Ospfv3::Manet::Peering::Selective : public Entity
{
    public:
        Selective();
        ~Selective();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty
        YLeaf per_interface; //type: empty
        YLeaf redundancy; //type: uint8

}; // Native::Router::Ospfv3::Manet::Peering::Selective


class Native::Router::Ospfv3::AddressFamily : public Entity
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

        class Ipv4; //type: Native::Router::Ospfv3::AddressFamily::Ipv4
        class Ipv6; //type: Native::Router::Ospfv3::AddressFamily::Ipv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv6> ipv6;
        
}; // Native::Router::Ospfv3::AddressFamily


class Native::Router::Ospfv3::AddressFamily::Ipv4 : public Entity
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

        class Unicast; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast
        class Vrf; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast> unicast; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf> > vrf;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast : public Entity
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

        YLeaf router_id; //type: string
        YLeaf nsr; //type: empty
        YLeaf default_metric; //type: uint32
        YLeaf maximum_paths; //type: uint32
        class Area; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area
        class AutoCost; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::AutoCost
        class EventLog; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::EventLog
        class Bfd; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Bfd
        class InterfaceId; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::InterfaceId
        class LogAdjacencyChanges; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::LogAdjacencyChanges
        class MaxLsa; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::MaxLsa
        class MaxMetric; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::MaxMetric
        class PassiveInterface; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::PassiveInterface
        class Disable; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Disable
        class QueueDepth; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::QueueDepth
        class Timers; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers
        class TrafficShare; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TrafficShare
        class TtlSecurity; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TtlSecurity
        class Capability; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Capability
        class Compatible; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Compatible
        class DefaultInformation; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::DefaultInformation
        class DiscardRoute; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::DiscardRoute
        class Distance; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Distance
        class Redistribute; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute
        class Authentication; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Authentication
        class GracefulRestart; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::GracefulRestart
        class Manet; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Manet
        class SummaryPrefix; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::SummaryPrefix

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area> > area;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::AutoCost> auto_cost; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Capability> capability;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Compatible> compatible;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::DefaultInformation> default_information;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Disable> disable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::DiscardRoute> discard_route; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::EventLog> event_log; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::GracefulRestart> graceful_restart; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::InterfaceId> interface_id;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::LogAdjacencyChanges> log_adjacency_changes; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Manet> manet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::MaxLsa> max_lsa;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::MaxMetric> max_metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::PassiveInterface> passive_interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::QueueDepth> queue_depth;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Redistribute> redistribute;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::SummaryPrefix> > summary_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers> timers;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TrafficShare> traffic_share;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TtlSecurity> ttl_security;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area : public Entity
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

        YLeaf id; //type: one of uint32, string
        YLeaf default_cost; //type: uint32
        class Authentication; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Authentication
        class Capability; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Capability
        class FilterList; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::FilterList
        class Nssa; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Nssa
        class Ipv4Range; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Ipv4Range
        class Ipv6Range; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Ipv6Range
        class ShamLink; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::ShamLink
        class Stub; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Stub
        class VirtualLink; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Authentication> authentication; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Capability> capability;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::FilterList> > filter_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Ipv4Range> ipv4_range;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Ipv6Range> ipv6_range;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Nssa> nssa; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::ShamLink> > sham_link;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Stub> stub; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink> > virtual_link;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Authentication : public Entity
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

        YLeaf message_digest; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Authentication


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Capability : public Entity
{
    public:
        Capability();
        ~Capability();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_exclusion; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Capability


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::FilterList : public Entity
{
    public:
        FilterList();
        ~FilterList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf in_out; //type: InOutEnum
        YLeaf prefix; //type: string
        class InOutEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::FilterList


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Nssa : public Entity
{
    public:
        Nssa();
        ~Nssa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf no_ext_capability; //type: empty
        YLeaf no_redistribution; //type: empty
        YLeaf no_summary; //type: empty
        YLeaf nssa_only; //type: empty
        class DefaultInformationOriginate; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Nssa::DefaultInformationOriginate
        class Translate; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Nssa::Translate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Nssa::DefaultInformationOriginate> default_information_originate; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Nssa::Translate> translate;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Nssa


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Nssa::DefaultInformationOriginate : public Entity
{
    public:
        DefaultInformationOriginate();
        ~DefaultInformationOriginate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: int32
        YLeaf metric_type; //type: uint32
        YLeaf no_ext_capability; //type: empty
        YLeaf no_redistribution; //type: empty
        YLeaf no_summary; //type: empty
        YLeaf nssa_only; //type: empty
        class Translate; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Nssa::DefaultInformationOriginate::Translate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Nssa::DefaultInformationOriginate::Translate> translate;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Nssa::DefaultInformationOriginate


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Nssa::DefaultInformationOriginate::Translate : public Entity
{
    public:
        Translate();
        ~Translate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Type7; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Nssa::DefaultInformationOriginate::Translate::Type7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Nssa::DefaultInformationOriginate::Translate::Type7> type7;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Nssa::DefaultInformationOriginate::Translate


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Nssa::DefaultInformationOriginate::Translate::Type7 : public Entity
{
    public:
        Type7();
        ~Type7();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf always; //type: empty
        YLeaf suppress_fa; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Nssa::DefaultInformationOriginate::Translate::Type7


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Nssa::Translate : public Entity
{
    public:
        Translate();
        ~Translate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Type7; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Nssa::Translate::Type7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Nssa::Translate::Type7> type7;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Nssa::Translate


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Nssa::Translate::Type7 : public Entity
{
    public:
        Type7();
        ~Type7();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf always; //type: empty
        YLeaf suppress_fa; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Nssa::Translate::Type7


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Ipv4Range : public Entity
{
    public:
        Ipv4Range();
        ~Ipv4Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Range; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Ipv4Range::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Ipv4Range::Range> > range;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Ipv4Range


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Ipv4Range::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf mask; //type: string
        YLeaf advertise; //type: empty
        YLeaf not_advertise; //type: empty
        YLeaf cost; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Ipv4Range::Range


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Ipv6Range : public Entity
{
    public:
        Ipv6Range();
        ~Ipv6Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Range; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Ipv6Range::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Ipv6Range::Range> > range;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Ipv6Range


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Ipv6Range::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        YLeaf advertise; //type: empty
        YLeaf not_advertise; //type: empty
        YLeaf cost; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Ipv6Range::Range


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::ShamLink : public Entity
{
    public:
        ShamLink();
        ~ShamLink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source; //type: string
        YLeaf dest; //type: string
        YLeaf cost; //type: uint16
        class TtlSecurity; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::ShamLink::TtlSecurity

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::ShamLink::TtlSecurity> ttl_security;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::ShamLink


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::ShamLink::TtlSecurity : public Entity
{
    public:
        TtlSecurity();
        ~TtlSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hops; //type: uint8

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::ShamLink::TtlSecurity


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Stub : public Entity
{
    public:
        Stub();
        ~Stub();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf no_ext_capability; //type: empty
        YLeaf no_summary; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::Stub


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink : public Entity
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

        YLeaf id; //type: string
        class Authentication; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication
        class HelloInterval; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::HelloInterval
        class DeadInterval; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::DeadInterval
        class RetransmitInterval; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::RetransmitInterval
        class TransmitDelay; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::TransmitDelay
        class Topology; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Topology
        class TtlSecurity; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::TtlSecurity
        class AuthenticationKey; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::AuthenticationKey
        class MessageDigestKey; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::MessageDigestKey

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::AuthenticationKey> authentication_key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::DeadInterval> dead_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::HelloInterval> hello_interval;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::MessageDigestKey> > message_digest_key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::RetransmitInterval> retransmit_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Topology> topology;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::TransmitDelay> transmit_delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::TtlSecurity> ttl_security;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication : public Entity
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

        YLeaf null; //type: empty
        class AuthenticationKey; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::AuthenticationKey
        class MessageDigestKey; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::MessageDigestKey
        class KeyChain; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::KeyChain
        class MessageDigest; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::MessageDigest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::AuthenticationKey> authentication_key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::KeyChain> key_chain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::MessageDigest> message_digest;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::MessageDigestKey> > message_digest_key;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::AuthenticationKey : public Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auth_type; //type: uint8
        YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::AuthenticationKey


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::MessageDigestKey : public Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint8
        class Md5; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::MessageDigestKey::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::MessageDigestKey::Md5> md5;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::MessageDigestKey


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::MessageDigestKey::Md5 : public Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auth_type; //type: uint8
        YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::MessageDigestKey::Md5


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::KeyChain : public Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class AuthenticationKey; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey
        class MessageDigestKey; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey> authentication_key;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey> > message_digest_key;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::KeyChain


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey : public Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auth_type; //type: uint8
        YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey : public Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint8
        class Md5; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5> md5;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5 : public Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auth_type; //type: uint8
        YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::MessageDigest : public Entity
{
    public:
        MessageDigest();
        ~MessageDigest();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AuthenticationKey; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey
        class MessageDigestKey; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey> authentication_key;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey> > message_digest_key;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::MessageDigest


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey : public Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auth_type; //type: uint8
        YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey : public Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint8
        class Md5; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5> md5;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5 : public Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auth_type; //type: uint8
        YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::HelloInterval : public Entity
{
    public:
        HelloInterval();
        ~HelloInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hello_interval_value; //type: int32

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::HelloInterval


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::DeadInterval : public Entity
{
    public:
        DeadInterval();
        ~DeadInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dead_interval_value; //type: uint16

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::DeadInterval


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::RetransmitInterval : public Entity
{
    public:
        RetransmitInterval();
        ~RetransmitInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf retransmit_interval_value; //type: uint16

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::RetransmitInterval


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::TransmitDelay : public Entity
{
    public:
        TransmitDelay();
        ~TransmitDelay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transmit_delay_value; //type: uint16

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::TransmitDelay


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Topology : public Entity
{
    public:
        Topology();
        ~Topology();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::Topology


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::TtlSecurity : public Entity
{
    public:
        TtlSecurity();
        ~TtlSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf hops; //type: uint8

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::TtlSecurity


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::AuthenticationKey : public Entity
{
    public:
        AuthenticationKey();
        ~AuthenticationKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auth_type; //type: uint8
        YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::AuthenticationKey


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::MessageDigestKey : public Entity
{
    public:
        MessageDigestKey();
        ~MessageDigestKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint8
        class Md5; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::MessageDigestKey::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::MessageDigestKey::Md5> md5;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::MessageDigestKey


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::MessageDigestKey::Md5 : public Entity
{
    public:
        Md5();
        ~Md5();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auth_type; //type: uint8
        YLeaf auth_key; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::VirtualLink::MessageDigestKey::Md5


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::AutoCost : public Entity
{
    public:
        AutoCost();
        ~AutoCost();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf reference_bandwidth; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::AutoCost


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::EventLog : public Entity
{
    public:
        EventLog();
        ~EventLog();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf one_shot; //type: empty
        YLeaf pause; //type: empty
        YLeaf size; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::EventLog


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Bfd : public Entity
{
    public:
        Bfd();
        ~Bfd();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_interfaces; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Bfd


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::InterfaceId : public Entity
{
    public:
        InterfaceId();
        ~InterfaceId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf snmp_if_index; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::InterfaceId


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::LogAdjacencyChanges : public Entity
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

        YLeaf detail; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::LogAdjacencyChanges


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::MaxLsa : public Entity
{
    public:
        MaxLsa();
        ~MaxLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        YLeaf threshold_value; //type: uint32
        YLeaf ignore_count; //type: uint32
        YLeaf ignore_time; //type: uint32
        YLeaf reset_time; //type: uint32
        YLeaf warning_only; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::MaxLsa


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::MaxMetric : public Entity
{
    public:
        MaxMetric();
        ~MaxMetric();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RouterLsa; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::MaxMetric::RouterLsa

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::MaxMetric::RouterLsa> router_lsa; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::MaxMetric


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::MaxMetric::RouterLsa : public Entity
{
    public:
        RouterLsa();
        ~RouterLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf include_stub; //type: empty
        class ExternalLsa; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::MaxMetric::RouterLsa::ExternalLsa
        class OnStartup; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::MaxMetric::RouterLsa::OnStartup
        class SummaryLsa; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::MaxMetric::RouterLsa::SummaryLsa

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::MaxMetric::RouterLsa::ExternalLsa> external_lsa; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::MaxMetric::RouterLsa::OnStartup> on_startup; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::MaxMetric::RouterLsa::SummaryLsa> summary_lsa; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::MaxMetric::RouterLsa


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::MaxMetric::RouterLsa::ExternalLsa : public Entity
{
    public:
        ExternalLsa();
        ~ExternalLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::MaxMetric::RouterLsa::ExternalLsa


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::MaxMetric::RouterLsa::OnStartup : public Entity
{
    public:
        OnStartup();
        ~OnStartup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time; //type: uint32
        YLeaf wait_for_bgp; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::MaxMetric::RouterLsa::OnStartup


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::MaxMetric::RouterLsa::SummaryLsa : public Entity
{
    public:
        SummaryLsa();
        ~SummaryLsa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::MaxMetric::RouterLsa::SummaryLsa


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::PassiveInterface : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::PassiveInterface


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Disable : public Entity
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

        class PassiveInterface; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Disable::PassiveInterface

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Disable::PassiveInterface> > passive_interface;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Disable


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Disable::PassiveInterface : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Disable::PassiveInterface


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::QueueDepth : public Entity
{
    public:
        QueueDepth();
        ~QueueDepth();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Hello; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::QueueDepth::Hello
        class Update; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::QueueDepth::Update

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::QueueDepth::Hello> hello;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::QueueDepth::Update> update;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::QueueDepth


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::QueueDepth::Hello : public Entity
{
    public:
        Hello();
        ~Hello();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf options; //type: one of uint32, enumeration
        class OptionsEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::QueueDepth::Hello


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::QueueDepth::Update : public Entity
{
    public:
        Update();
        ~Update();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf options; //type: one of uint32, enumeration
        class OptionsEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::QueueDepth::Update


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers : public Entity
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

        class Lsa; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Lsa
        class Pacing; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Pacing
        class Throttle; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Lsa> lsa;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Pacing> pacing;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle> throttle;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Lsa : public Entity
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

        YLeaf arrival; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Lsa


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Pacing : public Entity
{
    public:
        Pacing();
        ~Pacing();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flood; //type: uint32
        YLeaf lsa_group; //type: uint32
        YLeaf retransmission; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Pacing


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle : public Entity
{
    public:
        Throttle();
        ~Throttle();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Lsa; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa
        class Spf; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Spf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa> lsa;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Spf> spf;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa : public Entity
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

        class All; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::All

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::All> all;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::All : public Entity
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

        YLeaf delay; //type: uint32
        YLeaf min_delay; //type: uint32
        YLeaf max_delay; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Lsa::All


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Spf : public Entity
{
    public:
        Spf();
        ~Spf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf delay; //type: uint32
        YLeaf min_delay; //type: uint32
        YLeaf max_delay; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Timers::Throttle::Spf


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TrafficShare : public Entity
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

        YLeaf min; //type: empty
        YLeaf across_interfaces; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TrafficShare


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TtlSecurity : public Entity
{
    public:
        TtlSecurity();
        ~TtlSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf all_interfaces; //type: empty
        YLeaf hops; //type: uint8

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::TtlSecurity


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Capability : public Entity
{
    public:
        Capability();
        ~Capability();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf capability_type; //type: CapabilityTypeEnum
        class CapabilityTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Capability


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Compatible : public Entity
{
    public:
        Compatible();
        ~Compatible();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rfc1583; //type: empty
        YLeaf rfc1587; //type: empty
        YLeaf rfc5243; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Compatible


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::DefaultInformation : public Entity
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

        class Originate; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::DefaultInformation::Originate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::DefaultInformation::Originate> originate; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::DefaultInformation


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::DefaultInformation::Originate : public Entity
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

        YLeaf always; //type: empty
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: uint32
        YLeaf route_map; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::DefaultInformation::Originate


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::DiscardRoute : public Entity
{
    public:
        DiscardRoute();
        ~DiscardRoute();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf external; //type: empty
        YLeaf internal; //type: empty
        YLeaf metric; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::DiscardRoute


class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Distance : public Entity
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

        class OspfDistance; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Distance::OspfDistance
        class Ospf; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Distance::Ospf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Distance::Ospf> ospf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Distance::OspfDistance> ospf_distance;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Distance

class Native::Router::Ospfv3::Area::FilterList::InOutEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Router::Ospfv3::QueueDepth::Hello::OptionsEnum : public Enum
{
    public:
        static const Enum::YLeaf unlimited;

};

class Native::Router::Ospfv3::QueueDepth::Update::OptionsEnum : public Enum
{
    public:
        static const Enum::YLeaf unlimited;

};

class Native::Router::Ospfv3::Authentication::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf deployment;
        static const Enum::YLeaf strict;

};

class Native::Router::Ospfv3::Manet::HelloEnum : public Enum
{
    public:
        static const Enum::YLeaf unicast;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Area::FilterList::InOutEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::QueueDepth::Hello::OptionsEnum : public Enum
{
    public:
        static const Enum::YLeaf unlimited;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::QueueDepth::Update::OptionsEnum : public Enum
{
    public:
        static const Enum::YLeaf unlimited;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Unicast::Capability::CapabilityTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf lls;
        static const Enum::YLeaf opaque;
        static const Enum::YLeaf transit;
        static const Enum::YLeaf vrf_lite;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_142_ */

