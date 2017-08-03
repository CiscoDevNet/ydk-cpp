#ifndef _CISCO_IOS_XE_NATIVE_86_
#define _CISCO_IOS_XE_NATIVE_86_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "Cisco_IOS_XE_native_0.hpp"
#include "Cisco_IOS_XE_native_85.hpp"

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {


class Native::Mpls::Atm : public ydk::Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable_headend_vc; //type: empty

}; // Native::Mpls::Atm


class Native::Mpls::Ip : public ydk::Entity
{
    public:
        Ip();
        ~Ip();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf default_route; //type: empty
        class Conf; //type: Native::Mpls::Ip::Conf
        class ConfArg; //type: Native::Mpls::Ip::ConfArg
        class TtlExpiration; //type: Native::Mpls::Ip::TtlExpiration

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ip::Conf> conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ip::ConfArg> conf_arg;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ip::TtlExpiration> ttl_expiration;
        
}; // Native::Mpls::Ip


class Native::Mpls::Ip::Conf : public ydk::Entity
{
    public:
        Conf();
        ~Conf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf propagate_ttl; //type: boolean

}; // Native::Mpls::Ip::Conf


class Native::Mpls::Ip::ConfArg : public ydk::Entity
{
    public:
        ConfArg();
        ~ConfArg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class PropagateTtl; //type: Native::Mpls::Ip::ConfArg::PropagateTtl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ip::ConfArg::PropagateTtl> propagate_ttl;
        
}; // Native::Mpls::Ip::ConfArg


class Native::Mpls::Ip::ConfArg::PropagateTtl : public ydk::Entity
{
    public:
        PropagateTtl();
        ~PropagateTtl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf forwarded; //type: boolean

}; // Native::Mpls::Ip::ConfArg::PropagateTtl


class Native::Mpls::Ip::TtlExpiration : public ydk::Entity
{
    public:
        TtlExpiration();
        ~TtlExpiration();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pop; //type: uint8

}; // Native::Mpls::Ip::TtlExpiration


class Native::Mpls::Label : public ydk::Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: Protocol
        class Atm; //type: Native::Mpls::Label::Atm
        class Mode; //type: Native::Mpls::Label::Mode
        class Range; //type: Native::Mpls::Label::Range

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Atm> atm;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Mode> mode;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Range> range;
                class Protocol;

}; // Native::Mpls::Label


class Native::Mpls::Label::Atm : public ydk::Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf disable_headend_vc; //type: empty

}; // Native::Mpls::Label::Atm


class Native::Mpls::Label::Mode : public ydk::Entity
{
    public:
        Mode();
        ~Mode();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AllVrfs; //type: Native::Mpls::Label::Mode::AllVrfs
        class Vrf; //type: Native::Mpls::Label::Mode::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Mode::AllVrfs> all_vrfs;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Mode::Vrf> vrf;
        
}; // Native::Mpls::Label::Mode


class Native::Mpls::Label::Mode::AllVrfs : public ydk::Entity
{
    public:
        AllVrfs();
        ~AllVrfs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Protocol; //type: Native::Mpls::Label::Mode::AllVrfs::Protocol

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Mode::AllVrfs::Protocol> protocol;
        
}; // Native::Mpls::Label::Mode::AllVrfs


class Native::Mpls::Label::Mode::AllVrfs::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AllAfs; //type: Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs
        class BgpVpnv4; //type: Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4
        class BgpVpnv6; //type: Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs> all_afs;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4> bgp_vpnv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6> bgp_vpnv6;
        
}; // Native::Mpls::Label::Mode::AllVrfs::Protocol


class Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs : public ydk::Entity
{
    public:
        AllAfs();
        ~AllAfs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf per_ce; //type: empty
        ydk::YLeaf per_prefix; //type: empty
        ydk::YLeaf per_vrf; //type: empty
        ydk::YLeaf vrf_conn_aggr; //type: empty

}; // Native::Mpls::Label::Mode::AllVrfs::Protocol::AllAfs


class Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4 : public ydk::Entity
{
    public:
        BgpVpnv4();
        ~BgpVpnv4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf per_ce; //type: empty
        ydk::YLeaf per_prefix; //type: empty
        ydk::YLeaf per_vrf; //type: empty
        ydk::YLeaf vrf_conn_aggr; //type: empty

}; // Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv4


class Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6 : public ydk::Entity
{
    public:
        BgpVpnv6();
        ~BgpVpnv6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf per_ce; //type: empty
        ydk::YLeaf per_prefix; //type: empty
        ydk::YLeaf per_vrf; //type: empty
        ydk::YLeaf vrf_conn_aggr; //type: empty

}; // Native::Mpls::Label::Mode::AllVrfs::Protocol::BgpVpnv6


class Native::Mpls::Label::Mode::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf_; //type: Native::Mpls::Label::Mode::Vrf::Vrf_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Mode::Vrf::Vrf_> > vrf;
        
}; // Native::Mpls::Label::Mode::Vrf


class Native::Mpls::Label::Mode::Vrf::Vrf_ : public ydk::Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class Protocol; //type: Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol> protocol;
        
}; // Native::Mpls::Label::Mode::Vrf::Vrf_


class Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol : public ydk::Entity
{
    public:
        Protocol();
        ~Protocol();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AllAfs; //type: Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs
        class BgpVpnv4; //type: Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4
        class BgpVpnv6; //type: Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs> all_afs;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4> bgp_vpnv4;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6> bgp_vpnv6;
        
}; // Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol


class Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs : public ydk::Entity
{
    public:
        AllAfs();
        ~AllAfs();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf per_ce; //type: empty
        ydk::YLeaf per_prefix; //type: empty
        ydk::YLeaf per_vrf; //type: empty
        ydk::YLeaf vrf_conn_aggr; //type: empty

}; // Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::AllAfs


class Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4 : public ydk::Entity
{
    public:
        BgpVpnv4();
        ~BgpVpnv4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf per_ce; //type: empty
        ydk::YLeaf per_prefix; //type: empty
        ydk::YLeaf per_vrf; //type: empty
        ydk::YLeaf vrf_conn_aggr; //type: empty

}; // Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv4


class Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6 : public ydk::Entity
{
    public:
        BgpVpnv6();
        ~BgpVpnv6();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf per_ce; //type: empty
        ydk::YLeaf per_prefix; //type: empty
        ydk::YLeaf per_vrf; //type: empty
        ydk::YLeaf vrf_conn_aggr; //type: empty

}; // Native::Mpls::Label::Mode::Vrf::Vrf_::Protocol::BgpVpnv6


class Native::Mpls::Label::Range : public ydk::Entity
{
    public:
        Range();
        ~Range();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf max; //type: uint32
        class Static_; //type: Native::Mpls::Label::Range::Static_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Label::Range::Static_> static_;
        
}; // Native::Mpls::Label::Range


class Native::Mpls::Label::Range::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint32
        ydk::YLeaf max; //type: uint32

}; // Native::Mpls::Label::Range::Static_


class Native::Mpls::Ldp : public ydk::Entity
{
    public:
        Ldp();
        ~Ldp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Enable; //type: Native::Mpls::Ldp::Enable
        class Enable2; //type: Native::Mpls::Ldp::Enable2
        class Session; //type: Native::Mpls::Ldp::Session

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable> enable;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2> enable2;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Session> session;
        
}; // Native::Mpls::Ldp


class Native::Mpls::Ldp::Enable : public ydk::Entity
{
    public:
        Enable();
        ~Enable();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf advertise_labels; //type: boolean

}; // Native::Mpls::Ldp::Enable


class Native::Mpls::Ldp::Enable2 : public ydk::Entity
{
    public:
        Enable2();
        ~Enable2();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entropy_label; //type: empty
        ydk::YLeaf holdtime; //type: uint32
        ydk::YLeaf loop_detection; //type: empty
        ydk::YLeaf maxhops; //type: uint8
        ydk::YLeaf nsr; //type: empty
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


class Native::Mpls::Ldp::Enable2::AdvertiseLabels : public ydk::Entity
{
    public:
        AdvertiseLabels();
        ~AdvertiseLabels();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf oldstyle; //type: empty
        class For_; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_
        class Interface; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface
        class Vrf; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_> for_;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface> > interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf> vrf;
        
}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_ : public ydk::Entity
{
    public:
        For_();
        ~For_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf from; //type: string
        ydk::YLeaf to; //type: string

}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::For_


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string

}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::Interface


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf_; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_> > vrf;
        
}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_ : public ydk::Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf oldstyle; //type: empty
        class For_; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_
        class Interface; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_> for_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface> interface;
        
}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_ : public ydk::Entity
{
    public:
        For_();
        ~For_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf from; //type: string
        ydk::YLeaf to; //type: string

}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::For_


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class AtmSubinterface; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmSubinterface : public ydk::Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmSubinterface


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmAcrsubinterface : public ydk::Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::AtmAcrsubinterface


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LispSubinterface : public ydk::Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::LispSubinterface


class Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Mpls::Ldp::Enable2::AdvertiseLabels::Vrf::Vrf_::Interface::PortChannelSubinterface


class Native::Mpls::Ldp::Enable2::Atm : public ydk::Entity
{
    public:
        Atm();
        ~Atm();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf control_mode; //type: ControlMode
        ydk::YLeaf vc_merge; //type: boolean
        class ControlMode;

}; // Native::Mpls::Ldp::Enable2::Atm


class Native::Mpls::Ldp::Enable2::Backoff : public ydk::Entity
{
    public:
        Backoff();
        ~Backoff();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf initial; //type: uint32
        ydk::YLeaf max; //type: uint32

}; // Native::Mpls::Ldp::Enable2::Backoff


class Native::Mpls::Ldp::Enable2::Discovery : public ydk::Entity
{
    public:
        Discovery();
        ~Discovery();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Hello; //type: Native::Mpls::Ldp::Enable2::Discovery::Hello
        class TargetedHello; //type: Native::Mpls::Ldp::Enable2::Discovery::TargetedHello

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Discovery::Hello> hello;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Discovery::TargetedHello> targeted_hello;
        
}; // Native::Mpls::Ldp::Enable2::Discovery


class Native::Mpls::Ldp::Enable2::Discovery::Hello : public ydk::Entity
{
    public:
        Hello();
        ~Hello();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf holdtime; //type: uint16
        ydk::YLeaf interval; //type: uint16

}; // Native::Mpls::Ldp::Enable2::Discovery::Hello


class Native::Mpls::Ldp::Enable2::Discovery::TargetedHello : public ydk::Entity
{
    public:
        TargetedHello();
        ~TargetedHello();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf holdtime; //type: uint16
        ydk::YLeaf interval; //type: uint16
        class Accept; //type: Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept> accept; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Discovery::TargetedHello


class Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept : public ydk::Entity
{
    public:
        Accept();
        ~Accept();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf from; //type: string

}; // Native::Mpls::Ldp::Enable2::Discovery::TargetedHello::Accept


class Native::Mpls::Ldp::Enable2::ExplicitNull : public ydk::Entity
{
    public:
        ExplicitNull();
        ~ExplicitNull();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf for_; //type: string
        ydk::YLeaf to; //type: string

}; // Native::Mpls::Ldp::Enable2::ExplicitNull


class Native::Mpls::Ldp::Enable2::GracefulRestart : public ydk::Entity
{
    public:
        GracefulRestart();
        ~GracefulRestart();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Timers; //type: Native::Mpls::Ldp::Enable2::GracefulRestart::Timers

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::GracefulRestart::Timers> timers;
        
}; // Native::Mpls::Ldp::Enable2::GracefulRestart


class Native::Mpls::Ldp::Enable2::GracefulRestart::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf forwarding_holding; //type: uint16
        ydk::YLeaf max_recovery; //type: uint16
        ydk::YLeaf neighbor_liveness; //type: uint16

}; // Native::Mpls::Ldp::Enable2::GracefulRestart::Timers


class Native::Mpls::Ldp::Enable2::Igp : public ydk::Entity
{
    public:
        Igp();
        ~Igp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Sync; //type: Native::Mpls::Ldp::Enable2::Igp::Sync

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Igp::Sync> sync;
        
}; // Native::Mpls::Ldp::Enable2::Igp


class Native::Mpls::Ldp::Enable2::Igp::Sync : public ydk::Entity
{
    public:
        Sync();
        ~Sync();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf holddown; //type: uint32

}; // Native::Mpls::Ldp::Enable2::Igp::Sync


class Native::Mpls::Ldp::Enable2::Label : public ydk::Entity
{
    public:
        Label();
        ~Label();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class LabelMode__ConfigLdpLbl; //type: Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl> label_mode__config_ldp_lbl;
        
}; // Native::Mpls::Ldp::Enable2::Label


class Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl : public ydk::Entity
{
    public:
        LabelMode__ConfigLdpLbl();
        ~LabelMode__ConfigLdpLbl();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Allocate; //type: Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate> allocate;
        
}; // Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl


class Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate : public ydk::Entity
{
    public:
        Allocate();
        ~Allocate();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Global; //type: Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate::Global

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate::Global> global; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate


class Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf host_routes; //type: empty
        ydk::YLeaf prefix_list; //type: string

}; // Native::Mpls::Ldp::Enable2::Label::LabelMode__ConfigLdpLbl::Allocate::Global


class Native::Mpls::Ldp::Enable2::Logging : public ydk::Entity
{
    public:
        Logging();
        ~Logging();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf neighbor_changes; //type: boolean
        class Password; //type: Native::Mpls::Ldp::Enable2::Logging::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Logging::Password> password;
        
}; // Native::Mpls::Ldp::Enable2::Logging


class Native::Mpls::Ldp::Enable2::Logging::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class ConfigurationConf; //type: Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf
        class RolloverConf; //type: Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf
        class Configuration; //type: Native::Mpls::Ldp::Enable2::Logging::Password::Configuration
        class Rollover; //type: Native::Mpls::Ldp::Enable2::Logging::Password::Rollover

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Logging::Password::Configuration> configuration; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf> configuration_conf;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Logging::Password::Rollover> rollover; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf> rollover_conf;
        
}; // Native::Mpls::Ldp::Enable2::Logging::Password


class Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf : public ydk::Entity
{
    public:
        ConfigurationConf();
        ~ConfigurationConf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf configuration; //type: boolean

}; // Native::Mpls::Ldp::Enable2::Logging::Password::ConfigurationConf


class Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf : public ydk::Entity
{
    public:
        RolloverConf();
        ~RolloverConf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rollover; //type: boolean

}; // Native::Mpls::Ldp::Enable2::Logging::Password::RolloverConf


class Native::Mpls::Ldp::Enable2::Logging::Password::Configuration : public ydk::Entity
{
    public:
        Configuration();
        ~Configuration();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rate_limit; //type: uint8

}; // Native::Mpls::Ldp::Enable2::Logging::Password::Configuration


class Native::Mpls::Ldp::Enable2::Logging::Password::Rollover : public ydk::Entity
{
    public:
        Rollover();
        ~Rollover();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf rate_limit; //type: uint8

}; // Native::Mpls::Ldp::Enable2::Logging::Password::Rollover


class Native::Mpls::Ldp::Enable2::Neighbor : public ydk::Entity
{
    public:
        Neighbor();
        ~Neighbor();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class NeighborContent; //type: Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent
        class Vrf; //type: Native::Mpls::Ldp::Enable2::Neighbor::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent> > neighbor_content;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::Vrf> vrf;
        
}; // Native::Mpls::Ldp::Enable2::Neighbor


class Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent : public ydk::Entity
{
    public:
        NeighborContent();
        ~NeighborContent();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf implicit_withdraw; //type: empty
        class Labels; //type: Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels
        class Password; //type: Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password
        class Targeted; //type: Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels> labels;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password> password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted> targeted; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent


class Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels : public ydk::Entity
{
    public:
        Labels();
        ~Labels();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accept; //type: string

}; // Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Labels


class Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enctype; //type: uint8
        ydk::YLeaf text; //type: string

}; // Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Password


class Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted : public ydk::Entity
{
    public:
        Targeted();
        ~Targeted();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: Protocol
        class Protocol;

}; // Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted


class Native::Mpls::Ldp::Enable2::Neighbor::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf_; //type: Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_> > vrf;
        
}; // Native::Mpls::Ldp::Enable2::Neighbor::Vrf


class Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_ : public ydk::Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class NeighborContent; //type: Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent> > neighbor_content;
        
}; // Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_


class Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent : public ydk::Entity
{
    public:
        NeighborContent();
        ~NeighborContent();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf implicit_withdraw; //type: empty
        class Labels; //type: Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels
        class Password; //type: Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password
        class Targeted; //type: Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels> labels;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password> password;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted> targeted; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent


class Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels : public ydk::Entity
{
    public:
        Labels();
        ~Labels();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf accept; //type: string

}; // Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Labels


class Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enctype; //type: uint8
        ydk::YLeaf text; //type: string

}; // Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Password


class Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted : public ydk::Entity
{
    public:
        Targeted();
        ~Targeted();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf protocol; //type: Protocol
        class Protocol;

}; // Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted


class Native::Mpls::Ldp::Enable2::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Fallback; //type: Native::Mpls::Ldp::Enable2::Password::Fallback
        class Option; //type: Native::Mpls::Ldp::Enable2::Password::Option
        class Required; //type: Native::Mpls::Ldp::Enable2::Password::Required
        class Rollover; //type: Native::Mpls::Ldp::Enable2::Password::Rollover

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Fallback> fallback;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Option> option;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Required> required; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Rollover> rollover;
        
}; // Native::Mpls::Ldp::Enable2::Password


class Native::Mpls::Ldp::Enable2::Password::Fallback : public ydk::Entity
{
    public:
        Fallback();
        ~Fallback();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption_type; //type: uint8
        ydk::YLeaf line; //type: string
        class KeyChain; //type: Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain> key_chain; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Password::Fallback


class Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain : public ydk::Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line; //type: string

}; // Native::Mpls::Ldp::Enable2::Password::Fallback::KeyChain


class Native::Mpls::Ldp::Enable2::Password::Option : public ydk::Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SeqNum; //type: Native::Mpls::Ldp::Enable2::Password::Option::SeqNum

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Option::SeqNum> > seq_num;
        
}; // Native::Mpls::Ldp::Enable2::Password::Option


class Native::Mpls::Ldp::Enable2::Password::Option::SeqNum : public ydk::Entity
{
    public:
        SeqNum();
        ~SeqNum();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seq_num; //type: uint16
        class For_; //type: Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_> for_;
        
}; // Native::Mpls::Ldp::Enable2::Password::Option::SeqNum


class Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_ : public ydk::Entity
{
    public:
        For_();
        ~For_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Line; //type: Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line> > line;
        
}; // Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_


class Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line : public ydk::Entity
{
    public:
        Line();
        ~Line();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_name; //type: string
        ydk::YLeaf encryption_type; //type: uint8
        ydk::YLeaf line; //type: string
        class KeyChain; //type: Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line::KeyChain

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line::KeyChain> key_chain; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line


class Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line::KeyChain : public ydk::Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line; //type: string

}; // Native::Mpls::Ldp::Enable2::Password::Option::SeqNum::For_::Line::KeyChain


class Native::Mpls::Ldp::Enable2::Password::Required : public ydk::Entity
{
    public:
        Required();
        ~Required();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf for_; //type: string

}; // Native::Mpls::Ldp::Enable2::Password::Required


class Native::Mpls::Ldp::Enable2::Password::Rollover : public ydk::Entity
{
    public:
        Rollover();
        ~Rollover();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf duration; //type: uint16

}; // Native::Mpls::Ldp::Enable2::Password::Rollover


class Native::Mpls::Ldp::Enable2::RequestLabels : public ydk::Entity
{
    public:
        RequestLabels();
        ~RequestLabels();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf for_; //type: string

}; // Native::Mpls::Ldp::Enable2::RequestLabels


class Native::Mpls::Ldp::Enable2::RouterId : public ydk::Entity
{
    public:
        RouterId();
        ~RouterId();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Interface; //type: Native::Mpls::Ldp::Enable2::RouterId::Interface
        class Vrf; //type: Native::Mpls::Ldp::Enable2::RouterId::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Interface> interface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Vrf> vrf;
        
}; // Native::Mpls::Ldp::Enable2::RouterId


class Native::Mpls::Ldp::Enable2::RouterId::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        ydk::YLeaf force; //type: empty
        class AtmSubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Mpls::Ldp::Enable2::RouterId::Interface


class Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmSubinterface : public ydk::Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmSubinterface


class Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmAcrsubinterface : public ydk::Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Mpls::Ldp::Enable2::RouterId::Interface::AtmAcrsubinterface


class Native::Mpls::Ldp::Enable2::RouterId::Interface::LispSubinterface : public ydk::Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Mpls::Ldp::Enable2::RouterId::Interface::LispSubinterface


class Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Mpls::Ldp::Enable2::RouterId::Interface::PortChannelSubinterface


class Native::Mpls::Ldp::Enable2::RouterId::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf_; //type: Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_> > vrf;
        
}; // Native::Mpls::Ldp::Enable2::RouterId::Vrf


class Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_ : public ydk::Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class Interface; //type: Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface> interface;
        
}; // Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_


class Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface : public ydk::Entity
{
    public:
        Interface();
        ~Interface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        ydk::YLeaf force; //type: empty
        class AtmSubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface


class Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmSubinterface : public ydk::Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmSubinterface


class Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmAcrsubinterface : public ydk::Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::AtmAcrsubinterface


class Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::LispSubinterface : public ydk::Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::LispSubinterface


class Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Mpls::Ldp::Enable2::RouterId::Vrf::Vrf_::Interface::PortChannelSubinterface


class Native::Mpls::Ldp::Enable2::Tcp : public ydk::Entity
{
    public:
        Tcp();
        ~Tcp();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf pak_priority; //type: empty

}; // Native::Mpls::Ldp::Enable2::Tcp


class Native::Mpls::Ldp::Enable2::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf_; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_> > vrf;
        
}; // Native::Mpls::Ldp::Enable2::Vrf


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_ : public ydk::Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class Password; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password> password;
        
}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password : public ydk::Entity
{
    public:
        Password();
        ~Password();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Fallback; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback
        class Option; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option
        class Required; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required
        class Rollover; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback> fallback;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option> option;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required> required; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover> rollover;
        
}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback : public ydk::Entity
{
    public:
        Fallback();
        ~Fallback();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf encryption_type; //type: uint8
        ydk::YLeaf line; //type: string
        class KeyChain; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain> key_chain; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain : public ydk::Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line; //type: string

}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Fallback::KeyChain


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option : public ydk::Entity
{
    public:
        Option();
        ~Option();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class SeqNum; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum> > seq_num;
        
}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum : public ydk::Entity
{
    public:
        SeqNum();
        ~SeqNum();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf seq_num; //type: uint16
        class For_; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_> for_;
        
}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_ : public ydk::Entity
{
    public:
        For_();
        ~For_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Line; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line> > line;
        
}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line : public ydk::Entity
{
    public:
        Line();
        ~Line();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_name; //type: string
        ydk::YLeaf encryption_type; //type: uint8
        ydk::YLeaf line; //type: string
        class KeyChain; //type: Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line::KeyChain

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line::KeyChain> key_chain; // presence node
        
}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line::KeyChain : public ydk::Entity
{
    public:
        KeyChain();
        ~KeyChain();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf line; //type: string

}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Option::SeqNum::For_::Line::KeyChain


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required : public ydk::Entity
{
    public:
        Required();
        ~Required();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf for_; //type: string

}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Required


class Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover : public ydk::Entity
{
    public:
        Rollover();
        ~Rollover();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf duration; //type: uint16

}; // Native::Mpls::Ldp::Enable2::Vrf::Vrf_::Password::Rollover


class Native::Mpls::Ldp::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Protection; //type: Native::Mpls::Ldp::Session::Protection

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Session::Protection> protection; // presence node
        
}; // Native::Mpls::Ldp::Session


class Native::Mpls::Ldp::Session::Protection : public ydk::Entity
{
    public:
        Protection();
        ~Protection();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Duration; //type: Native::Mpls::Ldp::Session::Protection::Duration
        class For_; //type: Native::Mpls::Ldp::Session::Protection::For_
        class Vrf; //type: Native::Mpls::Ldp::Session::Protection::Vrf

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Session::Protection::Duration> duration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Session::Protection::For_> for_;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Session::Protection::Vrf> vrf;
        
}; // Native::Mpls::Ldp::Session::Protection


class Native::Mpls::Ldp::Session::Protection::Duration : public ydk::Entity
{
    public:
        Duration();
        ~Duration();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf holdup_time; //type: uint32
        ydk::YLeaf infinite; //type: empty

}; // Native::Mpls::Ldp::Session::Protection::Duration


class Native::Mpls::Ldp::Session::Protection::For_ : public ydk::Entity
{
    public:
        For_();
        ~For_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_name; //type: string
        class Duration; //type: Native::Mpls::Ldp::Session::Protection::For_::Duration

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Session::Protection::For_::Duration> duration;
        
}; // Native::Mpls::Ldp::Session::Protection::For_


class Native::Mpls::Ldp::Session::Protection::For_::Duration : public ydk::Entity
{
    public:
        Duration();
        ~Duration();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf holdup_time; //type: uint32
        ydk::YLeaf infinite; //type: empty

}; // Native::Mpls::Ldp::Session::Protection::For_::Duration


class Native::Mpls::Ldp::Session::Protection::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Vrf_; //type: Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_> > vrf;
        
}; // Native::Mpls::Ldp::Session::Protection::Vrf


class Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_ : public ydk::Entity
{
    public:
        Vrf_();
        ~Vrf_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        class For_; //type: Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_
        class Duration; //type: Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration> duration;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_> for_;
        
}; // Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_


class Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_ : public ydk::Entity
{
    public:
        For_();
        ~For_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf acl_name; //type: string
        class Duration; //type: Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::Duration

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::Duration> duration;
        
}; // Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_


class Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::Duration : public ydk::Entity
{
    public:
        Duration();
        ~Duration();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf holdup_time; //type: uint32
        ydk::YLeaf infinite; //type: empty

}; // Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::For_::Duration


class Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration : public ydk::Entity
{
    public:
        Duration();
        ~Duration();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf holdup_time; //type: uint32
        ydk::YLeaf infinite; //type: empty

}; // Native::Mpls::Ldp::Session::Protection::Vrf::Vrf_::Duration


class Native::Mpls::PrefixMap : public ydk::Entity
{
    public:
        PrefixMap();
        ~PrefixMap();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nr; //type: uint8
        ydk::YLeaf access_list; //type: uint8
        ydk::YLeaf cos_map; //type: uint8

}; // Native::Mpls::PrefixMap


class Native::Mpls::Static_ : public ydk::Entity
{
    public:
        Static_();
        ~Static_();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Binding; //type: Native::Mpls::Static_::Binding

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Static_::Binding> binding;
        
}; // Native::Mpls::Static_


class Native::Mpls::Static_::Binding : public ydk::Entity
{
    public:
        Binding();
        ~Binding();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4; //type: Native::Mpls::Static_::Binding::Ipv4

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Static_::Binding::Ipv4> ipv4;
        
}; // Native::Mpls::Static_::Binding


class Native::Mpls::Static_::Binding::Ipv4 : public ydk::Entity
{
    public:
        Ipv4();
        ~Ipv4();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Global; //type: Native::Mpls::Static_::Binding::Ipv4::Global
        class Vrf; //type: Native::Mpls::Static_::Binding::Ipv4::Vrf

        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Static_::Binding::Ipv4::Global> > global;
        std::vector<std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Static_::Binding::Ipv4::Vrf> > vrf;
        
}; // Native::Mpls::Static_::Binding::Ipv4


class Native::Mpls::Static_::Binding::Ipv4::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf label; //type: uint32
        class Input; //type: Native::Mpls::Static_::Binding::Ipv4::Global::Input
        class Output; //type: Native::Mpls::Static_::Binding::Ipv4::Global::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Static_::Binding::Ipv4::Global::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Static_::Binding::Ipv4::Global::Output> output;
        
}; // Native::Mpls::Static_::Binding::Ipv4::Global


class Native::Mpls::Static_::Binding::Ipv4::Global::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label; //type: uint32

}; // Native::Mpls::Static_::Binding::Ipv4::Global::Input


class Native::Mpls::Static_::Binding::Ipv4::Global::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dst_next_hop; //type: string
        ydk::YLeaf label; //type: one of uint32, enumeration
        class Label;

}; // Native::Mpls::Static_::Binding::Ipv4::Global::Output


class Native::Mpls::Static_::Binding::Ipv4::Vrf : public ydk::Entity
{
    public:
        Vrf();
        ~Vrf();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        ydk::YLeaf address; //type: string
        ydk::YLeaf mask; //type: string
        ydk::YLeaf label; //type: uint32
        class Input; //type: Native::Mpls::Static_::Binding::Ipv4::Vrf::Input
        class Output; //type: Native::Mpls::Static_::Binding::Ipv4::Vrf::Output

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Static_::Binding::Ipv4::Vrf::Input> input;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::Static_::Binding::Ipv4::Vrf::Output> output;
        
}; // Native::Mpls::Static_::Binding::Ipv4::Vrf


class Native::Mpls::Static_::Binding::Ipv4::Vrf::Input : public ydk::Entity
{
    public:
        Input();
        ~Input();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf label; //type: uint32

}; // Native::Mpls::Static_::Binding::Ipv4::Vrf::Input


class Native::Mpls::Static_::Binding::Ipv4::Vrf::Output : public ydk::Entity
{
    public:
        Output();
        ~Output();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf dst_next_hop; //type: string
        ydk::YLeaf label; //type: one of uint32, enumeration
        class Label;

}; // Native::Mpls::Static_::Binding::Ipv4::Vrf::Output


class Native::Mpls::TrafficEng : public ydk::Entity
{
    public:
        TrafficEng();
        ~TrafficEng();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf fault_oam; //type: empty
        ydk::YLeaf nsr; //type: empty
        ydk::YLeaf tunnels; //type: empty
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


class Native::Mpls::TrafficEng::AutoBw : public ydk::Entity
{
    public:
        AutoBw();
        ~AutoBw();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Timers; //type: Native::Mpls::TrafficEng::AutoBw::Timers

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoBw::Timers> timers; // presence node
        
}; // Native::Mpls::TrafficEng::AutoBw


class Native::Mpls::TrafficEng::AutoBw::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf frequency; //type: uint32

}; // Native::Mpls::TrafficEng::AutoBw::Timers


class Native::Mpls::TrafficEng::AutoTunnel : public ydk::Entity
{
    public:
        AutoTunnel();
        ~AutoTunnel();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Backup; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup
        class Mesh; //type: Native::Mpls::TrafficEng::AutoTunnel::Mesh
        class P2P; //type: Native::Mpls::TrafficEng::AutoTunnel::P2P
        class Primary; //type: Native::Mpls::TrafficEng::AutoTunnel::Primary

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup> backup; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Mesh> mesh; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::P2P> p2p; // presence node
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Primary> primary;
        
}; // Native::Mpls::TrafficEng::AutoTunnel


class Native::Mpls::TrafficEng::AutoTunnel::Backup : public ydk::Entity
{
    public:
        Backup();
        ~Backup();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nhop_only; //type: empty
        class Config; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Config
        class Srlg; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg
        class Timers; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers
        class TunnelNum; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Config> config;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg> srlg;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers> timers;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum> tunnel_num;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Backup


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class AffinityMask; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask
        class UnnumberedInterface; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask> affinity_mask;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface> unnumbered_interface;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Config


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask : public ydk::Entity
{
    public:
        AffinityMask();
        ~AffinityMask();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf affinity; //type: string
        ydk::YLeaf mask; //type: string

}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::AffinityMask


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface : public ydk::Entity
{
    public:
        UnnumberedInterface();
        ~UnnumberedInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class AtmSubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::AtmSubinterface : public ydk::Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::AtmSubinterface


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::AtmAcrsubinterface : public ydk::Entity
{
    public:
        AtmAcrsubinterface();
        ~AtmAcrsubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm_acr; //type: string

}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::AtmAcrsubinterface


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LispSubinterface : public ydk::Entity
{
    public:
        LispSubinterface();
        ~LispSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lisp; //type: string

}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::LispSubinterface


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface : public ydk::Entity
{
    public:
        PortChannelSubinterface();
        ~PortChannelSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf port_channel; //type: string

}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Config::UnnumberedInterface::PortChannelSubinterface


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg : public ydk::Entity
{
    public:
        Srlg();
        ~Srlg();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf exclude; //type: Exclude
        class Exclude;

}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers : public ydk::Entity
{
    public:
        Timers();
        ~Timers();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Removal; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal> removal;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal : public ydk::Entity
{
    public:
        Removal();
        ~Removal();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Unused; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused> unused;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal


class Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused : public ydk::Entity
{
    public:
        Unused();
        ~Unused();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf duration; //type: uint32

}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::Timers::Removal::Unused


class Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum : public ydk::Entity
{
    public:
        TunnelNum();
        ~TunnelNum();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MinMax; //type: Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax> min_max;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum


class Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax : public ydk::Entity
{
    public:
        MinMax();
        ~MinMax();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // Native::Mpls::TrafficEng::AutoTunnel::Backup::TunnelNum::MinMax


class Native::Mpls::TrafficEng::AutoTunnel::Mesh : public ydk::Entity
{
    public:
        Mesh();
        ~Mesh();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class TunnelNum; //type: Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum> tunnel_num;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Mesh


class Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum : public ydk::Entity
{
    public:
        TunnelNum();
        ~TunnelNum();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MinMax; //type: Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax> min_max;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum


class Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax : public ydk::Entity
{
    public:
        MinMax();
        ~MinMax();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf min; //type: uint16
        ydk::YLeaf max; //type: uint16

}; // Native::Mpls::TrafficEng::AutoTunnel::Mesh::TunnelNum::MinMax


class Native::Mpls::TrafficEng::AutoTunnel::P2P : public ydk::Entity
{
    public:
        P2P();
        ~P2P();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Config; //type: Native::Mpls::TrafficEng::AutoTunnel::P2P::Config
        class TunnelNum; //type: Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::P2P::Config> config;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::P2P::TunnelNum> tunnel_num;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::P2P


class Native::Mpls::TrafficEng::AutoTunnel::P2P::Config : public ydk::Entity
{
    public:
        Config();
        ~Config();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class UnnumberedInterface; //type: Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface> unnumbered_interface;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::P2P::Config


class Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface : public ydk::Entity
{
    public:
        UnnumberedInterface();
        ~UnnumberedInterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf appnav_compress; //type: uint16
        ydk::YLeaf appnav_uncompress; //type: uint16
        ydk::YLeaf atm; //type: string
        ydk::YLeaf atm_acr; //type: string
        ydk::YLeaf bdi; //type: string
        ydk::YLeaf cem; //type: string
        ydk::YLeaf cem_acr; //type: uint8
        ydk::YLeaf embedded_service_engine; //type: string
        ydk::YLeaf fastethernet; //type: string
        ydk::YLeaf gigabitethernet; //type: string
        ydk::YLeaf lisp; //type: string
        ydk::YLeaf loopback; //type: uint32
        ydk::YLeaf multilink; //type: uint16
        ydk::YLeaf nve; //type: uint16
        ydk::YLeaf overlay; //type: uint16
        ydk::YLeaf port_channel; //type: uint32
        ydk::YLeaf pseudowire; //type: uint32
        ydk::YLeaf sm; //type: string
        ydk::YLeaf cellular; //type: string
        ydk::YLeaf serial; //type: string
        ydk::YLeaf tengigabitethernet; //type: string
        ydk::YLeaf tunnel; //type: uint32
        ydk::YLeaf virtual_template; //type: uint16
        ydk::YLeaf vlan; //type: uint16
        ydk::YLeaf virtualportgroup; //type: uint16
        ydk::YLeaf vasileft; //type: uint16
        ydk::YLeaf vasiright; //type: uint16
        class AtmSubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::AtmSubinterface
        class AtmAcrsubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::AtmAcrsubinterface
        class LispSubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LispSubinterface
        class PortChannelSubinterface; //type: Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface

        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::AtmAcrsubinterface> atm_acrsubinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::AtmSubinterface> atm_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::LispSubinterface> lisp_subinterface;
        std::shared_ptr<Cisco_IOS_XE_native::Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::PortChannelSubinterface> port_channel_subinterface;
        
}; // Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface


class Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::AtmSubinterface : public ydk::Entity
{
    public:
        AtmSubinterface();
        ~AtmSubinterface();

        bool has_data() const override;
        bool has_operation() const override;
        const ydk::EntityPath get_entity_path(ydk::Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf atm; //type: string

}; // Native::Mpls::TrafficEng::AutoTunnel::P2P::Config::UnnumberedInterface::AtmSubinterface

class Native::Mpls::Label::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldp;
        static const ydk::Enum::YLeaf tdp;

};

class Native::Mpls::Ldp::Enable2::Atm::ControlMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf independent;
        static const ydk::Enum::YLeaf ordered;

};

class Native::Mpls::Ldp::Enable2::Neighbor::NeighborContent::Targeted::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldp;
        static const ydk::Enum::YLeaf tdp;

};

class Native::Mpls::Ldp::Enable2::Neighbor::Vrf::Vrf_::NeighborContent::Targeted::Protocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ldp;
        static const ydk::Enum::YLeaf tdp;

};

class Native::Mpls::Static_::Binding::Ipv4::Global::Output::Label : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf explicit_null;
        static const ydk::Enum::YLeaf implicit_null;

};

class Native::Mpls::Static_::Binding::Ipv4::Vrf::Output::Label : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf explicit_null;
        static const ydk::Enum::YLeaf implicit_null;

};

class Native::Mpls::TrafficEng::AutoTunnel::Backup::Srlg::Exclude : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf force;
        static const ydk::Enum::YLeaf preferred;

};


}
}

#endif /* _CISCO_IOS_XE_NATIVE_86_ */

