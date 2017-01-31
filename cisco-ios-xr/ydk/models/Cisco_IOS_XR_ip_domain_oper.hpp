#ifndef _CISCO_IOS_XR_IP_DOMAIN_OPER_
#define _CISCO_IOS_XR_IP_DOMAIN_OPER_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_domain_oper {

class HostAddressBaseIdentity : public virtual Identity
{
    public:
        HostAddressBaseIdentity();
        ~HostAddressBaseIdentity();





}; // HostAddressBaseIdentity

class IpDomain : public Entity
{
    public:
        IpDomain();
        ~IpDomain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, Entity*> & get_children() override;
        std::unique_ptr<Entity> clone_ptr() override;



    class Vrfs : public Entity
    {
        public:
            Vrfs();
            ~Vrfs();

            bool has_data() const override;
            bool has_operation() const override;
            EntityPath get_entity_path(Entity* parent) const override;
            std::string get_segment_path() const override;
            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
            void set_value(const std::string & value_path, std::string value) override;
            std::map<std::string, Entity*> & get_children() override;



        class Vrf : public Entity
        {
            public:
                Vrf();
                ~Vrf();

                bool has_data() const override;
                bool has_operation() const override;
                EntityPath get_entity_path(Entity* parent) const override;
                std::string get_segment_path() const override;
                Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                void set_value(const std::string & value_path, std::string value) override;
                std::map<std::string, Entity*> & get_children() override;


                YLeaf vrf_name; //type: string

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


                    YLeaf domain_lookup; //type: ServerDomainLkupEnum
                    YLeaf domain_name; //type: string
                    YLeafList domain; //type: list of  string

                class ServerAddress : public Entity
                {
                    public:
                        ServerAddress();
                        ~ServerAddress();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf af_name; //type: HostAddressBaseIdentity
                        YLeaf ipv4_address; //type: string
                        YLeaf ipv6_address; //type: string



                }; // IpDomain::Vrfs::Vrf::Server::ServerAddress


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_domain_oper::IpDomain::Vrfs::Vrf::Server::ServerAddress> > server_address;


            }; // IpDomain::Vrfs::Vrf::Server


            class Hosts : public Entity
            {
                public:
                    Hosts();
                    ~Hosts();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;



                class Host : public Entity
                {
                    public:
                        Host();
                        ~Host();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;


                        YLeaf host_name; //type: string
                        YLeaf af_name; //type: HostAddressBaseIdentity
                        YLeaf age; //type: uint16

                    class HostAliasList : public Entity
                    {
                        public:
                            HostAliasList();
                            ~HostAliasList();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeafList host_alias; //type: list of  string



                    }; // IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList


                    class HostAddress : public Entity
                    {
                        public:
                            HostAddress();
                            ~HostAddress();

                            bool has_data() const override;
                            bool has_operation() const override;
                            EntityPath get_entity_path(Entity* parent) const override;
                            std::string get_segment_path() const override;
                            Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                            void set_value(const std::string & value_path, std::string value) override;
                            std::map<std::string, Entity*> & get_children() override;


                            YLeaf af_name; //type: HostAddressBaseIdentity
                            YLeaf ipv4_address; //type: string
                            YLeaf ipv6_address; //type: string



                    }; // IpDomain::Vrfs::Vrf::Hosts::Host::HostAddress


                        std::vector<std::unique_ptr<Cisco_IOS_XR_ip_domain_oper::IpDomain::Vrfs::Vrf::Hosts::Host::HostAddress> > host_address;
                        std::unique_ptr<Cisco_IOS_XR_ip_domain_oper::IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList> host_alias_list;


                }; // IpDomain::Vrfs::Vrf::Hosts::Host


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_domain_oper::IpDomain::Vrfs::Vrf::Hosts::Host> > host;


            }; // IpDomain::Vrfs::Vrf::Hosts


                std::unique_ptr<Cisco_IOS_XR_ip_domain_oper::IpDomain::Vrfs::Vrf::Hosts> hosts;
                std::unique_ptr<Cisco_IOS_XR_ip_domain_oper::IpDomain::Vrfs::Vrf::Server> server;


        }; // IpDomain::Vrfs::Vrf


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_domain_oper::IpDomain::Vrfs::Vrf> > vrf;


    }; // IpDomain::Vrfs


        std::unique_ptr<Cisco_IOS_XR_ip_domain_oper::IpDomain::Vrfs> vrfs;


}; // IpDomain

class Ipv4Identity : public Cisco_IOS_XR_ip_domain_oper::HostAddressBaseIdentity, virtual Identity
{
    public:
        Ipv4Identity();
        ~Ipv4Identity();




}; // Ipv4Identity

class Ipv6Identity : public Cisco_IOS_XR_ip_domain_oper::HostAddressBaseIdentity, virtual Identity
{
    public:
        Ipv6Identity();
        ~Ipv6Identity();




}; // Ipv6Identity


class ServerDomainLkupEnum : public Enum
{
    public:
        static const Enum::YLeaf static_mapping;
        static const Enum::YLeaf domain_service;

};


}
}

#endif /* _CISCO_IOS_XR_IP_DOMAIN_OPER_ */

