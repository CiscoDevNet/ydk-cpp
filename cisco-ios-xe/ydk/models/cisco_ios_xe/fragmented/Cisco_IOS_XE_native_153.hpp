#ifndef _CISCO_IOS_XE_NATIVE_153_
#define _CISCO_IOS_XE_NATIVE_153_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_151.hpp"
#include "Cisco_IOS_XE_native_152.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Line::Vty::Padding : public Entity
{
    public:
        Padding();
        ~Padding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf character; //type: one of uint8, string
        YLeaf null; //type: uint8

}; // Native::Line::Vty::Padding


class Native::Line::Vty::Parity : public Entity
{
    public:
        Parity();
        ~Parity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf even; //type: empty
        YLeaf mark; //type: empty
        YLeaf none; //type: empty
        YLeaf odd; //type: empty
        YLeaf space; //type: empty

}; // Native::Line::Vty::Parity


class Native::Line::Vty::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level; //type: uint8
        YLeaf type; //type: TypeEnum
        YLeaf secret; //type: string
        class TypeEnum;

}; // Native::Line::Vty::Password


class Native::Line::Vty::Prc : public Entity
{
    public:
        Prc();
        ~Prc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf expose; //type: empty
        YLeaf hide; //type: empty

}; // Native::Line::Vty::Prc


class Native::Line::Vty::Privilege : public Entity
{
    public:
        Privilege();
        ~Privilege();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Level; //type: Native::Line::Vty::Privilege::Level

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Privilege::Level> level; // presence node
        
}; // Native::Line::Vty::Privilege


class Native::Line::Vty::Privilege::Level : public Entity
{
    public:
        Level();
        ~Level();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint8

}; // Native::Line::Vty::Privilege::Level


class Native::Line::Vty::SessionTimeout : public Entity
{
    public:
        SessionTimeout();
        ~SessionTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf session_timeout_value; //type: uint16
        YLeaf output; //type: empty

}; // Native::Line::Vty::SessionTimeout


class Native::Line::Vty::Timeout : public Entity
{
    public:
        Timeout();
        ~Timeout();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf login; //type: empty

}; // Native::Line::Vty::Timeout


class Native::Line::Vty::Telnet : public Entity
{
    public:
        Telnet();
        ~Telnet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf transparent; //type: empty

}; // Native::Line::Vty::Telnet


class Native::Line::Vty::Transport : public Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Input; //type: Native::Line::Vty::Transport::Input
        class Output; //type: Native::Line::Vty::Transport::Output
        class Preferred; //type: Native::Line::Vty::Transport::Preferred

        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Transport::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Transport::Output> output;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Line::Vty::Transport::Preferred> preferred; // presence node
        
}; // Native::Line::Vty::Transport


class Native::Line::Vty::Transport::Input : public Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList input; //type: list of  InputEnum
        class InputEnum;

}; // Native::Line::Vty::Transport::Input


class Native::Line::Vty::Transport::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList output; //type: list of  OutputEnum
        class OutputEnum;

}; // Native::Line::Vty::Transport::Output


class Native::Line::Vty::Transport::Preferred : public Entity
{
    public:
        Preferred();
        ~Preferred();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol; //type: ProtocolEnum
        class ProtocolEnum;

}; // Native::Line::Vty::Transport::Preferred


class Native::Line::Vty::UsbInactivityTimeout : public Entity
{
    public:
        UsbInactivityTimeout();
        ~UsbInactivityTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switch; //type: empty

}; // Native::Line::Vty::UsbInactivityTimeout


class Native::Line::Vty::VacantMessage : public Entity
{
    public:
        VacantMessage();
        ~VacantMessage();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf banner; //type: string

}; // Native::Line::Vty::VacantMessage


class Native::Ntp : public Entity
{
    public:
        Ntp();
        ~Ntp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf authenticate; //type: empty
        YLeaf broadcastdelay; //type: uint32
        YLeaf clock_period; //type: uint32
        YLeaf logging; //type: empty
        YLeaf max_associations; //type: uint32
        YLeaf maxdistance; //type: uint8
        YLeaf mindistance; //type: uint16
        YLeaf orphan; //type: uint8
        YLeaf passive; //type: empty
        YLeaf update_calendar; //type: empty
        class AccessGroup; //type: Native::Ntp::AccessGroup
        class Allow; //type: Native::Ntp::Allow
        class AuthenticationKey; //type: Native::Ntp::AuthenticationKey
        class Master; //type: Native::Ntp::Master
        class Panic; //type: Native::Ntp::Panic
        class Peer; //type: Native::Ntp::Peer
        class Server; //type: Native::Ntp::Server
        class Source; //type: Native::Ntp::Source
        class TrustedKey; //type: Native::Ntp::TrustedKey

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup> access_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Allow> allow;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AuthenticationKey> > authentication_key;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Master> master; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Panic> panic;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Server> server;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Source> source;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::TrustedKey> > trusted_key;
        
}; // Native::Ntp


class Native::Ntp::AccessGroup : public Entity
{
    public:
        AccessGroup();
        ~AccessGroup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Native::Ntp::AccessGroup::Ipv4
        class Ipv6; //type: Native::Ntp::AccessGroup::Ipv6
        class Peer; //type: Native::Ntp::AccessGroup::Peer
        class QueryOnly; //type: Native::Ntp::AccessGroup::QueryOnly
        class Serve; //type: Native::Ntp::AccessGroup::Serve
        class ServeOnly; //type: Native::Ntp::AccessGroup::ServeOnly

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv4> ipv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup::QueryOnly> query_only;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Serve> serve;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup::ServeOnly> serve_only;
        
}; // Native::Ntp::AccessGroup


class Native::Ntp::AccessGroup::Ipv4 : public Entity
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

        class Peer; //type: Native::Ntp::AccessGroup::Ipv4::Peer
        class QueryOnly; //type: Native::Ntp::AccessGroup::Ipv4::QueryOnly
        class Serve; //type: Native::Ntp::AccessGroup::Ipv4::Serve
        class ServeOnly; //type: Native::Ntp::AccessGroup::Ipv4::ServeOnly

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv4::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv4::QueryOnly> query_only;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv4::Serve> serve;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv4::ServeOnly> serve_only;
        
}; // Native::Ntp::AccessGroup::Ipv4


class Native::Ntp::AccessGroup::Ipv4::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl; //type: one of uint16, string
        YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Ipv4::Peer


class Native::Ntp::AccessGroup::Ipv4::QueryOnly : public Entity
{
    public:
        QueryOnly();
        ~QueryOnly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl; //type: one of uint16, string
        YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Ipv4::QueryOnly


class Native::Ntp::AccessGroup::Ipv4::Serve : public Entity
{
    public:
        Serve();
        ~Serve();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl; //type: one of uint16, string
        YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Ipv4::Serve


class Native::Ntp::AccessGroup::Ipv4::ServeOnly : public Entity
{
    public:
        ServeOnly();
        ~ServeOnly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl; //type: one of uint16, string
        YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Ipv4::ServeOnly


class Native::Ntp::AccessGroup::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Peer; //type: Native::Ntp::AccessGroup::Ipv6::Peer
        class QueryOnly; //type: Native::Ntp::AccessGroup::Ipv6::QueryOnly
        class Serve; //type: Native::Ntp::AccessGroup::Ipv6::Serve
        class ServeOnly; //type: Native::Ntp::AccessGroup::Ipv6::ServeOnly

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv6::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv6::QueryOnly> query_only;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv6::Serve> serve;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::AccessGroup::Ipv6::ServeOnly> serve_only;
        
}; // Native::Ntp::AccessGroup::Ipv6


class Native::Ntp::AccessGroup::Ipv6::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl; //type: one of uint16, string
        YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Ipv6::Peer


class Native::Ntp::AccessGroup::Ipv6::QueryOnly : public Entity
{
    public:
        QueryOnly();
        ~QueryOnly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl; //type: one of uint16, string
        YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Ipv6::QueryOnly


class Native::Ntp::AccessGroup::Ipv6::Serve : public Entity
{
    public:
        Serve();
        ~Serve();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl; //type: one of uint16, string
        YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Ipv6::Serve


class Native::Ntp::AccessGroup::Ipv6::ServeOnly : public Entity
{
    public:
        ServeOnly();
        ~ServeOnly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl; //type: one of uint16, string
        YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Ipv6::ServeOnly


class Native::Ntp::AccessGroup::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl; //type: one of uint16, string
        YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Peer


class Native::Ntp::AccessGroup::QueryOnly : public Entity
{
    public:
        QueryOnly();
        ~QueryOnly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl; //type: one of uint16, string
        YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::QueryOnly


class Native::Ntp::AccessGroup::Serve : public Entity
{
    public:
        Serve();
        ~Serve();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl; //type: one of uint16, string
        YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::Serve


class Native::Ntp::AccessGroup::ServeOnly : public Entity
{
    public:
        ServeOnly();
        ~ServeOnly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl; //type: one of uint16, string
        YLeaf kod; //type: empty

}; // Native::Ntp::AccessGroup::ServeOnly


class Native::Ntp::Allow : public Entity
{
    public:
        Allow();
        ~Allow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Mode; //type: Native::Ntp::Allow::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Allow::Mode> mode;
        
}; // Native::Ntp::Allow


class Native::Ntp::Allow::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf private_; //type: empty
        class Control; //type: Native::Ntp::Allow::Mode::Control

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Allow::Mode::Control> control; // presence node
        
}; // Native::Ntp::Allow::Mode


class Native::Ntp::Allow::Mode::Control : public Entity
{
    public:
        Control();
        ~Control();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf delay; //type: uint8

}; // Native::Ntp::Allow::Mode::Control


class Native::Ntp::AuthenticationKey : public Entity
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

        YLeaf number; //type: uint32
        YLeaf md5; //type: string
        YLeaf encryption_type; //type: uint32

}; // Native::Ntp::AuthenticationKey


class Native::Ntp::Master : public Entity
{
    public:
        Master();
        ~Master();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf stratum_number; //type: uint8

}; // Native::Ntp::Master


class Native::Ntp::Panic : public Entity
{
    public:
        Panic();
        ~Panic();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf update; //type: empty

}; // Native::Ntp::Panic


class Native::Ntp::Peer : public Entity
{
    public:
        Peer();
        ~Peer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServerList; //type: Native::Ntp::Peer::ServerList
        class Ip; //type: Native::Ntp::Peer::Ip
        class Ipv6; //type: Native::Ntp::Peer::Ipv6
        class Vrf; //type: Native::Ntp::Peer::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Peer::Ip> > ip;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Peer::Ipv6> > ipv6;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Peer::ServerList> > server_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Peer::Vrf> > vrf;
        
}; // Native::Ntp::Peer


class Native::Ntp::Peer::ServerList : public Entity
{
    public:
        ServerList();
        ~ServerList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_address; //type: string
        YLeaf burst; //type: empty
        YLeaf iburst; //type: empty
        YLeaf key; //type: uint32
        YLeaf maxpoll; //type: uint8
        YLeaf minpoll; //type: uint8
        YLeaf prefer; //type: empty
        YLeaf source; //type: string
        YLeaf version; //type: uint8

}; // Native::Ntp::Peer::ServerList


class Native::Ntp::Peer::Ip : public Entity
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

        YLeaf host_name; //type: string
        YLeaf burst; //type: empty
        YLeaf iburst; //type: empty
        YLeaf key; //type: uint32
        YLeaf maxpoll; //type: uint8
        YLeaf minpoll; //type: uint8
        YLeaf prefer; //type: empty
        YLeaf source; //type: string
        YLeaf version; //type: uint8

}; // Native::Ntp::Peer::Ip


class Native::Ntp::Peer::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf host_name; //type: string
        YLeaf burst; //type: empty
        YLeaf iburst; //type: empty
        YLeaf key; //type: uint32
        YLeaf maxpoll; //type: uint8
        YLeaf minpoll; //type: uint8
        YLeaf prefer; //type: empty
        YLeaf source; //type: string
        YLeaf version; //type: uint8

}; // Native::Ntp::Peer::Ipv6


class Native::Ntp::Peer::Vrf : public Entity
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
        class ServerList; //type: Native::Ntp::Peer::Vrf::ServerList
        class Ip; //type: Native::Ntp::Peer::Vrf::Ip
        class Ipv6; //type: Native::Ntp::Peer::Vrf::Ipv6

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Peer::Vrf::Ip> > ip;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Peer::Vrf::Ipv6> > ipv6;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Peer::Vrf::ServerList> > server_list;
        
}; // Native::Ntp::Peer::Vrf


class Native::Ntp::Peer::Vrf::ServerList : public Entity
{
    public:
        ServerList();
        ~ServerList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_address; //type: string
        YLeaf burst; //type: empty
        YLeaf iburst; //type: empty
        YLeaf key; //type: uint32
        YLeaf maxpoll; //type: uint8
        YLeaf minpoll; //type: uint8
        YLeaf prefer; //type: empty
        YLeaf source; //type: string
        YLeaf version; //type: uint8

}; // Native::Ntp::Peer::Vrf::ServerList


class Native::Ntp::Peer::Vrf::Ip : public Entity
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

        YLeaf host_name; //type: string
        YLeaf burst; //type: empty
        YLeaf iburst; //type: empty
        YLeaf key; //type: uint32
        YLeaf maxpoll; //type: uint8
        YLeaf minpoll; //type: uint8
        YLeaf prefer; //type: empty
        YLeaf source; //type: string
        YLeaf version; //type: uint8

}; // Native::Ntp::Peer::Vrf::Ip


class Native::Ntp::Peer::Vrf::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf host_name; //type: string
        YLeaf burst; //type: empty
        YLeaf iburst; //type: empty
        YLeaf key; //type: uint32
        YLeaf maxpoll; //type: uint8
        YLeaf minpoll; //type: uint8
        YLeaf prefer; //type: empty
        YLeaf source; //type: string
        YLeaf version; //type: uint8

}; // Native::Ntp::Peer::Vrf::Ipv6


class Native::Ntp::Server : public Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ServerList; //type: Native::Ntp::Server::ServerList
        class Ip; //type: Native::Ntp::Server::Ip
        class Ipv6; //type: Native::Ntp::Server::Ipv6
        class Vrf; //type: Native::Ntp::Server::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Server::Ip> > ip;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Server::Ipv6> > ipv6;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Server::ServerList> > server_list;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Server::Vrf> > vrf;
        
}; // Native::Ntp::Server


class Native::Ntp::Server::ServerList : public Entity
{
    public:
        ServerList();
        ~ServerList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_address; //type: string
        YLeaf burst; //type: empty
        YLeaf iburst; //type: empty
        YLeaf key; //type: uint32
        YLeaf maxpoll; //type: uint8
        YLeaf minpoll; //type: uint8
        YLeaf prefer; //type: empty
        YLeaf source; //type: string
        YLeaf version; //type: uint8

}; // Native::Ntp::Server::ServerList


class Native::Ntp::Server::Ip : public Entity
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

        YLeaf host_name; //type: string
        YLeaf burst; //type: empty
        YLeaf iburst; //type: empty
        YLeaf key; //type: uint32
        YLeaf maxpoll; //type: uint8
        YLeaf minpoll; //type: uint8
        YLeaf prefer; //type: empty
        YLeaf source; //type: string
        YLeaf version; //type: uint8

}; // Native::Ntp::Server::Ip


class Native::Ntp::Server::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf host_name; //type: string
        YLeaf burst; //type: empty
        YLeaf iburst; //type: empty
        YLeaf key; //type: uint32
        YLeaf maxpoll; //type: uint8
        YLeaf minpoll; //type: uint8
        YLeaf prefer; //type: empty
        YLeaf source; //type: string
        YLeaf version; //type: uint8

}; // Native::Ntp::Server::Ipv6


class Native::Ntp::Server::Vrf : public Entity
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
        class ServerList; //type: Native::Ntp::Server::Vrf::ServerList
        class Ip; //type: Native::Ntp::Server::Vrf::Ip
        class Ipv6; //type: Native::Ntp::Server::Vrf::Ipv6

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Server::Vrf::Ip> > ip;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Server::Vrf::Ipv6> > ipv6;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Server::Vrf::ServerList> > server_list;
        
}; // Native::Ntp::Server::Vrf


class Native::Ntp::Server::Vrf::ServerList : public Entity
{
    public:
        ServerList();
        ~ServerList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip_address; //type: string
        YLeaf burst; //type: empty
        YLeaf iburst; //type: empty
        YLeaf key; //type: uint32
        YLeaf maxpoll; //type: uint8
        YLeaf minpoll; //type: uint8
        YLeaf prefer; //type: empty
        YLeaf source; //type: string
        YLeaf version; //type: uint8

}; // Native::Ntp::Server::Vrf::ServerList


class Native::Ntp::Server::Vrf::Ip : public Entity
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

        YLeaf host_name; //type: string
        YLeaf burst; //type: empty
        YLeaf iburst; //type: empty
        YLeaf key; //type: uint32
        YLeaf maxpoll; //type: uint8
        YLeaf minpoll; //type: uint8
        YLeaf prefer; //type: empty
        YLeaf source; //type: string
        YLeaf version; //type: uint8

}; // Native::Ntp::Server::Vrf::Ip


class Native::Ntp::Server::Vrf::Ipv6 : public Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf host_name; //type: string
        YLeaf burst; //type: empty
        YLeaf iburst; //type: empty
        YLeaf key; //type: uint32
        YLeaf maxpoll; //type: uint8
        YLeaf minpoll; //type: uint8
        YLeaf prefer; //type: empty
        YLeaf source; //type: string
        YLeaf version; //type: uint8

}; // Native::Ntp::Server::Vrf::Ipv6


class Native::Ntp::Source : public Entity
{
    public:
        Source();
        ~Source();

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
        class AtmSubinterface; //type: Native::Ntp::Source::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Ntp::Source::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Ntp::Source::LispSubinterface
        class PortChannelSubinterface; //type: Native::Ntp::Source::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Source::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Source::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Source::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ntp::Source::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Ntp::Source


class Native::Ntp::Source::AtmSubinterface : public Entity
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

}; // Native::Ntp::Source::AtmSubinterface


class Native::Ntp::Source::AtmAcrsubinterface : public Entity
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

}; // Native::Ntp::Source::AtmAcrsubinterface


class Native::Ntp::Source::LispSubinterface : public Entity
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

}; // Native::Ntp::Source::LispSubinterface


class Native::Ntp::Source::PortChannelSubinterface : public Entity
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

}; // Native::Ntp::Source::PortChannelSubinterface


class Native::Ntp::TrustedKey : public Entity
{
    public:
        TrustedKey();
        ~TrustedKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint16
        YLeaf end_key; //type: uint16

}; // Native::Ntp::TrustedKey


class Native::Wsma : public Entity
{
    public:
        Wsma();
        ~Wsma();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Agent; //type: Native::Wsma::Agent
        class Profile; //type: Native::Wsma::Profile

        std::shared_ptr<Cisco_IOS_XE_native::Native::Wsma::Agent> agent;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Wsma::Profile> profile;
        
}; // Native::Wsma


class Native::Wsma::Agent : public Entity
{
    public:
        Agent();
        ~Agent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Exec; //type: Native::Wsma::Agent::Exec
        class Config; //type: Native::Wsma::Agent::Config
        class Filesys; //type: Native::Wsma::Agent::Filesys
        class Notify; //type: Native::Wsma::Agent::Notify

        std::shared_ptr<Cisco_IOS_XE_native::Native::Wsma::Agent::Config> config;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Wsma::Agent::Exec> exec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Wsma::Agent::Filesys> filesys;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Wsma::Agent::Notify> notify;
        
}; // Native::Wsma::Agent


class Native::Wsma::Agent::Exec : public Entity
{
    public:
        Exec();
        ~Exec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList profile; //type: list of  string

}; // Native::Wsma::Agent::Exec


class Native::Wsma::Agent::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList profile; //type: list of  string

}; // Native::Wsma::Agent::Config


class Native::Wsma::Agent::Filesys : public Entity
{
    public:
        Filesys();
        ~Filesys();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList profile; //type: list of  string

}; // Native::Wsma::Agent::Filesys


class Native::Wsma::Agent::Notify : public Entity
{
    public:
        Notify();
        ~Notify();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList profile; //type: list of  string

}; // Native::Wsma::Agent::Notify


class Native::Wsma::Profile : public Entity
{
    public:
        Profile();
        ~Profile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Listener; //type: Native::Wsma::Profile::Listener

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Wsma::Profile::Listener> > listener;
        
}; // Native::Wsma::Profile


class Native::Wsma::Profile::Listener : public Entity
{
    public:
        Listener();
        ~Listener();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf transport; //type: TransportEnum
        class TransportEnum;

}; // Native::Wsma::Profile::Listener


class Native::Event : public Entity
{
    public:
        Event();
        ~Event();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Manager; //type: Native::Event::Manager

        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager> manager;
        
}; // Native::Event


class Native::Event::Manager : public Entity
{
    public:
        Manager();
        ~Manager();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Environment; //type: Native::Event::Manager::Environment
        class Directory; //type: Native::Event::Manager::Directory
        class Session; //type: Native::Event::Manager::Session
        class Applet; //type: Native::Event::Manager::Applet

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet> > applet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Directory> directory;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Environment> > environment;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Session> session;
        
}; // Native::Event::Manager


class Native::Event::Manager::Environment : public Entity
{
    public:
        Environment();
        ~Environment();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf value_; //type: string

}; // Native::Event::Manager::Environment


class Native::Event::Manager::Directory : public Entity
{
    public:
        Directory();
        ~Directory();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class User; //type: Native::Event::Manager::Directory::User

        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Directory::User> user;
        
}; // Native::Event::Manager::Directory


class Native::Event::Manager::Directory::User : public Entity
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

        YLeaf policy; //type: string

}; // Native::Event::Manager::Directory::User


class Native::Event::Manager::Session : public Entity
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

        class Cli; //type: Native::Event::Manager::Session::Cli

        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Session::Cli> cli;
        
}; // Native::Event::Manager::Session


class Native::Event::Manager::Session::Cli : public Entity
{
    public:
        Cli();
        ~Cli();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Username; //type: Native::Event::Manager::Session::Cli::Username

        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Session::Cli::Username> username;
        
}; // Native::Event::Manager::Session::Cli


class Native::Event::Manager::Session::Cli::Username : public Entity
{
    public:
        Username();
        ~Username();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Username_In_Word; //type: Native::Event::Manager::Session::Cli::Username::Username_In_Word

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Session::Cli::Username::Username_In_Word> > username_in_word;
        
}; // Native::Event::Manager::Session::Cli::Username


class Native::Event::Manager::Session::Cli::Username::Username_In_Word : public Entity
{
    public:
        Username_In_Word();
        ~Username_In_Word();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf username_in_word; //type: string
        YLeaf privilege; //type: uint8

}; // Native::Event::Manager::Session::Cli::Username::Username_In_Word


class Native::Event::Manager::Applet : public Entity
{
    public:
        Applet();
        ~Applet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf authorization; //type: AuthorizationEnum
        YLeaf class_; //type: string
        YLeaf trap; //type: empty
        YLeaf description; //type: string
        class Event_; //type: Native::Event::Manager::Applet::Event_
        class Action; //type: Native::Event::Manager::Applet::Action
        class Trigger; //type: Native::Event::Manager::Applet::Trigger

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action> > action;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_> event;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Trigger> trigger;
                class AuthorizationEnum;

}; // Native::Event::Manager::Applet


class Native::Event::Manager::Applet::Event_ : public Entity
{
    public:
        Event_();
        ~Event_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Timer; //type: Native::Event::Manager::Applet::Event_::Timer
        class SnmpNotification; //type: Native::Event::Manager::Applet::Event_::SnmpNotification
        class Syslog; //type: Native::Event::Manager::Applet::Event_::Syslog

        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::SnmpNotification> snmp_notification;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Syslog> syslog;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Timer> timer;
        
}; // Native::Event::Manager::Applet::Event_


class Native::Event::Manager::Applet::Event_::Timer : public Entity
{
    public:
        Timer();
        ~Timer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Watchdog; //type: Native::Event::Manager::Applet::Event_::Timer::Watchdog

        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Timer::Watchdog> watchdog;
        
}; // Native::Event::Manager::Applet::Event_::Timer


class Native::Event::Manager::Applet::Event_::Timer::Watchdog : public Entity
{
    public:
        Watchdog();
        ~Watchdog();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Name; //type: Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name

        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name> name;
        
}; // Native::Event::Manager::Applet::Event_::Timer::Watchdog


class Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name : public Entity
{
    public:
        Name();
        ~Name();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TimerName; //type: Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName> > timer_name;
        
}; // Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name


class Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName : public Entity
{
    public:
        TimerName();
        ~TimerName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timer_name; //type: string
        class Time; //type: Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time

        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time> time;
        
}; // Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName


class Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time : public Entity
{
    public:
        Time();
        ~Time();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TimeInSeconds; //type: Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds> > time_in_seconds;
        
}; // Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time


class Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds : public Entity
{
    public:
        TimeInSeconds();
        ~TimeInSeconds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf time_in_seconds; //type: uint32
        class Maxrun; //type: Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun

        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun> maxrun;
        
}; // Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds


class Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun : public Entity
{
    public:
        Maxrun();
        ~Maxrun();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class TimerInSeconds; //type: Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds> > timer_in_seconds;
        
}; // Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun


class Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds : public Entity
{
    public:
        TimerInSeconds();
        ~TimerInSeconds();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timer_in_seconds; //type: uint32
        YLeaf ratelimit; //type: uint32

}; // Native::Event::Manager::Applet::Event_::Timer::Watchdog::Name::TimerName::Time::TimeInSeconds::Maxrun::TimerInSeconds


class Native::Event::Manager::Applet::Event_::SnmpNotification : public Entity
{
    public:
        SnmpNotification();
        ~SnmpNotification();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf oid; //type: string
        YLeaf oid_val; //type: string
        YLeaf op; //type: OperatorTypeEnum
        YLeaf src_ip_address; //type: string
        YLeaf dest_ip_address; //type: string

}; // Native::Event::Manager::Applet::Event_::SnmpNotification


class Native::Event::Manager::Applet::Event_::Syslog : public Entity
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

        YLeaf pattern; //type: string

}; // Native::Event::Manager::Applet::Event_::Syslog


class Native::Event::Manager::Applet::Action : public Entity
{
    public:
        Action();
        ~Action();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf end; //type: empty
        class If_; //type: Native::Event::Manager::Applet::Action::If_
        class Info; //type: Native::Event::Manager::Applet::Action::Info
        class Regexp; //type: Native::Event::Manager::Applet::Action::Regexp
        class SnmpTrap; //type: Native::Event::Manager::Applet::Action::SnmpTrap
        class String; //type: Native::Event::Manager::Applet::Action::String
        class Syslog; //type: Native::Event::Manager::Applet::Action::Syslog

        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::If_> if_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::Info> info;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::Regexp> regexp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::SnmpTrap> snmp_trap; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::String> string;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::Syslog> syslog;
        
}; // Native::Event::Manager::Applet::Action


class Native::Event::Manager::Applet::Action::If_ : public Entity
{
    public:
        If_();
        ~If_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf string_op_1; //type: string
        YLeaf keyword; //type: OperatorTypeEnum
        YLeaf string_op_2; //type: string
        YLeaf goto; //type: string

}; // Native::Event::Manager::Applet::Action::If_


class Native::Event::Manager::Applet::Action::Info : public Entity
{
    public:
        Info();
        ~Info();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Type; //type: Native::Event::Manager::Applet::Action::Info::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::Info::Type> type;
        
}; // Native::Event::Manager::Applet::Action::Info


class Native::Event::Manager::Applet::Action::Info::Type : public Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Snmp; //type: Native::Event::Manager::Applet::Action::Info::Type::Snmp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::Info::Type::Snmp> snmp;
        
}; // Native::Event::Manager::Applet::Action::Info::Type


class Native::Event::Manager::Applet::Action::Info::Type::Snmp : public Entity
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

        class Var; //type: Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var
        class Trap; //type: Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap

        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap> trap;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var> var;
        
}; // Native::Event::Manager::Applet::Action::Info::Type::Snmp


class Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var : public Entity
{
    public:
        Var();
        ~Var();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf variable_name; //type: string
        YLeaf oid; //type: string
        YLeaf oid_type; //type: OidTypeEnum
        YLeaf oid_type_value; //type: string
        class OidTypeEnum;

}; // Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var


class Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap : public Entity
{
    public:
        Trap();
        ~Trap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enterprise_oid; //type: string
        YLeaf generic_trapnum; //type: uint32
        YLeaf specific_trapnum; //type: uint32
        YLeaf trap_oid; //type: string
        YLeaf trap_var; //type: string

}; // Native::Event::Manager::Applet::Action::Info::Type::Snmp::Trap


class Native::Event::Manager::Applet::Action::Regexp : public Entity
{
    public:
        Regexp();
        ~Regexp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf string_pattern; //type: string
        YLeaf string_input; //type: string
        YLeaf string_match; //type: string
        YLeaf string_submatch1; //type: string
        YLeaf string_submatch2; //type: string
        YLeaf string_submatch3; //type: string

}; // Native::Event::Manager::Applet::Action::Regexp


class Native::Event::Manager::Applet::Action::SnmpTrap : public Entity
{
    public:
        SnmpTrap();
        ~SnmpTrap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf intdata1; //type: int32
        YLeaf intdata2; //type: int32
        YLeaf strdata; //type: string

}; // Native::Event::Manager::Applet::Action::SnmpTrap


class Native::Event::Manager::Applet::Action::String : public Entity
{
    public:
        String();
        ~String();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trim; //type: string

}; // Native::Event::Manager::Applet::Action::String


class Native::Event::Manager::Applet::Action::Syslog : public Entity
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

        YLeaf facility; //type: string
        YLeaf msg; //type: string
        YLeaf priority; //type: one of uint16, enumeration

}; // Native::Event::Manager::Applet::Action::Syslog


class Native::Event::Manager::Applet::Trigger : public Entity
{
    public:
        Trigger();
        ~Trigger();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Event::Manager::Applet::Trigger


class Native::Process : public Entity
{
    public:
        Process();
        ~Process();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Cpu; //type: Native::Process::Cpu

        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu> cpu;
        
}; // Native::Process


class Native::Process::Cpu : public Entity
{
    public:
        Cpu();
        ~Cpu();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Threshold; //type: Native::Process::Cpu::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold> threshold;
        
}; // Native::Process::Cpu


class Native::Process::Cpu::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Type; //type: Native::Process::Cpu::Threshold::Type

        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type> type;
        
}; // Native::Process::Cpu::Threshold


class Native::Process::Cpu::Threshold::Type : public Entity
{
    public:
        Type();
        ~Type();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interrupt; //type: Native::Process::Cpu::Threshold::Type::Interrupt
        class Process_; //type: Native::Process::Cpu::Threshold::Type::Process_
        class Total; //type: Native::Process::Cpu::Threshold::Type::Total

        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt> interrupt;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_> process;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total> total;
        
}; // Native::Process::Cpu::Threshold::Type


class Native::Process::Cpu::Threshold::Type::Interrupt : public Entity
{
    public:
        Interrupt();
        ~Interrupt();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rising; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising

        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt::Rising> rising;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising : public Entity
{
    public:
        Rising();
        ~Rising();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CpuRange; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange : public Entity
{
    public:
        CpuRange();
        ~CpuRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cpu_range; //type: uint8
        class Interval; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval

        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval> interval;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval : public Entity
{
    public:
        Interval();
        ~Interval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_ : public Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cpu_range; //type: uint32
        class Falling; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling

        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling> falling;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling : public Entity
{
    public:
        Falling();
        ~Falling();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling


class Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_ : public Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cpu_range; //type: uint8
        YLeaf interval; //type: uint32

}; // Native::Process::Cpu::Threshold::Type::Interrupt::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_


class Native::Process::Cpu::Threshold::Type::Process_ : public Entity
{
    public:
        Process_();
        ~Process_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rising; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising

        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_::Rising> rising;
        
}; // Native::Process::Cpu::Threshold::Type::Process_


class Native::Process::Cpu::Threshold::Type::Process_::Rising : public Entity
{
    public:
        Rising();
        ~Rising();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CpuRange; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Process_::Rising


class Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange : public Entity
{
    public:
        CpuRange();
        ~CpuRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cpu_range; //type: uint8
        class Interval; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval

        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval> interval;
        
}; // Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange


class Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval : public Entity
{
    public:
        Interval();
        ~Interval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval


class Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_ : public Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cpu_range; //type: uint32
        class Falling; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling

        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling> falling;
        
}; // Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_


class Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling : public Entity
{
    public:
        Falling();
        ~Falling();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling


class Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_ : public Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cpu_range; //type: uint8
        YLeaf interval; //type: uint32

}; // Native::Process::Cpu::Threshold::Type::Process_::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_


class Native::Process::Cpu::Threshold::Type::Total : public Entity
{
    public:
        Total();
        ~Total();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rising; //type: Native::Process::Cpu::Threshold::Type::Total::Rising

        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total::Rising> rising;
        
}; // Native::Process::Cpu::Threshold::Type::Total


class Native::Process::Cpu::Threshold::Type::Total::Rising : public Entity
{
    public:
        Rising();
        ~Rising();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CpuRange; //type: Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Total::Rising


class Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange : public Entity
{
    public:
        CpuRange();
        ~CpuRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cpu_range; //type: uint8
        class Interval; //type: Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval

        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval> interval;
        
}; // Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange


class Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval : public Entity
{
    public:
        Interval();
        ~Interval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval


class Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_ : public Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cpu_range; //type: uint32
        class Falling; //type: Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling

        std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling> falling;
        
}; // Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_


class Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling : public Entity
{
    public:
        Falling();
        ~Falling();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CpuRange_; //type: Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_> > cpu_range;
        
}; // Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling


class Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_ : public Entity
{
    public:
        CpuRange_();
        ~CpuRange_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cpu_range; //type: uint8
        YLeaf interval; //type: uint32

}; // Native::Process::Cpu::Threshold::Type::Total::Rising::CpuRange::Interval::CpuRange_::Falling::CpuRange_


class Native::Exception : public Entity
{
    public:
        Exception();
        ~Exception();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Crashinfo; //type: Native::Exception::Crashinfo

        std::shared_ptr<Cisco_IOS_XE_native::Native::Exception::Crashinfo> crashinfo; // presence node
        
}; // Native::Exception


class Native::Exception::Crashinfo : public Entity
{
    public:
        Crashinfo();
        ~Crashinfo();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf buffersize; //type: uint16

}; // Native::Exception::Crashinfo


class Native::Ap : public Entity
{
    public:
        Ap();
        ~Ap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Group; //type: Native::Ap::Group
        class Dot11; //type: Native::Ap::Dot11

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11> dot11;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group> > group;
        
}; // Native::Ap


class Native::Ap::Group : public Entity
{
    public:
        Group();
        ~Group();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Config; //type: Native::Ap::Group::Config

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config> config;
        
}; // Native::Ap::Group


class Native::Ap::Group::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        YLeaf remote_lan; //type: string
        class AirtimeFairness; //type: Native::Ap::Group::Config::AirtimeFairness
        class Hyperlocation; //type: Native::Ap::Group::Config::Hyperlocation
        class Ntp; //type: Native::Ap::Group::Config::Ntp
        class Port; //type: Native::Ap::Group::Config::Port
        class RfProfile; //type: Native::Ap::Group::Config::RfProfile
        class Wlan; //type: Native::Ap::Group::Config::Wlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::AirtimeFairness> airtime_fairness;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::Hyperlocation> hyperlocation; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::Ntp> ntp;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::Port> > port;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::RfProfile> rf_profile;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::Wlan> > wlan;
        
}; // Native::Ap::Group::Config


class Native::Ap::Group::Config::AirtimeFairness : public Entity
{
    public:
        AirtimeFairness();
        ~AirtimeFairness();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot11; //type: Native::Ap::Group::Config::AirtimeFairness::Dot11

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::AirtimeFairness::Dot11> dot11;
        
}; // Native::Ap::Group::Config::AirtimeFairness


class Native::Ap::Group::Config::AirtimeFairness::Dot11 : public Entity
{
    public:
        Dot11();
        ~Dot11();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Y_24Ghz; //type: Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24Ghz
        class Y_5Ghz; //type: Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24Ghz> y_24ghz;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz> y_5ghz;
        
}; // Native::Ap::Group::Config::AirtimeFairness::Dot11


class Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24Ghz : public Entity
{
    public:
        Y_24Ghz();
        ~Y_24Ghz();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mode; //type: ModeEnum
        YLeaf optimization; //type: empty
        class ModeEnum;

}; // Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24Ghz


class Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz : public Entity
{
    public:
        Y_5Ghz();
        ~Y_5Ghz();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf optimization; //type: empty
        class Mode; //type: Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz::Mode

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz::Mode> mode;
        
}; // Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz


class Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz::Mode : public Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enforce_policy; //type: empty
        YLeaf monitor; //type: empty

}; // Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_5Ghz::Mode


class Native::Ap::Group::Config::Hyperlocation : public Entity
{
    public:
        Hyperlocation();
        ~Hyperlocation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Threshold; //type: Native::Ap::Group::Config::Hyperlocation::Threshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::Hyperlocation::Threshold> threshold;
        
}; // Native::Ap::Group::Config::Hyperlocation


class Native::Ap::Group::Config::Hyperlocation::Threshold : public Entity
{
    public:
        Threshold();
        ~Threshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf detection; //type: int8
        YLeaf reset; //type: uint8
        YLeaf trigger; //type: uint8

}; // Native::Ap::Group::Config::Hyperlocation::Threshold


class Native::Ap::Group::Config::Ntp : public Entity
{
    public:
        Ntp();
        ~Ntp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string

}; // Native::Ap::Group::Config::Ntp


class Native::Ap::Group::Config::Port : public Entity
{
    public:
        Port();
        ~Port();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: uint8
        YLeaf poe; //type: empty
        YLeaf remote_lan; //type: string
        YLeaf shutdown; //type: empty

}; // Native::Ap::Group::Config::Port


class Native::Ap::Group::Config::RfProfile : public Entity
{
    public:
        RfProfile();
        ~RfProfile();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot11; //type: Native::Ap::Group::Config::RfProfile::Dot11

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::RfProfile::Dot11> dot11;
        
}; // Native::Ap::Group::Config::RfProfile


class Native::Ap::Group::Config::RfProfile::Dot11 : public Entity
{
    public:
        Dot11();
        ~Dot11();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf y_24ghz; //type: string
        YLeaf y_5ghz; //type: string

}; // Native::Ap::Group::Config::RfProfile::Dot11


class Native::Ap::Group::Config::Wlan : public Entity
{
    public:
        Wlan();
        ~Wlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf radio_policy; //type: RadioPolicyEnum
        YLeaf vlan; //type: string
        class AirtimeFairness; //type: Native::Ap::Group::Config::Wlan::AirtimeFairness

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::Wlan::AirtimeFairness> airtime_fairness;
                class RadioPolicyEnum;

}; // Native::Ap::Group::Config::Wlan


class Native::Ap::Group::Config::Wlan::AirtimeFairness : public Entity
{
    public:
        AirtimeFairness();
        ~AirtimeFairness();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot11; //type: Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11> dot11;
        
}; // Native::Ap::Group::Config::Wlan::AirtimeFairness


class Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11 : public Entity
{
    public:
        Dot11();
        ~Dot11();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Y_24Ghz; //type: Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24Ghz
        class Y_5Ghz; //type: Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5Ghz

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24Ghz> y_24ghz;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5Ghz> y_5ghz;
        
}; // Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11


class Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24Ghz : public Entity
{
    public:
        Y_24Ghz();
        ~Y_24Ghz();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy; //type: string

}; // Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_24Ghz


class Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5Ghz : public Entity
{
    public:
        Y_5Ghz();
        ~Y_5Ghz();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf policy; //type: string

}; // Native::Ap::Group::Config::Wlan::AirtimeFairness::Dot11::Y_5Ghz


class Native::Ap::Dot11 : public Entity
{
    public:
        Dot11();
        ~Dot11();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Y_24Ghz; //type: Native::Ap::Dot11::Y_24Ghz
        class Y_49Ghz; //type: Native::Ap::Dot11::Y_49Ghz
        class Y_5Ghz; //type: Native::Ap::Dot11::Y_5Ghz
        class AirtimeFairness; //type: Native::Ap::Dot11::AirtimeFairness

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::AirtimeFairness> airtime_fairness;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24Ghz> y_24ghz;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_49Ghz> y_49ghz;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_5Ghz> y_5ghz;
        
}; // Native::Ap::Dot11


class Native::Ap::Dot11::Y_24Ghz : public Entity
{
    public:
        Y_24Ghz();
        ~Y_24Ghz();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rate; //type: Native::Ap::Dot11::Y_24Ghz::Rate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24Ghz::Rate> rate;
        
}; // Native::Ap::Dot11::Y_24Ghz


class Native::Ap::Dot11::Y_24Ghz::Rate : public Entity
{
    public:
        Rate();
        ~Rate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rate_11M; //type: Native::Ap::Dot11::Y_24Ghz::Rate::Rate_11M
        class Rate_12M; //type: Native::Ap::Dot11::Y_24Ghz::Rate::Rate_12M
        class Rate_18M; //type: Native::Ap::Dot11::Y_24Ghz::Rate::Rate_18M
        class Rate_1M; //type: Native::Ap::Dot11::Y_24Ghz::Rate::Rate_1M
        class Rate_24M; //type: Native::Ap::Dot11::Y_24Ghz::Rate::Rate_24M
        class Rate_2M; //type: Native::Ap::Dot11::Y_24Ghz::Rate::Rate_2M
        class Rate_36M; //type: Native::Ap::Dot11::Y_24Ghz::Rate::Rate_36M
        class Rate_48M; //type: Native::Ap::Dot11::Y_24Ghz::Rate::Rate_48M
        class Rate_54M; //type: Native::Ap::Dot11::Y_24Ghz::Rate::Rate_54M
        class Rate_5_5M; //type: Native::Ap::Dot11::Y_24Ghz::Rate::Rate_5_5M
        class Rate_6M; //type: Native::Ap::Dot11::Y_24Ghz::Rate::Rate_6M
        class Rate_9M; //type: Native::Ap::Dot11::Y_24Ghz::Rate::Rate_9M

        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24Ghz::Rate::Rate_11M> rate_11m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24Ghz::Rate::Rate_12M> rate_12m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24Ghz::Rate::Rate_18M> rate_18m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24Ghz::Rate::Rate_1M> rate_1m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24Ghz::Rate::Rate_24M> rate_24m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24Ghz::Rate::Rate_2M> rate_2m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24Ghz::Rate::Rate_36M> rate_36m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24Ghz::Rate::Rate_48M> rate_48m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24Ghz::Rate::Rate_54M> rate_54m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24Ghz::Rate::Rate_5_5M> rate_5_5m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24Ghz::Rate::Rate_6M> rate_6m;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Ap::Dot11::Y_24Ghz::Rate::Rate_9M> rate_9m;
        
}; // Native::Ap::Dot11::Y_24Ghz::Rate


class Native::Ap::Dot11::Y_24Ghz::Rate::Rate_11M : public Entity
{
    public:
        Rate_11M();
        ~Rate_11M();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf supported; //type: empty

}; // Native::Ap::Dot11::Y_24Ghz::Rate::Rate_11M

class Native::Line::Vty::Password::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Line::Vty::Transport::Input::InputEnum : public Enum
{
    public:
        static const Enum::YLeaf acercon;
        static const Enum::YLeaf all;
        static const Enum::YLeaf lapb_ta;
        static const Enum::YLeaf lat;
        static const Enum::YLeaf mop;
        static const Enum::YLeaf nasi;
        static const Enum::YLeaf none;
        static const Enum::YLeaf pad;
        static const Enum::YLeaf rlogin;
        static const Enum::YLeaf ssh;
        static const Enum::YLeaf telnet;
        static const Enum::YLeaf udptn;
        static const Enum::YLeaf v120;

};

class Native::Line::Vty::Transport::Output::OutputEnum : public Enum
{
    public:
        static const Enum::YLeaf acercon;
        static const Enum::YLeaf all;
        static const Enum::YLeaf lapb_ta;
        static const Enum::YLeaf lat;
        static const Enum::YLeaf mop;
        static const Enum::YLeaf nasi;
        static const Enum::YLeaf none;
        static const Enum::YLeaf pad;
        static const Enum::YLeaf rlogin;
        static const Enum::YLeaf ssh;
        static const Enum::YLeaf telnet;
        static const Enum::YLeaf udptn;
        static const Enum::YLeaf v120;

};

class Native::Line::Vty::Transport::Preferred::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf acercon;
        static const Enum::YLeaf lat;
        static const Enum::YLeaf mop;
        static const Enum::YLeaf nasi;
        static const Enum::YLeaf none;
        static const Enum::YLeaf pad;
        static const Enum::YLeaf rlogin;
        static const Enum::YLeaf ssh;
        static const Enum::YLeaf telnet;
        static const Enum::YLeaf udptn;

};

class Native::Wsma::Profile::Listener::TransportEnum : public Enum
{
    public:
        static const Enum::YLeaf http;
        static const Enum::YLeaf https;
        static const Enum::YLeaf ssh;
        static const Enum::YLeaf tls;

};

class Native::Event::Manager::Applet::AuthorizationEnum : public Enum
{
    public:
        static const Enum::YLeaf bypass;

};

class Native::Event::Manager::Applet::Action::Info::Type::Snmp::Var::OidTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf counter;
        static const Enum::YLeaf gauge;
        static const Enum::YLeaf int_;
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf octet;
        static const Enum::YLeaf string;
        static const Enum::YLeaf uint;

};

class Native::Ap::Group::Config::AirtimeFairness::Dot11::Y_24Ghz::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf enforce_policy;
        static const Enum::YLeaf monitor;

};

class Native::Ap::Group::Config::Wlan::RadioPolicyEnum : public Enum
{
    public:
        static const Enum::YLeaf all;
        static const Enum::YLeaf dot11a;
        static const Enum::YLeaf dot11bg;
        static const Enum::YLeaf dot11g;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_153_ */

