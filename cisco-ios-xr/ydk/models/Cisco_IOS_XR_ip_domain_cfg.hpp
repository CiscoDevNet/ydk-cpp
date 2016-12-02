#ifndef _CISCO_IOS_XR_IP_DOMAIN_CFG_
#define _CISCO_IOS_XR_IP_DOMAIN_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_domain_cfg {

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
                Value vrf_name; //type: string
                Value lookup; //type: empty
                Value multicast_domain; //type: string
                Value source_interface; //type: string
                Value name; //type: string


            class Ipv6Hosts : public Entity
            {
                public:
                    Ipv6Hosts();
                    ~Ipv6Hosts();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Ipv6Host : public Entity
                {
                    public:
                        Ipv6Host();
                        ~Ipv6Host();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value host_name; //type: string
                        ValueList address; //type: list of  string




                }; // IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_domain_cfg::IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host> > ipv6_host;


            }; // IpDomain::Vrfs::Vrf::Ipv6Hosts


            class Servers : public Entity
            {
                public:
                    Servers();
                    ~Servers();

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
                        Value order; //type: int32
                        Value server_address; //type: string




                }; // IpDomain::Vrfs::Vrf::Servers::Server


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_domain_cfg::IpDomain::Vrfs::Vrf::Servers::Server> > server;


            }; // IpDomain::Vrfs::Vrf::Servers


            class Lists : public Entity
            {
                public:
                    Lists();
                    ~Lists();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class List : public Entity
                {
                    public:
                        List();
                        ~List();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value order; //type: int32
                        Value list_name; //type: string




                }; // IpDomain::Vrfs::Vrf::Lists::List


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_domain_cfg::IpDomain::Vrfs::Vrf::Lists::List> > list;


            }; // IpDomain::Vrfs::Vrf::Lists


            class Ipv4Hosts : public Entity
            {
                public:
                    Ipv4Hosts();
                    ~Ipv4Hosts();

                    bool has_data() const override;
                    bool has_operation() const override;
                    EntityPath get_entity_path(Entity* parent) const override;
                    std::string get_segment_path() const override;
                    Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                    void set_value(const std::string & value_path, std::string value) override;
                    std::map<std::string, Entity*> & get_children() override;


                class Ipv4Host : public Entity
                {
                    public:
                        Ipv4Host();
                        ~Ipv4Host();

                        bool has_data() const override;
                        bool has_operation() const override;
                        EntityPath get_entity_path(Entity* parent) const override;
                        std::string get_segment_path() const override;
                        Entity* get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
                        void set_value(const std::string & value_path, std::string value) override;
                        std::map<std::string, Entity*> & get_children() override;
                        Value host_name; //type: string
                        ValueList address; //type: list of  string




                }; // IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host


                    std::vector<std::unique_ptr<Cisco_IOS_XR_ip_domain_cfg::IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host> > ipv4_host;


            }; // IpDomain::Vrfs::Vrf::Ipv4Hosts


                std::unique_ptr<Cisco_IOS_XR_ip_domain_cfg::IpDomain::Vrfs::Vrf::Ipv4Hosts> ipv4_hosts;
                std::unique_ptr<Cisco_IOS_XR_ip_domain_cfg::IpDomain::Vrfs::Vrf::Ipv6Hosts> ipv6_hosts;
                std::unique_ptr<Cisco_IOS_XR_ip_domain_cfg::IpDomain::Vrfs::Vrf::Lists> lists;
                std::unique_ptr<Cisco_IOS_XR_ip_domain_cfg::IpDomain::Vrfs::Vrf::Servers> servers;


        }; // IpDomain::Vrfs::Vrf


            std::vector<std::unique_ptr<Cisco_IOS_XR_ip_domain_cfg::IpDomain::Vrfs::Vrf> > vrf;


    }; // IpDomain::Vrfs


        std::unique_ptr<Cisco_IOS_XR_ip_domain_cfg::IpDomain::Vrfs> vrfs;


}; // IpDomain



}
}

#endif /* _CISCO_IOS_XR_IP_DOMAIN_CFG_ */

