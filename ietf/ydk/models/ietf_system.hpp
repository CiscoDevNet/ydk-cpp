#ifndef _IETF_SYSTEM_
#define _IETF_SYSTEM_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

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
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value contact; //type: string
        Value hostname; //type: string
        Value location; //type: string


    class Clock : public Entity
    {
        public:
            Clock();
            ~Clock();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value timezone_name; //type: string
            Value timezone_utc_offset; //type: int16




    }; // System::Clock


    class Ntp : public Entity
    {
        public:
            Ntp();
            ~Ntp();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value enabled; //type: boolean


        class Server : public Entity
        {
            public:
                Server();
                ~Server();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value name; //type: string
                Value association_type; //type: AssociationTypeEnum
                Value iburst; //type: boolean
                Value prefer; //type: boolean


            class Udp : public Entity
            {
                public:
                    Udp();
                    ~Udp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value address; //type: one of union, string
                    Value port; //type: uint16




            }; // System::Ntp::Server::Udp


                std::unique_ptr<ietf_system::System::Ntp::Server::Udp> udp;
                class AssociationTypeEnum;


        }; // System::Ntp::Server


            std::vector<std::unique_ptr<ietf_system::System::Ntp::Server> > server;


    }; // System::Ntp


    class DnsResolver : public Entity
    {
        public:
            DnsResolver();
            ~DnsResolver();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            ValueList search; //type: list of  string


        class Server : public Entity
        {
            public:
                Server();
                ~Server();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value name; //type: string


            class UdpAndTcp : public Entity
            {
                public:
                    UdpAndTcp();
                    ~UdpAndTcp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value address; //type: string
                    Value port; //type: uint16




            }; // System::DnsResolver::Server::UdpAndTcp


                std::unique_ptr<ietf_system::System::DnsResolver::Server::UdpAndTcp> udp_and_tcp;


        }; // System::DnsResolver::Server


        class Options : public Entity
        {
            public:
                Options();
                ~Options();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value timeout; //type: uint8
                Value attempts; //type: uint8




        }; // System::DnsResolver::Options


            std::unique_ptr<ietf_system::System::DnsResolver::Options> options;
            std::vector<std::unique_ptr<ietf_system::System::DnsResolver::Server> > server;


    }; // System::DnsResolver


    class Radius : public Entity
    {
        public:
            Radius();
            ~Radius();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;


        class Server : public Entity
        {
            public:
                Server();
                ~Server();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value name; //type: string
                Value authentication_type; //type: RadiusAuthenticationTypeIdentity


            class Udp : public Entity
            {
                public:
                    Udp();
                    ~Udp();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value address; //type: one of union, string
                    Value authentication_port; //type: uint16
                    Value shared_secret; //type: string




            }; // System::Radius::Server::Udp


                std::unique_ptr<ietf_system::System::Radius::Server::Udp> udp;


        }; // System::Radius::Server


        class Options : public Entity
        {
            public:
                Options();
                ~Options();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value timeout; //type: uint8
                Value attempts; //type: uint8




        }; // System::Radius::Options


            std::unique_ptr<ietf_system::System::Radius::Options> options;
            std::vector<std::unique_ptr<ietf_system::System::Radius::Server> > server;


    }; // System::Radius


    class Authentication : public Entity
    {
        public:
            Authentication();
            ~Authentication();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            ValueList user_authentication_order; //type: list of  AuthenticationMethodIdentity


        class User : public Entity
        {
            public:
                User();
                ~User();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;
                Value name; //type: string
                Value password; //type: string


            class AuthorizedKey : public Entity
            {
                public:
                    AuthorizedKey();
                    ~AuthorizedKey();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;
                    Value name; //type: string
                    Value algorithm; //type: string
                    Value key_data; //type: binary




            }; // System::Authentication::User::AuthorizedKey


                std::vector<std::unique_ptr<ietf_system::System::Authentication::User::AuthorizedKey> > authorized_key;


        }; // System::Authentication::User


            std::vector<std::unique_ptr<ietf_system::System::Authentication::User> > user;


    }; // System::Authentication


        std::unique_ptr<ietf_system::System::Authentication> authentication;
        std::unique_ptr<ietf_system::System::Clock> clock;
        std::unique_ptr<ietf_system::System::DnsResolver> dns_resolver;
        std::unique_ptr<ietf_system::System::Ntp> ntp; // presence node
        std::unique_ptr<ietf_system::System::Radius> radius;


}; // System

class SystemState : public Entity
{
    public:
        SystemState();
        ~SystemState();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;


    class Platform : public Entity
    {
        public:
            Platform();
            ~Platform();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value os_name; //type: string
            Value os_release; //type: string
            Value os_version; //type: string
            Value machine; //type: string




    }; // SystemState::Platform


    class Clock : public Entity
    {
        public:
            Clock();
            ~Clock();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;
            Value current_datetime; //type: string
            Value boot_datetime; //type: string




    }; // SystemState::Clock


        std::unique_ptr<ietf_system::SystemState::Clock> clock;
        std::unique_ptr<ietf_system::SystemState::Platform> platform;


}; // SystemState

class SetCurrentDatetimeRpc : public Entity
{
    public:
        SetCurrentDatetimeRpc();
        ~SetCurrentDatetimeRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;
        Value current_datetime; //type: string




}; // SetCurrentDatetimeRpc

class SystemRestartRpc : public Entity
{
    public:
        SystemRestartRpc();
        ~SystemRestartRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;




}; // SystemRestartRpc

class SystemShutdownRpc : public Entity
{
    public:
        SystemShutdownRpc();
        ~SystemShutdownRpc();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;




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
        static const Enum::Value server;
        static const Enum::Value peer;
        static const Enum::Value pool;

};


}
}

#endif /* _IETF_SYSTEM_ */

