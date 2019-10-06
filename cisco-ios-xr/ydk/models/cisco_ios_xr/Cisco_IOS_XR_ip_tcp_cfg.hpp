#ifndef _CISCO_IOS_XR_IP_TCP_CFG_
#define _CISCO_IOS_XR_IP_TCP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_tcp_cfg {

class IpTcp : public ydk::Entity
{
    public:
        IpTcp();
        ~IpTcp();

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

        ydk::YLeaf accept_rate; //type: uint32
        ydk::YLeaf selective_ack; //type: empty
        ydk::YLeaf window_size; //type: uint32
        ydk::YLeaf receive_q; //type: uint32
        ydk::YLeaf maximum_segment_size; //type: uint32
        ydk::YLeaf syn_wait_time; //type: uint32
        ydk::YLeaf timestamp; //type: empty
        ydk::YLeaf path_mtu_discovery; //type: uint32
        class Directory; //type: IpTcp::Directory
        class Throttle; //type: IpTcp::Throttle
        class Ao; //type: IpTcp::Ao
        class NumThread; //type: IpTcp::NumThread

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::IpTcp::Directory> directory; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::IpTcp::Throttle> throttle; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::IpTcp::Ao> ao;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::IpTcp::NumThread> num_thread; // presence node
        
}; // IpTcp


class IpTcp::Directory : public ydk::Entity
{
    public:
        Directory();
        ~Directory();

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

        ydk::YLeaf directoryname; //type: string
        ydk::YLeaf max_debug_files; //type: uint32
        ydk::YLeaf max_file_size_files; //type: uint32

}; // IpTcp::Directory


class IpTcp::Throttle : public ydk::Entity
{
    public:
        Throttle();
        ~Throttle();

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

        ydk::YLeaf tcpmin_throttle; //type: uint32
        ydk::YLeaf tcpmaxthrottle; //type: uint32

}; // IpTcp::Throttle


class IpTcp::Ao : public ydk::Entity
{
    public:
        Ao();
        ~Ao();

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

        ydk::YLeaf enable; //type: empty
        class Keychains; //type: IpTcp::Ao::Keychains

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::IpTcp::Ao::Keychains> keychains;
        
}; // IpTcp::Ao


class IpTcp::Ao::Keychains : public ydk::Entity
{
    public:
        Keychains();
        ~Keychains();

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

        class Keychain; //type: IpTcp::Ao::Keychains::Keychain

        ydk::YList keychain;
        
}; // IpTcp::Ao::Keychains


class IpTcp::Ao::Keychains::Keychain : public ydk::Entity
{
    public:
        Keychain();
        ~Keychain();

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

        ydk::YLeaf name; //type: string
        ydk::YLeaf create; //type: empty
        class Keys; //type: IpTcp::Ao::Keychains::Keychain::Keys

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::IpTcp::Ao::Keychains::Keychain::Keys> keys;
        
}; // IpTcp::Ao::Keychains::Keychain


class IpTcp::Ao::Keychains::Keychain::Keys : public ydk::Entity
{
    public:
        Keys();
        ~Keys();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Key; //type: IpTcp::Ao::Keychains::Keychain::Keys::Key

        ydk::YList key;
        
}; // IpTcp::Ao::Keychains::Keychain::Keys


class IpTcp::Ao::Keychains::Keychain::Keys::Key : public ydk::Entity
{
    public:
        Key();
        ~Key();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf key_id; //type: string
        ydk::YLeaf send_id; //type: uint32
        ydk::YLeaf receive_id; //type: uint32

}; // IpTcp::Ao::Keychains::Keychain::Keys::Key


class IpTcp::NumThread : public ydk::Entity
{
    public:
        NumThread();
        ~NumThread();

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

        ydk::YLeaf tcp_in_q_threads; //type: uint32
        ydk::YLeaf tcp_out_q_threads; //type: uint32

}; // IpTcp::NumThread

class Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

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

        class Cinetd; //type: Ip::Cinetd
        class ForwardProtocol; //type: Ip::ForwardProtocol

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd> cinetd;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::Ip::ForwardProtocol> forward_protocol;
        
}; // Ip


class Ip::Cinetd : public ydk::Entity
{
    public:
        Cinetd();
        ~Cinetd();

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

        ydk::YLeaf rate_limit; //type: uint32
        class Services; //type: Ip::Cinetd::Services

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services> services;
        
}; // Ip::Cinetd


class Ip::Cinetd::Services : public ydk::Entity
{
    public:
        Services();
        ~Services();

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

        class Ipv4; //type: Ip::Cinetd::Services::Ipv4
        class Vrfs; //type: Ip::Cinetd::Services::Vrfs
        class Ipv6; //type: Ip::Cinetd::Services::Ipv6

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Ipv4> ipv4;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Vrfs> vrfs;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Ipv6> ipv6;
        
}; // Ip::Cinetd::Services


class Ip::Cinetd::Services::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

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

        class SmallServers; //type: Ip::Cinetd::Services::Ipv4::SmallServers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Ipv4::SmallServers> small_servers;
        
}; // Ip::Cinetd::Services::Ipv4


class Ip::Cinetd::Services::Ipv4::SmallServers : public ydk::Entity
{
    public:
        SmallServers();
        ~SmallServers();

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

        class TcpSmallServers; //type: Ip::Cinetd::Services::Ipv4::SmallServers::TcpSmallServers
        class UdpSmallServers; //type: Ip::Cinetd::Services::Ipv4::SmallServers::UdpSmallServers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Ipv4::SmallServers::TcpSmallServers> tcp_small_servers; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Ipv4::SmallServers::UdpSmallServers> udp_small_servers; // presence node
        
}; // Ip::Cinetd::Services::Ipv4::SmallServers


class Ip::Cinetd::Services::Ipv4::SmallServers::TcpSmallServers : public ydk::Entity
{
    public:
        TcpSmallServers();
        ~TcpSmallServers();

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

        ydk::YLeaf access_control_list_name; //type: string
        ydk::YLeaf small_server; //type: one of uint32, enumeration
        class SmallServer;

}; // Ip::Cinetd::Services::Ipv4::SmallServers::TcpSmallServers


class Ip::Cinetd::Services::Ipv4::SmallServers::UdpSmallServers : public ydk::Entity
{
    public:
        UdpSmallServers();
        ~UdpSmallServers();

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

        ydk::YLeaf access_control_list_name; //type: string
        ydk::YLeaf small_server; //type: one of uint32, enumeration
        class SmallServer;

}; // Ip::Cinetd::Services::Ipv4::SmallServers::UdpSmallServers


class Ip::Cinetd::Services::Vrfs : public ydk::Entity
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

        class Vrf; //type: Ip::Cinetd::Services::Vrfs::Vrf

        ydk::YList vrf;
        
}; // Ip::Cinetd::Services::Vrfs


class Ip::Cinetd::Services::Vrfs::Vrf : public ydk::Entity
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
        class Ipv6; //type: Ip::Cinetd::Services::Vrfs::Vrf::Ipv6
        class Ipv4; //type: Ip::Cinetd::Services::Vrfs::Vrf::Ipv4

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Vrfs::Vrf::Ipv6> ipv6;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Vrfs::Vrf::Ipv4> ipv4;
        
}; // Ip::Cinetd::Services::Vrfs::Vrf


class Ip::Cinetd::Services::Vrfs::Vrf::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Telnet; //type: Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet
        class Tftp; //type: Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet> telnet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp> tftp;
        
}; // Ip::Cinetd::Services::Vrfs::Vrf::Ipv6


class Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet : public ydk::Entity
{
    public:
        Telnet();
        ~Telnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tcp; //type: Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet::Tcp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet::Tcp> tcp; // presence node
        
}; // Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet


class Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf maximum_server; //type: uint32

}; // Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Telnet::Tcp


class Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp : public ydk::Entity
{
    public:
        Tftp();
        ~Tftp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Udp; //type: Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp::Udp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp::Udp> udp; // presence node
        
}; // Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp


class Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf maximum_server; //type: uint32
        ydk::YLeaf home_directory; //type: string
        ydk::YLeaf dscp_value; //type: uint32

}; // Ip::Cinetd::Services::Vrfs::Vrf::Ipv6::Tftp::Udp


class Ip::Cinetd::Services::Vrfs::Vrf::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Telnet; //type: Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet
        class Tftp; //type: Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet> telnet;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp> tftp;
        
}; // Ip::Cinetd::Services::Vrfs::Vrf::Ipv4


class Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet : public ydk::Entity
{
    public:
        Telnet();
        ~Telnet();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Tcp; //type: Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet::Tcp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet::Tcp> tcp; // presence node
        
}; // Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet


class Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf maximum_server; //type: uint32

}; // Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Telnet::Tcp


class Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp : public ydk::Entity
{
    public:
        Tftp();
        ~Tftp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Udp; //type: Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp::Udp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp::Udp> udp; // presence node
        
}; // Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp


class Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf access_list_name; //type: string
        ydk::YLeaf maximum_server; //type: uint32
        ydk::YLeaf home_directory; //type: string
        ydk::YLeaf dscp_value; //type: uint32

}; // Ip::Cinetd::Services::Vrfs::Vrf::Ipv4::Tftp::Udp


class Ip::Cinetd::Services::Ipv6 : public ydk::Entity
{
    public:
        Ipv6();
        ~Ipv6();

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

        class SmallServers; //type: Ip::Cinetd::Services::Ipv6::SmallServers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Ipv6::SmallServers> small_servers;
        
}; // Ip::Cinetd::Services::Ipv6


class Ip::Cinetd::Services::Ipv6::SmallServers : public ydk::Entity
{
    public:
        SmallServers();
        ~SmallServers();

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

        class TcpSmallServers; //type: Ip::Cinetd::Services::Ipv6::SmallServers::TcpSmallServers
        class UdpSmallServers; //type: Ip::Cinetd::Services::Ipv6::SmallServers::UdpSmallServers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Ipv6::SmallServers::TcpSmallServers> tcp_small_servers; // presence node
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::Ip::Cinetd::Services::Ipv6::SmallServers::UdpSmallServers> udp_small_servers; // presence node
        
}; // Ip::Cinetd::Services::Ipv6::SmallServers


class Ip::Cinetd::Services::Ipv6::SmallServers::TcpSmallServers : public ydk::Entity
{
    public:
        TcpSmallServers();
        ~TcpSmallServers();

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

        ydk::YLeaf access_control_list_name; //type: string
        ydk::YLeaf small_server; //type: one of uint32, enumeration
        class SmallServer;

}; // Ip::Cinetd::Services::Ipv6::SmallServers::TcpSmallServers


class Ip::Cinetd::Services::Ipv6::SmallServers::UdpSmallServers : public ydk::Entity
{
    public:
        UdpSmallServers();
        ~UdpSmallServers();

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

        ydk::YLeaf access_control_list_name; //type: string
        ydk::YLeaf small_server; //type: one of uint32, enumeration
        class SmallServer;

}; // Ip::Cinetd::Services::Ipv6::SmallServers::UdpSmallServers


class Ip::ForwardProtocol : public ydk::Entity
{
    public:
        ForwardProtocol();
        ~ForwardProtocol();

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

        class Udp; //type: Ip::ForwardProtocol::Udp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::Ip::ForwardProtocol::Udp> udp;
        
}; // Ip::ForwardProtocol


class Ip::ForwardProtocol::Udp : public ydk::Entity
{
    public:
        Udp();
        ~Udp();

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

        ydk::YLeaf disable; //type: empty
        class Ports; //type: Ip::ForwardProtocol::Udp::Ports

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_tcp_cfg::Ip::ForwardProtocol::Udp::Ports> ports;
        
}; // Ip::ForwardProtocol::Udp


class Ip::ForwardProtocol::Udp::Ports : public ydk::Entity
{
    public:
        Ports();
        ~Ports();

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

        class Port; //type: Ip::ForwardProtocol::Udp::Ports::Port

        ydk::YList port;
        
}; // Ip::ForwardProtocol::Udp::Ports


class Ip::ForwardProtocol::Udp::Ports::Port : public ydk::Entity
{
    public:
        Port();
        ~Port();

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

        ydk::YLeaf port_id; //type: uint16
        ydk::YLeaf enable; //type: boolean

}; // Ip::ForwardProtocol::Udp::Ports::Port

class Ip::Cinetd::Services::Ipv4::SmallServers::TcpSmallServers::SmallServer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_limit;

        static int get_enum_value(const std::string & name) {
            if (name == "no-limit") return 0;
            return -1;
        }
};

class Ip::Cinetd::Services::Ipv4::SmallServers::UdpSmallServers::SmallServer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_limit;

        static int get_enum_value(const std::string & name) {
            if (name == "no-limit") return 0;
            return -1;
        }
};

class Ip::Cinetd::Services::Ipv6::SmallServers::TcpSmallServers::SmallServer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_limit;

        static int get_enum_value(const std::string & name) {
            if (name == "no-limit") return 0;
            return -1;
        }
};

class Ip::Cinetd::Services::Ipv6::SmallServers::UdpSmallServers::SmallServer : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_limit;

        static int get_enum_value(const std::string & name) {
            if (name == "no-limit") return 0;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_IP_TCP_CFG_ */

