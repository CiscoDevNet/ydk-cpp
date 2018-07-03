#ifndef _CISCO_IOS_XR_IP_DOMAIN_CFG_
#define _CISCO_IOS_XR_IP_DOMAIN_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_domain_cfg {

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

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_domain_cfg::IpDomain::Vrfs> vrfs;
        
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
        ydk::YLeaf lookup; //type: empty
        ydk::YLeaf multicast_domain; //type: string
        ydk::YLeaf source_interface; //type: string
        ydk::YLeaf name; //type: string
        class Ipv6Hosts; //type: IpDomain::Vrfs::Vrf::Ipv6Hosts
        class Servers; //type: IpDomain::Vrfs::Vrf::Servers
        class Lists; //type: IpDomain::Vrfs::Vrf::Lists
        class Ipv4Hosts; //type: IpDomain::Vrfs::Vrf::Ipv4Hosts

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_domain_cfg::IpDomain::Vrfs::Vrf::Ipv6Hosts> ipv6_hosts;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_domain_cfg::IpDomain::Vrfs::Vrf::Servers> servers;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_domain_cfg::IpDomain::Vrfs::Vrf::Lists> lists;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_domain_cfg::IpDomain::Vrfs::Vrf::Ipv4Hosts> ipv4_hosts;
        
}; // IpDomain::Vrfs::Vrf


class IpDomain::Vrfs::Vrf::Ipv6Hosts : public ydk::Entity
{
    public:
        Ipv6Hosts();
        ~Ipv6Hosts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv6Host; //type: IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host

        ydk::YList ipv6_host;
        
}; // IpDomain::Vrfs::Vrf::Ipv6Hosts


class IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host : public ydk::Entity
{
    public:
        Ipv6Host();
        ~Ipv6Host();

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
        ydk::YLeafList address; //type: list of  string

}; // IpDomain::Vrfs::Vrf::Ipv6Hosts::Ipv6Host


class IpDomain::Vrfs::Vrf::Servers : public ydk::Entity
{
    public:
        Servers();
        ~Servers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Server; //type: IpDomain::Vrfs::Vrf::Servers::Server

        ydk::YList server;
        
}; // IpDomain::Vrfs::Vrf::Servers


class IpDomain::Vrfs::Vrf::Servers::Server : public ydk::Entity
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

        ydk::YLeaf order; //type: uint32
        ydk::YLeaf server_address; //type: string

}; // IpDomain::Vrfs::Vrf::Servers::Server


class IpDomain::Vrfs::Vrf::Lists : public ydk::Entity
{
    public:
        Lists();
        ~Lists();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class List; //type: IpDomain::Vrfs::Vrf::Lists::List

        ydk::YList list;
        
}; // IpDomain::Vrfs::Vrf::Lists


class IpDomain::Vrfs::Vrf::Lists::List : public ydk::Entity
{
    public:
        List();
        ~List();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf order; //type: uint32
        ydk::YLeaf list_name; //type: string

}; // IpDomain::Vrfs::Vrf::Lists::List


class IpDomain::Vrfs::Vrf::Ipv4Hosts : public ydk::Entity
{
    public:
        Ipv4Hosts();
        ~Ipv4Hosts();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4Host; //type: IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host

        ydk::YList ipv4_host;
        
}; // IpDomain::Vrfs::Vrf::Ipv4Hosts


class IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host : public ydk::Entity
{
    public:
        Ipv4Host();
        ~Ipv4Host();

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
        ydk::YLeafList address; //type: list of  string

}; // IpDomain::Vrfs::Vrf::Ipv4Hosts::Ipv4Host


}
}

#endif /* _CISCO_IOS_XR_IP_DOMAIN_CFG_ */

