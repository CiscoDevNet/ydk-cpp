#ifndef _CISCO_IOS_XE_NATIVE_83_
#define _CISCO_IOS_XE_NATIVE_83_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_82.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit : public Entity
{
    public:
        Circuit();
        ~Circuit();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf id; //type: empty

}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Circuit


class Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link : public Entity
{
    public:
        Link();
        ~Link();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf failure; //type: empty

}; // Native::L2Vpn::Xconnect::Context::XcModeConfigXconnect::Remote::Link


class Native::L2VpnConfig : public Entity
{
    public:
        L2VpnConfig();
        ~L2VpnConfig();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class L2Vpn; //type: Native::L2VpnConfig::L2Vpn

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2VpnConfig::L2Vpn> l2vpn; // presence node
        
}; // Native::L2VpnConfig


class Native::L2VpnConfig::L2Vpn : public Entity
{
    public:
        L2Vpn();
        ~L2Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf router_id; //type: string
        YLeaf shutdown; //type: empty
        class Logging; //type: Native::L2VpnConfig::L2Vpn::Logging
        class Redundancy; //type: Native::L2VpnConfig::L2Vpn::Redundancy

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2VpnConfig::L2Vpn::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L2VpnConfig::L2Vpn::Redundancy> redundancy;
        
}; // Native::L2VpnConfig::L2Vpn


class Native::L2VpnConfig::L2Vpn::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf redundancy; //type: empty
        class Pseudowire; //type: Native::L2VpnConfig::L2Vpn::Logging::Pseudowire

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2VpnConfig::L2Vpn::Logging::Pseudowire> pseudowire;
        
}; // Native::L2VpnConfig::L2Vpn::Logging


class Native::L2VpnConfig::L2Vpn::Logging::Pseudowire : public Entity
{
    public:
        Pseudowire();
        ~Pseudowire();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf status; //type: empty

}; // Native::L2VpnConfig::L2Vpn::Logging::Pseudowire


class Native::L2VpnConfig::L2Vpn::Redundancy : public Entity
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

        class Predictive; //type: Native::L2VpnConfig::L2Vpn::Redundancy::Predictive

        std::shared_ptr<Cisco_IOS_XE_native::Native::L2VpnConfig::L2Vpn::Redundancy::Predictive> predictive;
        
}; // Native::L2VpnConfig::L2Vpn::Redundancy


class Native::L2VpnConfig::L2Vpn::Redundancy::Predictive : public Entity
{
    public:
        Predictive();
        ~Predictive();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enabled; //type: empty

}; // Native::L2VpnConfig::L2Vpn::Redundancy::Predictive


class Native::L3Vpn : public Entity
{
    public:
        L3Vpn();
        ~L3Vpn();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Encapsulation; //type: Native::L3Vpn::Encapsulation

        std::shared_ptr<Cisco_IOS_XE_native::Native::L3Vpn::Encapsulation> encapsulation;
        
}; // Native::L3Vpn


class Native::L3Vpn::Encapsulation : public Entity
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

        class Ip; //type: Native::L3Vpn::Encapsulation::Ip

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::L3Vpn::Encapsulation::Ip> > ip;
        
}; // Native::L3Vpn::Encapsulation


class Native::L3Vpn::Encapsulation::Ip : public Entity
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

        YLeaf profile_name; //type: string
        class Transport; //type: Native::L3Vpn::Encapsulation::Ip::Transport
        class Protocol; //type: Native::L3Vpn::Encapsulation::Ip::Protocol
        class Mpls; //type: Native::L3Vpn::Encapsulation::Ip::Mpls

        std::shared_ptr<Cisco_IOS_XE_native::Native::L3Vpn::Encapsulation::Ip::Mpls> mpls;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L3Vpn::Encapsulation::Ip::Protocol> protocol;
        std::shared_ptr<Cisco_IOS_XE_native::Native::L3Vpn::Encapsulation::Ip::Transport> transport;
        
}; // Native::L3Vpn::Encapsulation::Ip


class Native::L3Vpn::Encapsulation::Ip::Transport : public Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4

        std::shared_ptr<Cisco_IOS_XE_native::Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4> ipv4; // presence node
        
}; // Native::L3Vpn::Encapsulation::Ip::Transport


class Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf source; //type: string

}; // Native::L3Vpn::Encapsulation::Ip::Transport::Ipv4


class Native::L3Vpn::Encapsulation::Ip::Protocol : public Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Gre; //type: Native::L3Vpn::Encapsulation::Ip::Protocol::Gre

        std::shared_ptr<Cisco_IOS_XE_native::Native::L3Vpn::Encapsulation::Ip::Protocol::Gre> gre; // presence node
        
}; // Native::L3Vpn::Encapsulation::Ip::Protocol


class Native::L3Vpn::Encapsulation::Ip::Protocol::Gre : public Entity
{
    public:
        Gre();
        ~Gre();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf key; //type: uint32

}; // Native::L3Vpn::Encapsulation::Ip::Protocol::Gre


class Native::L3Vpn::Encapsulation::Ip::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf mtu; //type: one of uint32, enumeration
        class MtuEnum;

}; // Native::L3Vpn::Encapsulation::Ip::Mpls


class Native::Mpls : public Entity
{
    public:
        Mpls();
        ~Mpls();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf cos_map; //type: uint8
        class Atm; //type: Native::Mpls::Atm
        class Ip; //type: Native::Mpls::Ip
        class Label; //type: Native::Mpls::Label
        class Ldp; //type: Native::Mpls::Ldp
        class PrefixMap; //type: Native::Mpls::PrefixMap
        class Static_; //type: Native::Mpls::Static_
        class TrafficEng; //type: Native::Mpls::TrafficEng
        class Tp; //type: Native::Mpls::Tp

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Atm> atm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ip> ip;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label> label;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp> ldp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::PrefixMap> prefix_map;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Static_> static_; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Tp> tp; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng> traffic_eng;
        
}; // Native::Mpls


class Native::Mpls::Atm : public Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable_headend_vc; //type: empty

}; // Native::Mpls::Atm


class Native::Mpls::Ip : public Entity
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

        YLeaf default_route; //type: empty
        class Conf; //type: Native::Mpls::Ip::Conf
        class ConfArg; //type: Native::Mpls::Ip::ConfArg
        class TtlExpiration; //type: Native::Mpls::Ip::TtlExpiration

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ip::Conf> conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ip::ConfArg> conf_arg;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ip::TtlExpiration> ttl_expiration;
        
}; // Native::Mpls::Ip


class Native::Mpls::Ip::Conf : public Entity
{
    public:
        Conf();
        ~Conf();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf propagate_ttl; //type: boolean

}; // Native::Mpls::Ip::Conf


class Native::Mpls::Ip::ConfArg : public Entity
{
    public:
        ConfArg();
        ~ConfArg();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class PropagateTtl; //type: Native::Mpls::Ip::ConfArg::PropagateTtl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ip::ConfArg::PropagateTtl> propagate_ttl;
        
}; // Native::Mpls::Ip::ConfArg


class Native::Mpls::Ip::ConfArg::PropagateTtl : public Entity
{
    public:
        PropagateTtl();
        ~PropagateTtl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf forwarded; //type: boolean

}; // Native::Mpls::Ip::ConfArg::PropagateTtl


class Native::Mpls::Ip::TtlExpiration : public Entity
{
    public:
        TtlExpiration();
        ~TtlExpiration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pop; //type: uint8

}; // Native::Mpls::Ip::TtlExpiration


class Native::Mpls::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol; //type: ProtocolEnum
        class Atm; //type: Native::Mpls::Label::Atm
        class Mode; //type: Native::Mpls::Label::Mode
        class Range; //type: Native::Mpls::Label::Range

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Atm> atm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Range> range;
                class ProtocolEnum;

}; // Native::Mpls::Label


class Native::Mpls::Label::Atm : public Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf disable_headend_vc; //type: empty

}; // Native::Mpls::Label::Atm


class Native::Mpls::Label::Mode : public Entity
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

        class AllVrfs; //type: Native::Mpls::Label::Mode::AllVrfs
        class Vrf; //type: Native::Mpls::Label::Mode::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Mode::AllVrfs> all_vrfs;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Mode::Vrf> vrf;
        
}; // Native::Mpls::Label::Mode


class Native::Mpls::Label::Mode::AllVrfs : public Entity
{
    public:
        AllVrfs();
        ~AllVrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Protocol; //type: Native::Mpls::Label::Mode::AllVrfs::Protocol

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Mode::AllVrfs::Protocol> protocol;
        
}; // Native::Mpls::Label::Mode::AllVrfs


class Native::Mpls::Label::Mode::AllVrfs::Protocol : public Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AllAfs; //type: Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs
        class BgpVpnv4; //type: Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4
        class BgpVpnv6; //type: Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs> all_afs;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4> bgp_vpnv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6> bgp_vpnv6;
        
}; // Native::Mpls::Label::Mode::AllVrfs::Protocol


class Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs : public Entity
{
    public:
        AllAfs();
        ~AllAfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf per_ce; //type: empty
        YLeaf per_prefix; //type: empty
        YLeaf per_vrf; //type: empty
        YLeaf vrf_conn_aggr; //type: empty

}; // Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs


class Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4 : public Entity
{
    public:
        BgpVpnv4();
        ~BgpVpnv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf per_ce; //type: empty
        YLeaf per_prefix; //type: empty
        YLeaf per_vrf; //type: empty
        YLeaf vrf_conn_aggr; //type: empty

}; // Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4


class Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6 : public Entity
{
    public:
        BgpVpnv6();
        ~BgpVpnv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf per_ce; //type: empty
        YLeaf per_prefix; //type: empty
        YLeaf per_vrf; //type: empty
        YLeaf vrf_conn_aggr; //type: empty

}; // Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6


class Native::Mpls::Label::Mode::Vrf : public Entity
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

        class Vrf_; //type: Native::Mpls::Label::Mode::Vrf::Vrf_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Mode::Vrf::Vrf_> > vrf;
        
}; // Native::Mpls::Label::Mode::Vrf


class Native::Mpls::Label::Mode::Vrf::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        class Protocol; //type: Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol> protocol;
        
}; // Native::Mpls::Label::Mode::Vrf::Vrf_


class Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol : public Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AllAfs; //type: Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs
        class BgpVpnv4; //type: Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4
        class BgpVpnv6; //type: Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs> all_afs;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4> bgp_vpnv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6> bgp_vpnv6;
        
}; // Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol


class Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs : public Entity
{
    public:
        AllAfs();
        ~AllAfs();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf per_ce; //type: empty
        YLeaf per_prefix; //type: empty
        YLeaf per_vrf; //type: empty
        YLeaf vrf_conn_aggr; //type: empty

}; // Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs


class Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4 : public Entity
{
    public:
        BgpVpnv4();
        ~BgpVpnv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf per_ce; //type: empty
        YLeaf per_prefix; //type: empty
        YLeaf per_vrf; //type: empty
        YLeaf vrf_conn_aggr; //type: empty

}; // Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4


class Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6 : public Entity
{
    public:
        BgpVpnv6();
        ~BgpVpnv6();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf per_ce; //type: empty
        YLeaf per_prefix; //type: empty
        YLeaf per_vrf; //type: empty
        YLeaf vrf_conn_aggr; //type: empty

}; // Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6


class Native::Mpls::Label::Range : public Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf min; //type: uint32
        YLeaf max; //type: uint32
        class Static_; //type: Native::Mpls::Label::Range::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Range::Static_> static_;
        
}; // Native::Mpls::Label::Range


class Native::Mpls::Label::Range::Static_ : public Entity
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

        YLeaf min; //type: uint32
        YLeaf max; //type: uint32

}; // Native::Mpls::Label::Range::Static_


class Native::Mpls::Ldp : public Entity
{
    public:
        Ldp();
        ~Ldp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Enable; //type: Native::Mpls::Ldp::Enable
        class Enable2; //type: Native::Mpls::Ldp::Enable2
        class Session; //type: Native::Mpls::Ldp::Session

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable> enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2> enable2;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Session> session;
        
}; // Native::Mpls::Ldp


class Native::Mpls::Ldp::Enable : public Entity
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

        YLeaf advertise_labels; //type: boolean

}; // Native::Mpls::Ldp::Enable


class Native::Mpls::Ldp::Enable2 : public Entity
{
    public:
        Enable2();
        ~Enable2();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf entropy_label; //type: empty
        YLeaf holdtime; //type: uint32
        YLeaf loop_detection; //type: empty
        YLeaf maxhops; //type: uint8
        YLeaf nsr; //type: empty
        class AdvertiseLabels; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels
        class Atm; //type: Native::Mpls::Ldp::Enable2::Atm
        class Backoff; //type: Native::Mpls::Ldp::Enable2::Backoff
        class Discovery; //type: Native::Mpls::Ldp::Enable2::Discovery
        class ExplicitNull; //type: Native::Mpls::Ldp::Enable2::ExplicitNull
        class GracefulRestart; //type: Native::Mpls::Ldp::Enable2::GracefulRestart
        class Igp; //type: Native::Mpls::Ldp::Enable2::Igp
        class Label; //type: Native::Mpls::Ldp::Enable2::Label
        class Logging; //type: Native::Mpls::Ldp::Enable2::Logging
        class Neighbor; //type: Native::Mpls::Ldp::Enable2::Neighbor
        class Password; //type: Native::Mpls::Ldp::Enable2::Password
        class RequestLabels; //type: Native::Mpls::Ldp::Enable2::RequestLabels
        class RouterId; //type: Native::Mpls::Ldp::Enable2::RouterId
        class Tcp; //type: Native::Mpls::Ldp::Enable2::Tcp
        class Vrf; //type: Native::Mpls::Ldp::Enable2::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels> advertise_labels;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Atm> atm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Backoff> backoff;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Discovery> discovery;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::ExplicitNull> explicit_null; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::GracefulRestart> graceful_restart; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Igp> igp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Label> label; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor> neighbor;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password> password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RequestLabels> request_labels;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId> router_id;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Tcp> tcp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf> vrf;
        
}; // Native::Mpls::Ldp::Enable2


class Native::Mpls::Ldp::Enable2::AdvertiseLabels : public Entity
{
    public:
        AdvertiseLabels();
        ~AdvertiseLabels();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf oldstyle; //type: empty
        class For_; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_
        class Interface; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface
        class Vrf; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_> for_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface> > interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf> vrf;
        
}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_ : public Entity
{
    public:
        For_();
        ~For_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf from; //type: string
        YLeaf to; //type: string

}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf name; //type: string

}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf : public Entity
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

        class Vrf_; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_> > vrf;
        
}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        YLeaf oldstyle; //type: empty
        class For_; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_
        class Interface; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_> for_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface> interface;
        
}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_ : public Entity
{
    public:
        For_();
        ~For_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf from; //type: string
        YLeaf to; //type: string

}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

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
        class AtmSubinterface; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmSubinterface : public Entity
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

}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmSubinterface


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmAcrsubinterface : public Entity
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

}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmAcrsubinterface


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LispSubinterface : public Entity
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

}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LispSubinterface


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface : public Entity
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

}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface


class Native::Mpls::Ldp::Enable2::Atm : public Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf control_mode; //type: ControlModeEnum
        YLeaf vc_merge; //type: boolean
        class ControlModeEnum;

}; // Native::Mpls::Ldp::Enable2::Atm


class Native::Mpls::Ldp::Enable2::Backoff : public Entity
{
    public:
        Backoff();
        ~Backoff();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf initial; //type: uint32
        YLeaf max; //type: uint32

}; // Native::Mpls::Ldp::Enable2::Backoff


class Native::Mpls::Ldp::Enable2::Discovery : public Entity
{
    public:
        Discovery();
        ~Discovery();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Hello; //type: Native::Mpls::Ldp::Enable2::Discovery::Hello
        class TargetedHello; //type: Native::Mpls::Ldp::Enable2::Discovery::TargetedHello

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Discovery::Hello> hello;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Discovery::TargetedHello> targeted_hello;
        
}; // Native::Mpls::Ldp::Enable2::Discovery


class Native::Mpls::Ldp::Enable2::Discovery::Hello : public Entity
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

        YLeaf holdtime; //type: uint16
        YLeaf interval; //type: uint16

}; // Native::Mpls::Ldp::Enable2::Discovery::Hello


class Native::Mpls::Ldp::Enable2::Discovery::TargetedHello : public Entity
{
    public:
        TargetedHello();
        ~TargetedHello();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf holdtime; //type: uint16
        YLeaf interval; //type: uint16
        class Accept; //type: Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept> accept; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Discovery::TargetedHello


class Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept : public Entity
{
    public:
        Accept();
        ~Accept();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf from; //type: string

}; // Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept


class Native::Mpls::Ldp::Enable2::ExplicitNull : public Entity
{
    public:
        ExplicitNull();
        ~ExplicitNull();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf for_; //type: string
        YLeaf to; //type: string

}; // Native::Mpls::Ldp::Enable2::ExplicitNull


class Native::Mpls::Ldp::Enable2::GracefulRestart : public Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Timers; //type: Native::Mpls::Ldp::Enable2::GracefulRestart::Timers

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::GracefulRestart::Timers> timers;
        
}; // Native::Mpls::Ldp::Enable2::GracefulRestart


class Native::Mpls::Ldp::Enable2::GracefulRestart::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf forwarding_holding; //type: uint16
        YLeaf max_recovery; //type: uint16
        YLeaf neighbor_liveness; //type: uint16

}; // Native::Mpls::Ldp::Enable2::GracefulRestart::Timers


class Native::Mpls::Ldp::Enable2::Igp : public Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Sync; //type: Native::Mpls::Ldp::Enable2::Igp::Sync

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Igp::Sync> sync;
        
}; // Native::Mpls::Ldp::Enable2::Igp


class Native::Mpls::Ldp::Enable2::Igp::Sync : public Entity
{
    public:
        Sync();
        ~Sync();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf holddown; //type: uint32

}; // Native::Mpls::Ldp::Enable2::Igp::Sync


class Native::Mpls::Ldp::Enable2::Label : public Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class LabelMode__ConfigLdpLbl; //type: Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl> label_mode__config_ldp_lbl;
        
}; // Native::Mpls::Ldp::Enable2::Label


class Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl : public Entity
{
    public:
        LabelMode__ConfigLdpLbl();
        ~LabelMode__ConfigLdpLbl();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Allocate; //type: Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate> allocate;
        
}; // Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl


class Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate : public Entity
{
    public:
        Allocate();
        ~Allocate();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Global; //type: Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate::Global

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate::Global> global; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate


class Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf host_routes; //type: empty
        YLeaf prefix_list; //type: string

}; // Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate::Global


class Native::Mpls::Ldp::Enable2::Logging : public Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf neighbor_changes; //type: empty
        class Password; //type: Native::Mpls::Ldp::Enable2::Logging::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Logging::Password> password;
        
}; // Native::Mpls::Ldp::Enable2::Logging


class Native::Mpls::Ldp::Enable2::Logging::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Configuration; //type: Native::Mpls::Ldp::Enable2::Logging::Password::Configuration
        class Rollover; //type: Native::Mpls::Ldp::Enable2::Logging::Password::Rollover

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Logging::Password::Configuration> configuration; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Logging::Password::Rollover> rollover; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Logging::Password


class Native::Mpls::Ldp::Enable2::Logging::Password::Configuration : public Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rate_limit; //type: uint8

}; // Native::Mpls::Ldp::Enable2::Logging::Password::Configuration


class Native::Mpls::Ldp::Enable2::Logging::Password::Rollover : public Entity
{
    public:
        Rollover();
        ~Rollover();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf rate_limit; //type: uint8

}; // Native::Mpls::Ldp::Enable2::Logging::Password::Rollover


class Native::Mpls::Ldp::Enable2::Neighbor : public Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class NeighborContent; //type: Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent
        class Vrf; //type: Native::Mpls::Ldp::Enable2::Neighbor::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent> > neighbor_content;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::Vrf> vrf;
        
}; // Native::Mpls::Ldp::Enable2::Neighbor


class Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent : public Entity
{
    public:
        NeighborContent();
        ~NeighborContent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf implicit_withdraw; //type: empty
        class Labels; //type: Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels
        class Password; //type: Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password
        class Targeted; //type: Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels> labels;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password> password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted> targeted; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent


class Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels : public Entity
{
    public:
        Labels();
        ~Labels();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf accept; //type: string

}; // Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels


class Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enctype; //type: uint8
        YLeaf text; //type: string

}; // Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password


class Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted : public Entity
{
    public:
        Targeted();
        ~Targeted();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol; //type: ProtocolEnum
        class ProtocolEnum;

}; // Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted


class Native::Mpls::Ldp::Enable2::Neighbor::Vrf : public Entity
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

        class Vrf_; //type: Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_> > vrf;
        
}; // Native::Mpls::Ldp::Enable2::Neighbor::Vrf


class Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        class NeighborContent; //type: Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent> > neighbor_content;
        
}; // Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_


class Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent : public Entity
{
    public:
        NeighborContent();
        ~NeighborContent();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf implicit_withdraw; //type: empty
        class Labels; //type: Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels
        class Password; //type: Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password
        class Targeted; //type: Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels> labels;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password> password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted> targeted; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent


class Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels : public Entity
{
    public:
        Labels();
        ~Labels();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf accept; //type: string

}; // Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels


class Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf enctype; //type: uint8
        YLeaf text; //type: string

}; // Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password


class Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted : public Entity
{
    public:
        Targeted();
        ~Targeted();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf protocol; //type: ProtocolEnum
        class ProtocolEnum;

}; // Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted


class Native::Mpls::Ldp::Enable2::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Fallback; //type: Native::Mpls::Ldp::Enable2::Password::Fallback
        class Option; //type: Native::Mpls::Ldp::Enable2::Password::Option
        class Required; //type: Native::Mpls::Ldp::Enable2::Password::Required
        class Rollover; //type: Native::Mpls::Ldp::Enable2::Password::Rollover

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Fallback> fallback;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Option> option;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Required> required; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Rollover> rollover;
        
}; // Native::Mpls::Ldp::Enable2::Password


class Native::Mpls::Ldp::Enable2::Password::Fallback : public Entity
{
    public:
        Fallback();
        ~Fallback();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption_type; //type: uint8
        YLeaf line; //type: string
        class KeyChain; //type: Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain> key_chain; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Password::Fallback


class Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain : public Entity
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

        YLeaf line; //type: string

}; // Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain


class Native::Mpls::Ldp::Enable2::Password::Option : public Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SeqNum; //type: Native::Mpls::Ldp::Enable2::Password::Option::SeqNum

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Option::SeqNum> > seq_num;
        
}; // Native::Mpls::Ldp::Enable2::Password::Option


class Native::Mpls::Ldp::Enable2::Password::Option::SeqNum : public Entity
{
    public:
        SeqNum();
        ~SeqNum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seq_num; //type: uint16
        class For_; //type: Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_> for_;
        
}; // Native::Mpls::Ldp::Enable2::Password::Option::SeqNum


class Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_ : public Entity
{
    public:
        For_();
        ~For_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Line; //type: Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line> > line;
        
}; // Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_


class Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line : public Entity
{
    public:
        Line();
        ~Line();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl_name; //type: string
        YLeaf encryption_type; //type: uint8
        YLeaf line; //type: string
        class KeyChain; //type: Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line::KeyChain

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line::KeyChain> key_chain; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line


class Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line::KeyChain : public Entity
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

        YLeaf line; //type: string

}; // Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line::KeyChain


class Native::Mpls::Ldp::Enable2::Password::Required : public Entity
{
    public:
        Required();
        ~Required();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf for_; //type: string

}; // Native::Mpls::Ldp::Enable2::Password::Required


class Native::Mpls::Ldp::Enable2::Password::Rollover : public Entity
{
    public:
        Rollover();
        ~Rollover();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf duration; //type: uint16

}; // Native::Mpls::Ldp::Enable2::Password::Rollover


class Native::Mpls::Ldp::Enable2::RequestLabels : public Entity
{
    public:
        RequestLabels();
        ~RequestLabels();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf for_; //type: string

}; // Native::Mpls::Ldp::Enable2::RequestLabels


class Native::Mpls::Ldp::Enable2::RouterId : public Entity
{
    public:
        RouterId();
        ~RouterId();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Interface; //type: Native::Mpls::Ldp::Enable2::RouterId::Interface
        class Vrf; //type: Native::Mpls::Ldp::Enable2::RouterId::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Interface> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Vrf> vrf;
        
}; // Native::Mpls::Ldp::Enable2::RouterId


class Native::Mpls::Ldp::Enable2::RouterId::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

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
        YLeaf force; //type: empty
        class AtmSubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Mpls::Ldp::Enable2::RouterId::Interface


class Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmSubinterface : public Entity
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

}; // Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmSubinterface


class Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmAcrsubinterface : public Entity
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

}; // Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmAcrsubinterface


class Native::Mpls::Ldp::Enable2::RouterId::Interface::LispSubinterface : public Entity
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

}; // Native::Mpls::Ldp::Enable2::RouterId::Interface::LispSubinterface


class Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface : public Entity
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

}; // Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface


class Native::Mpls::Ldp::Enable2::RouterId::Vrf : public Entity
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

        class Vrf_; //type: Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_> > vrf;
        
}; // Native::Mpls::Ldp::Enable2::RouterId::Vrf


class Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        class Interface; //type: Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface> interface;
        
}; // Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_


class Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface : public Entity
{
    public:
        Interface();
        ~Interface();

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
        YLeaf force; //type: empty
        class AtmSubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface


class Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmSubinterface : public Entity
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

}; // Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmSubinterface


class Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmAcrsubinterface : public Entity
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

}; // Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmAcrsubinterface


class Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::LispSubinterface : public Entity
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

}; // Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::LispSubinterface


class Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::PortChannelSubinterface : public Entity
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

}; // Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::PortChannelSubinterface


class Native::Mpls::Ldp::Enable2::Tcp : public Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf pak_priority; //type: empty

}; // Native::Mpls::Ldp::Enable2::Tcp


class Native::Mpls::Ldp::Enable2::Vrf : public Entity
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

        class Vrf_; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_> > vrf;
        
}; // Native::Mpls::Ldp::Enable2::Vrf


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        class Password; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password> password;
        
}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password : public Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Fallback; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback
        class Option; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option
        class Required; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required
        class Rollover; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback> fallback;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option> option;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required> required; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover> rollover;
        
}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback : public Entity
{
    public:
        Fallback();
        ~Fallback();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf encryption_type; //type: uint8
        YLeaf line; //type: string
        class KeyChain; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain> key_chain; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain : public Entity
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

        YLeaf line; //type: string

}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option : public Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class SeqNum; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum> > seq_num;
        
}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum : public Entity
{
    public:
        SeqNum();
        ~SeqNum();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf seq_num; //type: uint16
        class For_; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_> for_;
        
}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_ : public Entity
{
    public:
        For_();
        ~For_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Line; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line> > line;
        
}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line : public Entity
{
    public:
        Line();
        ~Line();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf acl_name; //type: string
        YLeaf encryption_type; //type: uint8
        YLeaf line; //type: string
        class KeyChain; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line::KeyChain

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line::KeyChain> key_chain; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line::KeyChain : public Entity
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

        YLeaf line; //type: string

}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line::KeyChain


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required : public Entity
{
    public:
        Required();
        ~Required();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf for_; //type: string

}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover : public Entity
{
    public:
        Rollover();
        ~Rollover();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf duration; //type: uint16

}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover


class Native::Mpls::Ldp::Session : public Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Protection; //type: Native::Mpls::Ldp::Session::Protection

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Session::Protection> protection; // presence node
        
}; // Native::Mpls::Ldp::Session


class Native::Mpls::Ldp::Session::Protection : public Entity
{
    public:
        Protection();
        ~Protection();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Duration; //type: Native::Mpls::Ldp::Session::Protection::Duration
        class For_; //type: Native::Mpls::Ldp::Session::Protection::For_
        class Vrf; //type: Native::Mpls::Ldp::Session::Protection::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Session::Protection::Duration> duration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Session::Protection::For_> for_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Session::Protection::Vrf> vrf;
        
}; // Native::Mpls::Ldp::Session::Protection


class Native::Mpls::Ldp::Session::Protection::Duration : public Entity
{
    public:
        Duration();
        ~Duration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf holdup_time; //type: uint32
        YLeaf infinite; //type: empty

}; // Native::Mpls::Ldp::Session::Protection::Duration


class Native::Mpls::Ldp::Session::Protection::For_ : public Entity
{
    public:
        For_();
        ~For_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AclName; //type: Native::Mpls::Ldp::Session::Protection::For_::AclName

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Session::Protection::For_::AclName> > acl_name;
        
}; // Native::Mpls::Ldp::Session::Protection::For_


class Native::Mpls::Ldp::Session::Protection::For_::AclName : public Entity
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
        class Duration; //type: Native::Mpls::Ldp::Session::Protection::For_::AclName::Duration

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Session::Protection::For_::AclName::Duration> duration;
        
}; // Native::Mpls::Ldp::Session::Protection::For_::AclName


class Native::Mpls::Ldp::Session::Protection::For_::AclName::Duration : public Entity
{
    public:
        Duration();
        ~Duration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf holdup_time; //type: uint32
        YLeaf infinite; //type: empty

}; // Native::Mpls::Ldp::Session::Protection::For_::AclName::Duration


class Native::Mpls::Ldp::Session::Protection::Vrf : public Entity
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

        class Vrf_; //type: Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_> > vrf;
        
}; // Native::Mpls::Ldp::Session::Protection::Vrf


class Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_ : public Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf vrf_name; //type: string
        class For_; //type: Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_> for_;
        
}; // Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_


class Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_ : public Entity
{
    public:
        For_();
        ~For_();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AclName; //type: Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName> > acl_name;
        
}; // Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_


class Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName : public Entity
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
        class Duration; //type: Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName::Duration

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName::Duration> duration;
        
}; // Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName


class Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName::Duration : public Entity
{
    public:
        Duration();
        ~Duration();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf holdup_time; //type: uint32
        YLeaf infinite; //type: empty

}; // Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::AclName::Duration


class Native::Mpls::PrefixMap : public Entity
{
    public:
        PrefixMap();
        ~PrefixMap();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nr; //type: uint8
        YLeaf access_list; //type: uint8
        YLeaf cos_map; //type: uint8

}; // Native::Mpls::PrefixMap


class Native::Mpls::Static_ : public Entity
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

        class Binding; //type: Native::Mpls::Static_::Binding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Static_::Binding> binding;
        
}; // Native::Mpls::Static_


class Native::Mpls::Static_::Binding : public Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Ipv4; //type: Native::Mpls::Static_::Binding::Ipv4

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Static_::Binding::Ipv4> ipv4;
        
}; // Native::Mpls::Static_::Binding


class Native::Mpls::Static_::Binding::Ipv4 : public Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Global; //type: Native::Mpls::Static_::Binding::Ipv4::Global
        class Vrf; //type: Native::Mpls::Static_::Binding::Ipv4::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Static_::Binding::Ipv4::Global> > global;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Static_::Binding::Ipv4::Vrf> > vrf;
        
}; // Native::Mpls::Static_::Binding::Ipv4


class Native::Mpls::Static_::Binding::Ipv4::Global : public Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf address; //type: string
        YLeaf mask; //type: string
        YLeaf label; //type: uint32
        class Input; //type: Native::Mpls::Static_::Binding::Ipv4::Global::Input
        class Output; //type: Native::Mpls::Static_::Binding::Ipv4::Global::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Static_::Binding::Ipv4::Global::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Static_::Binding::Ipv4::Global::Output> output;
        
}; // Native::Mpls::Static_::Binding::Ipv4::Global


class Native::Mpls::Static_::Binding::Ipv4::Global::Input : public Entity
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

        YLeaf label; //type: uint32

}; // Native::Mpls::Static_::Binding::Ipv4::Global::Input


class Native::Mpls::Static_::Binding::Ipv4::Global::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dst_next_hop; //type: string
        YLeaf label; //type: one of uint32, enumeration
        class LabelEnum;

}; // Native::Mpls::Static_::Binding::Ipv4::Global::Output


class Native::Mpls::Static_::Binding::Ipv4::Vrf : public Entity
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
        YLeaf address; //type: string
        YLeaf mask; //type: string
        YLeaf label; //type: uint32
        class Input; //type: Native::Mpls::Static_::Binding::Ipv4::Vrf::Input
        class Output; //type: Native::Mpls::Static_::Binding::Ipv4::Vrf::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Static_::Binding::Ipv4::Vrf::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Static_::Binding::Ipv4::Vrf::Output> output;
        
}; // Native::Mpls::Static_::Binding::Ipv4::Vrf


class Native::Mpls::Static_::Binding::Ipv4::Vrf::Input : public Entity
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

        YLeaf label; //type: uint32

}; // Native::Mpls::Static_::Binding::Ipv4::Vrf::Input


class Native::Mpls::Static_::Binding::Ipv4::Vrf::Output : public Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf dst_next_hop; //type: string
        YLeaf label; //type: one of uint32, enumeration
        class LabelEnum;

}; // Native::Mpls::Static_::Binding::Ipv4::Vrf::Output


class Native::Mpls::TrafficEng : public Entity
{
    public:
        TrafficEng();
        ~TrafficEng();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf nsr; //type: empty
        YLeaf tunnels; //type: empty
        class AutoBw; //type: Native::Mpls::TrafficEng::AutoBw
        class AutoTunnel; //type: Native::Mpls::TrafficEng::AutoTunnel
        class DsTe; //type: Native::Mpls::TrafficEng::DsTe
        class FastReroute; //type: Native::Mpls::TrafficEng::FastReroute
        class LinkManagement; //type: Native::Mpls::TrafficEng::LinkManagement
        class Logging; //type: Native::Mpls::TrafficEng::Logging
        class Lsp; //type: Native::Mpls::TrafficEng::Lsp
        class PathOption; //type: Native::Mpls::TrafficEng::PathOption
        class PathSelection; //type: Native::Mpls::TrafficEng::PathSelection
        class Pcc; //type: Native::Mpls::TrafficEng::Pcc
        class Reoptimize; //type: Native::Mpls::TrafficEng::Reoptimize
        class Signalling; //type: Native::Mpls::TrafficEng::Signalling
        class Topology; //type: Native::Mpls::TrafficEng::Topology
        class Trace; //type: Native::Mpls::TrafficEng::Trace

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoBw> auto_bw;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel> auto_tunnel;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::DsTe> ds_te;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::FastReroute> fast_reroute;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::LinkManagement> link_management;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Logging> logging;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Lsp> lsp;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathOption> path_option;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::PathSelection> path_selection;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Pcc> pcc;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Reoptimize> reoptimize;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Signalling> signalling;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Topology> topology;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::Trace> trace;
        
}; // Native::Mpls::TrafficEng


class Native::Mpls::TrafficEng::AutoBw : public Entity
{
    public:
        AutoBw();
        ~AutoBw();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Timers; //type: Native::Mpls::TrafficEng::AutoBw::Timers

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoBw::Timers> timers; // presence node
        
}; // Native::Mpls::TrafficEng::AutoBw


class Native::Mpls::TrafficEng::AutoBw::Timers : public Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf frequency; //type: uint32

}; // Native::Mpls::TrafficEng::AutoBw::Timers


class Native::Mpls::TrafficEng::AutoTunnel : public Entity
{
    public:
        AutoTunnel();
        ~AutoTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Backup; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup
        class Mesh; //type: Native::Mpls::TrafficEng::AutoTunnel::Mesh
        class Primary; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup> backup; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Mesh> mesh; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary> primary;
        
}; // Native::Mpls::TrafficEng::AutoTunnel


class Native::Mpls::TrafficEng::AutoTunnel::Backup : public Entity
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

        YLeaf nhop_only; //type: empty
        class Config; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Config
        class Srlg; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg
        class Timers; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers
        class TunnelNum; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Config> config;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg> srlg;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers> timers;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum> tunnel_num;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Backup


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Config : public Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class Affinity; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity
        class UnnumberedInterface; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity> affinity;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface> unnumbered_interface;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Config


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity : public Entity
{
    public:
        Affinity();
        ~Affinity();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        class AffVal; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity::AffVal

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity::AffVal> > aff_val;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity::AffVal : public Entity
{
    public:
        AffVal();
        ~AffVal();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf aff_val; //type: string
        YLeaf mask; //type: string

}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::Affinity::AffVal


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface : public Entity
{
    public:
        UnnumberedInterface();
        ~UnnumberedInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> get_children() const override;

        YLeaf interface; //type: string
        YLeaf controller; //type: string
        YLeaf tunnel; //type: uint32
        YLeaf tunnel_tp; //type: uint16
        YLeaf vpn; //type: uint32
        YLeaf virtualportgroup; //type: uint8
        YLeaf vlan; //type: uint16
        YLeaf vasileft; //type: uint16
        YLeaf vasiright; //type: uint16

}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface

class Native::L3Vpn::Encapsulation::Ip::Mpls::MtuEnum : public Enum
{
    public:
        static const Enum::YLeaf max;

};

class Native::Mpls::Label::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf ldp;
        static const Enum::YLeaf tdp__COLON__;

};

class Native::Mpls::Ldp::Enable2::Atm::ControlModeEnum : public Enum
{
    public:
        static const Enum::YLeaf independent;
        static const Enum::YLeaf ordered;

};

class Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf ldp;
        static const Enum::YLeaf tdp;

};

class Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::ProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf ldp;
        static const Enum::YLeaf tdp;

};

class Native::Mpls::Static_::Binding::Ipv4::Global::Output::LabelEnum : public Enum
{
    public:
        static const Enum::YLeaf explicit_null;
        static const Enum::YLeaf implicit_null;

};

class Native::Mpls::Static_::Binding::Ipv4::Vrf::Output::LabelEnum : public Enum
{
    public:
        static const Enum::YLeaf explicit_null;
        static const Enum::YLeaf implicit_null;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_83_ */

