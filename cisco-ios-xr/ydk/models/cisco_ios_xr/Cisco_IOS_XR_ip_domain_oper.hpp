#ifndef _CISCO_IOS_XR_IP_DOMAIN_OPER_
#define _CISCO_IOS_XR_IP_DOMAIN_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_domain_oper {

class HostAddressBase : public virtual ydk::Identity
{
    public:
        HostAddressBase();
        ~HostAddressBase();


}; // HostAddressBase

class IpDomain : public ydk::Entity
{
    public:
        IpDomain();
        ~IpDomain();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::shared_ptr<ydk::Entity> clone_ptr() const override;
        ydk::augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;
        std::map<std::pair<std::string, std::string>, std::string> get_namespace_identity_lookup() const override;

        class Vrfs; //type: IpDomain::Vrfs

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_domain_oper::IpDomain::Vrfs> vrfs;
        
}; // IpDomain


class IpDomain::Vrfs : public ydk::Entity
{
    public:
        Vrfs();
        ~Vrfs();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        class Vrf; //type: IpDomain::Vrfs::Vrf

        ydk::YList vrf;
        
}; // IpDomain::Vrfs


class IpDomain::Vrfs::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;
        std::string get_absolute_path() const override;

        ydk::YLeaf vrf_name; //type: string
        class Server; //type: IpDomain::Vrfs::Vrf::Server
        class Hosts; //type: IpDomain::Vrfs::Vrf::Hosts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_domain_oper::IpDomain::Vrfs::Vrf::Server> server;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_domain_oper::IpDomain::Vrfs::Vrf::Hosts> hosts;
        
}; // IpDomain::Vrfs::Vrf


class IpDomain::Vrfs::Vrf::Server : public ydk::Entity
{
    public:
        Server();
        ~Server();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf domain_lookup; //type: ServerDomainLkup
        ydk::YLeaf domain_name; //type: string
        ydk::YLeafList domain; //type: list of  string
        class ServerAddress; //type: IpDomain::Vrfs::Vrf::Server::ServerAddress

        ydk::YList server_address;
        
}; // IpDomain::Vrfs::Vrf::Server


class IpDomain::Vrfs::Vrf::Server::ServerAddress : public ydk::Entity
{
    public:
        ServerAddress();
        ~ServerAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: HostAddressBase
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // IpDomain::Vrfs::Vrf::Server::ServerAddress


class IpDomain::Vrfs::Vrf::Hosts : public ydk::Entity
{
    public:
        Hosts();
        ~Hosts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Host; //type: IpDomain::Vrfs::Vrf::Hosts::Host

        ydk::YList host;
        
}; // IpDomain::Vrfs::Vrf::Hosts


class IpDomain::Vrfs::Vrf::Hosts::Host : public ydk::Entity
{
    public:
        Host();
        ~Host();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host_name; //type: string
        ydk::YLeaf af_name; //type: HostAddressBase
        ydk::YLeaf age; //type: uint16
        class HostAliasList; //type: IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList
        class HostAddress; //type: IpDomain::Vrfs::Vrf::Hosts::Host::HostAddress

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_domain_oper::IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList> host_alias_list;
        ydk::YList host_address;
        
}; // IpDomain::Vrfs::Vrf::Hosts::Host


class IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList : public ydk::Entity
{
    public:
        HostAliasList();
        ~HostAliasList();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeafList host_alias; //type: list of  string

}; // IpDomain::Vrfs::Vrf::Hosts::Host::HostAliasList


class IpDomain::Vrfs::Vrf::Hosts::Host::HostAddress : public ydk::Entity
{
    public:
        HostAddress();
        ~HostAddress();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf af_name; //type: HostAddressBase
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // IpDomain::Vrfs::Vrf::Hosts::Host::HostAddress

class Ipv4 : public cisco_ios_xr::Cisco_IOS_XR_ip_domain_oper::HostAddressBase, virtual ydk::Identity
{
    public:
        Ipv4();
        ~Ipv4();


}; // Ipv4

class Ipv6 : public cisco_ios_xr::Cisco_IOS_XR_ip_domain_oper::HostAddressBase, virtual ydk::Identity
{
    public:
        Ipv6();
        ~Ipv6();


}; // Ipv6

class ServerDomainLkup : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf static_mapping;
        static const ydk::Enum::YLeaf domain_service;

};


}
}

#endif /* _CISCO_IOS_XR_IP_DOMAIN_OPER_ */

