#ifndef _CISCO_IOS_XE_NATIVE_31_
#define _CISCO_IOS_XE_NATIVE_31_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_16.hpp"
#include "Cisco_IOS_XE_native_26.hpp"
#include "Cisco_IOS_XE_native_30.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Interface::Gigabitethernet::Ospfv3::Network::PointToMultipoint : public Entity
{
    public:
        PointToMultipoint();
        ~PointToMultipoint();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf non_broadcast; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::Network::PointToMultipoint


class Native::Interface::Gigabitethernet::Ospfv3::PrefixSuppression : public Entity
{
    public:
        PrefixSuppression();
        ~PrefixSuppression();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty

}; // Native::Interface::Gigabitethernet::Ospfv3::PrefixSuppression


class Native::Interface::Gigabitethernet::Power : public Entity
{
    public:
        Power();
        ~Power();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Inline_; //type: Native::Interface::Gigabitethernet::Power::Inline_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Power::Inline_> inline_;
        
}; // Native::Interface::Gigabitethernet::Power


class Native::Interface::Gigabitethernet::Power::Inline_ : public Entity
{
    public:
        Inline_();
        ~Inline_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf consumption; //type: uint16
        YLeaf never; //type: empty
        class Auto_; //type: Native::Interface::Gigabitethernet::Power::Inline_::Auto_
        class FourPair; //type: Native::Interface::Gigabitethernet::Power::Inline_::FourPair
        class Police; //type: Native::Interface::Gigabitethernet::Power::Inline_::Police
        class Port; //type: Native::Interface::Gigabitethernet::Power::Inline_::Port
        class Static_; //type: Native::Interface::Gigabitethernet::Power::Inline_::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Power::Inline_::Auto_> auto_; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Power::Inline_::FourPair> four_pair;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Power::Inline_::Police> police; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Power::Inline_::Port> port;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Power::Inline_::Static_> static_; // presence node
        
}; // Native::Interface::Gigabitethernet::Power::Inline_


class Native::Interface::Gigabitethernet::Power::Inline_::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max; //type: int16

}; // Native::Interface::Gigabitethernet::Power::Inline_::Auto_


class Native::Interface::Gigabitethernet::Power::Inline_::FourPair : public Entity
{
    public:
        FourPair();
        ~FourPair();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf forced; //type: empty

}; // Native::Interface::Gigabitethernet::Power::Inline_::FourPair


class Native::Interface::Gigabitethernet::Power::Inline_::Police : public Entity
{
    public:
        Police();
        ~Police();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Action; //type: Native::Interface::Gigabitethernet::Power::Inline_::Police::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Power::Inline_::Police::Action> action;
        
}; // Native::Interface::Gigabitethernet::Power::Inline_::Police


class Native::Interface::Gigabitethernet::Power::Inline_::Police::Action : public Entity
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

        YLeaf errdisable; //type: empty
        YLeaf log; //type: empty

}; // Native::Interface::Gigabitethernet::Power::Inline_::Police::Action


class Native::Interface::Gigabitethernet::Power::Inline_::Port : public Entity
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

        YLeaf poe_ha; //type: empty
        YLeaf two_event; //type: empty

}; // Native::Interface::Gigabitethernet::Power::Inline_::Port


class Native::Interface::Gigabitethernet::Power::Inline_::Static_ : public Entity
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

        YLeaf max; //type: int16

}; // Native::Interface::Gigabitethernet::Power::Inline_::Static_


class Native::Interface::Gigabitethernet::Authentication : public Entity
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

        YLeaf control_direction; //type: ControlDirectionEnum
        YLeaf fallback; //type: string
        YLeaf host_mode; //type: HostModeEnum
        YLeaf open; //type: empty
        YLeaf port_control; //type: PortControlEnum
        YLeaf periodic; //type: empty
        YLeaf violation; //type: ViolationEnum
        class Event; //type: Native::Interface::Gigabitethernet::Authentication::Event
        class Order; //type: Native::Interface::Gigabitethernet::Authentication::Order
        class Priority; //type: Native::Interface::Gigabitethernet::Authentication::Priority
        class Timer; //type: Native::Interface::Gigabitethernet::Authentication::Timer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Authentication::Event> event;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Authentication::Order> order;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Authentication::Priority> priority;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Authentication::Timer> timer;
                class ControlDirectionEnum;
        class HostModeEnum;
        class PortControlEnum;
        class ViolationEnum;

}; // Native::Interface::Gigabitethernet::Authentication


class Native::Interface::Gigabitethernet::Authentication::Event : public Entity
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

        class Server; //type: Native::Interface::Gigabitethernet::Authentication::Event::Server
        class Fail; //type: Native::Interface::Gigabitethernet::Authentication::Event::Fail
        class NoResponse; //type: Native::Interface::Gigabitethernet::Authentication::Event::NoResponse

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Authentication::Event::Fail> fail;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Authentication::Event::NoResponse> no_response;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Authentication::Event::Server> server;
        
}; // Native::Interface::Gigabitethernet::Authentication::Event


class Native::Interface::Gigabitethernet::Authentication::Event::Server : public Entity
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

        class Alive; //type: Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive
        class Dead; //type: Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive> alive;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead> dead;
        
}; // Native::Interface::Gigabitethernet::Authentication::Event::Server


class Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive : public Entity
{
    public:
        Alive();
        ~Alive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Action; //type: Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive::Action> action;
        
}; // Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive


class Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive::Action : public Entity
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

        YLeaf reinitialize; //type: empty

}; // Native::Interface::Gigabitethernet::Authentication::Event::Server::Alive::Action


class Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead : public Entity
{
    public:
        Dead();
        ~Dead();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Action; //type: Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action> action;
        
}; // Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead


class Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action : public Entity
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

        class Authorize; //type: Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Authorize
        class Reinitialize; //type: Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Reinitialize

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Authorize> authorize; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Reinitialize> reinitialize;
        
}; // Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action


class Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Authorize : public Entity
{
    public:
        Authorize();
        ~Authorize();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: uint16
        YLeaf voice; //type: empty

}; // Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Authorize


class Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Reinitialize : public Entity
{
    public:
        Reinitialize();
        ~Reinitialize();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: uint16

}; // Native::Interface::Gigabitethernet::Authentication::Event::Server::Dead::Action::Reinitialize


class Native::Interface::Gigabitethernet::Authentication::Event::Fail : public Entity
{
    public:
        Fail();
        ~Fail();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Action; //type: Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action> action;
        
}; // Native::Interface::Gigabitethernet::Authentication::Event::Fail


class Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action : public Entity
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

        class Authorize; //type: Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action::Authorize

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action::Authorize> authorize;
        
}; // Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action


class Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action::Authorize : public Entity
{
    public:
        Authorize();
        ~Authorize();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: uint16

}; // Native::Interface::Gigabitethernet::Authentication::Event::Fail::Action::Authorize


class Native::Interface::Gigabitethernet::Authentication::Event::NoResponse : public Entity
{
    public:
        NoResponse();
        ~NoResponse();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Action; //type: Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action> action;
        
}; // Native::Interface::Gigabitethernet::Authentication::Event::NoResponse


class Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action : public Entity
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

        class Authorize; //type: Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action::Authorize

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action::Authorize> authorize;
        
}; // Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action


class Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action::Authorize : public Entity
{
    public:
        Authorize();
        ~Authorize();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: uint16

}; // Native::Interface::Gigabitethernet::Authentication::Event::NoResponse::Action::Authorize


class Native::Interface::Gigabitethernet::Authentication::Order : public Entity
{
    public:
        Order();
        ~Order();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot1x; //type: empty
        YLeaf mab; //type: empty
        YLeaf webauth; //type: empty

}; // Native::Interface::Gigabitethernet::Authentication::Order


class Native::Interface::Gigabitethernet::Authentication::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dot1x; //type: empty
        YLeaf mab; //type: empty
        YLeaf webauth; //type: empty

}; // Native::Interface::Gigabitethernet::Authentication::Priority


class Native::Interface::Gigabitethernet::Authentication::Timer : public Entity
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

        YLeaf restart; //type: uint16
        class Reauthenticate; //type: Native::Interface::Gigabitethernet::Authentication::Timer::Reauthenticate
        class Inactivity; //type: Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity> inactivity;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Authentication::Timer::Reauthenticate> reauthenticate;
        
}; // Native::Interface::Gigabitethernet::Authentication::Timer


class Native::Interface::Gigabitethernet::Authentication::Timer::Reauthenticate : public Entity
{
    public:
        Reauthenticate();
        ~Reauthenticate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint16
        YLeaf server; //type: empty

}; // Native::Interface::Gigabitethernet::Authentication::Timer::Reauthenticate


class Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity : public Entity
{
    public:
        Inactivity();
        ~Inactivity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Value_; //type: Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Value_
        class Server; //type: Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Server

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Server> server; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Value_> value_;
        
}; // Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity


class Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Value_ : public Entity
{
    public:
        Value_();
        ~Value_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint16
        YLeaf dynamic; //type: empty

}; // Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Value_


class Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Server : public Entity
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

        YLeaf dynamic; //type: empty

}; // Native::Interface::Gigabitethernet::Authentication::Timer::Inactivity::Server


class Native::Interface::Gigabitethernet::Mab : public Entity
{
    public:
        Mab();
        ~Mab();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf eap; //type: empty

}; // Native::Interface::Gigabitethernet::Mab


class Native::Interface::Gigabitethernet::SpanningTree : public Entity
{
    public:
        SpanningTree();
        ~SpanningTree();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bpdufilter; //type: BpdufilterEnum
        YLeaf cost; //type: uint32
        YLeaf guard; //type: GuardEnum
        YLeaf link_type; //type: LinkTypeEnum
        YLeaf port_priority; //type: uint8
        class Bpduguard; //type: Native::Interface::Gigabitethernet::SpanningTree::Bpduguard
        class Portfast; //type: Native::Interface::Gigabitethernet::SpanningTree::Portfast
        class Vlan; //type: Native::Interface::Gigabitethernet::SpanningTree::Vlan
        class Loopguard; //type: Native::Interface::Gigabitethernet::SpanningTree::Loopguard
        class Mst; //type: Native::Interface::Gigabitethernet::SpanningTree::Mst

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::SpanningTree::Bpduguard> bpduguard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::SpanningTree::Loopguard> loopguard;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::SpanningTree::Mst> mst;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::SpanningTree::Portfast> portfast; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::SpanningTree::Vlan> vlan;
                class BpdufilterEnum;
        class GuardEnum;
        class LinkTypeEnum;

}; // Native::Interface::Gigabitethernet::SpanningTree


class Native::Interface::Gigabitethernet::SpanningTree::Bpduguard : public Entity
{
    public:
        Bpduguard();
        ~Bpduguard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty
        YLeaf enable; //type: empty

}; // Native::Interface::Gigabitethernet::SpanningTree::Bpduguard


class Native::Interface::Gigabitethernet::SpanningTree::Portfast : public Entity
{
    public:
        Portfast();
        ~Portfast();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable; //type: empty
        YLeaf trunk; //type: empty
        YLeaf edge; //type: empty

}; // Native::Interface::Gigabitethernet::SpanningTree::Portfast


class Native::Interface::Gigabitethernet::SpanningTree::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cost; //type: uint32
        YLeaf port_priority; //type: uint16
        YLeafList vlan_ids; //type: list of  one of uint16, string

}; // Native::Interface::Gigabitethernet::SpanningTree::Vlan


class Native::Interface::Gigabitethernet::SpanningTree::Loopguard : public Entity
{
    public:
        Loopguard();
        ~Loopguard();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf default_; //type: empty

}; // Native::Interface::Gigabitethernet::SpanningTree::Loopguard


class Native::Interface::Gigabitethernet::SpanningTree::Mst : public Entity
{
    public:
        Mst();
        ~Mst();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf instance; //type: string
        YLeaf cost; //type: uint32
        YLeaf port_priority; //type: uint16
        YLeaf pre_standard; //type: empty

}; // Native::Interface::Gigabitethernet::SpanningTree::Mst


class Native::Interface::Gigabitethernet::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Qos; //type: Native::Interface::Gigabitethernet::Auto_::Qos

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Auto_::Qos> qos;
        
}; // Native::Interface::Gigabitethernet::Auto_


class Native::Interface::Gigabitethernet::Auto_::Qos : public Entity
{
    public:
        Qos();
        ~Qos();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Classify; //type: Native::Interface::Gigabitethernet::Auto_::Qos::Classify
        class Trust; //type: Native::Interface::Gigabitethernet::Auto_::Qos::Trust
        class Video; //type: Native::Interface::Gigabitethernet::Auto_::Qos::Video
        class Voip; //type: Native::Interface::Gigabitethernet::Auto_::Qos::Voip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Auto_::Qos::Classify> classify; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Auto_::Qos::Trust> trust; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Auto_::Qos::Video> video;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Auto_::Qos::Voip> voip; // presence node
        
}; // Native::Interface::Gigabitethernet::Auto_::Qos


class Native::Interface::Gigabitethernet::Auto_::Qos::Classify : public Entity
{
    public:
        Classify();
        ~Classify();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf police; //type: empty

}; // Native::Interface::Gigabitethernet::Auto_::Qos::Classify


class Native::Interface::Gigabitethernet::Auto_::Qos::Trust : public Entity
{
    public:
        Trust();
        ~Trust();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cos; //type: empty
        YLeaf dscp; //type: empty

}; // Native::Interface::Gigabitethernet::Auto_::Qos::Trust


class Native::Interface::Gigabitethernet::Auto_::Qos::Video : public Entity
{
    public:
        Video();
        ~Video();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cts; //type: empty
        YLeaf ip_camera; //type: empty
        YLeaf media_player; //type: empty

}; // Native::Interface::Gigabitethernet::Auto_::Qos::Video


class Native::Interface::Gigabitethernet::Auto_::Qos::Voip : public Entity
{
    public:
        Voip();
        ~Voip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cisco_phone; //type: empty
        YLeaf cisco_softphone; //type: empty
        YLeaf trust; //type: empty

}; // Native::Interface::Gigabitethernet::Auto_::Qos::Voip


class Native::Interface::Gigabitethernet::Datalink : public Entity
{
    public:
        Datalink();
        ~Datalink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Flow; //type: Native::Interface::Gigabitethernet::Datalink::Flow

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Datalink::Flow> flow;
        
}; // Native::Interface::Gigabitethernet::Datalink


class Native::Interface::Gigabitethernet::Datalink::Flow : public Entity
{
    public:
        Flow();
        ~Flow();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Monitor; //type: Native::Interface::Gigabitethernet::Datalink::Flow::Monitor

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Datalink::Flow::Monitor> monitor; // presence node
        
}; // Native::Interface::Gigabitethernet::Datalink::Flow


class Native::Interface::Gigabitethernet::Datalink::Flow::Monitor : public Entity
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

        YLeaf user_defined_flow; //type: string
        YLeaf input_output; //type: InputOutputEnum
        class InputOutputEnum;

}; // Native::Interface::Gigabitethernet::Datalink::Flow::Monitor


class Native::Interface::Gigabitethernet::Energywise : public Entity
{
    public:
        Energywise();
        ~Energywise();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf activitycheck; //type: empty

}; // Native::Interface::Gigabitethernet::Energywise


class Native::Interface::Gigabitethernet::Location : public Entity
{
    public:
        Location();
        ~Location();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CivicLocationId; //type: Native::Interface::Gigabitethernet::Location::CivicLocationId

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Location::CivicLocationId> civic_location_id;
        
}; // Native::Interface::Gigabitethernet::Location


class Native::Interface::Gigabitethernet::Location::CivicLocationId : public Entity
{
    public:
        CivicLocationId();
        ~CivicLocationId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf location_identifier; //type: string
        class Host; //type: Native::Interface::Gigabitethernet::Location::CivicLocationId::Host
        class None; //type: Native::Interface::Gigabitethernet::Location::CivicLocationId::None

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Location::CivicLocationId::Host> host; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Location::CivicLocationId::None> none; // presence node
        
}; // Native::Interface::Gigabitethernet::Location::CivicLocationId


class Native::Interface::Gigabitethernet::Location::CivicLocationId::Host : public Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_location; //type: string

}; // Native::Interface::Gigabitethernet::Location::CivicLocationId::Host


class Native::Interface::Gigabitethernet::Location::CivicLocationId::None : public Entity
{
    public:
        None();
        ~None();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf port_location; //type: string

}; // Native::Interface::Gigabitethernet::Location::CivicLocationId::None


class Native::Interface::Gigabitethernet::Mac : public Entity
{
    public:
        Mac();
        ~Mac();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AccessGroup; //type: Native::Interface::Gigabitethernet::Mac::AccessGroup

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Mac::AccessGroup> access_group;
        
}; // Native::Interface::Gigabitethernet::Mac


class Native::Interface::Gigabitethernet::Mac::AccessGroup : public Entity
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

        class AclName; //type: Native::Interface::Gigabitethernet::Mac::AccessGroup::AclName

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Mac::AccessGroup::AclName> acl_name;
        
}; // Native::Interface::Gigabitethernet::Mac::AccessGroup


class Native::Interface::Gigabitethernet::Mac::AccessGroup::AclName : public Entity
{
    public:
        AclName();
        ~AclName();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl_name; //type: string
        YLeaf apply_to; //type: ApplyToEnum
        class ApplyToEnum;

}; // Native::Interface::Gigabitethernet::Mac::AccessGroup::AclName


class Native::Interface::Gigabitethernet::Macro : public Entity
{
    public:
        Macro();
        ~Macro();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf description; //type: string
        class Auto_; //type: Native::Interface::Gigabitethernet::Macro::Auto_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Macro::Auto_> auto_;
        
}; // Native::Interface::Gigabitethernet::Macro


class Native::Interface::Gigabitethernet::Macro::Auto_ : public Entity
{
    public:
        Auto_();
        ~Auto_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf processing; //type: boolean

}; // Native::Interface::Gigabitethernet::Macro::Auto_


class Native::Interface::Gigabitethernet::DualActive : public Entity
{
    public:
        DualActive();
        ~DualActive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fast_hello; //type: empty

}; // Native::Interface::Gigabitethernet::DualActive


class Native::Interface::Gigabitethernet::Lldp : public Entity
{
    public:
        Lldp();
        ~Lldp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf receive; //type: boolean
        YLeaf transmit; //type: boolean

}; // Native::Interface::Gigabitethernet::Lldp


class Native::Interface::Gigabitethernet::LoadBalancing : public Entity
{
    public:
        LoadBalancing();
        ~LoadBalancing();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf flow; //type: empty
        YLeaf vlan; //type: empty

}; // Native::Interface::Gigabitethernet::LoadBalancing


class Native::Interface::Gigabitethernet::VlanRange : public Entity
{
    public:
        VlanRange();
        ~VlanRange();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: one of uint16, string
        class ServicePolicy; //type: Native::Interface::Gigabitethernet::VlanRange::ServicePolicy

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::VlanRange::ServicePolicy> service_policy;
        
}; // Native::Interface::Gigabitethernet::VlanRange


class Native::Interface::Gigabitethernet::VlanRange::ServicePolicy : public Entity
{
    public:
        ServicePolicy();
        ~ServicePolicy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf input; //type: string
        YLeaf output; //type: string

}; // Native::Interface::Gigabitethernet::VlanRange::ServicePolicy


class Native::Interface::Gigabitethernet::Switch : public Entity
{
    public:
        Switch();
        ~Switch();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Virtual_; //type: Native::Interface::Gigabitethernet::Switch::Virtual_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Switch::Virtual_> virtual_;
        
}; // Native::Interface::Gigabitethernet::Switch


class Native::Interface::Gigabitethernet::Switch::Virtual_ : public Entity
{
    public:
        Virtual_();
        ~Virtual_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf link; //type: uint8

}; // Native::Interface::Gigabitethernet::Switch::Virtual_


class Native::Interface::Gigabitethernet::SrrQueue : public Entity
{
    public:
        SrrQueue();
        ~SrrQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bandwidth; //type: Native::Interface::Gigabitethernet::SrrQueue::Bandwidth

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::SrrQueue::Bandwidth> bandwidth;
        
}; // Native::Interface::Gigabitethernet::SrrQueue


class Native::Interface::Gigabitethernet::SrrQueue::Bandwidth : public Entity
{
    public:
        Bandwidth();
        ~Bandwidth();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Shape; //type: Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Shape
        class Share; //type: Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Share

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Shape> shape;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Share> share;
        
}; // Native::Interface::Gigabitethernet::SrrQueue::Bandwidth


class Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Shape : public Entity
{
    public:
        Shape();
        ~Shape();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf weight1; //type: uint16
        YLeaf weight2; //type: uint16
        YLeaf weight3; //type: uint16
        YLeaf weight4; //type: uint16

}; // Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Shape


class Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Share : public Entity
{
    public:
        Share();
        ~Share();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf weight1; //type: uint8
        YLeaf weight2; //type: uint8
        YLeaf weight3; //type: uint8
        YLeaf weight4; //type: uint8

}; // Native::Interface::Gigabitethernet::SrrQueue::Bandwidth::Share


class Native::Interface::Gigabitethernet::Macsec : public Entity
{
    public:
        Macsec();
        ~Macsec();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf network_link; //type: empty

}; // Native::Interface::Gigabitethernet::Macsec


class Native::Interface::Gigabitethernet::DeviceTracking : public Entity
{
    public:
        DeviceTracking();
        ~DeviceTracking();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf attach_policy; //type: string

}; // Native::Interface::Gigabitethernet::DeviceTracking


class Native::Interface::Gigabitethernet::Udld : public Entity
{
    public:
        Udld();
        ~Udld();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Port; //type: Native::Interface::Gigabitethernet::Udld::Port

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Gigabitethernet::Udld::Port> port; // presence node
        
}; // Native::Interface::Gigabitethernet::Udld


class Native::Interface::Gigabitethernet::Udld::Port : public Entity
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

        YLeaf aggressive; //type: empty
        YLeaf disable; //type: empty

}; // Native::Interface::Gigabitethernet::Udld::Port


class Native::Interface::Gigabitethernet::ZoneMember : public Entity
{
    public:
        ZoneMember();
        ~ZoneMember();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf security; //type: string

}; // Native::Interface::Gigabitethernet::ZoneMember


class Native::Interface::Tengigabitethernet : public Entity
{
    public:
        Tengigabitethernet();
        ~Tengigabitethernet();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf media_type; //type: MediaTypeEnum
        YLeaf port_type; //type: PortTypeEnum
        YLeaf description; //type: string
        YLeaf shutdown; //type: empty
        YLeaf keepalive; //type: boolean
        YLeaf if_state; //type: IfStateEnum
        YLeaf delay; //type: uint32
        YLeaf load_interval; //type: uint16
        YLeaf max_reserved_bandwidth; //type: uint8
        YLeaf mtu; //type: uint16
        YLeaf service_insertion; //type: ServiceInsertionEnum
        YLeaf channel_protocol; //type: ChannelProtocolEnum
        YLeaf duplex; //type: DuplexEnum
        class Lacp; //type: Native::Interface::Tengigabitethernet::Lacp
        class SwitchportConf; //type: Native::Interface::Tengigabitethernet::SwitchportConf
        class Switchport; //type: Native::Interface::Tengigabitethernet::Switchport
        class Arp; //type: Native::Interface::Tengigabitethernet::Arp
        class Backup; //type: Native::Interface::Tengigabitethernet::Backup
        class Cemoudp; //type: Native::Interface::Tengigabitethernet::Cemoudp
        class CwsTunnel; //type: Native::Interface::Tengigabitethernet::CwsTunnel
        class L2ProtocolTunnel; //type: Native::Interface::Tengigabitethernet::L2ProtocolTunnel
        class Encapsulation; //type: Native::Interface::Tengigabitethernet::Encapsulation
        class FairQueueConf; //type: Native::Interface::Tengigabitethernet::FairQueueConf
        class FairQueue; //type: Native::Interface::Tengigabitethernet::FairQueue
        class Flowcontrol; //type: Native::Interface::Tengigabitethernet::Flowcontrol
        class Isis; //type: Native::Interface::Tengigabitethernet::Isis
        class KeepaliveSettings; //type: Native::Interface::Tengigabitethernet::KeepaliveSettings
        class Bfd; //type: Native::Interface::Tengigabitethernet::Bfd
        class Bandwidth; //type: Native::Interface::Tengigabitethernet::Bandwidth
        class Dampening; //type: Native::Interface::Tengigabitethernet::Dampening
        class Domain; //type: Native::Interface::Tengigabitethernet::Domain
        class HoldQueue; //type: Native::Interface::Tengigabitethernet::HoldQueue
        class Mpls; //type: Native::Interface::Tengigabitethernet::Mpls
        class IpVrf; //type: Native::Interface::Tengigabitethernet::IpVrf
        class Vrf; //type: Native::Interface::Tengigabitethernet::Vrf
        class Ip; //type: Native::Interface::Tengigabitethernet::Ip
        class Ipv6; //type: Native::Interface::Tengigabitethernet::Ipv6
        class Logging; //type: Native::Interface::Tengigabitethernet::Logging
        class Mdix; //type: Native::Interface::Tengigabitethernet::Mdix
        class Mop; //type: Native::Interface::Tengigabitethernet::Mop
        class Interface_Qos; //type: Native::Interface::Tengigabitethernet::Interface_Qos
        class Standby; //type: Native::Interface::Tengigabitethernet::Standby
        class AccessSession; //type: Native::Interface::Tengigabitethernet::AccessSession
        class StormControl; //type: Native::Interface::Tengigabitethernet::StormControl
        class Trust; //type: Native::Interface::Tengigabitethernet::Trust
        class Utd; //type: Native::Interface::Tengigabitethernet::Utd
        class PriorityQueue; //type: Native::Interface::Tengigabitethernet::PriorityQueue
        class RcvQueue; //type: Native::Interface::Tengigabitethernet::RcvQueue
        class Peer; //type: Native::Interface::Tengigabitethernet::Peer
        class PmPath; //type: Native::Interface::Tengigabitethernet::PmPath
        class CarrierDelay; //type: Native::Interface::Tengigabitethernet::CarrierDelay
        class ChannelGroup; //type: Native::Interface::Tengigabitethernet::ChannelGroup
        class Ethernet; //type: Native::Interface::Tengigabitethernet::Ethernet
        class Negotiation; //type: Native::Interface::Tengigabitethernet::Negotiation
        class Synchronous; //type: Native::Interface::Tengigabitethernet::Synchronous
        class Speed; //type: Native::Interface::Tengigabitethernet::Speed
        class Plim; //type: Native::Interface::Tengigabitethernet::Plim
        class Pppoe; //type: Native::Interface::Tengigabitethernet::Pppoe
        class Service; //type: Native::Interface::Tengigabitethernet::Service
        class Xconnect; //type: Native::Interface::Tengigabitethernet::Xconnect
        class Cdp; //type: Native::Interface::Tengigabitethernet::Cdp
        class Crypto; //type: Native::Interface::Tengigabitethernet::Crypto
        class Cts; //type: Native::Interface::Tengigabitethernet::Cts
        class Dot1X; //type: Native::Interface::Tengigabitethernet::Dot1X
        class Performance; //type: Native::Interface::Tengigabitethernet::Performance
        class ServicePolicy; //type: Native::Interface::Tengigabitethernet::ServicePolicy
        class Snmp; //type: Native::Interface::Tengigabitethernet::Snmp
        class Lisp; //type: Native::Interface::Tengigabitethernet::Lisp
        class Mka; //type: Native::Interface::Tengigabitethernet::Mka
        class Ospfv3; //type: Native::Interface::Tengigabitethernet::Ospfv3
        class Power; //type: Native::Interface::Tengigabitethernet::Power
        class Authentication; //type: Native::Interface::Tengigabitethernet::Authentication
        class Mab; //type: Native::Interface::Tengigabitethernet::Mab
        class SpanningTree; //type: Native::Interface::Tengigabitethernet::SpanningTree
        class Auto_; //type: Native::Interface::Tengigabitethernet::Auto_
        class Datalink; //type: Native::Interface::Tengigabitethernet::Datalink
        class Energywise; //type: Native::Interface::Tengigabitethernet::Energywise
        class Location; //type: Native::Interface::Tengigabitethernet::Location
        class Mac; //type: Native::Interface::Tengigabitethernet::Mac
        class Macro; //type: Native::Interface::Tengigabitethernet::Macro
        class DualActive; //type: Native::Interface::Tengigabitethernet::DualActive
        class Lldp; //type: Native::Interface::Tengigabitethernet::Lldp
        class LoadBalancing; //type: Native::Interface::Tengigabitethernet::LoadBalancing
        class VlanRange; //type: Native::Interface::Tengigabitethernet::VlanRange
        class Switch; //type: Native::Interface::Tengigabitethernet::Switch
        class SrrQueue; //type: Native::Interface::Tengigabitethernet::SrrQueue
        class Macsec; //type: Native::Interface::Tengigabitethernet::Macsec
        class DeviceTracking; //type: Native::Interface::Tengigabitethernet::DeviceTracking
        class Udld; //type: Native::Interface::Tengigabitethernet::Udld
        class ZoneMember; //type: Native::Interface::Tengigabitethernet::ZoneMember

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::AccessSession> access_session;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Arp> arp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Auto_> auto_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Backup> backup;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Bandwidth> bandwidth;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Bfd> bfd;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::CarrierDelay> carrier_delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Cdp> cdp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Cemoudp> cemoudp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::ChannelGroup> channel_group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Crypto> crypto;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Cts> cts;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::CwsTunnel> cws_tunnel;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Dampening> dampening; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Datalink> datalink;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::DeviceTracking> device_tracking;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Domain> domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Dot1X> dot1x;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::DualActive> dual_active;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Encapsulation> encapsulation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Energywise> energywise; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ethernet> ethernet;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::FairQueue> fair_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::FairQueueConf> fair_queue_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Flowcontrol> flowcontrol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::HoldQueue> hold_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Interface_Qos> interface_qos;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::IpVrf> ip_vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis> isis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::KeepaliveSettings> keepalive_settings;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::L2ProtocolTunnel> l2protocol_tunnel; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Lacp> lacp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Lisp> lisp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Lldp> lldp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::LoadBalancing> load_balancing;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Location> location;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Mab> mab; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Mac> mac;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Macro> macro;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Macsec> macsec; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Mdix> mdix;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Mka> mka;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Mop> mop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Negotiation> negotiation;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Ospfv3> ospfv3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Peer> peer;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Performance> performance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Plim> plim;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::PmPath> pm_path;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Power> power;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Pppoe> pppoe;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::PriorityQueue> priority_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::RcvQueue> rcv_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Service> service;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::ServicePolicy> service_policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Snmp> snmp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::SpanningTree> spanning_tree;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Speed> speed;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::SrrQueue> srr_queue;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Standby> standby;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::StormControl> storm_control;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switch> switch;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport> switchport;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::SwitchportConf> switchport_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Synchronous> synchronous;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Trust> trust;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Udld> udld;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Utd> utd;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::VlanRange> > vlan_range;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Vrf> vrf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Xconnect> xconnect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::ZoneMember> zone_member;
                class MediaTypeEnum;
        class PortTypeEnum;
        class IfStateEnum;
        class ServiceInsertionEnum;
        class ChannelProtocolEnum;
        class DuplexEnum;

}; // Native::Interface::Tengigabitethernet


class Native::Interface::Tengigabitethernet::Lacp : public Entity
{
    public:
        Lacp();
        ~Lacp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Rate; //type: Native::Interface::Tengigabitethernet::Lacp::Rate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Lacp::Rate> rate;
        
}; // Native::Interface::Tengigabitethernet::Lacp


class Native::Interface::Tengigabitethernet::Lacp::Rate : public Entity
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

        YLeaf fast; //type: empty

}; // Native::Interface::Tengigabitethernet::Lacp::Rate


class Native::Interface::Tengigabitethernet::SwitchportConf : public Entity
{
    public:
        SwitchportConf();
        ~SwitchportConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf switchport; //type: boolean

}; // Native::Interface::Tengigabitethernet::SwitchportConf


class Native::Interface::Tengigabitethernet::Switchport : public Entity
{
    public:
        Switchport();
        ~Switchport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nonegotiate; //type: empty
        YLeaf protected_; //type: empty
        YLeaf host; //type: empty
        class Access; //type: Native::Interface::Tengigabitethernet::Switchport::Access
        class Block; //type: Native::Interface::Tengigabitethernet::Switchport::Block
        class Mode; //type: Native::Interface::Tengigabitethernet::Switchport::Mode
        class PortSecurity; //type: Native::Interface::Tengigabitethernet::Switchport::PortSecurity
        class Trunk; //type: Native::Interface::Tengigabitethernet::Switchport::Trunk
        class Voice; //type: Native::Interface::Tengigabitethernet::Switchport::Voice
        class Priority; //type: Native::Interface::Tengigabitethernet::Switchport::Priority
        class Autostate; //type: Native::Interface::Tengigabitethernet::Switchport::Autostate
        class PrivateVlan; //type: Native::Interface::Tengigabitethernet::Switchport::PrivateVlan
        class DeviceTracking; //type: Native::Interface::Tengigabitethernet::Switchport::DeviceTracking

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::Access> access;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::Autostate> autostate;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::Block> block;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::DeviceTracking> device_tracking;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::PortSecurity> port_security; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::Priority> priority;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::PrivateVlan> private_vlan;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::Trunk> trunk;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::Voice> voice;
        
}; // Native::Interface::Tengigabitethernet::Switchport


class Native::Interface::Tengigabitethernet::Switchport::Access : public Entity
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

        class Vlan; //type: Native::Interface::Tengigabitethernet::Switchport::Access::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::Access::Vlan> vlan;
        
}; // Native::Interface::Tengigabitethernet::Switchport::Access


class Native::Interface::Tengigabitethernet::Switchport::Access::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: one of uint16, enumeration
        YLeaf name; //type: string
        class VlanEnum;

}; // Native::Interface::Tengigabitethernet::Switchport::Access::Vlan


class Native::Interface::Tengigabitethernet::Switchport::Block : public Entity
{
    public:
        Block();
        ~Block();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf multicast; //type: empty
        YLeaf unicast; //type: empty

}; // Native::Interface::Tengigabitethernet::Switchport::Block


class Native::Interface::Tengigabitethernet::Switchport::Mode : public Entity
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

        YLeaf dynamic; //type: DynamicEnum
        class Access; //type: Native::Interface::Tengigabitethernet::Switchport::Mode::Access
        class Dot1QTunnel; //type: Native::Interface::Tengigabitethernet::Switchport::Mode::Dot1QTunnel
        class PrivateVlan; //type: Native::Interface::Tengigabitethernet::Switchport::Mode::PrivateVlan
        class Trunk; //type: Native::Interface::Tengigabitethernet::Switchport::Mode::Trunk

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::Mode::Access> access; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::Mode::Dot1QTunnel> dot1q_tunnel; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::Mode::PrivateVlan> private_vlan;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::Mode::Trunk> trunk; // presence node
                class DynamicEnum;

}; // Native::Interface::Tengigabitethernet::Switchport::Mode


class Native::Interface::Tengigabitethernet::Switchport::Mode::Access : public Entity
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


}; // Native::Interface::Tengigabitethernet::Switchport::Mode::Access


class Native::Interface::Tengigabitethernet::Switchport::Mode::Dot1QTunnel : public Entity
{
    public:
        Dot1QTunnel();
        ~Dot1QTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Tengigabitethernet::Switchport::Mode::Dot1QTunnel


class Native::Interface::Tengigabitethernet::Switchport::Mode::PrivateVlan : public Entity
{
    public:
        PrivateVlan();
        ~PrivateVlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf host; //type: empty
        YLeaf promiscuous; //type: empty

}; // Native::Interface::Tengigabitethernet::Switchport::Mode::PrivateVlan


class Native::Interface::Tengigabitethernet::Switchport::Mode::Trunk : public Entity
{
    public:
        Trunk();
        ~Trunk();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Tengigabitethernet::Switchport::Mode::Trunk


class Native::Interface::Tengigabitethernet::Switchport::PortSecurity : public Entity
{
    public:
        PortSecurity();
        ~PortSecurity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf violation; //type: ViolationEnum
        class Aging; //type: Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Aging
        class MacAddress; //type: Native::Interface::Tengigabitethernet::Switchport::PortSecurity::MacAddress
        class Maximum; //type: Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Maximum

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Aging> aging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::PortSecurity::MacAddress> mac_address;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Maximum> maximum;
                class ViolationEnum;

}; // Native::Interface::Tengigabitethernet::Switchport::PortSecurity


class Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Aging : public Entity
{
    public:
        Aging();
        ~Aging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf static_; //type: empty
        YLeaf time; //type: uint16
        YLeaf type; //type: TypeEnum
        class TypeEnum;

}; // Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Aging


class Native::Interface::Tengigabitethernet::Switchport::PortSecurity::MacAddress : public Entity
{
    public:
        MacAddress();
        ~MacAddress();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf sticky; //type: empty
        YLeaf hw_address; //type: string
        YLeaf vlan; //type: uint16

}; // Native::Interface::Tengigabitethernet::Switchport::PortSecurity::MacAddress


class Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Maximum : public Entity
{
    public:
        Maximum();
        ~Maximum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf max_addresses; //type: uint16
        YLeaf vlan; //type: string

}; // Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Maximum


class Native::Interface::Tengigabitethernet::Switchport::Trunk : public Entity
{
    public:
        Trunk();
        ~Trunk();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encapsulation; //type: EncapsulationEnum
        class Allowed; //type: Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed
        class Native_; //type: Native::Interface::Tengigabitethernet::Switchport::Trunk::Native_
        class Pruning; //type: Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed> allowed;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::Trunk::Native_> native;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning> pruning;
                class EncapsulationEnum;

}; // Native::Interface::Tengigabitethernet::Switchport::Trunk


class Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed : public Entity
{
    public:
        Allowed();
        ~Allowed();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vlan; //type: Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed::Vlan> vlan;
        
}; // Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed


class Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlans; //type: string
        YLeaf add; //type: one of uint16, string
        YLeaf all; //type: empty
        YLeaf none; //type: empty
        YLeaf remove; //type: one of uint16, string
        YLeafList except; //type: list of  one of uint16, string

}; // Native::Interface::Tengigabitethernet::Switchport::Trunk::Allowed::Vlan


class Native::Interface::Tengigabitethernet::Switchport::Trunk::Native_ : public Entity
{
    public:
        Native_();
        ~Native_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: one of uint16, enumeration
        class VlanEnum;

}; // Native::Interface::Tengigabitethernet::Switchport::Trunk::Native_


class Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning : public Entity
{
    public:
        Pruning();
        ~Pruning();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vlan; //type: Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning::Vlan

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning::Vlan> vlan;
        
}; // Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning


class Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf add; //type: one of uint16, string
        YLeaf none; //type: empty
        YLeaf remove; //type: one of uint16, string
        YLeafList vlans; //type: list of  one of uint16, string
        YLeafList except; //type: list of  one of uint16, string

}; // Native::Interface::Tengigabitethernet::Switchport::Trunk::Pruning::Vlan


class Native::Interface::Tengigabitethernet::Switchport::Voice : public Entity
{
    public:
        Voice();
        ~Voice();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vlan; //type: Native::Interface::Tengigabitethernet::Switchport::Voice::Vlan
        class Detect; //type: Native::Interface::Tengigabitethernet::Switchport::Voice::Detect

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::Voice::Detect> detect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::Voice::Vlan> vlan;
        
}; // Native::Interface::Tengigabitethernet::Switchport::Voice


class Native::Interface::Tengigabitethernet::Switchport::Voice::Vlan : public Entity
{
    public:
        Vlan();
        ~Vlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan; //type: one of uint16, string, enumeration
        YLeaf name; //type: string
        class VlanEnum;

}; // Native::Interface::Tengigabitethernet::Switchport::Voice::Vlan


class Native::Interface::Tengigabitethernet::Switchport::Voice::Detect : public Entity
{
    public:
        Detect();
        ~Detect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class CiscoPhone; //type: Native::Interface::Tengigabitethernet::Switchport::Voice::Detect::CiscoPhone

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::Voice::Detect::CiscoPhone> cisco_phone; // presence node
        
}; // Native::Interface::Tengigabitethernet::Switchport::Voice::Detect


class Native::Interface::Tengigabitethernet::Switchport::Voice::Detect::CiscoPhone : public Entity
{
    public:
        CiscoPhone();
        ~CiscoPhone();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf full_duplex; //type: empty

}; // Native::Interface::Tengigabitethernet::Switchport::Voice::Detect::CiscoPhone


class Native::Interface::Tengigabitethernet::Switchport::Priority : public Entity
{
    public:
        Priority();
        ~Priority();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Extend; //type: Native::Interface::Tengigabitethernet::Switchport::Priority::Extend

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::Priority::Extend> extend;
        
}; // Native::Interface::Tengigabitethernet::Switchport::Priority


class Native::Interface::Tengigabitethernet::Switchport::Priority::Extend : public Entity
{
    public:
        Extend();
        ~Extend();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf trust; //type: empty
        YLeaf cos; //type: uint8

}; // Native::Interface::Tengigabitethernet::Switchport::Priority::Extend


class Native::Interface::Tengigabitethernet::Switchport::Autostate : public Entity
{
    public:
        Autostate();
        ~Autostate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf exclude; //type: empty

}; // Native::Interface::Tengigabitethernet::Switchport::Autostate


class Native::Interface::Tengigabitethernet::Switchport::PrivateVlan : public Entity
{
    public:
        PrivateVlan();
        ~PrivateVlan();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Association; //type: Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association
        class HostAssociation; //type: Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::HostAssociation
        class Mapping; //type: Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Mapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association> association;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::HostAssociation> host_association;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Mapping> mapping;
        
}; // Native::Interface::Tengigabitethernet::Switchport::PrivateVlan


class Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association : public Entity
{
    public:
        Association();
        ~Association();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Host; //type: Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Host
        class Mapping; //type: Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Mapping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Host> host;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Mapping> mapping;
        
}; // Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association


class Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Host : public Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf primary_range; //type: uint16
        YLeaf secondary_range; //type: uint16

}; // Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Host


class Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Mapping : public Entity
{
    public:
        Mapping();
        ~Mapping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf primary_range; //type: uint16
        YLeaf secondary_range; //type: string
        YLeaf add; //type: string
        YLeaf remove; //type: string

}; // Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Association::Mapping


class Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::HostAssociation : public Entity
{
    public:
        HostAssociation();
        ~HostAssociation();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf primary_range; //type: uint16
        YLeaf secondary_range; //type: uint16

}; // Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::HostAssociation


class Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Mapping : public Entity
{
    public:
        Mapping();
        ~Mapping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf primary_range; //type: uint16
        YLeaf secondary_range; //type: string
        YLeaf add; //type: string
        YLeaf remove; //type: string

}; // Native::Interface::Tengigabitethernet::Switchport::PrivateVlan::Mapping


class Native::Interface::Tengigabitethernet::Switchport::DeviceTracking : public Entity
{
    public:
        DeviceTracking();
        ~DeviceTracking();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf attach_policy; //type: string

}; // Native::Interface::Tengigabitethernet::Switchport::DeviceTracking


class Native::Interface::Tengigabitethernet::Arp : public Entity
{
    public:
        Arp();
        ~Arp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint32

}; // Native::Interface::Tengigabitethernet::Arp


class Native::Interface::Tengigabitethernet::Backup : public Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Delay; //type: Native::Interface::Tengigabitethernet::Backup::Delay
        class Interface_; //type: Native::Interface::Tengigabitethernet::Backup::Interface_
        class Load; //type: Native::Interface::Tengigabitethernet::Backup::Load

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Backup::Delay> delay;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Backup::Interface_> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Backup::Load> load;
        
}; // Native::Interface::Tengigabitethernet::Backup


class Native::Interface::Tengigabitethernet::Backup::Delay : public Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf failure; //type: one of uint32, enumeration
        YLeaf secondary_disable; //type: one of uint32, enumeration
        class FailureEnum;
        class SecondaryDisableEnum;

}; // Native::Interface::Tengigabitethernet::Backup::Delay


class Native::Interface::Tengigabitethernet::Backup::Interface_ : public Entity
{
    public:
        Interface_();
        ~Interface_();

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
        class AtmSubinterface; //type: Native::Interface::Tengigabitethernet::Backup::Interface_::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Interface::Tengigabitethernet::Backup::Interface_::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Interface::Tengigabitethernet::Backup::Interface_::LispSubinterface
        class PortChannelSubinterface; //type: Native::Interface::Tengigabitethernet::Backup::Interface_::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Backup::Interface_::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Backup::Interface_::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Backup::Interface_::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Backup::Interface_::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Interface::Tengigabitethernet::Backup::Interface_


class Native::Interface::Tengigabitethernet::Backup::Interface_::AtmSubinterface : public Entity
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

}; // Native::Interface::Tengigabitethernet::Backup::Interface_::AtmSubinterface


class Native::Interface::Tengigabitethernet::Backup::Interface_::AtmAcrsubinterface : public Entity
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

}; // Native::Interface::Tengigabitethernet::Backup::Interface_::AtmAcrsubinterface


class Native::Interface::Tengigabitethernet::Backup::Interface_::LispSubinterface : public Entity
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

}; // Native::Interface::Tengigabitethernet::Backup::Interface_::LispSubinterface


class Native::Interface::Tengigabitethernet::Backup::Interface_::PortChannelSubinterface : public Entity
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

}; // Native::Interface::Tengigabitethernet::Backup::Interface_::PortChannelSubinterface


class Native::Interface::Tengigabitethernet::Backup::Load : public Entity
{
    public:
        Load();
        ~Load();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf kickin; //type: one of uint32, enumeration
        YLeaf kickout; //type: one of uint32, enumeration
        class KickinEnum;
        class KickoutEnum;

}; // Native::Interface::Tengigabitethernet::Backup::Load


class Native::Interface::Tengigabitethernet::Cemoudp : public Entity
{
    public:
        Cemoudp();
        ~Cemoudp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Reserve; //type: Native::Interface::Tengigabitethernet::Cemoudp::Reserve

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Cemoudp::Reserve> reserve;
        
}; // Native::Interface::Tengigabitethernet::Cemoudp


class Native::Interface::Tengigabitethernet::Cemoudp::Reserve : public Entity
{
    public:
        Reserve();
        ~Reserve();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acr; //type: uint8

}; // Native::Interface::Tengigabitethernet::Cemoudp::Reserve


class Native::Interface::Tengigabitethernet::CwsTunnel : public Entity
{
    public:
        CwsTunnel();
        ~CwsTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf in; //type: empty
        class Out; //type: Native::Interface::Tengigabitethernet::CwsTunnel::Out

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::CwsTunnel::Out> out;
        
}; // Native::Interface::Tengigabitethernet::CwsTunnel


class Native::Interface::Tengigabitethernet::CwsTunnel::Out : public Entity
{
    public:
        Out();
        ~Out();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf tunnel_number; //type: uint16

}; // Native::Interface::Tengigabitethernet::CwsTunnel::Out


class Native::Interface::Tengigabitethernet::L2ProtocolTunnel : public Entity
{
    public:
        L2ProtocolTunnel();
        ~L2ProtocolTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cdp; //type: empty
        YLeaf stp; //type: empty
        YLeaf vtp; //type: empty
        class DropThreshold; //type: Native::Interface::Tengigabitethernet::L2ProtocolTunnel::DropThreshold
        class ShutdownThreshold; //type: Native::Interface::Tengigabitethernet::L2ProtocolTunnel::ShutdownThreshold

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::L2ProtocolTunnel::DropThreshold> drop_threshold;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::L2ProtocolTunnel::ShutdownThreshold> shutdown_threshold;
        
}; // Native::Interface::Tengigabitethernet::L2ProtocolTunnel


class Native::Interface::Tengigabitethernet::L2ProtocolTunnel::DropThreshold : public Entity
{
    public:
        DropThreshold();
        ~DropThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_rate; //type: uint16
        YLeaf cdp; //type: uint16
        YLeaf stp; //type: uint16
        YLeaf vtp; //type: uint16

}; // Native::Interface::Tengigabitethernet::L2ProtocolTunnel::DropThreshold


class Native::Interface::Tengigabitethernet::L2ProtocolTunnel::ShutdownThreshold : public Entity
{
    public:
        ShutdownThreshold();
        ~ShutdownThreshold();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf packet_rate; //type: uint16
        YLeaf cdp; //type: uint16
        YLeaf stp; //type: uint16
        YLeaf vtp; //type: uint16

}; // Native::Interface::Tengigabitethernet::L2ProtocolTunnel::ShutdownThreshold


class Native::Interface::Tengigabitethernet::Encapsulation : public Entity
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

        class Dot1Q; //type: Native::Interface::Tengigabitethernet::Encapsulation::Dot1Q
        class Isl; //type: Native::Interface::Tengigabitethernet::Encapsulation::Isl
        class Ppp; //type: Native::Interface::Tengigabitethernet::Encapsulation::Ppp
        class Slip; //type: Native::Interface::Tengigabitethernet::Encapsulation::Slip
        class FrameRelay; //type: Native::Interface::Tengigabitethernet::Encapsulation::FrameRelay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Encapsulation::Dot1Q> dot1q;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Encapsulation::FrameRelay> frame_relay; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Encapsulation::Isl> isl;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Encapsulation::Ppp> ppp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Encapsulation::Slip> slip; // presence node
        
}; // Native::Interface::Tengigabitethernet::Encapsulation


class Native::Interface::Tengigabitethernet::Encapsulation::Dot1Q : public Entity
{
    public:
        Dot1Q();
        ~Dot1Q();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan_id; //type: uint16
        YLeaf native; //type: empty

}; // Native::Interface::Tengigabitethernet::Encapsulation::Dot1Q


class Native::Interface::Tengigabitethernet::Encapsulation::Isl : public Entity
{
    public:
        Isl();
        ~Isl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vlan_id; //type: uint16

}; // Native::Interface::Tengigabitethernet::Encapsulation::Isl


class Native::Interface::Tengigabitethernet::Encapsulation::Ppp : public Entity
{
    public:
        Ppp();
        ~Ppp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Tengigabitethernet::Encapsulation::Ppp


class Native::Interface::Tengigabitethernet::Encapsulation::Slip : public Entity
{
    public:
        Slip();
        ~Slip();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;


}; // Native::Interface::Tengigabitethernet::Encapsulation::Slip


class Native::Interface::Tengigabitethernet::Encapsulation::FrameRelay : public Entity
{
    public:
        FrameRelay();
        ~FrameRelay();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ietf; //type: empty

}; // Native::Interface::Tengigabitethernet::Encapsulation::FrameRelay


class Native::Interface::Tengigabitethernet::FairQueueConf : public Entity
{
    public:
        FairQueueConf();
        ~FairQueueConf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf fair_queue; //type: boolean

}; // Native::Interface::Tengigabitethernet::FairQueueConf


class Native::Interface::Tengigabitethernet::FairQueue : public Entity
{
    public:
        FairQueue();
        ~FairQueue();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf incomplete; //type: empty

}; // Native::Interface::Tengigabitethernet::FairQueue


class Native::Interface::Tengigabitethernet::Flowcontrol : public Entity
{
    public:
        Flowcontrol();
        ~Flowcontrol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf receive; //type: ReceiveEnum
        YLeaf send; //type: SendEnum
        class ReceiveEnum;
        class SendEnum;

}; // Native::Interface::Tengigabitethernet::Flowcontrol


class Native::Interface::Tengigabitethernet::Isis : public Entity
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

        YLeaf lsp_interval; //type: uint32
        YLeaf mesh_group; //type: one of uint32, enumeration
        YLeaf network; //type: NetworkEnum
        YLeaf protocol; //type: ProtocolEnum
        YLeaf retransmit_interval; //type: uint16
        YLeaf retransmit_throttle_interval; //type: uint16
        YLeaf tag; //type: uint32
        class AdjacencyFilter; //type: Native::Interface::Tengigabitethernet::Isis::AdjacencyFilter
        class Advertise; //type: Native::Interface::Tengigabitethernet::Isis::Advertise
        class Authentication; //type: Native::Interface::Tengigabitethernet::Isis::Authentication
        class CircuitType; //type: Native::Interface::Tengigabitethernet::Isis::CircuitType
        class CsnpInterval; //type: Native::Interface::Tengigabitethernet::Isis::CsnpInterval
        class Hello; //type: Native::Interface::Tengigabitethernet::Isis::Hello
        class HelloInterval; //type: Native::Interface::Tengigabitethernet::Isis::HelloInterval
        class HelloMultiplier; //type: Native::Interface::Tengigabitethernet::Isis::HelloMultiplier
        class Ipv6; //type: Native::Interface::Tengigabitethernet::Isis::Ipv6
        class Metric; //type: Native::Interface::Tengigabitethernet::Isis::Metric
        class Password; //type: Native::Interface::Tengigabitethernet::Isis::Password
        class Priority; //type: Native::Interface::Tengigabitethernet::Isis::Priority
        class ThreeWayHandshake; //type: Native::Interface::Tengigabitethernet::Isis::ThreeWayHandshake

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis::AdjacencyFilter> adjacency_filter;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis::Advertise> advertise;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis::CircuitType> circuit_type; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis::CsnpInterval> csnp_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis::Hello> hello;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis::HelloInterval> hello_interval;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis::HelloMultiplier> hello_multiplier;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis::Ipv6> ipv6;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis::Metric> metric;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis::Password> password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis::Priority> priority;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis::ThreeWayHandshake> three_way_handshake; // presence node
                class MeshGroupEnum;
        class NetworkEnum;
        class ProtocolEnum;

}; // Native::Interface::Tengigabitethernet::Isis


class Native::Interface::Tengigabitethernet::Isis::AdjacencyFilter : public Entity
{
    public:
        AdjacencyFilter();
        ~AdjacencyFilter();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf match_all; //type: empty

}; // Native::Interface::Tengigabitethernet::Isis::AdjacencyFilter


class Native::Interface::Tengigabitethernet::Isis::Advertise : public Entity
{
    public:
        Advertise();
        ~Advertise();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf prefix; //type: empty

}; // Native::Interface::Tengigabitethernet::Isis::Advertise


class Native::Interface::Tengigabitethernet::Isis::Authentication : public Entity
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

        class Mode; //type: Native::Interface::Tengigabitethernet::Isis::Authentication::Mode
        class KeyChain; //type: Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain
        class SendOnly; //type: Native::Interface::Tengigabitethernet::Isis::Authentication::SendOnly

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain> key_chain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis::Authentication::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis::Authentication::SendOnly> send_only; // presence node
        
}; // Native::Interface::Tengigabitethernet::Isis::Authentication


class Native::Interface::Tengigabitethernet::Isis::Authentication::Mode : public Entity
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

        class Md5; //type: Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Md5
        class Text; //type: Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Text

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Md5> md5; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Text> text; // presence node
        
}; // Native::Interface::Tengigabitethernet::Isis::Authentication::Mode


class Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Md5 : public Entity
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

        YLeaf levels; //type: AuthenticationLevelTypeEnum

}; // Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Md5


class Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Text : public Entity
{
    public:
        Text();
        ~Text();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: AuthenticationLevelTypeEnum

}; // Native::Interface::Tengigabitethernet::Isis::Authentication::Mode::Text


class Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain : public Entity
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
        class KeyChainList; //type: Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain::KeyChainList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain::KeyChainList> > key_chain_list;
        
}; // Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain


class Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain::KeyChainList : public Entity
{
    public:
        KeyChainList();
        ~KeyChainList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: AuthenticationLevelTypeEnum
        YLeaf name; //type: string

}; // Native::Interface::Tengigabitethernet::Isis::Authentication::KeyChain::KeyChainList


class Native::Interface::Tengigabitethernet::Isis::Authentication::SendOnly : public Entity
{
    public:
        SendOnly();
        ~SendOnly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: AuthenticationLevelTypeEnum

}; // Native::Interface::Tengigabitethernet::Isis::Authentication::SendOnly


class Native::Interface::Tengigabitethernet::Isis::CircuitType : public Entity
{
    public:
        CircuitType();
        ~CircuitType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        class LevelsEnum;

}; // Native::Interface::Tengigabitethernet::Isis::CircuitType


class Native::Interface::Tengigabitethernet::Isis::CsnpInterval : public Entity
{
    public:
        CsnpInterval();
        ~CsnpInterval();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf value_; //type: uint16
        class CsnpIntervalList; //type: Native::Interface::Tengigabitethernet::Isis::CsnpInterval::CsnpIntervalList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis::CsnpInterval::CsnpIntervalList> > csnp_interval_list;
        
}; // Native::Interface::Tengigabitethernet::Isis::CsnpInterval


class Native::Interface::Tengigabitethernet::Isis::CsnpInterval::CsnpIntervalList : public Entity
{
    public:
        CsnpIntervalList();
        ~CsnpIntervalList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf levels; //type: LevelsEnum
        YLeaf value_; //type: uint16
        class LevelsEnum;

}; // Native::Interface::Tengigabitethernet::Isis::CsnpInterval::CsnpIntervalList


class Native::Interface::Tengigabitethernet::Isis::Hello : public Entity
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

        class Padding; //type: Native::Interface::Tengigabitethernet::Isis::Hello::Padding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Interface::Tengigabitethernet::Isis::Hello::Padding> padding; // presence node
        
}; // Native::Interface::Tengigabitethernet::Isis::Hello

class Native::Interface::Gigabitethernet::Authentication::ControlDirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf both;
        static const Enum::YLeaf in;

};

class Native::Interface::Gigabitethernet::Authentication::HostModeEnum : public Enum
{
    public:
        static const Enum::YLeaf multi_auth;
        static const Enum::YLeaf multi_domain;
        static const Enum::YLeaf multi_host;
        static const Enum::YLeaf single_host;

};

class Native::Interface::Gigabitethernet::Authentication::PortControlEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf force_authorized;
        static const Enum::YLeaf force_unauthorized;

};

class Native::Interface::Gigabitethernet::Authentication::ViolationEnum : public Enum
{
    public:
        static const Enum::YLeaf protect;
        static const Enum::YLeaf replace;
        static const Enum::YLeaf restrict;
        static const Enum::YLeaf shutdown;

};

class Native::Interface::Gigabitethernet::SpanningTree::BpdufilterEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;
        static const Enum::YLeaf enable;

};

class Native::Interface::Gigabitethernet::SpanningTree::GuardEnum : public Enum
{
    public:
        static const Enum::YLeaf loop;
        static const Enum::YLeaf none;
        static const Enum::YLeaf root;

};

class Native::Interface::Gigabitethernet::SpanningTree::LinkTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf none;
        static const Enum::YLeaf point_to_point;
        static const Enum::YLeaf root;
        static const Enum::YLeaf shared;

};

class Native::Interface::Gigabitethernet::Datalink::Flow::Monitor::InputOutputEnum : public Enum
{
    public:
        static const Enum::YLeaf input;
        static const Enum::YLeaf output;

};

class Native::Interface::Gigabitethernet::Mac::AccessGroup::AclName::ApplyToEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class Native::Interface::Tengigabitethernet::MediaTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_select;
        static const Enum::YLeaf rj45;
        static const Enum::YLeaf sfp;

};

class Native::Interface::Tengigabitethernet::PortTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf nni;

};

class Native::Interface::Tengigabitethernet::IfStateEnum : public Enum
{
    public:
        static const Enum::YLeaf nhrp;

};

class Native::Interface::Tengigabitethernet::ServiceInsertionEnum : public Enum
{
    public:
        static const Enum::YLeaf waas;

};

class Native::Interface::Tengigabitethernet::ChannelProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf lacp;
        static const Enum::YLeaf pagp;

};

class Native::Interface::Tengigabitethernet::DuplexEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf full;
        static const Enum::YLeaf half;

};

class Native::Interface::Tengigabitethernet::Switchport::Access::Vlan::VlanEnum : public Enum
{
    public:
        static const Enum::YLeaf dynamic;

};

class Native::Interface::Tengigabitethernet::Switchport::Mode::DynamicEnum : public Enum
{
    public:
        static const Enum::YLeaf auto_;
        static const Enum::YLeaf desirable;

};

class Native::Interface::Tengigabitethernet::Switchport::PortSecurity::ViolationEnum : public Enum
{
    public:
        static const Enum::YLeaf protect;
        static const Enum::YLeaf restrict;
        static const Enum::YLeaf shutdown;

};

class Native::Interface::Tengigabitethernet::Switchport::PortSecurity::Aging::TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf absolute;
        static const Enum::YLeaf inactivity;

};

class Native::Interface::Tengigabitethernet::Switchport::Trunk::EncapsulationEnum : public Enum
{
    public:
        static const Enum::YLeaf dot1q;
        static const Enum::YLeaf isl;
        static const Enum::YLeaf negotiate;

};

class Native::Interface::Tengigabitethernet::Switchport::Trunk::Native_::VlanEnum : public Enum
{
    public:
        static const Enum::YLeaf tag;

};

class Native::Interface::Tengigabitethernet::Switchport::Voice::Vlan::VlanEnum : public Enum
{
    public:
        static const Enum::YLeaf dot1p;
        static const Enum::YLeaf none;
        static const Enum::YLeaf untagged;

};

class Native::Interface::Tengigabitethernet::Backup::Delay::FailureEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Tengigabitethernet::Backup::Delay::SecondaryDisableEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Tengigabitethernet::Backup::Load::KickinEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Tengigabitethernet::Backup::Load::KickoutEnum : public Enum
{
    public:
        static const Enum::YLeaf never;

};

class Native::Interface::Tengigabitethernet::Flowcontrol::ReceiveEnum : public Enum
{
    public:
        static const Enum::YLeaf desired;
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;

};

class Native::Interface::Tengigabitethernet::Flowcontrol::SendEnum : public Enum
{
    public:
        static const Enum::YLeaf desired;
        static const Enum::YLeaf off;
        static const Enum::YLeaf on;

};

class Native::Interface::Tengigabitethernet::Isis::MeshGroupEnum : public Enum
{
    public:
        static const Enum::YLeaf blocked;

};

class Native::Interface::Tengigabitethernet::Isis::NetworkEnum : public Enum
{
    public:
        static const Enum::YLeaf point_to_point;

};

class Native::Interface::Tengigabitethernet::Isis::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf shutdown;

};

class Native::Interface::Tengigabitethernet::Isis::CircuitType::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_1_2;
        static const Enum::YLeaf level_2_only;

};

class Native::Interface::Tengigabitethernet::Isis::CsnpInterval::CsnpIntervalList::LevelsEnum : public Enum
{
    public:
        static const Enum::YLeaf level_1;
        static const Enum::YLeaf level_2;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_31_ */

