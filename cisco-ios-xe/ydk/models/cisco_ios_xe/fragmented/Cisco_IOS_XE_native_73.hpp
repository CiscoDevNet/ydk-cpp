#ifndef _CISCO_IOS_XE_NATIVE_73_
#define _CISCO_IOS_XE_NATIVE_73_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_72.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::Logging::SourceInterface::PortChannelSubinterface : public Entity
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

}; // Native::Logging::SourceInterface::PortChannelSubinterface


class Native::Logging::SnmpTrap : public Entity
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

        YLeaf alerts; //type: empty
        YLeaf critical; //type: empty
        YLeaf debugging; //type: empty
        YLeaf emergencies; //type: empty
        YLeaf errors; //type: empty
        YLeaf informational; //type: empty
        YLeaf notifications; //type: empty
        YLeaf warnings; //type: empty

}; // Native::Logging::SnmpTrap


class Native::Logging::Trap : public Entity
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

        YLeaf trap_default; //type: empty
        YLeaf severity; //type: one of uint8, enumeration
        class SeverityEnum;

}; // Native::Logging::Trap


class Native::Logging::File : public Entity
{
    public:
        File();
        ~File();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf max_size; //type: uint32
        YLeaf min_size; //type: uint32
        YLeaf severity; //type: one of uint16, enumeration

}; // Native::Logging::File


class Native::Aaa : public Entity
{
    public:
        Aaa();
        ~Aaa();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf new_model; //type: empty
        YLeaf session_id; //type: SessionIdEnum
        class Group; //type: Native::Aaa::Group
        class Authentication; //type: Native::Aaa::Authentication
        class Authorization; //type: Native::Aaa::Authorization
        class Accounting; //type: Native::Aaa::Accounting
        class Server; //type: Native::Aaa::Server

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting> accounting;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication> authentication;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization> authorization;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group> group;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Server> server;
                class SessionIdEnum;

}; // Native::Aaa


class Native::Aaa::Group : public Entity
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

        class Server; //type: Native::Aaa::Group::Server

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server> server;
        
}; // Native::Aaa::Group


class Native::Aaa::Group::Server : public Entity
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

        class Tacacsplus; //type: Native::Aaa::Group::Server::Tacacsplus
        class Tacacs; //type: Native::Aaa::Group::Server::Tacacs
        class Radius; //type: Native::Aaa::Group::Server::Radius

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius> > radius;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacs> > tacacs;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus> > tacacsplus;
        
}; // Native::Aaa::Group::Server


class Native::Aaa::Group::Server::Tacacsplus : public Entity
{
    public:
        Tacacsplus();
        ~Tacacsplus();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Server_; //type: Native::Aaa::Group::Server::Tacacsplus::Server_
        class ServerPrivate; //type: Native::Aaa::Group::Server::Tacacsplus::ServerPrivate
        class Ip; //type: Native::Aaa::Group::Server::Tacacsplus::Ip

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Server_> server;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::ServerPrivate> > server_private;
        
}; // Native::Aaa::Group::Server::Tacacsplus


class Native::Aaa::Group::Server::Tacacsplus::Server_ : public Entity
{
    public:
        Server_();
        ~Server_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Aaa::Group::Server::Tacacsplus::Server_


class Native::Aaa::Group::Server::Tacacsplus::ServerPrivate : public Entity
{
    public:
        ServerPrivate();
        ~ServerPrivate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: one of union, string
        YLeaf timeout; //type: uint16
        class Key; //type: Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key> key;
        
}; // Native::Aaa::Group::Server::Tacacsplus::ServerPrivate


class Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key : public Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption; //type: EncryptionEnum
        YLeaf key; //type: string
        class EncryptionEnum;

}; // Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key


class Native::Aaa::Group::Server::Tacacsplus::Ip : public Entity
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

        class Tacacs; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs
        class Vrf; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs> tacacs;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf> vrf;
        
}; // Native::Aaa::Group::Server::Tacacsplus::Ip


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs : public Entity
{
    public:
        Tacacs();
        ~Tacacs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SourceInterface; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface> source_interface;
        
}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface : public Entity
{
    public:
        SourceInterface();
        ~SourceInterface();

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
        class AtmSubinterface; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmSubinterface : public Entity
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

}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmSubinterface


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmAcrsubinterface : public Entity
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

}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmAcrsubinterface


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LispSubinterface : public Entity
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

}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LispSubinterface


class Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface : public Entity
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

}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface


class Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf : public Entity
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

        YLeaf forwarding; //type: string

}; // Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf


class Native::Aaa::Group::Server::Tacacs : public Entity
{
    public:
        Tacacs();
        ~Tacacs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Aaa::Group::Server::Tacacs


class Native::Aaa::Group::Server::Radius : public Entity
{
    public:
        Radius();
        ~Radius();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class Server_; //type: Native::Aaa::Group::Server::Radius::Server_
        class Ip; //type: Native::Aaa::Group::Server::Radius::Ip
        class LoadBalance; //type: Native::Aaa::Group::Server::Radius::LoadBalance

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::LoadBalance> load_balance;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Server_> server;
        
}; // Native::Aaa::Group::Server::Radius


class Native::Aaa::Group::Server::Radius::Server_ : public Entity
{
    public:
        Server_();
        ~Server_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Name; //type: Native::Aaa::Group::Server::Radius::Server_::Name
        class Direct; //type: Native::Aaa::Group::Server::Radius::Server_::Direct

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Server_::Direct> > direct;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Server_::Name> > name;
        
}; // Native::Aaa::Group::Server::Radius::Server_


class Native::Aaa::Group::Server::Radius::Server_::Name : public Entity
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

        YLeaf name; //type: string

}; // Native::Aaa::Group::Server::Radius::Server_::Name


class Native::Aaa::Group::Server::Radius::Server_::Direct : public Entity
{
    public:
        Direct();
        ~Direct();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: one of union, string
        YLeaf auth_port; //type: uint16
        YLeaf acct_port; //type: uint16

}; // Native::Aaa::Group::Server::Radius::Server_::Direct


class Native::Aaa::Group::Server::Radius::Ip : public Entity
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

        class Radius_; //type: Native::Aaa::Group::Server::Radius::Ip::Radius_
        class Vrf; //type: Native::Aaa::Group::Server::Radius::Ip::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Ip::Radius_> radius;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::Ip::Vrf> vrf;
        
}; // Native::Aaa::Group::Server::Radius::Ip


class Native::Aaa::Group::Server::Radius::Ip::Radius_ : public Entity
{
    public:
        Radius_();
        ~Radius_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source_interface; //type: string

}; // Native::Aaa::Group::Server::Radius::Ip::Radius_


class Native::Aaa::Group::Server::Radius::Ip::Vrf : public Entity
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

        YLeaf forwarding; //type: string

}; // Native::Aaa::Group::Server::Radius::Ip::Vrf


class Native::Aaa::Group::Server::Radius::LoadBalance : public Entity
{
    public:
        LoadBalance();
        ~LoadBalance();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Method; //type: Native::Aaa::Group::Server::Radius::LoadBalance::Method

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::LoadBalance::Method> method;
        
}; // Native::Aaa::Group::Server::Radius::LoadBalance


class Native::Aaa::Group::Server::Radius::LoadBalance::Method : public Entity
{
    public:
        Method();
        ~Method();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LeastOutstanding; //type: Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding> least_outstanding;
        
}; // Native::Aaa::Group::Server::Radius::LoadBalance::Method


class Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding : public Entity
{
    public:
        LeastOutstanding();
        ~LeastOutstanding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf batch_size; //type: uint32
        YLeaf ignore_preferred_server; //type: empty

}; // Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding


class Native::Aaa::Authentication : public Entity
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

        class Attempts; //type: Native::Aaa::Authentication::Attempts
        class Banner; //type: Native::Aaa::Authentication::Banner
        class Dot1X; //type: Native::Aaa::Authentication::Dot1X
        class Enable; //type: Native::Aaa::Authentication::Enable
        class Eou; //type: Native::Aaa::Authentication::Eou
        class FailMessage; //type: Native::Aaa::Authentication::FailMessage
        class Login; //type: Native::Aaa::Authentication::Login
        class Onep; //type: Native::Aaa::Authentication::Onep
        class Ppp; //type: Native::Aaa::Authentication::Ppp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Attempts> attempts;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Banner> banner;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Dot1X> dot1x;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Enable> enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Eou> eou;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::FailMessage> fail_message;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Login> > login;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Onep> onep;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Ppp> > ppp;
        
}; // Native::Aaa::Authentication


class Native::Aaa::Authentication::Attempts : public Entity
{
    public:
        Attempts();
        ~Attempts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf login; //type: uint8

}; // Native::Aaa::Authentication::Attempts


class Native::Aaa::Authentication::Banner : public Entity
{
    public:
        Banner();
        ~Banner();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf start_marker; //type: string
        YLeaf message; //type: string
        YLeaf end_marker; //type: string

}; // Native::Aaa::Authentication::Banner


class Native::Aaa::Authentication::Dot1X : public Entity
{
    public:
        Dot1X();
        ~Dot1X();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Dot1XList; //type: Native::Aaa::Authentication::Dot1X::Dot1XList
        class Default_; //type: Native::Aaa::Authentication::Dot1X::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Dot1X::Default_> default_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Dot1X::Dot1XList> > dot1x_list;
        
}; // Native::Aaa::Authentication::Dot1X


class Native::Aaa::Authentication::Dot1X::Dot1XList : public Entity
{
    public:
        Dot1XList();
        ~Dot1XList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf group; //type: one of string, enumeration
        class GroupEnum;

}; // Native::Aaa::Authentication::Dot1X::Dot1XList


class Native::Aaa::Authentication::Dot1X::Default_ : public Entity
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

        YLeaf group; //type: one of string, enumeration
        class GroupEnum;

}; // Native::Aaa::Authentication::Dot1X::Default_


class Native::Aaa::Authentication::Enable : public Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Default_; //type: Native::Aaa::Authentication::Enable::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Enable::Default_> default_;
        
}; // Native::Aaa::Authentication::Enable


class Native::Aaa::Authentication::Enable::Default_ : public Entity
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

        YLeaf group; //type: one of string, enumeration
        YLeaf enable; //type: empty
        YLeaf line; //type: empty
        YLeaf none; //type: empty
        class GroupEnum;

}; // Native::Aaa::Authentication::Enable::Default_


class Native::Aaa::Authentication::Eou : public Entity
{
    public:
        Eou();
        ~Eou();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Default_; //type: Native::Aaa::Authentication::Eou::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Eou::Default_> default_;
        
}; // Native::Aaa::Authentication::Eou


class Native::Aaa::Authentication::Eou::Default_ : public Entity
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

        class Group; //type: Native::Aaa::Authentication::Eou::Default_::Group

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Eou::Default_::Group> group;
        
}; // Native::Aaa::Authentication::Eou::Default_


class Native::Aaa::Authentication::Eou::Default_::Group : public Entity
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

        YLeaf radius; //type: empty

}; // Native::Aaa::Authentication::Eou::Default_::Group


class Native::Aaa::Authentication::FailMessage : public Entity
{
    public:
        FailMessage();
        ~FailMessage();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf start_marker; //type: string
        YLeaf message; //type: string
        YLeaf end_marker; //type: string

}; // Native::Aaa::Authentication::FailMessage


class Native::Aaa::Authentication::Login : public Entity
{
    public:
        Login();
        ~Login();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: one of string, enumeration
        class A1; //type: Native::Aaa::Authentication::Login::A1
        class A2; //type: Native::Aaa::Authentication::Login::A2
        class A3; //type: Native::Aaa::Authentication::Login::A3
        class A4; //type: Native::Aaa::Authentication::Login::A4

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Login::A1> a1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Login::A2> a2;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Login::A3> a3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Login::A4> a4;
                class NameEnum;

}; // Native::Aaa::Authentication::Login


class Native::Aaa::Authentication::Login::A1 : public Entity
{
    public:
        A1();
        ~A1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf none; //type: empty
        YLeaf krb5; //type: empty
        YLeaf krb5_telnet; //type: empty
        YLeaf line; //type: empty
        YLeaf enable; //type: empty
        YLeaf local; //type: empty
        YLeaf local_case; //type: empty
        YLeaf group; //type: one of string, enumeration
        YLeaf cache; //type: one of string, enumeration
        class GroupEnum;
        class CacheEnum;

}; // Native::Aaa::Authentication::Login::A1


class Native::Aaa::Authentication::Login::A2 : public Entity
{
    public:
        A2();
        ~A2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: one of string, enumeration
        YLeaf cache; //type: one of string, enumeration
        YLeaf none; //type: empty
        YLeaf krb5; //type: empty
        YLeaf krb5_telnet; //type: empty
        YLeaf line; //type: empty
        YLeaf enable; //type: empty
        YLeaf local; //type: empty
        YLeaf local_case; //type: empty
        class GroupEnum;
        class CacheEnum;

}; // Native::Aaa::Authentication::Login::A2


class Native::Aaa::Authentication::Login::A3 : public Entity
{
    public:
        A3();
        ~A3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: one of string, enumeration
        YLeaf cache; //type: one of string, enumeration
        YLeaf none; //type: empty
        YLeaf krb5; //type: empty
        YLeaf krb5_telnet; //type: empty
        YLeaf line; //type: empty
        YLeaf enable; //type: empty
        YLeaf local; //type: empty
        YLeaf local_case; //type: empty
        class GroupEnum;
        class CacheEnum;

}; // Native::Aaa::Authentication::Login::A3


class Native::Aaa::Authentication::Login::A4 : public Entity
{
    public:
        A4();
        ~A4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: one of string, enumeration
        YLeaf cache; //type: one of string, enumeration
        YLeaf none; //type: empty
        YLeaf krb5; //type: empty
        YLeaf krb5_telnet; //type: empty
        YLeaf line; //type: empty
        YLeaf enable; //type: empty
        YLeaf local; //type: empty
        YLeaf local_case; //type: empty
        class GroupEnum;
        class CacheEnum;

}; // Native::Aaa::Authentication::Login::A4


class Native::Aaa::Authentication::Onep : public Entity
{
    public:
        Onep();
        ~Onep();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Default_; //type: Native::Aaa::Authentication::Onep::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Onep::Default_> default_;
        
}; // Native::Aaa::Authentication::Onep


class Native::Aaa::Authentication::Onep::Default_ : public Entity
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

        class Local; //type: Native::Aaa::Authentication::Onep::Default_::Local

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Onep::Default_::Local> local; // presence node
        
}; // Native::Aaa::Authentication::Onep::Default_


class Native::Aaa::Authentication::Onep::Default_::Local : public Entity
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


}; // Native::Aaa::Authentication::Onep::Default_::Local


class Native::Aaa::Authentication::Ppp : public Entity
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

        YLeaf id; //type: string
        class A1; //type: Native::Aaa::Authentication::Ppp::A1
        class A2; //type: Native::Aaa::Authentication::Ppp::A2
        class A3; //type: Native::Aaa::Authentication::Ppp::A3
        class A4; //type: Native::Aaa::Authentication::Ppp::A4

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Ppp::A1> a1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Ppp::A2> a2;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Ppp::A3> a3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authentication::Ppp::A4> a4;
        
}; // Native::Aaa::Authentication::Ppp


class Native::Aaa::Authentication::Ppp::A1 : public Entity
{
    public:
        A1();
        ~A1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf if_needed; //type: empty
        YLeaf none; //type: empty
        YLeaf krb5; //type: empty
        YLeaf local; //type: empty
        YLeaf local_case; //type: empty
        YLeaf group; //type: one of string, enumeration
        YLeaf cache; //type: one of string, enumeration
        class GroupEnum;
        class CacheEnum;

}; // Native::Aaa::Authentication::Ppp::A1


class Native::Aaa::Authentication::Ppp::A2 : public Entity
{
    public:
        A2();
        ~A2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: one of string, enumeration
        YLeaf cache; //type: one of string, enumeration
        YLeaf none; //type: empty
        YLeaf krb5; //type: empty
        YLeaf local; //type: empty
        YLeaf local_case; //type: empty
        class GroupEnum;
        class CacheEnum;

}; // Native::Aaa::Authentication::Ppp::A2


class Native::Aaa::Authentication::Ppp::A3 : public Entity
{
    public:
        A3();
        ~A3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: one of string, enumeration
        YLeaf cache; //type: one of string, enumeration
        YLeaf none; //type: empty
        YLeaf krb5; //type: empty
        YLeaf local; //type: empty
        YLeaf local_case; //type: empty
        class GroupEnum;
        class CacheEnum;

}; // Native::Aaa::Authentication::Ppp::A3


class Native::Aaa::Authentication::Ppp::A4 : public Entity
{
    public:
        A4();
        ~A4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: one of string, enumeration
        YLeaf cache; //type: one of string, enumeration
        YLeaf none; //type: empty
        YLeaf krb5; //type: empty
        YLeaf local; //type: empty
        YLeaf local_case; //type: empty
        class GroupEnum;
        class CacheEnum;

}; // Native::Aaa::Authentication::Ppp::A4


class Native::Aaa::Authorization : public Entity
{
    public:
        Authorization();
        ~Authorization();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf console; //type: empty
        YLeaf config_commands; //type: empty
        class AuthType; //type: Native::Aaa::Authorization::AuthType
        class Commands; //type: Native::Aaa::Authorization::Commands
        class Exec; //type: Native::Aaa::Authorization::Exec
        class Eventmanager; //type: Native::Aaa::Authorization::Eventmanager
        class Network; //type: Native::Aaa::Authorization::Network
        class AuthProxy; //type: Native::Aaa::Authorization::AuthProxy
        class Onep; //type: Native::Aaa::Authorization::Onep

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::AuthProxy> auth_proxy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::AuthType> auth_type;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Commands> > commands;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Eventmanager> > eventmanager;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Exec> > exec;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Network> > network;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Onep> onep;
        
}; // Native::Aaa::Authorization


class Native::Aaa::Authorization::AuthType : public Entity
{
    public:
        AuthType();
        ~AuthType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Default_; //type: Native::Aaa::Authorization::AuthType::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::AuthType::Default_> default_;
        
}; // Native::Aaa::Authorization::AuthType


class Native::Aaa::Authorization::AuthType::Default_ : public Entity
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

        YLeaf group; //type: GroupEnum
        class GroupEnum;

}; // Native::Aaa::Authorization::AuthType::Default_


class Native::Aaa::Authorization::Commands : public Entity
{
    public:
        Commands();
        ~Commands();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level; //type: uint8
        YLeaf list_name; //type: one of string, enumeration
        YLeaf group; //type: one of string, enumeration
        YLeaf if_authenticated; //type: empty
        YLeaf local; //type: empty
        YLeaf none; //type: empty
        class ListNameEnum;
        class GroupEnum;

}; // Native::Aaa::Authorization::Commands


class Native::Aaa::Authorization::Exec : public Entity
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

        YLeaf name; //type: string
        class A1; //type: Native::Aaa::Authorization::Exec::A1
        class A2; //type: Native::Aaa::Authorization::Exec::A2
        class A3; //type: Native::Aaa::Authorization::Exec::A3
        class A4; //type: Native::Aaa::Authorization::Exec::A4

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Exec::A1> a1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Exec::A2> a2;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Exec::A3> a3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Exec::A4> a4;
        
}; // Native::Aaa::Authorization::Exec


class Native::Aaa::Authorization::Exec::A1 : public Entity
{
    public:
        A1();
        ~A1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf if_authenticated; //type: empty
        YLeaf none; //type: empty
        YLeaf krb5_instance; //type: empty
        YLeaf local; //type: empty
        YLeaf group; //type: one of string, enumeration
        YLeaf cache; //type: one of string, enumeration
        class GroupEnum;
        class CacheEnum;

}; // Native::Aaa::Authorization::Exec::A1


class Native::Aaa::Authorization::Exec::A2 : public Entity
{
    public:
        A2();
        ~A2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: one of string, enumeration
        YLeaf cache; //type: one of string, enumeration
        YLeaf if_authenticated; //type: empty
        YLeaf none; //type: empty
        YLeaf krb5_instance; //type: empty
        YLeaf local; //type: empty
        class GroupEnum;
        class CacheEnum;

}; // Native::Aaa::Authorization::Exec::A2


class Native::Aaa::Authorization::Exec::A3 : public Entity
{
    public:
        A3();
        ~A3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: one of string, enumeration
        YLeaf cache; //type: one of string, enumeration
        YLeaf none; //type: empty
        YLeaf if_authenticated; //type: empty
        YLeaf krb5_instance; //type: empty
        YLeaf local; //type: empty
        class GroupEnum;
        class CacheEnum;

}; // Native::Aaa::Authorization::Exec::A3


class Native::Aaa::Authorization::Exec::A4 : public Entity
{
    public:
        A4();
        ~A4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: one of string, enumeration
        YLeaf cache; //type: one of string, enumeration
        YLeaf none; //type: empty
        YLeaf if_authenticated; //type: empty
        YLeaf krb5_instance; //type: empty
        YLeaf local; //type: empty
        class GroupEnum;
        class CacheEnum;

}; // Native::Aaa::Authorization::Exec::A4


class Native::Aaa::Authorization::Eventmanager : public Entity
{
    public:
        Eventmanager();
        ~Eventmanager();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf group; //type: one of string, enumeration
        YLeaf local; //type: empty
        YLeaf none; //type: empty
        class GroupEnum;

}; // Native::Aaa::Authorization::Eventmanager


class Native::Aaa::Authorization::Network : public Entity
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

        YLeaf id; //type: one of string, enumeration
        class A1; //type: Native::Aaa::Authorization::Network::A1
        class A2; //type: Native::Aaa::Authorization::Network::A2
        class A3; //type: Native::Aaa::Authorization::Network::A3
        class A4; //type: Native::Aaa::Authorization::Network::A4

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Network::A1> a1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Network::A2> a2;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Network::A3> a3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Network::A4> a4;
                class IdEnum;

}; // Native::Aaa::Authorization::Network


class Native::Aaa::Authorization::Network::A1 : public Entity
{
    public:
        A1();
        ~A1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf if_authenticated; //type: empty
        YLeaf none; //type: empty
        YLeaf local; //type: empty
        YLeaf group; //type: one of string, enumeration
        YLeaf cache; //type: one of string, enumeration
        class GroupEnum;
        class CacheEnum;

}; // Native::Aaa::Authorization::Network::A1


class Native::Aaa::Authorization::Network::A2 : public Entity
{
    public:
        A2();
        ~A2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: one of string, enumeration
        YLeaf cache; //type: one of string, enumeration
        YLeaf if_authenticated; //type: empty
        YLeaf none; //type: empty
        YLeaf local; //type: empty
        class GroupEnum;
        class CacheEnum;

}; // Native::Aaa::Authorization::Network::A2


class Native::Aaa::Authorization::Network::A3 : public Entity
{
    public:
        A3();
        ~A3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: one of string, enumeration
        YLeaf cache; //type: one of string, enumeration
        YLeaf none; //type: empty
        YLeaf if_authenticated; //type: empty
        YLeaf local; //type: empty
        class GroupEnum;
        class CacheEnum;

}; // Native::Aaa::Authorization::Network::A3


class Native::Aaa::Authorization::Network::A4 : public Entity
{
    public:
        A4();
        ~A4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: one of string, enumeration
        YLeaf cache; //type: one of string, enumeration
        YLeaf none; //type: empty
        YLeaf if_authenticated; //type: empty
        YLeaf local; //type: empty
        class GroupEnum;
        class CacheEnum;

}; // Native::Aaa::Authorization::Network::A4


class Native::Aaa::Authorization::AuthProxy : public Entity
{
    public:
        AuthProxy();
        ~AuthProxy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Default_; //type: Native::Aaa::Authorization::AuthProxy::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::AuthProxy::Default_> default_;
        
}; // Native::Aaa::Authorization::AuthProxy


class Native::Aaa::Authorization::AuthProxy::Default_ : public Entity
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

        class Group; //type: Native::Aaa::Authorization::AuthProxy::Default_::Group

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::AuthProxy::Default_::Group> group;
        
}; // Native::Aaa::Authorization::AuthProxy::Default_


class Native::Aaa::Authorization::AuthProxy::Default_::Group : public Entity
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

        YLeaf radius; //type: empty
        YLeaf group_name; //type: string

}; // Native::Aaa::Authorization::AuthProxy::Default_::Group


class Native::Aaa::Authorization::Onep : public Entity
{
    public:
        Onep();
        ~Onep();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Default_; //type: Native::Aaa::Authorization::Onep::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Onep::Default_> default_;
        
}; // Native::Aaa::Authorization::Onep


class Native::Aaa::Authorization::Onep::Default_ : public Entity
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

        class Group; //type: Native::Aaa::Authorization::Onep::Default_::Group

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Onep::Default_::Group> group;
        
}; // Native::Aaa::Authorization::Onep::Default_


class Native::Aaa::Authorization::Onep::Default_::Group : public Entity
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

        class GroupWord; //type: Native::Aaa::Authorization::Onep::Default_::Group::GroupWord

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Authorization::Onep::Default_::Group::GroupWord> > group_word;
        
}; // Native::Aaa::Authorization::Onep::Default_::Group


class Native::Aaa::Authorization::Onep::Default_::Group::GroupWord : public Entity
{
    public:
        GroupWord();
        ~GroupWord();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group_word; //type: string

}; // Native::Aaa::Authorization::Onep::Default_::Group::GroupWord


class Native::Aaa::Accounting : public Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Commands; //type: Native::Aaa::Accounting::Commands
        class Connection; //type: Native::Aaa::Accounting::Connection
        class DelayStart; //type: Native::Aaa::Accounting::DelayStart
        class Dot1X; //type: Native::Aaa::Accounting::Dot1X
        class Exec; //type: Native::Aaa::Accounting::Exec
        class ExecSubmode; //type: Native::Aaa::Accounting::ExecSubmode
        class Network; //type: Native::Aaa::Accounting::Network
        class Send; //type: Native::Aaa::Accounting::Send
        class System; //type: Native::Aaa::Accounting::System
        class Update; //type: Native::Aaa::Accounting::Update
        class AuthProxy; //type: Native::Aaa::Accounting::AuthProxy

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::AuthProxy> auth_proxy;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Commands> > commands;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Connection> > connection;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::DelayStart> delay_start;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Dot1X> > dot1x;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Exec> > exec;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::ExecSubmode> exec_submode;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Network> > network;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Send> send;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::System> system;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Update> update;
        
}; // Native::Aaa::Accounting


class Native::Aaa::Accounting::Commands : public Entity
{
    public:
        Commands();
        ~Commands();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf level; //type: uint8
        YLeaf list_name; //type: one of string, enumeration
        YLeaf action_type; //type: ActionTypeEnum
        YLeaf broadcast; //type: empty
        YLeaf group; //type: one of string, enumeration
        class ListNameEnum;
        class ActionTypeEnum;
        class GroupEnum;

}; // Native::Aaa::Accounting::Commands


class Native::Aaa::Accounting::Connection : public Entity
{
    public:
        Connection();
        ~Connection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf none; //type: empty
        class StartStop; //type: Native::Aaa::Accounting::Connection::StartStop
        class StopOnly; //type: Native::Aaa::Accounting::Connection::StopOnly

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Connection::StartStop> start_stop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Connection::StopOnly> stop_only;
        
}; // Native::Aaa::Accounting::Connection


class Native::Aaa::Accounting::Connection::StartStop : public Entity
{
    public:
        StartStop();
        ~StartStop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf broadcast; //type: empty
        YLeaf group; //type: one of string, enumeration
        class GroupEnum;

}; // Native::Aaa::Accounting::Connection::StartStop


class Native::Aaa::Accounting::Connection::StopOnly : public Entity
{
    public:
        StopOnly();
        ~StopOnly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf broadcast; //type: empty
        YLeaf group; //type: one of string, enumeration
        class GroupEnum;

}; // Native::Aaa::Accounting::Connection::StopOnly


class Native::Aaa::Accounting::DelayStart : public Entity
{
    public:
        DelayStart();
        ~DelayStart();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf extended_delay; //type: uint8
        YLeaf all; //type: empty

}; // Native::Aaa::Accounting::DelayStart


class Native::Aaa::Accounting::Dot1X : public Entity
{
    public:
        Dot1X();
        ~Dot1X();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        class StartStop; //type: Native::Aaa::Accounting::Dot1X::StartStop

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Dot1X::StartStop> start_stop;
        
}; // Native::Aaa::Accounting::Dot1X


class Native::Aaa::Accounting::Dot1X::StartStop : public Entity
{
    public:
        StartStop();
        ~StartStop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf broadcast; //type: empty
        YLeaf group; //type: one of string, enumeration
        class GroupEnum;

}; // Native::Aaa::Accounting::Dot1X::StartStop


class Native::Aaa::Accounting::Exec : public Entity
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

        YLeaf name; //type: string
        YLeaf none; //type: empty
        class StartStop; //type: Native::Aaa::Accounting::Exec::StartStop
        class StopOnly; //type: Native::Aaa::Accounting::Exec::StopOnly

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Exec::StartStop> start_stop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Exec::StopOnly> stop_only;
        
}; // Native::Aaa::Accounting::Exec


class Native::Aaa::Accounting::Exec::StartStop : public Entity
{
    public:
        StartStop();
        ~StartStop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf broadcast; //type: empty
        YLeaf group; //type: one of string, enumeration
        class GroupEnum;

}; // Native::Aaa::Accounting::Exec::StartStop


class Native::Aaa::Accounting::Exec::StopOnly : public Entity
{
    public:
        StopOnly();
        ~StopOnly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf broadcast; //type: empty
        YLeaf group; //type: one of string, enumeration
        class GroupEnum;

}; // Native::Aaa::Accounting::Exec::StopOnly


class Native::Aaa::Accounting::ExecSubmode : public Entity
{
    public:
        ExecSubmode();
        ~ExecSubmode();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Exec; //type: Native::Aaa::Accounting::ExecSubmode::Exec

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::ExecSubmode::Exec> > exec;
        
}; // Native::Aaa::Accounting::ExecSubmode


class Native::Aaa::Accounting::ExecSubmode::Exec : public Entity
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

        YLeaf name; //type: string
        class ActionType; //type: Native::Aaa::Accounting::ExecSubmode::Exec::ActionType

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::ExecSubmode::Exec::ActionType> action_type;
        
}; // Native::Aaa::Accounting::ExecSubmode::Exec


class Native::Aaa::Accounting::ExecSubmode::Exec::ActionType : public Entity
{
    public:
        ActionType();
        ~ActionType();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf none; //type: empty
        class StartStop; //type: Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop
        class StopOnly; //type: Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop> start_stop;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly> stop_only;
        
}; // Native::Aaa::Accounting::ExecSubmode::Exec::ActionType


class Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop : public Entity
{
    public:
        StartStop();
        ~StartStop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf broadcast; //type: empty
        YLeaf group; //type: one of string, enumeration
        class GroupEnum;

}; // Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop


class Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly : public Entity
{
    public:
        StopOnly();
        ~StopOnly();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf broadcast; //type: empty
        YLeaf group; //type: one of string, enumeration
        class GroupEnum;

}; // Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly


class Native::Aaa::Accounting::Network : public Entity
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

        YLeaf id; //type: one of string, enumeration
        YLeaf none; //type: empty
        YLeaf mode; //type: ModeEnum
        YLeaf broadcast; //type: empty
        class StartStop; //type: Native::Aaa::Accounting::Network::StartStop
        class A1; //type: Native::Aaa::Accounting::Network::A1
        class A2; //type: Native::Aaa::Accounting::Network::A2
        class A3; //type: Native::Aaa::Accounting::Network::A3
        class A4; //type: Native::Aaa::Accounting::Network::A4

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Network::A1> a1;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Network::A2> a2;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Network::A3> a3;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Network::A4> a4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Network::StartStop> start_stop;
                class IdEnum;
        class ModeEnum;

}; // Native::Aaa::Accounting::Network


class Native::Aaa::Accounting::Network::StartStop : public Entity
{
    public:
        StartStop();
        ~StartStop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: one of string, enumeration
        class GroupEnum;

}; // Native::Aaa::Accounting::Network::StartStop


class Native::Aaa::Accounting::Network::A1 : public Entity
{
    public:
        A1();
        ~A1();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: one of string, enumeration
        class GroupEnum;

}; // Native::Aaa::Accounting::Network::A1


class Native::Aaa::Accounting::Network::A2 : public Entity
{
    public:
        A2();
        ~A2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: one of string, enumeration
        class GroupEnum;

}; // Native::Aaa::Accounting::Network::A2


class Native::Aaa::Accounting::Network::A3 : public Entity
{
    public:
        A3();
        ~A3();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: one of string, enumeration
        class GroupEnum;

}; // Native::Aaa::Accounting::Network::A3


class Native::Aaa::Accounting::Network::A4 : public Entity
{
    public:
        A4();
        ~A4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: one of string, enumeration
        class GroupEnum;

}; // Native::Aaa::Accounting::Network::A4


class Native::Aaa::Accounting::Send : public Entity
{
    public:
        Send();
        ~Send();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Counters; //type: Native::Aaa::Accounting::Send::Counters
        class StopRecord; //type: Native::Aaa::Accounting::Send::StopRecord

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Send::Counters> counters;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Send::StopRecord> stop_record;
        
}; // Native::Aaa::Accounting::Send


class Native::Aaa::Accounting::Send::Counters : public Entity
{
    public:
        Counters();
        ~Counters();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ipv6; //type: empty

}; // Native::Aaa::Accounting::Send::Counters


class Native::Aaa::Accounting::Send::StopRecord : public Entity
{
    public:
        StopRecord();
        ~StopRecord();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf always; //type: empty
        class Authentication; //type: Native::Aaa::Accounting::Send::StopRecord::Authentication

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Send::StopRecord::Authentication> authentication;
        
}; // Native::Aaa::Accounting::Send::StopRecord


class Native::Aaa::Accounting::Send::StopRecord::Authentication : public Entity
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

        class Failure; //type: Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure
        class Success; //type: Native::Aaa::Accounting::Send::StopRecord::Authentication::Success

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure> failure; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Send::StopRecord::Authentication::Success> success;
        
}; // Native::Aaa::Accounting::Send::StopRecord::Authentication


class Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure : public Entity
{
    public:
        Failure();
        ~Failure();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf; //type: string

}; // Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure


class Native::Aaa::Accounting::Send::StopRecord::Authentication::Success : public Entity
{
    public:
        Success();
        ~Success();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class RemoteServer; //type: Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer> remote_server; // presence node
        
}; // Native::Aaa::Accounting::Send::StopRecord::Authentication::Success


class Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer : public Entity
{
    public:
        RemoteServer();
        ~RemoteServer();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf; //type: string

}; // Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer


class Native::Aaa::Accounting::System : public Entity
{
    public:
        System();
        ~System();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf guarantee_first; //type: boolean
        class Default_; //type: Native::Aaa::Accounting::System::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::System::Default_> default_; // presence node
        
}; // Native::Aaa::Accounting::System


class Native::Aaa::Accounting::System::Default_ : public Entity
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

        YLeaf none; //type: empty
        YLeaf vrf; //type: string
        class StartStop; //type: Native::Aaa::Accounting::System::Default_::StartStop

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::System::Default_::StartStop> start_stop;
        
}; // Native::Aaa::Accounting::System::Default_


class Native::Aaa::Accounting::System::Default_::StartStop : public Entity
{
    public:
        StartStop();
        ~StartStop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf broadcast; //type: empty
        YLeaf group; //type: one of string, enumeration
        class GroupEnum;

}; // Native::Aaa::Accounting::System::Default_::StartStop


class Native::Aaa::Accounting::Update : public Entity
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

        YLeaf periodic; //type: uint32

}; // Native::Aaa::Accounting::Update


class Native::Aaa::Accounting::AuthProxy : public Entity
{
    public:
        AuthProxy();
        ~AuthProxy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Default_; //type: Native::Aaa::Accounting::AuthProxy::Default_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::AuthProxy::Default_> default_;
        
}; // Native::Aaa::Accounting::AuthProxy


class Native::Aaa::Accounting::AuthProxy::Default_ : public Entity
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

        class StartStop; //type: Native::Aaa::Accounting::AuthProxy::Default_::StartStop

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Accounting::AuthProxy::Default_::StartStop> start_stop;
        
}; // Native::Aaa::Accounting::AuthProxy::Default_


class Native::Aaa::Accounting::AuthProxy::Default_::StartStop : public Entity
{
    public:
        StartStop();
        ~StartStop();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf group; //type: string

}; // Native::Aaa::Accounting::AuthProxy::Default_::StartStop


class Native::Aaa::Server : public Entity
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

        class Radius; //type: Native::Aaa::Server::Radius

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Server::Radius> radius;
        
}; // Native::Aaa::Server


class Native::Aaa::Server::Radius : public Entity
{
    public:
        Radius();
        ~Radius();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class DynamicAuthor; //type: Native::Aaa::Server::Radius::DynamicAuthor

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor> dynamic_author; // presence node
        
}; // Native::Aaa::Server::Radius


class Native::Aaa::Server::Radius::DynamicAuthor : public Entity
{
    public:
        DynamicAuthor();
        ~DynamicAuthor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf auth_type; //type: AuthTypeEnum
        class Client; //type: Native::Aaa::Server::Radius::DynamicAuthor::Client
        class ServerKey; //type: Native::Aaa::Server::Radius::DynamicAuthor::ServerKey
        class Domain; //type: Native::Aaa::Server::Radius::DynamicAuthor::Domain

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor::Client> > client;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor::Domain> domain;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor::ServerKey> server_key;
                class AuthTypeEnum;

}; // Native::Aaa::Server::Radius::DynamicAuthor


class Native::Aaa::Server::Radius::DynamicAuthor::Client : public Entity
{
    public:
        Client();
        ~Client();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf ip; //type: string
        class Vrf; //type: Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf
        class ServerKey; //type: Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey> server_key;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf> > vrf;
        
}; // Native::Aaa::Server::Radius::DynamicAuthor::Client


class Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf : public Entity
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

}; // Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf


class Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey : public Entity
{
    public:
        ServerKey();
        ~ServerKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key; //type: KeyEnum
        YLeaf string; //type: string
        class KeyEnum;

}; // Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey


class Native::Aaa::Server::Radius::DynamicAuthor::ServerKey : public Entity
{
    public:
        ServerKey();
        ~ServerKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key; //type: KeyEnum
        YLeaf string; //type: string
        class KeyEnum;

}; // Native::Aaa::Server::Radius::DynamicAuthor::ServerKey


class Native::Aaa::Server::Radius::DynamicAuthor::Domain : public Entity
{
    public:
        Domain();
        ~Domain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf delimiter; //type: string
        class Stripping; //type: Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping

        std::shared_ptr<Cisco_IOS_XE_native::Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping> stripping; // presence node
        
}; // Native::Aaa::Server::Radius::DynamicAuthor::Domain


class Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping : public Entity
{
    public:
        Stripping();
        ~Stripping();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf right_to_left; //type: empty

}; // Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping


class Native::Privilege : public Entity
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

        class Exec; //type: Native::Privilege::Exec

        std::shared_ptr<Cisco_IOS_XE_native::Native::Privilege::Exec> exec;
        
}; // Native::Privilege


class Native::Privilege::Exec : public Entity
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

        class Level; //type: Native::Privilege::Exec::Level

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Privilege::Exec::Level> > level;
        
}; // Native::Privilege::Exec


class Native::Privilege::Exec::Level : public Entity
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

        YLeaf privilege; //type: uint8
        class CommandList; //type: Native::Privilege::Exec::Level::CommandList

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Privilege::Exec::Level::CommandList> > command_list;
        
}; // Native::Privilege::Exec::Level


class Native::Privilege::Exec::Level::CommandList : public Entity
{
    public:
        CommandList();
        ~CommandList();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf command; //type: string

}; // Native::Privilege::Exec::Level::CommandList


class Native::Login : public Entity
{
    public:
        Login();
        ~Login();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf delay; //type: uint8
        class OnFailure; //type: Native::Login::OnFailure
        class OnSuccess; //type: Native::Login::OnSuccess

        std::shared_ptr<Cisco_IOS_XE_native::Native::Login::OnFailure> on_failure; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Login::OnSuccess> on_success; // presence node
        
}; // Native::Login


class Native::Login::OnFailure : public Entity
{
    public:
        OnFailure();
        ~OnFailure();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Log; //type: Native::Login::OnFailure::Log

        std::shared_ptr<Cisco_IOS_XE_native::Native::Login::OnFailure::Log> log; // presence node
        
}; // Native::Login::OnFailure


class Native::Login::OnFailure::Log : public Entity
{
    public:
        Log();
        ~Log();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf every; //type: uint16

}; // Native::Login::OnFailure::Log


class Native::Login::OnSuccess : public Entity
{
    public:
        OnSuccess();
        ~OnSuccess();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Log; //type: Native::Login::OnSuccess::Log

        std::shared_ptr<Cisco_IOS_XE_native::Native::Login::OnSuccess::Log> log; // presence node
        
}; // Native::Login::OnSuccess


class Native::Login::OnSuccess::Log : public Entity
{
    public:
        Log();
        ~Log();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf every; //type: uint16

}; // Native::Login::OnSuccess::Log


class Native::Multilink : public Entity
{
    public:
        Multilink();
        ~Multilink();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf bundle_name; //type: BundleNameEnum
        YLeaf virtual_template; //type: uint16
        class BundleNameEnum;

}; // Native::Multilink


class Native::MacAddressTable : public Entity
{
    public:
        MacAddressTable();
        ~MacAddressTable();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class EvcXconnect; //type: Native::MacAddressTable::EvcXconnect
        class Limit; //type: Native::MacAddressTable::Limit
        class Learning; //type: Native::MacAddressTable::Learning

        std::shared_ptr<Cisco_IOS_XE_native::Native::MacAddressTable::EvcXconnect> evc_xconnect;
        std::shared_ptr<Cisco_IOS_XE_native::Native::MacAddressTable::Learning> learning;
        std::shared_ptr<Cisco_IOS_XE_native::Native::MacAddressTable::Limit> limit;
        
}; // Native::MacAddressTable


class Native::MacAddressTable::EvcXconnect : public Entity
{
    public:
        EvcXconnect();
        ~EvcXconnect();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf l2pt_forward_all; //type: empty

}; // Native::MacAddressTable::EvcXconnect


class Native::MacAddressTable::Limit : public Entity
{
    public:
        Limit();
        ~Limit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bdomain; //type: Native::MacAddressTable::Limit::Bdomain

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::MacAddressTable::Limit::Bdomain> > bdomain;
        
}; // Native::MacAddressTable::Limit


class Native::MacAddressTable::Limit::Bdomain : public Entity
{
    public:
        Bdomain();
        ~Bdomain();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf number; //type: uint16
        YLeaf action; //type: ActionEnum
        YLeaf maximum; //type: uint32
        class ActionEnum;

}; // Native::MacAddressTable::Limit::Bdomain


class Native::MacAddressTable::Learning : public Entity
{
    public:
        Learning();
        ~Learning();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vlan; //type: Native::MacAddressTable::Learning::Vlan

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::MacAddressTable::Learning::Vlan> > vlan;
        
}; // Native::MacAddressTable::Learning


class Native::MacAddressTable::Learning::Vlan : public Entity
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

        YLeaf id; //type: uint16
        YLeaf module; //type: uint8

}; // Native::MacAddressTable::Learning::Vlan


class Native::Redundancy : public Entity
{
    public:
        Redundancy();
        ~Redundancy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf maintenance_mode; //type: empty
        YLeaf mode; //type: ModeEnum
        class MainCpu; //type: Native::Redundancy::MainCpu
        class Policy; //type: Native::Redundancy::Policy
        class Timer; //type: Native::Redundancy::Timer
        class Interchassis; //type: Native::Redundancy::Interchassis

        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Interchassis> interchassis;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::MainCpu> main_cpu; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Policy> policy;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Timer> timer;
                class ModeEnum;

}; // Native::Redundancy


class Native::Redundancy::MainCpu : public Entity
{
    public:
        MainCpu();
        ~MainCpu();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AutoSync; //type: Native::Redundancy::MainCpu::AutoSync
        class Standby; //type: Native::Redundancy::MainCpu::Standby

        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::MainCpu::AutoSync> auto_sync;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::MainCpu::Standby> standby;
        
}; // Native::Redundancy::MainCpu


class Native::Redundancy::MainCpu::AutoSync : public Entity
{
    public:
        AutoSync();
        ~AutoSync();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf running_config; //type: empty
        YLeaf config_register; //type: empty
        YLeaf bootvar; //type: empty
        YLeaf standard; //type: empty

}; // Native::Redundancy::MainCpu::AutoSync


class Native::Redundancy::MainCpu::Standby : public Entity
{
    public:
        Standby();
        ~Standby();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Console; //type: Native::Redundancy::MainCpu::Standby::Console
        class Initialization; //type: Native::Redundancy::MainCpu::Standby::Initialization

        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::MainCpu::Standby::Console> console;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::MainCpu::Standby::Initialization> initialization;
        
}; // Native::Redundancy::MainCpu::Standby


class Native::Redundancy::MainCpu::Standby::Console : public Entity
{
    public:
        Console();
        ~Console();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enable; //type: empty

}; // Native::Redundancy::MainCpu::Standby::Console


class Native::Redundancy::MainCpu::Standby::Initialization : public Entity
{
    public:
        Initialization();
        ~Initialization();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Delay; //type: Native::Redundancy::MainCpu::Standby::Initialization::Delay

        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::MainCpu::Standby::Initialization::Delay> delay;
        
}; // Native::Redundancy::MainCpu::Standby::Initialization


class Native::Redundancy::MainCpu::Standby::Initialization::Delay : public Entity
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

        YLeaf second; //type: uint16
        YLeaf boot_only; //type: empty

}; // Native::Redundancy::MainCpu::Standby::Initialization::Delay


class Native::Redundancy::Policy : public Entity
{
    public:
        Policy();
        ~Policy();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class ConfigSync; //type: Native::Redundancy::Policy::ConfigSync

        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Policy::ConfigSync> config_sync;
        
}; // Native::Redundancy::Policy


class Native::Redundancy::Policy::ConfigSync : public Entity
{
    public:
        ConfigSync();
        ~ConfigSync();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Bulk; //type: Native::Redundancy::Policy::ConfigSync::Bulk
        class Lbl; //type: Native::Redundancy::Policy::ConfigSync::Lbl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Policy::ConfigSync::Bulk> bulk;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Policy::ConfigSync::Lbl> lbl;
        
}; // Native::Redundancy::Policy::ConfigSync


class Native::Redundancy::Policy::ConfigSync::Bulk : public Entity
{
    public:
        Bulk();
        ~Bulk();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Prc; //type: Native::Redundancy::Policy::ConfigSync::Bulk::Prc

        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Policy::ConfigSync::Bulk::Prc> prc;
        
}; // Native::Redundancy::Policy::ConfigSync::Bulk


class Native::Redundancy::Policy::ConfigSync::Bulk::Prc : public Entity
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

        YLeaf reload; //type: boolean

}; // Native::Redundancy::Policy::ConfigSync::Bulk::Prc


class Native::Redundancy::Policy::ConfigSync::Lbl : public Entity
{
    public:
        Lbl();
        ~Lbl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Prc; //type: Native::Redundancy::Policy::ConfigSync::Lbl::Prc

        std::shared_ptr<Cisco_IOS_XE_native::Native::Redundancy::Policy::ConfigSync::Lbl::Prc> prc;
        
}; // Native::Redundancy::Policy::ConfigSync::Lbl

class Native::Logging::Trap::SeverityEnum : public Enum
{
    public:
        static const Enum::YLeaf alerts;
        static const Enum::YLeaf critical;
        static const Enum::YLeaf debugging;
        static const Enum::YLeaf emergencies;
        static const Enum::YLeaf errors;
        static const Enum::YLeaf informational;
        static const Enum::YLeaf notifications;
        static const Enum::YLeaf warnings;

};

class Native::Aaa::SessionIdEnum : public Enum
{
    public:
        static const Enum::YLeaf common;
        static const Enum::YLeaf unique;

};

class Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::EncryptionEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_7;

};

class Native::Aaa::Authentication::Dot1X::Dot1XList::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Dot1X::Default_::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Enable::Default_::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::NameEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;

};

class Native::Aaa::Authentication::Login::A1::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf ldap;
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::A1::CacheEnum : public Enum
{
    public:
        static const Enum::YLeaf ldap;
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::A2::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf ldap;
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::A2::CacheEnum : public Enum
{
    public:
        static const Enum::YLeaf ldap;
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::A3::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf ldap;
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::A3::CacheEnum : public Enum
{
    public:
        static const Enum::YLeaf ldap;
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::A4::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf ldap;
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Login::A4::CacheEnum : public Enum
{
    public:
        static const Enum::YLeaf ldap;
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A1::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A1::CacheEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A2::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A2::CacheEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A3::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A3::CacheEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A4::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authentication::Ppp::A4::CacheEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::AuthType::Default_::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;

};

class Native::Aaa::Authorization::Commands::ListNameEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;

};

class Native::Aaa::Authorization::Commands::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Exec::A1::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf ldap;
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Exec::A1::CacheEnum : public Enum
{
    public:
        static const Enum::YLeaf ldap;
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Exec::A2::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf ldap;
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Exec::A2::CacheEnum : public Enum
{
    public:
        static const Enum::YLeaf ldap;
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Exec::A3::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf ldap;
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Exec::A3::CacheEnum : public Enum
{
    public:
        static const Enum::YLeaf ldap;
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Exec::A4::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf ldap;
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Exec::A4::CacheEnum : public Enum
{
    public:
        static const Enum::YLeaf ldap;
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Eventmanager::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf ldap;
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs;

};

class Native::Aaa::Authorization::Network::IdEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;

};

class Native::Aaa::Authorization::Network::A1::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Network::A1::CacheEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Network::A2::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Network::A2::CacheEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Network::A3::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Network::A3::CacheEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Network::A4::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Authorization::Network::A4::CacheEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Accounting::Commands::ListNameEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;

};

class Native::Aaa::Accounting::Commands::ActionTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf start_stop;
        static const Enum::YLeaf stop_only;

};

class Native::Aaa::Accounting::Commands::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Accounting::Connection::StartStop::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Accounting::Connection::StopOnly::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Accounting::Dot1X::StartStop::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Accounting::Exec::StartStop::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Accounting::Exec::StopOnly::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Accounting::Network::IdEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;

};

class Native::Aaa::Accounting::Network::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf start_stop;
        static const Enum::YLeaf stop_only;

};

class Native::Aaa::Accounting::Network::StartStop::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;

};

class Native::Aaa::Accounting::Network::A1::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf ldap;
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs;

};

class Native::Aaa::Accounting::Network::A2::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf ldap;
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs;

};

class Native::Aaa::Accounting::Network::A3::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf ldap;
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs;

};

class Native::Aaa::Accounting::Network::A4::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf ldap;
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs;

};

class Native::Aaa::Accounting::System::Default_::StartStop::GroupEnum : public Enum
{
    public:
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs__PLUS__;

};

class Native::Aaa::Server::Radius::DynamicAuthor::AuthTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf all;
        static const Enum::YLeaf any;
        static const Enum::YLeaf session_key;

};

class Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::KeyEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;
        static const Enum::YLeaf Y_7;

};

class Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::KeyEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_6;
        static const Enum::YLeaf Y_7;

};

class Native::Multilink::BundleNameEnum : public Enum
{
    public:
        static const Enum::YLeaf authenticated;
        static const Enum::YLeaf both;
        static const Enum::YLeaf endpoint;
        static const Enum::YLeaf rfc;

};

class Native::MacAddressTable::Limit::Bdomain::ActionEnum : public Enum
{
    public:
        static const Enum::YLeaf warning;
        static const Enum::YLeaf limit;
        static const Enum::YLeaf shutdown;

};

class Native::Redundancy::ModeEnum : public Enum
{
    public:
        static const Enum::YLeaf rpr;
        static const Enum::YLeaf rpr_plus;
        static const Enum::YLeaf sso;
        static const Enum::YLeaf none;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_73_ */

