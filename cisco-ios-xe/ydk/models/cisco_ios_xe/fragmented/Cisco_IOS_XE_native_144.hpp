#ifndef _CISCO_IOS_XE_NATIVE_144_
#define _CISCO_IOS_XE_NATIVE_144_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_142.hpp"
#include "Cisco_IOS_XE_native_143.hpp"
#include "Cisco_IOS_XE_native_84.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey : public Entity
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
        class Md5; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5> md5;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5 : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::HelloInterval : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::HelloInterval


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::DeadInterval : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::DeadInterval


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::RetransmitInterval : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::RetransmitInterval


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TransmitDelay : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TransmitDelay


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Topology : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::Topology


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TtlSecurity : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::TtlSecurity


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::AuthenticationKey : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::AuthenticationKey


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey : public Entity
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
        class Md5; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::Md5> md5;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::Md5 : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Area::VirtualLink::MessageDigestKey::Md5


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::AutoCost : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::AutoCost


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::EventLog : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::EventLog


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Bfd : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Bfd


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::InterfaceId : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::InterfaceId


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::LogAdjacencyChanges : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::LogAdjacencyChanges


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxLsa : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxLsa


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric : public Entity
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

        class RouterLsa; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa> router_lsa; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa : public Entity
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
        class ExternalLsa; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::ExternalLsa
        class OnStartup; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::OnStartup
        class SummaryLsa; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::SummaryLsa

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::ExternalLsa> external_lsa; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::OnStartup> on_startup; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::SummaryLsa> summary_lsa; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::ExternalLsa : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::ExternalLsa


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::OnStartup : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::OnStartup


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::SummaryLsa : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::MaxMetric::RouterLsa::SummaryLsa


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::PassiveInterface : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::PassiveInterface


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable : public Entity
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

        class PassiveInterface; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::PassiveInterface

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::PassiveInterface> > passive_interface;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::PassiveInterface : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Disable::PassiveInterface


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth : public Entity
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

        class Hello; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Hello
        class Update; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Update

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Hello> hello;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Update> update;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Hello : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Hello


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Update : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Update


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers : public Entity
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

        class Lsa; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Lsa
        class Pacing; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Pacing
        class Throttle; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Lsa> lsa;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Pacing> pacing;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle> throttle;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Lsa : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Lsa


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Pacing : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Pacing


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle : public Entity
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

        class Lsa; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa
        class Spf; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Spf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa> lsa;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Spf> spf;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa : public Entity
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

        class All; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa::All

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa::All> all;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa::All : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Lsa::All


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Spf : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Timers::Throttle::Spf


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TrafficShare : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TrafficShare


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TtlSecurity : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::TtlSecurity


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Capability : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Capability


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Compatible : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Compatible


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation : public Entity
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

        class Originate; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate> originate; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DefaultInformation::Originate


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DiscardRoute : public Entity
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

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::DiscardRoute


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance : public Entity
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

        class OspfDistance; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::OspfDistance
        class Ospf; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::Ospf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::Ospf> ospf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::OspfDistance> ospf_distance;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::OspfDistance : public Entity
{
    public:
        OspfDistance();
        ~OspfDistance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf distance; //type: uint32
        YLeaf ip; //type: string
        YLeaf wildcard; //type: string
        YLeaf acl_name; //type: one of union, string

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::OspfDistance


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::Ospf : public Entity
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

        YLeaf external; //type: uint32
        YLeaf inter_area; //type: uint32
        YLeaf intra_area; //type: uint32

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Distance::Ospf


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute : public Entity
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

        class Application; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application
        class Bgp; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp
        class Connected; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected
        class Eigrp; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp
        class Isis; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis
        class IsoIgrp; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp
        class Lisp; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp
        class Mobile; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile
        class Odr; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr
        class Ospf; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf
        class Ospfv3_; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_
        class Rip; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip
        class Static_; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_
        class MaximumPrefix; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix
        class Vrf_; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application> > application;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected> connected; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis> isis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp> lisp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix> maximum_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr> odr; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf> > ospf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_> > ospfv3;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip> > rip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_> static_; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_> vrf;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application : public Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp : public Entity
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
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected : public Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp : public Entity
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

        YLeaf as_number; //type: one of uint32, string
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis : public Entity
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

        YLeaf isis_level_routes; //type: IsisLevelRoutesEnum
        class IsisArea; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RedistOptions

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea> > isis_area;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RedistOptions> redist_options;
                class IsisLevelRoutesEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea : public Entity
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
        YLeaf isis_level_routes; //type: IsisLevelRoutesEnum
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RedistOptions> redist_options;
                class IsisLevelRoutesEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp : public Entity
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

        YLeaf route_map; //type: string
        class AreaTagRouteMapContainer; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer
        class IsoIgrpContainer; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer> area_tag_route_map_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer> iso_igrp_container;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer : public Entity
{
    public:
        AreaTagRouteMapContainer();
        ~AreaTagRouteMapContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_tag; //type: string
        YLeaf route_map; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::AreaTagRouteMapContainer


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer : public Entity
{
    public:
        IsoIgrpContainer();
        ~IsoIgrpContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp : public Entity
{
    public:
        Lisp();
        ~Lisp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile : public Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr : public Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf : public Entity
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

        YLeaf id; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        YLeaf vrf; //type: string
        class Match; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match> match;
                class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match : public Entity
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

        class Internal; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal
        class External; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External
        class NssaExternal; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External> external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal> internal; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal : public Entity
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

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External : public Entity
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
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal : public Entity
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
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_ : public Entity
{
    public:
        Ospfv3_();
        ~Ospfv3_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class Match; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match> match;
                class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match : public Entity
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

        class Internal; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::Internal
        class External; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::External
        class NssaExternal; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::NssaExternal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::External> external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::Internal> internal; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::Internal : public Entity
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

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::Internal


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::External : public Entity
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
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::External


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::NssaExternal : public Entity
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
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::NssaExternal


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip : public Entity
{
    public:
        Rip();
        ~Rip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_ : public Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix : public Entity
{
    public:
        MaximumPrefix();
        ~MaximumPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint32
        class ThresholdWarningOnlyContainer; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer> threshold_warning_only_container;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer : public Entity
{
    public:
        ThresholdWarningOnlyContainer();
        ~ThresholdWarningOnlyContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf threshold; //type: uint32
        YLeaf warning_only; //type: empty

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::MaximumPrefix::ThresholdWarningOnlyContainer


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_ : public Entity
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

        class NonGlobalVrf; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf
        class Global; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global> global;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf> > non_global_vrf;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf : public Entity
{
    public:
        NonGlobalVrf();
        ~NonGlobalVrf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Application; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application
        class Bgp; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp
        class Connected; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected
        class Eigrp; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp
        class Isis; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis
        class IsoIgrp; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp
        class Lisp; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp
        class Mobile; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile
        class Odr; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr
        class Ospf; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf
        class Ospfv3_; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_
        class Rip; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip
        class Static_; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application> > application;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected> connected; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis> isis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp> lisp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile> mobile; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr> odr; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf> > ospf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_> > ospfv3;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip> > rip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_> static_; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application : public Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp : public Entity
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
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected : public Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp : public Entity
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

        YLeaf as_number; //type: one of uint32, string
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis : public Entity
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

        YLeaf isis_level_routes; //type: IsisLevelRoutesEnum
        class IsisArea; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea> > isis_area;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions> redist_options;
                class IsisLevelRoutesEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea : public Entity
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
        YLeaf isis_level_routes; //type: IsisLevelRoutesEnum
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions> redist_options;
                class IsisLevelRoutesEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp : public Entity
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

        YLeaf route_map; //type: string
        class AreaTagRouteMapContainer; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer
        class IsoIgrpContainer; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer> area_tag_route_map_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer> iso_igrp_container;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer : public Entity
{
    public:
        AreaTagRouteMapContainer();
        ~AreaTagRouteMapContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_tag; //type: string
        YLeaf route_map; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::AreaTagRouteMapContainer


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer : public Entity
{
    public:
        IsoIgrpContainer();
        ~IsoIgrpContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp : public Entity
{
    public:
        Lisp();
        ~Lisp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile : public Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr : public Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf : public Entity
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

        YLeaf id; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        YLeaf vrf; //type: string
        class Match; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match> match;
                class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match : public Entity
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

        class Internal; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal
        class External; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External
        class NssaExternal; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External> external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal> internal; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal : public Entity
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

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External : public Entity
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
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal : public Entity
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
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_ : public Entity
{
    public:
        Ospfv3_();
        ~Ospfv3_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class Match; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match> match;
                class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match : public Entity
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

        class Internal; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal
        class External; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External
        class NssaExternal; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External> external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal> internal; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal : public Entity
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

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External : public Entity
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
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal : public Entity
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
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip : public Entity
{
    public:
        Rip();
        ~Rip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: string
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_ : public Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Application; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application
        class Bgp; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp
        class Connected; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected
        class Eigrp; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp
        class Isis; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis
        class IsoIgrp; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp
        class Lisp; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp
        class Mobile; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile
        class Odr; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr
        class Ospf; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf
        class Ospfv3_; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_
        class Rip; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip
        class Static_; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application> > application;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected> connected; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis> isis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp> lisp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile> mobile; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr> odr; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf> > ospf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_> > ospfv3;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Rip> > rip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Static_> static_; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application : public Entity
{
    public:
        Application();
        ~Application();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp : public Entity
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
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected : public Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp : public Entity
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

        YLeaf as_number; //type: one of uint32, string
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis : public Entity
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

        YLeaf isis_level_routes; //type: IsisLevelRoutesEnum
        class IsisArea; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea> > isis_area;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions> redist_options;
                class IsisLevelRoutesEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea : public Entity
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
        YLeaf isis_level_routes; //type: IsisLevelRoutesEnum
        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions> redist_options;
                class IsisLevelRoutesEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp : public Entity
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

        YLeaf route_map; //type: string
        class AreaTagRouteMapContainer; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer
        class IsoIgrpContainer; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer> area_tag_route_map_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer> iso_igrp_container;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer : public Entity
{
    public:
        AreaTagRouteMapContainer();
        ~AreaTagRouteMapContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf area_tag; //type: string
        YLeaf route_map; //type: string

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::AreaTagRouteMapContainer


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer : public Entity
{
    public:
        IsoIgrpContainer();
        ~IsoIgrpContainer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp : public Entity
{
    public:
        Lisp();
        ~Lisp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile : public Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr : public Entity
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

        class RedistOptions; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions> redist_options;
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions : public Entity
{
    public:
        RedistOptions();
        ~RedistOptions();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf tag; //type: uint32
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf nssa_only; //type: empty
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf : public Entity
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

        YLeaf id; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        YLeaf vrf; //type: string
        class Match; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match> match;
                class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match : public Entity
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

        class Internal; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal
        class External; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External
        class NssaExternal; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External> external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal> internal; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal : public Entity
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

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External : public Entity
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
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal : public Entity
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
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_ : public Entity
{
    public:
        Ospfv3_();
        ~Ospfv3_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class Match; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match> match;
                class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match : public Entity
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

        class Internal; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal
        class External; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External
        class NssaExternal; //type: Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::External> external; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal> internal; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::NssaExternal> nssa_external; // presence node
        
}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match


class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal : public Entity
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

        YLeaf metric; //type: uint32
        YLeaf metric_type; //type: MetricTypeEnum
        YLeaf nssa_only; //type: empty
        YLeaf subnets; //type: empty
        YLeaf route_map; //type: string
        YLeaf tag; //type: uint32
        class MetricTypeEnum;

}; // Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Hello::OptionsEnum : public Enum
{
    public:
        static const Enum::YLeaf unlimited;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::QueueDepth::Update::OptionsEnum : public Enum
{
    public:
        static const Enum::YLeaf unlimited;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Capability::CapabilityTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf lls;
        static const Enum::YLeaf opaque;
        static const Enum::YLeaf transit;
        static const Enum::YLeaf vrf_lite;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Application::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Bgp::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Connected::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Eigrp::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisLevelRoutesEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::IsisLevelRoutesEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::IsisArea::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Isis::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::IsoIgrp::IsoIgrpContainer::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Lisp::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Mobile::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Odr::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::Internal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::External::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospf::Match::NssaExternal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::Internal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::External::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Ospfv3_::Match::NssaExternal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Rip::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Static_::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Application::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Bgp::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Connected::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Eigrp::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisLevelRoutesEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::IsisLevelRoutesEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::IsisArea::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Isis::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::IsoIgrp::IsoIgrpContainer::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Lisp::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Mobile::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Odr::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::Internal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::External::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospf::Match::NssaExternal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::Internal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::External::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Ospfv3_::Match::NssaExternal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Rip::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::NonGlobalVrf::Static_::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Application::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Bgp::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Connected::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Eigrp::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisLevelRoutesEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::IsisLevelRoutesEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::IsisArea::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Isis::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::IsoIgrp::IsoIgrpContainer::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Lisp::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Mobile::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Odr::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::Internal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::External::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospf::Match::NssaExternal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospfv3::AddressFamily::Ipv4::Vrf::Redistribute::Vrf_::Global::Ospfv3_::Match::Internal::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_144_ */

