#ifndef _CISCO_IOS_XE_NATIVE_140_
#define _CISCO_IOS_XE_NATIVE_140_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_121.hpp"
#include "Cisco_IOS_XE_native_139.hpp"
#include "Cisco_IOS_XE_native_84.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Router::LispList::Site::Default_ : public Entity
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

        YLeaf description; //type: string
        YLeaf site_id; //type: uint32
        class AuthenticationKey; //type: Native::Router::LispList::Site::Default_::AuthenticationKey
        class AllowedLocator; //type: Native::Router::LispList::Site::Default_::AllowedLocator
        class EidPrefix; //type: Native::Router::LispList::Site::Default_::EidPrefix
        class EidRecord; //type: Native::Router::LispList::Site::Default_::EidRecord

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Site::Default_::AllowedLocator> allowed_locator;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Site::Default_::AuthenticationKey> authentication_key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Site::Default_::EidPrefix> eid_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Site::Default_::EidRecord> eid_record;
        
}; // Native::Router::LispList::Site::Default_


class Native::Router::LispList::Site::Default_::AuthenticationKey : public Entity
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

        YLeaf unc_pwd; //type: string
        YLeaf key_0; //type: string
        YLeaf key_6; //type: string
        YLeaf key_7; //type: string

}; // Native::Router::LispList::Site::Default_::AuthenticationKey


class Native::Router::LispList::Site::Default_::AllowedLocator : public Entity
{
    public:
        AllowedLocator();
        ~AllowedLocator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ls_ipv4; //type: string
        YLeaf ls_ipv6; //type: string
        class List; //type: Native::Router::LispList::Site::Default_::AllowedLocator::List

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Site::Default_::AllowedLocator::List> list;
        
}; // Native::Router::LispList::Site::Default_::AllowedLocator


class Native::Router::LispList::Site::Default_::AllowedLocator::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Native::Router::LispList::Site::Default_::AllowedLocator::List


class Native::Router::LispList::Site::Default_::EidPrefix : public Entity
{
    public:
        EidPrefix();
        ~EidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::LispList::Site::Default_::EidPrefix::Prefixes
        class InstanceId; //type: Native::Router::LispList::Site::Default_::EidPrefix::InstanceId

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Site::Default_::EidPrefix::InstanceId> > instance_id;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Site::Default_::EidPrefix::Prefixes> > prefixes;
        
}; // Native::Router::LispList::Site::Default_::EidPrefix


class Native::Router::LispList::Site::Default_::EidPrefix::Prefixes : public Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf accept_more_specifics; //type: empty
        YLeaf route_tag; //type: uint32

}; // Native::Router::LispList::Site::Default_::EidPrefix::Prefixes


class Native::Router::LispList::Site::Default_::EidPrefix::InstanceId : public Entity
{
    public:
        InstanceId();
        ~InstanceId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::LispList::Site::Default_::EidPrefix::InstanceId::Prefixes

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Site::Default_::EidPrefix::InstanceId::Prefixes> > prefixes;
        
}; // Native::Router::LispList::Site::Default_::EidPrefix::InstanceId


class Native::Router::LispList::Site::Default_::EidPrefix::InstanceId::Prefixes : public Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf accept_more_specifics; //type: empty
        YLeaf route_tag; //type: uint32

}; // Native::Router::LispList::Site::Default_::EidPrefix::InstanceId::Prefixes


class Native::Router::LispList::Site::Default_::EidRecord : public Entity
{
    public:
        EidRecord();
        ~EidRecord();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::LispList::Site::Default_::EidRecord::Prefixes
        class InstanceId; //type: Native::Router::LispList::Site::Default_::EidRecord::InstanceId

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Site::Default_::EidRecord::InstanceId> > instance_id;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Site::Default_::EidRecord::Prefixes> > prefixes;
        
}; // Native::Router::LispList::Site::Default_::EidRecord


class Native::Router::LispList::Site::Default_::EidRecord::Prefixes : public Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf accept_more_specifics; //type: empty
        YLeaf route_tag; //type: uint32

}; // Native::Router::LispList::Site::Default_::EidRecord::Prefixes


class Native::Router::LispList::Site::Default_::EidRecord::InstanceId : public Entity
{
    public:
        InstanceId();
        ~InstanceId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::LispList::Site::Default_::EidRecord::InstanceId::Prefixes

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Site::Default_::EidRecord::InstanceId::Prefixes> > prefixes;
        
}; // Native::Router::LispList::Site::Default_::EidRecord::InstanceId


class Native::Router::LispList::Site::Default_::EidRecord::InstanceId::Prefixes : public Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf accept_more_specifics; //type: empty
        YLeaf route_tag; //type: uint32

}; // Native::Router::LispList::Site::Default_::EidRecord::InstanceId::Prefixes


class Native::Router::LispList::Site::AuthenticationKey : public Entity
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

        YLeaf unc_pwd; //type: string
        YLeaf key_0; //type: string
        YLeaf key_6; //type: string
        YLeaf key_7; //type: string

}; // Native::Router::LispList::Site::AuthenticationKey


class Native::Router::LispList::Site::AllowedLocator : public Entity
{
    public:
        AllowedLocator();
        ~AllowedLocator();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ls_ipv4; //type: string
        YLeaf ls_ipv6; //type: string
        class List; //type: Native::Router::LispList::Site::AllowedLocator::List

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Site::AllowedLocator::List> list;
        
}; // Native::Router::LispList::Site::AllowedLocator


class Native::Router::LispList::Site::AllowedLocator::List : public Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv4; //type: string
        YLeaf ipv6; //type: string

}; // Native::Router::LispList::Site::AllowedLocator::List


class Native::Router::LispList::Site::EidPrefix : public Entity
{
    public:
        EidPrefix();
        ~EidPrefix();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::LispList::Site::EidPrefix::Prefixes
        class InstanceId; //type: Native::Router::LispList::Site::EidPrefix::InstanceId

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Site::EidPrefix::InstanceId> > instance_id;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Site::EidPrefix::Prefixes> > prefixes;
        
}; // Native::Router::LispList::Site::EidPrefix


class Native::Router::LispList::Site::EidPrefix::Prefixes : public Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf accept_more_specifics; //type: empty
        YLeaf route_tag; //type: uint32

}; // Native::Router::LispList::Site::EidPrefix::Prefixes


class Native::Router::LispList::Site::EidPrefix::InstanceId : public Entity
{
    public:
        InstanceId();
        ~InstanceId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::LispList::Site::EidPrefix::InstanceId::Prefixes

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Site::EidPrefix::InstanceId::Prefixes> > prefixes;
        
}; // Native::Router::LispList::Site::EidPrefix::InstanceId


class Native::Router::LispList::Site::EidPrefix::InstanceId::Prefixes : public Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf accept_more_specifics; //type: empty
        YLeaf route_tag; //type: uint32

}; // Native::Router::LispList::Site::EidPrefix::InstanceId::Prefixes


class Native::Router::LispList::Site::EidRecord : public Entity
{
    public:
        EidRecord();
        ~EidRecord();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::LispList::Site::EidRecord::Prefixes
        class InstanceId; //type: Native::Router::LispList::Site::EidRecord::InstanceId

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Site::EidRecord::InstanceId> > instance_id;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Site::EidRecord::Prefixes> > prefixes;
        
}; // Native::Router::LispList::Site::EidRecord


class Native::Router::LispList::Site::EidRecord::Prefixes : public Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf accept_more_specifics; //type: empty
        YLeaf route_tag; //type: uint32

}; // Native::Router::LispList::Site::EidRecord::Prefixes


class Native::Router::LispList::Site::EidRecord::InstanceId : public Entity
{
    public:
        InstanceId();
        ~InstanceId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint32
        YLeaf any_mac; //type: empty
        class Prefixes; //type: Native::Router::LispList::Site::EidRecord::InstanceId::Prefixes

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Site::EidRecord::InstanceId::Prefixes> > prefixes;
        
}; // Native::Router::LispList::Site::EidRecord::InstanceId


class Native::Router::LispList::Site::EidRecord::InstanceId::Prefixes : public Entity
{
    public:
        Prefixes();
        ~Prefixes();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: string
        YLeaf accept_more_specifics; //type: empty
        YLeaf route_tag; //type: uint32

}; // Native::Router::LispList::Site::EidRecord::InstanceId::Prefixes


class Native::Router::LispList::Syslog : public Entity
{
    public:
        Syslog();
        ~Syslog();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf verbose; //type: empty
        class Session; //type: Native::Router::LispList::Syslog::Session

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::LispList::Syslog::Session> session;
        
}; // Native::Router::LispList::Syslog


class Native::Router::LispList::Syslog::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf changes; //type: empty

}; // Native::Router::LispList::Syslog::Session


class Native::Router::Ospf : public Entity
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

        YLeaf id; //type: uint16
        YLeaf vrf; //type: string
        YLeaf router_id; //type: string
        YLeaf nsr; //type: empty
        YLeaf default_metric; //type: uint32
        YLeaf maximum_paths; //type: uint32
        YLeaf domain_tag; //type: uint32
        YLeaf ispf; //type: empty
        YLeaf prefix_suppression; //type: empty
        YLeaf priority; //type: uint8
        YLeaf shutdown; //type: boolean
        class AddressFamily; //type: Native::Router::Ospf::AddressFamily
        class Area; //type: Native::Router::Ospf::Area
        class AutoCost; //type: Native::Router::Ospf::AutoCost
        class EventLog; //type: Native::Router::Ospf::EventLog
        class Bfd; //type: Native::Router::Ospf::Bfd
        class InterfaceId; //type: Native::Router::Ospf::InterfaceId
        class LogAdjacencyChanges; //type: Native::Router::Ospf::LogAdjacencyChanges
        class MaxLsa; //type: Native::Router::Ospf::MaxLsa
        class MaxMetric; //type: Native::Router::Ospf::MaxMetric
        class PassiveInterface; //type: Native::Router::Ospf::PassiveInterface
        class Disable; //type: Native::Router::Ospf::Disable
        class QueueDepth; //type: Native::Router::Ospf::QueueDepth
        class Timers; //type: Native::Router::Ospf::Timers
        class TrafficShare; //type: Native::Router::Ospf::TrafficShare
        class TtlSecurity; //type: Native::Router::Ospf::TtlSecurity
        class Capability; //type: Native::Router::Ospf::Capability
        class Compatible; //type: Native::Router::Ospf::Compatible
        class DefaultInformation; //type: Native::Router::Ospf::DefaultInformation
        class DiscardRoute; //type: Native::Router::Ospf::DiscardRoute
        class Distance; //type: Native::Router::Ospf::Distance
        class Redistribute; //type: Native::Router::Ospf::Redistribute
        class DistributeList; //type: Native::Router::Ospf::DistributeList
        class DomainId; //type: Native::Router::Ospf::DomainId
        class FastReroute; //type: Native::Router::Ospf::FastReroute
        class GracefulRestart; //type: Native::Router::Ospf::GracefulRestart
        class Ignore; //type: Native::Router::Ospf::Ignore
        class Limit; //type: Native::Router::Ospf::Limit
        class LocalRibCriteria; //type: Native::Router::Ospf::LocalRibCriteria
        class Microloop; //type: Native::Router::Ospf::Microloop
        class Mpls; //type: Native::Router::Ospf::Mpls
        class Neighbor; //type: Native::Router::Ospf::Neighbor
        class Network; //type: Native::Router::Ospf::Network
        class Nsf; //type: Native::Router::Ospf::Nsf
        class PrefixPriority; //type: Native::Router::Ospf::PrefixPriority
        class ProcessMinTime; //type: Native::Router::Ospf::ProcessMinTime
        class Snmp; //type: Native::Router::Ospf::Snmp
        class SummaryAddress; //type: Native::Router::Ospf::SummaryAddress

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily> address_family;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area> > area;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AutoCost> auto_cost; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Capability> capability;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Compatible> compatible;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::DefaultInformation> default_information;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Disable> disable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::DiscardRoute> discard_route; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Distance> distance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::DistributeList> distribute_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::DomainId> domain_id;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::EventLog> event_log; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::FastReroute> fast_reroute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::GracefulRestart> graceful_restart; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Ignore> ignore;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::InterfaceId> interface_id;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Limit> limit;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::LocalRibCriteria> local_rib_criteria;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::LogAdjacencyChanges> log_adjacency_changes; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::MaxLsa> max_lsa;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::MaxMetric> max_metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Microloop> microloop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Mpls> mpls;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Neighbor> > neighbor;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Network> > network;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Nsf> nsf; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::PassiveInterface> passive_interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::PrefixPriority> prefix_priority;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::ProcessMinTime> process_min_time;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::QueueDepth> queue_depth;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute> redistribute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Snmp> snmp;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::SummaryAddress> > summary_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Timers> timers;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::TrafficShare> traffic_share;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::TtlSecurity> ttl_security;
        
}; // Native::Router::Ospf


class Native::Router::Ospf::AddressFamily : public Entity
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

        class Ipv4_1; //type: Native::Router::Ospf::AddressFamily::Ipv4_1
        class Ipv4; //type: Native::Router::Ospf::AddressFamily::Ipv4

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4_1> ipv4_1;
        
}; // Native::Router::Ospf::AddressFamily


class Native::Router::Ospf::AddressFamily::Ipv4_1 : public Entity
{
    public:
        Ipv4_1();
        ~Ipv4_1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4> ipv4;
        
}; // Native::Router::Ospf::AddressFamily::Ipv4_1


class Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4 : public Entity
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

        class Snmp; //type: Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp
        class Topology; //type: Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Topology

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp> snmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Topology> topology;
        
}; // Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4


class Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp : public Entity
{
    public:
        Snmp();
        ~Snmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Context; //type: Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp::Context

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp::Context> > context;
        
}; // Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp


class Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp::Context : public Entity
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
        class Community; //type: Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp::Context::Community
        class User; //type: Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp::Context::User

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp::Context::Community> community;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp::Context::User> user;
        
}; // Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp::Context


class Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp::Context::Community : public Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf community_string; //type: string
        class Access; //type: Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp::Context::Community::Access

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp::Context::Community::Access> access;
        
}; // Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp::Context::Community


class Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp::Context::Community::Access : public Entity
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
        YLeaf expanded_acl; //type: uint32
        YLeaf acl_name; //type: string
        YLeaf ipv6; //type: string
        YLeaf ro; //type: empty
        YLeaf rw; //type: empty

}; // Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp::Context::Community::Access


class Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp::Context::User : public Entity
{
    public:
        User();
        ~User();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Permisssion; //type: Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp::Context::User::Permisssion

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp::Context::User::Permisssion> permisssion;
        
}; // Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp::Context::User


class Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp::Context::User::Permisssion : public Entity
{
    public:
        Permisssion();
        ~Permisssion();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf credential; //type: empty
        YLeaf encrypted; //type: empty
        class Access; //type: Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp::Context::User::Permisssion::Access
        class Auth; //type: Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp::Context::User::Permisssion::Auth

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp::Context::User::Permisssion::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp::Context::User::Permisssion::Auth> auth;
        
}; // Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp::Context::User::Permisssion


class Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp::Context::User::Permisssion::Access : public Entity
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

}; // Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp::Context::User::Permisssion::Access


class Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp::Context::User::Permisssion::Auth : public Entity
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

}; // Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Snmp::Context::User::Permisssion::Auth


class Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Topology : public Entity
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

        YLeaf name; //type: string
        YLeaf tid; //type: uint32

}; // Native::Router::Ospf::AddressFamily::Ipv4_1::Ipv4::Topology


class Native::Router::Ospf::AddressFamily::Ipv4 : public Entity
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

        class Unicast; //type: Native::Router::Ospf::AddressFamily::Ipv4::Unicast
        class Multicast; //type: Native::Router::Ospf::AddressFamily::Ipv4::Multicast

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4::Multicast> multicast;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4::Unicast> unicast;
        
}; // Native::Router::Ospf::AddressFamily::Ipv4


class Native::Router::Ospf::AddressFamily::Ipv4::Unicast : public Entity
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

        class Snmp; //type: Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp
        class Topology; //type: Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Topology

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp> snmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Topology> topology;
        
}; // Native::Router::Ospf::AddressFamily::Ipv4::Unicast


class Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp : public Entity
{
    public:
        Snmp();
        ~Snmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Context; //type: Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context> > context;
        
}; // Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp


class Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context : public Entity
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
        class Community; //type: Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community
        class User; //type: Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community> community;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User> user;
        
}; // Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context


class Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community : public Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf community_string; //type: string
        class Access; //type: Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community::Access

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community::Access> access;
        
}; // Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community


class Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community::Access : public Entity
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
        YLeaf expanded_acl; //type: uint32
        YLeaf acl_name; //type: string
        YLeaf ipv6; //type: string
        YLeaf ro; //type: empty
        YLeaf rw; //type: empty

}; // Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::Community::Access


class Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User : public Entity
{
    public:
        User();
        ~User();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Permisssion; //type: Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion> permisssion;
        
}; // Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User


class Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion : public Entity
{
    public:
        Permisssion();
        ~Permisssion();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf credential; //type: empty
        YLeaf encrypted; //type: empty
        class Access; //type: Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Access
        class Auth; //type: Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Auth

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Auth> auth;
        
}; // Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion


class Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Access : public Entity
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

}; // Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Access


class Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Auth : public Entity
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

}; // Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Snmp::Context::User::Permisssion::Auth


class Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Topology : public Entity
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

        YLeaf name; //type: string
        YLeaf tid; //type: uint32

}; // Native::Router::Ospf::AddressFamily::Ipv4::Unicast::Topology


class Native::Router::Ospf::AddressFamily::Ipv4::Multicast : public Entity
{
    public:
        Multicast();
        ~Multicast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Snmp; //type: Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp
        class Topology; //type: Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Topology

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp> snmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Topology> topology;
        
}; // Native::Router::Ospf::AddressFamily::Ipv4::Multicast


class Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp : public Entity
{
    public:
        Snmp();
        ~Snmp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Context; //type: Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context> > context;
        
}; // Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp


class Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context : public Entity
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
        class Community; //type: Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community
        class User; //type: Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community> community;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User> user;
        
}; // Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context


class Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community : public Entity
{
    public:
        Community();
        ~Community();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf community_string; //type: string
        class Access; //type: Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community::Access

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community::Access> access;
        
}; // Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community


class Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community::Access : public Entity
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
        YLeaf expanded_acl; //type: uint32
        YLeaf acl_name; //type: string
        YLeaf ipv6; //type: string
        YLeaf ro; //type: empty
        YLeaf rw; //type: empty

}; // Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::Community::Access


class Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User : public Entity
{
    public:
        User();
        ~User();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Permisssion; //type: Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion> permisssion;
        
}; // Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User


class Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion : public Entity
{
    public:
        Permisssion();
        ~Permisssion();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf credential; //type: empty
        YLeaf encrypted; //type: empty
        class Access; //type: Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Access
        class Auth; //type: Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Auth

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Auth> auth;
        
}; // Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion


class Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Access : public Entity
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

}; // Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Access


class Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Auth : public Entity
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

}; // Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Snmp::Context::User::Permisssion::Auth


class Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Topology : public Entity
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

        YLeaf name; //type: string
        YLeaf tid; //type: uint32

}; // Native::Router::Ospf::AddressFamily::Ipv4::Multicast::Topology


class Native::Router::Ospf::Area : public Entity
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
        class Authentication; //type: Native::Router::Ospf::Area::Authentication
        class Capability; //type: Native::Router::Ospf::Area::Capability
        class FilterList; //type: Native::Router::Ospf::Area::FilterList
        class Nssa; //type: Native::Router::Ospf::Area::Nssa
        class Ipv4Range; //type: Native::Router::Ospf::Area::Ipv4Range
        class Ipv6Range; //type: Native::Router::Ospf::Area::Ipv6Range
        class ShamLink; //type: Native::Router::Ospf::Area::ShamLink
        class Stub; //type: Native::Router::Ospf::Area::Stub
        class VirtualLink; //type: Native::Router::Ospf::Area::VirtualLink

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::Authentication> authentication; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::Capability> capability;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::FilterList> > filter_list;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::Ipv4Range> ipv4_range;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::Ipv6Range> ipv6_range;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::Nssa> nssa; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::ShamLink> > sham_link;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::Stub> stub; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::VirtualLink> > virtual_link;
        
}; // Native::Router::Ospf::Area


class Native::Router::Ospf::Area::Authentication : public Entity
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

}; // Native::Router::Ospf::Area::Authentication


class Native::Router::Ospf::Area::Capability : public Entity
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

}; // Native::Router::Ospf::Area::Capability


class Native::Router::Ospf::Area::FilterList : public Entity
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

}; // Native::Router::Ospf::Area::FilterList


class Native::Router::Ospf::Area::Nssa : public Entity
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
        class DefaultInformationOriginate; //type: Native::Router::Ospf::Area::Nssa::DefaultInformationOriginate
        class Translate; //type: Native::Router::Ospf::Area::Nssa::Translate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::Nssa::DefaultInformationOriginate> default_information_originate; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::Nssa::Translate> translate;
        
}; // Native::Router::Ospf::Area::Nssa


class Native::Router::Ospf::Area::Nssa::DefaultInformationOriginate : public Entity
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
        class Translate; //type: Native::Router::Ospf::Area::Nssa::DefaultInformationOriginate::Translate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::Nssa::DefaultInformationOriginate::Translate> translate;
        
}; // Native::Router::Ospf::Area::Nssa::DefaultInformationOriginate


class Native::Router::Ospf::Area::Nssa::DefaultInformationOriginate::Translate : public Entity
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

        class Type7; //type: Native::Router::Ospf::Area::Nssa::DefaultInformationOriginate::Translate::Type7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::Nssa::DefaultInformationOriginate::Translate::Type7> type7;
        
}; // Native::Router::Ospf::Area::Nssa::DefaultInformationOriginate::Translate


class Native::Router::Ospf::Area::Nssa::DefaultInformationOriginate::Translate::Type7 : public Entity
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

}; // Native::Router::Ospf::Area::Nssa::DefaultInformationOriginate::Translate::Type7


class Native::Router::Ospf::Area::Nssa::Translate : public Entity
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

        class Type7; //type: Native::Router::Ospf::Area::Nssa::Translate::Type7

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::Nssa::Translate::Type7> type7;
        
}; // Native::Router::Ospf::Area::Nssa::Translate


class Native::Router::Ospf::Area::Nssa::Translate::Type7 : public Entity
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

}; // Native::Router::Ospf::Area::Nssa::Translate::Type7


class Native::Router::Ospf::Area::Ipv4Range : public Entity
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

        class Range; //type: Native::Router::Ospf::Area::Ipv4Range::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::Ipv4Range::Range> > range;
        
}; // Native::Router::Ospf::Area::Ipv4Range


class Native::Router::Ospf::Area::Ipv4Range::Range : public Entity
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

}; // Native::Router::Ospf::Area::Ipv4Range::Range


class Native::Router::Ospf::Area::Ipv6Range : public Entity
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

        class Range; //type: Native::Router::Ospf::Area::Ipv6Range::Range

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::Ipv6Range::Range> > range;
        
}; // Native::Router::Ospf::Area::Ipv6Range


class Native::Router::Ospf::Area::Ipv6Range::Range : public Entity
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

}; // Native::Router::Ospf::Area::Ipv6Range::Range


class Native::Router::Ospf::Area::ShamLink : public Entity
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
        class TtlSecurity; //type: Native::Router::Ospf::Area::ShamLink::TtlSecurity

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::ShamLink::TtlSecurity> ttl_security;
        
}; // Native::Router::Ospf::Area::ShamLink


class Native::Router::Ospf::Area::ShamLink::TtlSecurity : public Entity
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

}; // Native::Router::Ospf::Area::ShamLink::TtlSecurity


class Native::Router::Ospf::Area::Stub : public Entity
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

}; // Native::Router::Ospf::Area::Stub


class Native::Router::Ospf::Area::VirtualLink : public Entity
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
        class Authentication; //type: Native::Router::Ospf::Area::VirtualLink::Authentication
        class HelloInterval; //type: Native::Router::Ospf::Area::VirtualLink::HelloInterval
        class DeadInterval; //type: Native::Router::Ospf::Area::VirtualLink::DeadInterval
        class RetransmitInterval; //type: Native::Router::Ospf::Area::VirtualLink::RetransmitInterval
        class TransmitDelay; //type: Native::Router::Ospf::Area::VirtualLink::TransmitDelay
        class Topology; //type: Native::Router::Ospf::Area::VirtualLink::Topology
        class TtlSecurity; //type: Native::Router::Ospf::Area::VirtualLink::TtlSecurity
        class AuthenticationKey; //type: Native::Router::Ospf::Area::VirtualLink::AuthenticationKey
        class MessageDigestKey; //type: Native::Router::Ospf::Area::VirtualLink::MessageDigestKey

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::VirtualLink::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::VirtualLink::AuthenticationKey> authentication_key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::VirtualLink::DeadInterval> dead_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::VirtualLink::HelloInterval> hello_interval;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::VirtualLink::MessageDigestKey> > message_digest_key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::VirtualLink::RetransmitInterval> retransmit_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::VirtualLink::Topology> topology;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::VirtualLink::TransmitDelay> transmit_delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::VirtualLink::TtlSecurity> ttl_security;
        
}; // Native::Router::Ospf::Area::VirtualLink


class Native::Router::Ospf::Area::VirtualLink::Authentication : public Entity
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
        class AuthenticationKey; //type: Native::Router::Ospf::Area::VirtualLink::Authentication::AuthenticationKey
        class MessageDigestKey; //type: Native::Router::Ospf::Area::VirtualLink::Authentication::MessageDigestKey
        class KeyChain; //type: Native::Router::Ospf::Area::VirtualLink::Authentication::KeyChain
        class MessageDigest; //type: Native::Router::Ospf::Area::VirtualLink::Authentication::MessageDigest

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::VirtualLink::Authentication::AuthenticationKey> authentication_key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::VirtualLink::Authentication::KeyChain> key_chain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::VirtualLink::Authentication::MessageDigest> message_digest;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::VirtualLink::Authentication::MessageDigestKey> > message_digest_key;
        
}; // Native::Router::Ospf::Area::VirtualLink::Authentication


class Native::Router::Ospf::Area::VirtualLink::Authentication::AuthenticationKey : public Entity
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

}; // Native::Router::Ospf::Area::VirtualLink::Authentication::AuthenticationKey


class Native::Router::Ospf::Area::VirtualLink::Authentication::MessageDigestKey : public Entity
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
        class Md5; //type: Native::Router::Ospf::Area::VirtualLink::Authentication::MessageDigestKey::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::VirtualLink::Authentication::MessageDigestKey::Md5> md5;
        
}; // Native::Router::Ospf::Area::VirtualLink::Authentication::MessageDigestKey


class Native::Router::Ospf::Area::VirtualLink::Authentication::MessageDigestKey::Md5 : public Entity
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

}; // Native::Router::Ospf::Area::VirtualLink::Authentication::MessageDigestKey::Md5


class Native::Router::Ospf::Area::VirtualLink::Authentication::KeyChain : public Entity
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
        class AuthenticationKey; //type: Native::Router::Ospf::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey
        class MessageDigestKey; //type: Native::Router::Ospf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey> authentication_key;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey> > message_digest_key;
        
}; // Native::Router::Ospf::Area::VirtualLink::Authentication::KeyChain


class Native::Router::Ospf::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey : public Entity
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

}; // Native::Router::Ospf::Area::VirtualLink::Authentication::KeyChain::AuthenticationKey


class Native::Router::Ospf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey : public Entity
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
        class Md5; //type: Native::Router::Ospf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5> md5;
        
}; // Native::Router::Ospf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey


class Native::Router::Ospf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5 : public Entity
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

}; // Native::Router::Ospf::Area::VirtualLink::Authentication::KeyChain::MessageDigestKey::Md5


class Native::Router::Ospf::Area::VirtualLink::Authentication::MessageDigest : public Entity
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

        class AuthenticationKey; //type: Native::Router::Ospf::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey
        class MessageDigestKey; //type: Native::Router::Ospf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey> authentication_key;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey> > message_digest_key;
        
}; // Native::Router::Ospf::Area::VirtualLink::Authentication::MessageDigest


class Native::Router::Ospf::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey : public Entity
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

}; // Native::Router::Ospf::Area::VirtualLink::Authentication::MessageDigest::AuthenticationKey


class Native::Router::Ospf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey : public Entity
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
        class Md5; //type: Native::Router::Ospf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5> md5;
        
}; // Native::Router::Ospf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey


class Native::Router::Ospf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5 : public Entity
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

}; // Native::Router::Ospf::Area::VirtualLink::Authentication::MessageDigest::MessageDigestKey::Md5


class Native::Router::Ospf::Area::VirtualLink::HelloInterval : public Entity
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

}; // Native::Router::Ospf::Area::VirtualLink::HelloInterval


class Native::Router::Ospf::Area::VirtualLink::DeadInterval : public Entity
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

}; // Native::Router::Ospf::Area::VirtualLink::DeadInterval


class Native::Router::Ospf::Area::VirtualLink::RetransmitInterval : public Entity
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

}; // Native::Router::Ospf::Area::VirtualLink::RetransmitInterval


class Native::Router::Ospf::Area::VirtualLink::TransmitDelay : public Entity
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

}; // Native::Router::Ospf::Area::VirtualLink::TransmitDelay


class Native::Router::Ospf::Area::VirtualLink::Topology : public Entity
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

}; // Native::Router::Ospf::Area::VirtualLink::Topology


class Native::Router::Ospf::Area::VirtualLink::TtlSecurity : public Entity
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

}; // Native::Router::Ospf::Area::VirtualLink::TtlSecurity


class Native::Router::Ospf::Area::VirtualLink::AuthenticationKey : public Entity
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

}; // Native::Router::Ospf::Area::VirtualLink::AuthenticationKey


class Native::Router::Ospf::Area::VirtualLink::MessageDigestKey : public Entity
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
        class Md5; //type: Native::Router::Ospf::Area::VirtualLink::MessageDigestKey::Md5

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Area::VirtualLink::MessageDigestKey::Md5> md5;
        
}; // Native::Router::Ospf::Area::VirtualLink::MessageDigestKey


class Native::Router::Ospf::Area::VirtualLink::MessageDigestKey::Md5 : public Entity
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

}; // Native::Router::Ospf::Area::VirtualLink::MessageDigestKey::Md5


class Native::Router::Ospf::AutoCost : public Entity
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

}; // Native::Router::Ospf::AutoCost


class Native::Router::Ospf::EventLog : public Entity
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

}; // Native::Router::Ospf::EventLog


class Native::Router::Ospf::Bfd : public Entity
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

}; // Native::Router::Ospf::Bfd


class Native::Router::Ospf::InterfaceId : public Entity
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

}; // Native::Router::Ospf::InterfaceId


class Native::Router::Ospf::LogAdjacencyChanges : public Entity
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

}; // Native::Router::Ospf::LogAdjacencyChanges


class Native::Router::Ospf::MaxLsa : public Entity
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

}; // Native::Router::Ospf::MaxLsa


class Native::Router::Ospf::MaxMetric : public Entity
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

        class RouterLsa; //type: Native::Router::Ospf::MaxMetric::RouterLsa

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::MaxMetric::RouterLsa> router_lsa; // presence node
        
}; // Native::Router::Ospf::MaxMetric


class Native::Router::Ospf::MaxMetric::RouterLsa : public Entity
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
        class ExternalLsa; //type: Native::Router::Ospf::MaxMetric::RouterLsa::ExternalLsa
        class OnStartup; //type: Native::Router::Ospf::MaxMetric::RouterLsa::OnStartup
        class SummaryLsa; //type: Native::Router::Ospf::MaxMetric::RouterLsa::SummaryLsa

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::MaxMetric::RouterLsa::ExternalLsa> external_lsa; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::MaxMetric::RouterLsa::OnStartup> on_startup; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::MaxMetric::RouterLsa::SummaryLsa> summary_lsa; // presence node
        
}; // Native::Router::Ospf::MaxMetric::RouterLsa


class Native::Router::Ospf::MaxMetric::RouterLsa::ExternalLsa : public Entity
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

}; // Native::Router::Ospf::MaxMetric::RouterLsa::ExternalLsa


class Native::Router::Ospf::MaxMetric::RouterLsa::OnStartup : public Entity
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

}; // Native::Router::Ospf::MaxMetric::RouterLsa::OnStartup


class Native::Router::Ospf::MaxMetric::RouterLsa::SummaryLsa : public Entity
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

}; // Native::Router::Ospf::MaxMetric::RouterLsa::SummaryLsa


class Native::Router::Ospf::PassiveInterface : public Entity
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

}; // Native::Router::Ospf::PassiveInterface


class Native::Router::Ospf::Disable : public Entity
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

        class PassiveInterface; //type: Native::Router::Ospf::Disable::PassiveInterface

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Disable::PassiveInterface> > passive_interface;
        
}; // Native::Router::Ospf::Disable


class Native::Router::Ospf::Disable::PassiveInterface : public Entity
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

}; // Native::Router::Ospf::Disable::PassiveInterface


class Native::Router::Ospf::QueueDepth : public Entity
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

        class Hello; //type: Native::Router::Ospf::QueueDepth::Hello
        class Update; //type: Native::Router::Ospf::QueueDepth::Update

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::QueueDepth::Hello> hello;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::QueueDepth::Update> update;
        
}; // Native::Router::Ospf::QueueDepth


class Native::Router::Ospf::QueueDepth::Hello : public Entity
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

}; // Native::Router::Ospf::QueueDepth::Hello


class Native::Router::Ospf::QueueDepth::Update : public Entity
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

}; // Native::Router::Ospf::QueueDepth::Update


class Native::Router::Ospf::Timers : public Entity
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

        class Lsa; //type: Native::Router::Ospf::Timers::Lsa
        class Pacing; //type: Native::Router::Ospf::Timers::Pacing
        class Throttle; //type: Native::Router::Ospf::Timers::Throttle

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Timers::Lsa> lsa;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Timers::Pacing> pacing;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Timers::Throttle> throttle;
        
}; // Native::Router::Ospf::Timers


class Native::Router::Ospf::Timers::Lsa : public Entity
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

}; // Native::Router::Ospf::Timers::Lsa


class Native::Router::Ospf::Timers::Pacing : public Entity
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

}; // Native::Router::Ospf::Timers::Pacing


class Native::Router::Ospf::Timers::Throttle : public Entity
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

        class Lsa; //type: Native::Router::Ospf::Timers::Throttle::Lsa
        class Spf; //type: Native::Router::Ospf::Timers::Throttle::Spf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Timers::Throttle::Lsa> lsa;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Timers::Throttle::Spf> spf;
        
}; // Native::Router::Ospf::Timers::Throttle


class Native::Router::Ospf::Timers::Throttle::Lsa : public Entity
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

        class All; //type: Native::Router::Ospf::Timers::Throttle::Lsa::All

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Timers::Throttle::Lsa::All> all;
        
}; // Native::Router::Ospf::Timers::Throttle::Lsa


class Native::Router::Ospf::Timers::Throttle::Lsa::All : public Entity
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

}; // Native::Router::Ospf::Timers::Throttle::Lsa::All


class Native::Router::Ospf::Timers::Throttle::Spf : public Entity
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

}; // Native::Router::Ospf::Timers::Throttle::Spf


class Native::Router::Ospf::TrafficShare : public Entity
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

}; // Native::Router::Ospf::TrafficShare


class Native::Router::Ospf::TtlSecurity : public Entity
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

}; // Native::Router::Ospf::TtlSecurity


class Native::Router::Ospf::Capability : public Entity
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

}; // Native::Router::Ospf::Capability


class Native::Router::Ospf::Compatible : public Entity
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

}; // Native::Router::Ospf::Compatible


class Native::Router::Ospf::DefaultInformation : public Entity
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

        class Originate; //type: Native::Router::Ospf::DefaultInformation::Originate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::DefaultInformation::Originate> originate; // presence node
        
}; // Native::Router::Ospf::DefaultInformation


class Native::Router::Ospf::DefaultInformation::Originate : public Entity
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

}; // Native::Router::Ospf::DefaultInformation::Originate


class Native::Router::Ospf::DiscardRoute : public Entity
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

}; // Native::Router::Ospf::DiscardRoute


class Native::Router::Ospf::Distance : public Entity
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

        class OspfDistance; //type: Native::Router::Ospf::Distance::OspfDistance
        class Ospf_; //type: Native::Router::Ospf::Distance::Ospf_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Distance::Ospf_> ospf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Distance::OspfDistance> ospf_distance;
        
}; // Native::Router::Ospf::Distance


class Native::Router::Ospf::Distance::OspfDistance : public Entity
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

}; // Native::Router::Ospf::Distance::OspfDistance


class Native::Router::Ospf::Distance::Ospf_ : public Entity
{
    public:
        Ospf_();
        ~Ospf_();

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

}; // Native::Router::Ospf::Distance::Ospf_


class Native::Router::Ospf::Redistribute : public Entity
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

        class Application; //type: Native::Router::Ospf::Redistribute::Application
        class Bgp; //type: Native::Router::Ospf::Redistribute::Bgp
        class Connected; //type: Native::Router::Ospf::Redistribute::Connected
        class Eigrp; //type: Native::Router::Ospf::Redistribute::Eigrp
        class Isis; //type: Native::Router::Ospf::Redistribute::Isis
        class IsoIgrp; //type: Native::Router::Ospf::Redistribute::IsoIgrp
        class Lisp; //type: Native::Router::Ospf::Redistribute::Lisp
        class Mobile; //type: Native::Router::Ospf::Redistribute::Mobile
        class Odr; //type: Native::Router::Ospf::Redistribute::Odr
        class Ospf_; //type: Native::Router::Ospf::Redistribute::Ospf_
        class Ospfv3; //type: Native::Router::Ospf::Redistribute::Ospfv3
        class Rip; //type: Native::Router::Ospf::Redistribute::Rip
        class Static_; //type: Native::Router::Ospf::Redistribute::Static_
        class MaximumPrefix; //type: Native::Router::Ospf::Redistribute::MaximumPrefix
        class Vrf; //type: Native::Router::Ospf::Redistribute::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Application> > application;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Bgp> > bgp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Connected> connected; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Eigrp> > eigrp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Isis> isis; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::IsoIgrp> iso_igrp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Lisp> lisp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::MaximumPrefix> maximum_prefix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Mobile> mobile; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Odr> odr; // presence node
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Ospf_> > ospf;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Ospfv3> > ospfv3;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Rip> > rip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Static_> static_; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Vrf> vrf;
        
}; // Native::Router::Ospf::Redistribute


class Native::Router::Ospf::Redistribute::Application : public Entity
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
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Application::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Application::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Application


class Native::Router::Ospf::Redistribute::Application::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Application::RedistOptions


class Native::Router::Ospf::Redistribute::Bgp : public Entity
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
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Bgp::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Bgp::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Bgp


class Native::Router::Ospf::Redistribute::Bgp::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Bgp::RedistOptions


class Native::Router::Ospf::Redistribute::Connected : public Entity
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

        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Connected::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Connected::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Connected


class Native::Router::Ospf::Redistribute::Connected::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Connected::RedistOptions


class Native::Router::Ospf::Redistribute::Eigrp : public Entity
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
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Eigrp::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Eigrp::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Eigrp


class Native::Router::Ospf::Redistribute::Eigrp::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Eigrp::RedistOptions


class Native::Router::Ospf::Redistribute::Isis : public Entity
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
        class IsisArea; //type: Native::Router::Ospf::Redistribute::Isis::IsisArea
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Isis::RedistOptions

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Isis::IsisArea> > isis_area;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Isis::RedistOptions> redist_options;
                class IsisLevelRoutesEnum;

}; // Native::Router::Ospf::Redistribute::Isis


class Native::Router::Ospf::Redistribute::Isis::IsisArea : public Entity
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
        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Isis::IsisArea::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Isis::IsisArea::RedistOptions> redist_options;
                class IsisLevelRoutesEnum;

}; // Native::Router::Ospf::Redistribute::Isis::IsisArea


class Native::Router::Ospf::Redistribute::Isis::IsisArea::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Isis::IsisArea::RedistOptions


class Native::Router::Ospf::Redistribute::Isis::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Isis::RedistOptions


class Native::Router::Ospf::Redistribute::IsoIgrp : public Entity
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
        class AreaTagRouteMapContainer; //type: Native::Router::Ospf::Redistribute::IsoIgrp::AreaTagRouteMapContainer
        class IsoIgrpContainer; //type: Native::Router::Ospf::Redistribute::IsoIgrp::IsoIgrpContainer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::IsoIgrp::AreaTagRouteMapContainer> area_tag_route_map_container;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::IsoIgrp::IsoIgrpContainer> iso_igrp_container;
        
}; // Native::Router::Ospf::Redistribute::IsoIgrp


class Native::Router::Ospf::Redistribute::IsoIgrp::AreaTagRouteMapContainer : public Entity
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

}; // Native::Router::Ospf::Redistribute::IsoIgrp::AreaTagRouteMapContainer


class Native::Router::Ospf::Redistribute::IsoIgrp::IsoIgrpContainer : public Entity
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

}; // Native::Router::Ospf::Redistribute::IsoIgrp::IsoIgrpContainer


class Native::Router::Ospf::Redistribute::Lisp : public Entity
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

        class RedistOptions; //type: Native::Router::Ospf::Redistribute::Lisp::RedistOptions

        std::shared_ptr<Cisco_IOS_XE_native::Native::Router::Ospf::Redistribute::Lisp::RedistOptions> redist_options;
        
}; // Native::Router::Ospf::Redistribute::Lisp


class Native::Router::Ospf::Redistribute::Lisp::RedistOptions : public Entity
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

}; // Native::Router::Ospf::Redistribute::Lisp::RedistOptions

class Native::Router::Ospf::Area::FilterList::InOutEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Router::Ospf::QueueDepth::Hello::OptionsEnum : public Enum
{
    public:
        static const Enum::YLeaf unlimited;

};

class Native::Router::Ospf::QueueDepth::Update::OptionsEnum : public Enum
{
    public:
        static const Enum::YLeaf unlimited;

};

class Native::Router::Ospf::Capability::CapabilityTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf lls;
        static const Enum::YLeaf opaque;
        static const Enum::YLeaf transit;
        static const Enum::YLeaf vrf_lite;

};

class Native::Router::Ospf::Redistribute::Application::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Bgp::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Connected::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Eigrp::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Isis::IsisLevelRoutesEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};

class Native::Router::Ospf::Redistribute::Isis::IsisArea::IsisLevelRoutesEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;
        static const Enum::YLeaf level_1_2;

};

class Native::Router::Ospf::Redistribute::Isis::IsisArea::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Isis::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::IsoIgrp::IsoIgrpContainer::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class Native::Router::Ospf::Redistribute::Lisp::RedistOptions::MetricTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_140_ */

