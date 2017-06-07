#ifndef _IETF_SYSTEM_
#define _IETF_SYSTEM_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace ietf_system {

class RadiusAuthenticationTypeIdentity : public virtual Identity
{
    public:
        RadiusAuthenticationTypeIdentity();
        ~RadiusAuthenticationTypeIdentity();


}; // RadiusAuthenticationTypeIdentity

class AuthenticationMethodIdentity : public virtual Identity
{
    public:
        AuthenticationMethodIdentity();
        ~AuthenticationMethodIdentity();


}; // AuthenticationMethodIdentity

class System : public Entity
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
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        YLeaf contact; //type: string
        YLeaf hostname; //type: string
        YLeaf location; //type: string
        class Clock; //type: System::Clock
        class Ntp; //type: System::Ntp
        class DnsResolver; //type: System::DnsResolver
        class Radius; //type: System::Radius
        class Authentication; //type: System::Authentication

        std::shared_ptr<ietf_system::System::Authentication> authentication;
        std::shared_ptr<ietf_system::System::Clock> clock;
        std::shared_ptr<ietf_system::System::DnsResolver> dns_resolver;
        std::shared_ptr<ietf_system::System::Ntp> ntp; // presence node
        std::shared_ptr<ietf_system::System::Radius> radius;
        
}; // System


class System::Clock : public Entity
{
    public:
        Clock();
        ~Clock();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timezone_name; //type: string
        YLeaf timezone_utc_offset; //type: int16

}; // System::Clock


class System::Ntp : public Entity
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

        YLeaf enabled; //type: boolean
        class Server; //type: System::Ntp::Server

        std::vector<std::shared_ptr<ietf_system::System::Ntp::Server> > server;
        
}; // System::Ntp


class System::Ntp::Server : public Entity
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

        YLeaf name; //type: string
        YLeaf association_type; //type: AssociationTypeEnum
        YLeaf iburst; //type: boolean
        YLeaf prefer; //type: boolean
        class Udp; //type: System::Ntp::Server::Udp

        std::shared_ptr<ietf_system::System::Ntp::Server::Udp> udp;
                class AssociationTypeEnum;

}; // System::Ntp::Server


class System::Ntp::Server::Udp : public Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: one of union, string
        YLeaf port; //type: uint16

}; // System::Ntp::Server::Udp


class System::DnsResolver : public Entity
{
    public:
        DnsResolver();
        ~DnsResolver();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeafList search; //type: list of  string
        class Server; //type: System::DnsResolver::Server
        class Options; //type: System::DnsResolver::Options

        std::shared_ptr<ietf_system::System::DnsResolver::Options> options;
        std::vector<std::shared_ptr<ietf_system::System::DnsResolver::Server> > server;
        
}; // System::DnsResolver


class System::DnsResolver::Server : public Entity
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

        YLeaf name; //type: string
        class UdpAndTcp; //type: System::DnsResolver::Server::UdpAndTcp

        std::shared_ptr<ietf_system::System::DnsResolver::Server::UdpAndTcp> udp_and_tcp;
        
}; // System::DnsResolver::Server


class System::DnsResolver::Server::UdpAndTcp : public Entity
{
    public:
        UdpAndTcp();
        ~UdpAndTcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf port; //type: uint16

}; // System::DnsResolver::Server::UdpAndTcp


class System::DnsResolver::Options : public Entity
{
    public:
        Options();
        ~Options();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint8
        YLeaf attempts; //type: uint8

}; // System::DnsResolver::Options


class System::Radius : public Entity
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

        class Server; //type: System::Radius::Server
        class Options; //type: System::Radius::Options

        std::shared_ptr<ietf_system::System::Radius::Options> options;
        std::vector<std::shared_ptr<ietf_system::System::Radius::Server> > server;
        
}; // System::Radius


class System::Radius::Server : public Entity
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

        YLeaf name; //type: string
        YLeaf authentication_type; //type: RadiusAuthenticationTypeIdentity
        class Udp; //type: System::Radius::Server::Udp

        std::shared_ptr<ietf_system::System::Radius::Server::Udp> udp;
        
}; // System::Radius::Server


class System::Radius::Server::Udp : public Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: one of union, string
        YLeaf authentication_port; //type: uint16
        YLeaf shared_secret; //type: string

}; // System::Radius::Server::Udp


class System::Radius::Options : public Entity
{
    public:
        Options();
        ~Options();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf timeout; //type: uint8
        YLeaf attempts; //type: uint8

}; // System::Radius::Options


class System::Authentication : public Entity
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

        YLeafList user_authentication_order; //type: list of  AuthenticationMethodIdentity
        class User; //type: System::Authentication::User

        std::vector<std::shared_ptr<ietf_system::System::Authentication::User> > user;
        
}; // System::Authentication


class System::Authentication::User : public Entity
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
        YLeaf password; //type: string
        class AuthorizedKey; //type: System::Authentication::User::AuthorizedKey

        std::vector<std::shared_ptr<ietf_system::System::Authentication::User::AuthorizedKey> > authorized_key;
        
}; // System::Authentication::User


class System::Authentication::User::AuthorizedKey : public Entity
{
    public:
        AuthorizedKey();
        ~AuthorizedKey();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string
        YLeaf algorithm; //type: string
        YLeaf key_data; //type: binary

}; // System::Authentication::User::AuthorizedKey

class SystemState : public Entity
{
    public:
        SystemState();
        ~SystemState();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Platform; //type: SystemState::Platform
        class Clock; //type: SystemState::Clock

        std::shared_ptr<ietf_system::SystemState::Clock> clock;
        std::shared_ptr<ietf_system::SystemState::Platform> platform;
        
}; // SystemState


class SystemState::Platform : public Entity
{
    public:
        Platform();
        ~Platform();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf os_name; //type: string
        YLeaf os_release; //type: string
        YLeaf os_version; //type: string
        YLeaf machine; //type: string

}; // SystemState::Platform


class SystemState::Clock : public Entity
{
    public:
        Clock();
        ~Clock();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf current_datetime; //type: string
        YLeaf boot_datetime; //type: string

}; // SystemState::Clock

class SetCurrentDatetimeRpc : public Entity
{
    public:
        SetCurrentDatetimeRpc();
        ~SetCurrentDatetimeRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;

        class Input; //type: SetCurrentDatetimeRpc::Input

        std::shared_ptr<ietf_system::SetCurrentDatetimeRpc::Input> input;
        
}; // SetCurrentDatetimeRpc


class SetCurrentDatetimeRpc::Input : public Entity
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

        YLeaf current_datetime; //type: string

}; // SetCurrentDatetimeRpc::Input

class SystemRestartRpc : public Entity
{
    public:
        SystemRestartRpc();
        ~SystemRestartRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


}; // SystemRestartRpc

class SystemShutdownRpc : public Entity
{
    public:
        SystemShutdownRpc();
        ~SystemShutdownRpc();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;


}; // SystemShutdownRpc

class RadiusChapIdentity : public ietf_system::RadiusAuthenticationTypeIdentity, virtual Identity
{
    public:
        RadiusChapIdentity();
        ~RadiusChapIdentity();


}; // RadiusChapIdentity

class RadiusIdentity : public ietf_system::AuthenticationMethodIdentity, virtual Identity
{
    public:
        RadiusIdentity();
        ~RadiusIdentity();


}; // RadiusIdentity

class RadiusPapIdentity : public ietf_system::RadiusAuthenticationTypeIdentity, virtual Identity
{
    public:
        RadiusPapIdentity();
        ~RadiusPapIdentity();


}; // RadiusPapIdentity

class LocalUsersIdentity : public ietf_system::AuthenticationMethodIdentity, virtual Identity
{
    public:
        LocalUsersIdentity();
        ~LocalUsersIdentity();


}; // LocalUsersIdentity

class System::Ntp::Server::AssociationTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf server;
        static const Enum::YLeaf peer;
        static const Enum::YLeaf pool;

};


}
}

#endif /* _IETF_SYSTEM_ */

