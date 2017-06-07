#ifndef _CISCO_IOS_XR_IP_DOMAIN_CFG_
#define _CISCO_IOS_XR_IP_DOMAIN_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ip_domain_cfg {

class IpDomain : public Entity
{
    public:
        IpDomain();
        ~IpDomain();

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

        class Vrfs; //type: IpDomain::Vrfs

        std::shared_ptr<Cisco_IOS_XR_ip_domain_cfg::IpDomain::Vrfs> vrfs;
        
}; // IpDomain


class IpDomain::Vrfs : public Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Vrf; //type: IpDomain::Vrfs::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_domain_cfg::IpDomain::Vrfs::Vrf> > vrf;
        
}; // IpDomain::Vrfs


class IpDomain::Vrfs::Vrf : public Entity
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

        YLeaf vrf_name; //type: string
        YLeaf lookup; //type: empty
        YLeaf multicast_domain; //type: string
        YLeaf source_interface; //type: string
        YLeaf name; //type: string
        class Ipv6Hosts; //type: IpDomain::Vrfs::Vrf::Ipv6Hosts
        class Servers; //type: IpDomain::Vrfs::Vrf::Servers
        class Lists; //type: IpDomain::Vrfs::Vrf::Lists
        class Ipv4Hosts; //type: IpDomain::Vrfs::Vrf::Ipv4Hosts

        std::shared_ptr<Cisco_IOS_XR_ip_domain_cfg::IpDomain::Vrfs::Vrf::Ipv4Hosts> ipv4_hosts;
        std::shared_ptr<Cisco_IOS_XR_ip_domain_cfg::IpDomain::Vrfs::Vrf::Ipv6Hosts> ipv6_hosts;
        std::shared_ptr<Cisco_IOS_XR_ip_domain_cfg::IpDomain::Vrfs::Vrf::Lists> lists;
        std::shared_ptr<Cisco_IOS_XR_ip_domain_cfg::IpDomain::Vrfs::Vrf::Servers> servers;
        
}; // IpDomain::Vrfs::Vrf


class IpDomain::Vrfs::Vrf::Ipv6Hosts : public Entity
{
    public:
        Ipv6Hosts();
        ~Ipv6Hosts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv6Host; //type: IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_domain_cfg::IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host> > ipv6_host;
        
}; // IpDomain::Vrfs::Vrf::Ipv6Hosts


class IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host : public Entity
{
    public:
        Ipv6Host();
        ~Ipv6Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf host_name; //type: string
        YLeafList address; //type: list of  string

}; // IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host


class IpDomain::Vrfs::Vrf::Servers : public Entity
{
    public:
        Servers();
        ~Servers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Server; //type: IpDomain::Vrfs::Vrf::Servers::Server

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_domain_cfg::IpDomain::Vrfs::Vrf::Servers::Server> > server;
        
}; // IpDomain::Vrfs::Vrf::Servers


class IpDomain::Vrfs::Vrf::Servers::Server : public Entity
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

        YLeaf order; //type: int32
        YLeaf server_address; //type: string

}; // IpDomain::Vrfs::Vrf::Servers::Server


class IpDomain::Vrfs::Vrf::Lists : public Entity
{
    public:
        Lists();
        ~Lists();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class List; //type: IpDomain::Vrfs::Vrf::Lists::List

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_domain_cfg::IpDomain::Vrfs::Vrf::Lists::List> > list;
        
}; // IpDomain::Vrfs::Vrf::Lists


class IpDomain::Vrfs::Vrf::Lists::List : public Entity
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

        YLeaf order; //type: int32
        YLeaf list_name; //type: string

}; // IpDomain::Vrfs::Vrf::Lists::List


class IpDomain::Vrfs::Vrf::Ipv4Hosts : public Entity
{
    public:
        Ipv4Hosts();
        ~Ipv4Hosts();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4Host; //type: IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_domain_cfg::IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host> > ipv4_host;
        
}; // IpDomain::Vrfs::Vrf::Ipv4Hosts


class IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host : public Entity
{
    public:
        Ipv4Host();
        ~Ipv4Host();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf host_name; //type: string
        YLeafList address; //type: list of  string

}; // IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host


}
}

#endif /* _CISCO_IOS_XR_IP_DOMAIN_CFG_ */

