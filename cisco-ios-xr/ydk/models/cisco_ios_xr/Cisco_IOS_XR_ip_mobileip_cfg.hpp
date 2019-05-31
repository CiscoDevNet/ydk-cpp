#ifndef _CISCO_IOS_XR_IP_MOBILEIP_CFG_
#define _CISCO_IOS_XR_IP_MOBILEIP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_mobileip_cfg {

class MobileIp : public ydk::Entity
{
    public:
        MobileIp();
        ~MobileIp();

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

        class Domains; //type: MobileIp::Domains
        class Lmas; //type: MobileIp::Lmas

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Domains> domains;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas> lmas;
        
}; // MobileIp


class MobileIp::Domains : public ydk::Entity
{
    public:
        Domains();
        ~Domains();

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

        class Domain; //type: MobileIp::Domains::Domain

        ydk::YList domain;
        
}; // MobileIp::Domains


class MobileIp::Domains::Domain : public ydk::Entity
{
    public:
        Domain();
        ~Domain();

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

        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf enable; //type: empty
        class Mags; //type: MobileIp::Domains::Domain::Mags
        class Nais; //type: MobileIp::Domains::Domain::Nais
        class AuthenticateOption; //type: MobileIp::Domains::Domain::AuthenticateOption
        class Lmas; //type: MobileIp::Domains::Domain::Lmas

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Domains::Domain::Mags> mags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Domains::Domain::Nais> nais;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Domains::Domain::AuthenticateOption> authenticate_option;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Domains::Domain::Lmas> lmas;
        
}; // MobileIp::Domains::Domain


class MobileIp::Domains::Domain::Mags : public ydk::Entity
{
    public:
        Mags();
        ~Mags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mag; //type: MobileIp::Domains::Domain::Mags::Mag

        ydk::YList mag;
        
}; // MobileIp::Domains::Domain::Mags


class MobileIp::Domains::Domain::Mags::Mag : public ydk::Entity
{
    public:
        Mag();
        ~Mag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mag_name; //type: string

}; // MobileIp::Domains::Domain::Mags::Mag


class MobileIp::Domains::Domain::Nais : public ydk::Entity
{
    public:
        Nais();
        ~Nais();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Nai; //type: MobileIp::Domains::Domain::Nais::Nai

        ydk::YList nai;
        
}; // MobileIp::Domains::Domain::Nais


class MobileIp::Domains::Domain::Nais::Nai : public ydk::Entity
{
    public:
        Nai();
        ~Nai();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf nai_name; //type: string
        ydk::YLeaf lma; //type: string
        ydk::YLeaf apn; //type: string
        ydk::YLeaf customer; //type: string
        ydk::YLeaf service; //type: ServiceType
        ydk::YLeaf network; //type: string

}; // MobileIp::Domains::Domain::Nais::Nai


class MobileIp::Domains::Domain::AuthenticateOption : public ydk::Entity
{
    public:
        AuthenticateOption();
        ~AuthenticateOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf spi; //type: string
        ydk::YLeaf key; //type: string

}; // MobileIp::Domains::Domain::AuthenticateOption


class MobileIp::Domains::Domain::Lmas : public ydk::Entity
{
    public:
        Lmas();
        ~Lmas();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lma; //type: MobileIp::Domains::Domain::Lmas::Lma

        ydk::YList lma;
        
}; // MobileIp::Domains::Domain::Lmas


class MobileIp::Domains::Domain::Lmas::Lma : public ydk::Entity
{
    public:
        Lma();
        ~Lma();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lma_name; //type: string

}; // MobileIp::Domains::Domain::Lmas::Lma


class MobileIp::Lmas : public ydk::Entity
{
    public:
        Lmas();
        ~Lmas();

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

        class Lma; //type: MobileIp::Lmas::Lma

        ydk::YList lma;
        
}; // MobileIp::Lmas


class MobileIp::Lmas::Lma : public ydk::Entity
{
    public:
        Lma();
        ~Lma();

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

        ydk::YLeaf lma_name; //type: string
        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf generate; //type: empty
        ydk::YLeaf mobile_route_ad; //type: uint32
        ydk::YLeaf ani; //type: empty
        ydk::YLeaf multipath; //type: empty
        ydk::YLeaf dynamic; //type: empty
        ydk::YLeaf enforce; //type: empty
        ydk::YLeaf default_profile; //type: string
        ydk::YLeaf interface; //type: string
        ydk::YLeaf mobile_map; //type: string
        ydk::YLeaf pgw_subs_cont; //type: empty
        class BindingRevocationAttributes; //type: MobileIp::Lmas::Lma::BindingRevocationAttributes
        class RatAttributes; //type: MobileIp::Lmas::Lma::RatAttributes
        class HeartBeatAttributes; //type: MobileIp::Lmas::Lma::HeartBeatAttributes
        class Lmaipv6Addresses; //type: MobileIp::Lmas::Lma::Lmaipv6Addresses
        class Hnp; //type: MobileIp::Lmas::Lma::Hnp
        class Redistribute; //type: MobileIp::Lmas::Lma::Redistribute
        class Aaa; //type: MobileIp::Lmas::Lma::Aaa
        class Dscp; //type: MobileIp::Lmas::Lma::Dscp
        class Lmaipv4Addresses; //type: MobileIp::Lmas::Lma::Lmaipv4Addresses
        class Roles; //type: MobileIp::Lmas::Lma::Roles
        class BindingAttributes; //type: MobileIp::Lmas::Lma::BindingAttributes
        class Mags; //type: MobileIp::Lmas::Lma::Mags
        class TunnelAttributes; //type: MobileIp::Lmas::Lma::TunnelAttributes
        class Services; //type: MobileIp::Lmas::Lma::Services
        class Networks; //type: MobileIp::Lmas::Lma::Networks
        class ReplayProtection; //type: MobileIp::Lmas::Lma::ReplayProtection

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::BindingRevocationAttributes> binding_revocation_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::RatAttributes> rat_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::HeartBeatAttributes> heart_beat_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Lmaipv6Addresses> lmaipv6_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Hnp> hnp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Redistribute> redistribute;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Aaa> aaa;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Dscp> dscp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Lmaipv4Addresses> lmaipv4_addresses;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Roles> roles;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::BindingAttributes> binding_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Mags> mags;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::TunnelAttributes> tunnel_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services> services;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks> networks;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::ReplayProtection> replay_protection;
        
}; // MobileIp::Lmas::Lma


class MobileIp::Lmas::Lma::BindingRevocationAttributes : public ydk::Entity
{
    public:
        BindingRevocationAttributes();
        ~BindingRevocationAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf retry; //type: uint32
        class Delay; //type: MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay> delay;
        
}; // MobileIp::Lmas::Lma::BindingRevocationAttributes


class MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay : public ydk::Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf br_min; //type: uint32
        ydk::YLeaf br_max; //type: uint32

}; // MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay


class MobileIp::Lmas::Lma::RatAttributes : public ydk::Entity
{
    public:
        RatAttributes();
        ~RatAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lma_rat; //type: LmaRat
        ydk::YLeaf priority_value; //type: uint32

}; // MobileIp::Lmas::Lma::RatAttributes


class MobileIp::Lmas::Lma::HeartBeatAttributes : public ydk::Entity
{
    public:
        HeartBeatAttributes();
        ~HeartBeatAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf retries; //type: uint32
        ydk::YLeaf timeout; //type: uint32

}; // MobileIp::Lmas::Lma::HeartBeatAttributes


class MobileIp::Lmas::Lma::Lmaipv6Addresses : public ydk::Entity
{
    public:
        Lmaipv6Addresses();
        ~Lmaipv6Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lmaipv6Address; //type: MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address

        ydk::YList lmaipv6_address;
        
}; // MobileIp::Lmas::Lma::Lmaipv6Addresses


class MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address : public ydk::Entity
{
    public:
        Lmaipv6Address();
        ~Lmaipv6Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address


class MobileIp::Lmas::Lma::Hnp : public ydk::Entity
{
    public:
        Hnp();
        ~Hnp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf maximum; //type: uint32

}; // MobileIp::Lmas::Lma::Hnp


class MobileIp::Lmas::Lma::Redistribute : public ydk::Entity
{
    public:
        Redistribute();
        ~Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf redist_type; //type: RedistType
        ydk::YLeaf redist_sub_type; //type: RedistSubType

}; // MobileIp::Lmas::Lma::Redistribute


class MobileIp::Lmas::Lma::Aaa : public ydk::Entity
{
    public:
        Aaa();
        ~Aaa();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Accounting; //type: MobileIp::Lmas::Lma::Aaa::Accounting

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Aaa::Accounting> accounting;
        
}; // MobileIp::Lmas::Lma::Aaa


class MobileIp::Lmas::Lma::Aaa::Accounting : public ydk::Entity
{
    public:
        Accounting();
        ~Accounting();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf enable; //type: empty
        ydk::YLeaf interim_interval; //type: uint32

}; // MobileIp::Lmas::Lma::Aaa::Accounting


class MobileIp::Lmas::Lma::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf force; //type: empty

}; // MobileIp::Lmas::Lma::Dscp


class MobileIp::Lmas::Lma::Lmaipv4Addresses : public ydk::Entity
{
    public:
        Lmaipv4Addresses();
        ~Lmaipv4Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Lmaipv4Address; //type: MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address

        ydk::YList lmaipv4_address;
        
}; // MobileIp::Lmas::Lma::Lmaipv4Addresses


class MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address : public ydk::Entity
{
    public:
        Lmaipv4Address();
        ~Lmaipv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf address; //type: string

}; // MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address


class MobileIp::Lmas::Lma::Roles : public ydk::Entity
{
    public:
        Roles();
        ~Roles();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Role; //type: MobileIp::Lmas::Lma::Roles::Role

        ydk::YList role;
        
}; // MobileIp::Lmas::Lma::Roles


class MobileIp::Lmas::Lma::Roles::Role : public ydk::Entity
{
    public:
        Role();
        ~Role();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lma_role; //type: LmaRole

}; // MobileIp::Lmas::Lma::Roles::Role


class MobileIp::Lmas::Lma::BindingAttributes : public ydk::Entity
{
    public:
        BindingAttributes();
        ~BindingAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf refresh_time; //type: uint32
        ydk::YLeaf delete_wait_interval; //type: uint32
        ydk::YLeaf create_wait_interval; //type: uint32
        ydk::YLeaf max_life_time; //type: uint32
        ydk::YLeaf maximum; //type: uint32

}; // MobileIp::Lmas::Lma::BindingAttributes


class MobileIp::Lmas::Lma::Mags : public ydk::Entity
{
    public:
        Mags();
        ~Mags();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mag; //type: MobileIp::Lmas::Lma::Mags::Mag

        ydk::YList mag;
        
}; // MobileIp::Lmas::Lma::Mags


class MobileIp::Lmas::Lma::Mags::Mag : public ydk::Entity
{
    public:
        Mag();
        ~Mag();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mag_name; //type: string
        ydk::YLeaf domain_name; //type: string
        ydk::YLeaf encap_option; //type: EncapOpt
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string
        ydk::YLeaf tunnel; //type: string
        class AuthenticateOption; //type: MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption
        class Dscp; //type: MobileIp::Lmas::Lma::Mags::Mag::Dscp

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption> authenticate_option;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Mags::Mag::Dscp> dscp;
        
}; // MobileIp::Lmas::Lma::Mags::Mag


class MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption : public ydk::Entity
{
    public:
        AuthenticateOption();
        ~AuthenticateOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf spi; //type: string
        ydk::YLeaf key; //type: string

}; // MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption


class MobileIp::Lmas::Lma::Mags::Mag::Dscp : public ydk::Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf value_; //type: uint32
        ydk::YLeaf force; //type: empty

}; // MobileIp::Lmas::Lma::Mags::Mag::Dscp


class MobileIp::Lmas::Lma::TunnelAttributes : public ydk::Entity
{
    public:
        TunnelAttributes();
        ~TunnelAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf mtu; //type: uint32
        ydk::YLeaf acl; //type: string

}; // MobileIp::Lmas::Lma::TunnelAttributes


class MobileIp::Lmas::Lma::Services : public ydk::Entity
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

        class Service; //type: MobileIp::Lmas::Lma::Services::Service

        ydk::YList service;
        
}; // MobileIp::Lmas::Lma::Services


class MobileIp::Lmas::Lma::Services::Service : public ydk::Entity
{
    public:
        Service();
        ~Service();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lma_service; //type: LmaService
        ydk::YLeaf mnp_customer; //type: uint32
        ydk::YLeaf mnp_ipv4_lmn; //type: uint32
        ydk::YLeaf mnp_ipv6_lmn; //type: uint32
        ydk::YLeaf mnp_lmn; //type: uint32
        ydk::YLeaf ignore_home_address; //type: empty
        ydk::YLeaf mnp_ipv4_customer; //type: uint32
        ydk::YLeaf mnp_ipv6_customer; //type: uint32
        class Customers; //type: MobileIp::Lmas::Lma::Services::Service::Customers

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers> customers;
        
}; // MobileIp::Lmas::Lma::Services::Service


class MobileIp::Lmas::Lma::Services::Service::Customers : public ydk::Entity
{
    public:
        Customers();
        ~Customers();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Customer; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer

        ydk::YList customer;
        
}; // MobileIp::Lmas::Lma::Services::Service::Customers


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer : public ydk::Entity
{
    public:
        Customer();
        ~Customer();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf customer_name; //type: string
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf mnp_customer; //type: uint32
        ydk::YLeaf mnp_ipv4_lmn; //type: uint32
        ydk::YLeaf mnp_ipv6_lmn; //type: uint32
        ydk::YLeaf mnp_lmn; //type: uint32
        ydk::YLeaf mnp_ipv4_customer; //type: uint32
        ydk::YLeaf mnp_ipv6_customer; //type: uint32
        ydk::YLeaf mobile_route_ad; //type: uint32
        ydk::YLeaf bandwidth_aggregate; //type: uint32
        class AuthenticateOption; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption
        class HeartBeatAttributes; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes
        class Transports; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports
        class NetworkAttributes; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes
        class GreKey; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey
        class BindingAttributes; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption> authenticate_option;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes> heart_beat_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports> transports;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes> network_attributes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey> gre_key;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes> binding_attributes;
        
}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption : public ydk::Entity
{
    public:
        AuthenticateOption();
        ~AuthenticateOption();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf spi; //type: string
        ydk::YLeaf key; //type: string

}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes : public ydk::Entity
{
    public:
        HeartBeatAttributes();
        ~HeartBeatAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf interval; //type: uint32
        ydk::YLeaf retries; //type: uint32
        ydk::YLeaf timeout; //type: uint32

}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports : public ydk::Entity
{
    public:
        Transports();
        ~Transports();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Transport; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport

        ydk::YList transport;
        
}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport : public ydk::Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf ipv4_address; //type: string
        ydk::YLeaf ipv6_address; //type: string

}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes : public ydk::Entity
{
    public:
        NetworkAttributes();
        ~NetworkAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unauthorize; //type: empty
        class Authorizes; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes> authorizes;
        
}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes : public ydk::Entity
{
    public:
        Authorizes();
        ~Authorizes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Authorize; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize

        ydk::YList authorize;
        
}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize : public ydk::Entity
{
    public:
        Authorize();
        ~Authorize();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf name; //type: string
        class PoolAttributes; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes> pool_attributes;
        
}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes : public ydk::Entity
{
    public:
        PoolAttributes();
        ~PoolAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MobileNode; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode
        class MobileNetwork; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode> mobile_node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork> mobile_network;
        
}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode : public ydk::Entity
{
    public:
        MobileNode();
        ~MobileNode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4Pool; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool
        class Ipv6Pool; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool> ipv4_pool;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool> ipv6_pool;
        
}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool : public ydk::Entity
{
    public:
        Ipv4Pool();
        ~Ipv4Pool();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_address; //type: string
        ydk::YLeaf pool_prefix; //type: uint32

}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool : public ydk::Entity
{
    public:
        Ipv6Pool();
        ~Ipv6Pool();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_address; //type: string
        ydk::YLeaf pool_prefix; //type: uint32

}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork : public ydk::Entity
{
    public:
        MobileNetwork();
        ~MobileNetwork();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mripv6Pools; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools
        class Mripv4Pools; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools> mripv6_pools;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools> mripv4_pools;
        
}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools : public ydk::Entity
{
    public:
        Mripv6Pools();
        ~Mripv6Pools();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mripv6Pool; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool

        ydk::YList mripv6_pool;
        
}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool : public ydk::Entity
{
    public:
        Mripv6Pool();
        ~Mripv6Pool();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_address; //type: string
        ydk::YLeaf pool_prefix; //type: uint32
        ydk::YLeaf network_prefix; //type: uint32

}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools : public ydk::Entity
{
    public:
        Mripv4Pools();
        ~Mripv4Pools();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mripv4Pool; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool

        ydk::YList mripv4_pool;
        
}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool : public ydk::Entity
{
    public:
        Mripv4Pool();
        ~Mripv4Pool();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_address; //type: string
        ydk::YLeaf pool_prefix; //type: uint32
        ydk::YLeaf network_prefix; //type: uint32

}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey : public ydk::Entity
{
    public:
        GreKey();
        ~GreKey();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf gre_key_type; //type: GreKeyType
        ydk::YLeaf gre_key_value; //type: uint32

}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes : public ydk::Entity
{
    public:
        BindingAttributes();
        ~BindingAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf max_life_time; //type: uint32

}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes


class MobileIp::Lmas::Lma::Networks : public ydk::Entity
{
    public:
        Networks();
        ~Networks();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Network; //type: MobileIp::Lmas::Lma::Networks::Network

        ydk::YList network;
        
}; // MobileIp::Lmas::Lma::Networks


class MobileIp::Lmas::Lma::Networks::Network : public ydk::Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf lma_network; //type: string
        class PoolAttributes; //type: MobileIp::Lmas::Lma::Networks::Network::PoolAttributes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks::Network::PoolAttributes> pool_attributes;
        
}; // MobileIp::Lmas::Lma::Networks::Network


class MobileIp::Lmas::Lma::Networks::Network::PoolAttributes : public ydk::Entity
{
    public:
        PoolAttributes();
        ~PoolAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class MobileNode; //type: MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode
        class MobileNetwork; //type: MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode> mobile_node;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork> mobile_network;
        
}; // MobileIp::Lmas::Lma::Networks::Network::PoolAttributes


class MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode : public ydk::Entity
{
    public:
        MobileNode();
        ~MobileNode();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Ipv4Pool; //type: MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool
        class Ipv6Pool; //type: MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool> ipv4_pool;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool> ipv6_pool;
        
}; // MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode


class MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool : public ydk::Entity
{
    public:
        Ipv4Pool();
        ~Ipv4Pool();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_address; //type: string
        ydk::YLeaf pool_prefix; //type: uint32

}; // MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool


class MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool : public ydk::Entity
{
    public:
        Ipv6Pool();
        ~Ipv6Pool();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_address; //type: string
        ydk::YLeaf pool_prefix; //type: uint32

}; // MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool


class MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork : public ydk::Entity
{
    public:
        MobileNetwork();
        ~MobileNetwork();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mripv6Pools; //type: MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools
        class Mripv4Pools; //type: MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools> mripv6_pools;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools> mripv4_pools;
        
}; // MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork


class MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools : public ydk::Entity
{
    public:
        Mripv6Pools();
        ~Mripv6Pools();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mripv6Pool; //type: MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool

        ydk::YList mripv6_pool;
        
}; // MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools


class MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool : public ydk::Entity
{
    public:
        Mripv6Pool();
        ~Mripv6Pool();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_address; //type: string
        ydk::YLeaf pool_prefix; //type: uint32
        ydk::YLeaf network_prefix; //type: uint32

}; // MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool


class MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools : public ydk::Entity
{
    public:
        Mripv4Pools();
        ~Mripv4Pools();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        class Mripv4Pool; //type: MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool

        ydk::YList mripv4_pool;
        
}; // MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools


class MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool : public ydk::Entity
{
    public:
        Mripv4Pool();
        ~Mripv4Pool();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf start_address; //type: string
        ydk::YLeaf pool_prefix; //type: uint32
        ydk::YLeaf network_prefix; //type: uint32

}; // MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool


class MobileIp::Lmas::Lma::ReplayProtection : public ydk::Entity
{
    public:
        ReplayProtection();
        ~ReplayProtection();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf timestamp_window; //type: uint32

}; // MobileIp::Lmas::Lma::ReplayProtection

class GreKeyType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf symmetric;

};

class ServiceType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf dual;

};

class LmaService : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf service_mll;

};

class RedistType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf home_address;

};

class RedistSubType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf host_prefix;
        static const ydk::Enum::YLeaf disable;

};

class LmaRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_3gma;

};

class LmaRat : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf virtual_;
        static const ydk::Enum::YLeaf ppp;
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf wlan;
        static const ydk::Enum::YLeaf wi_max;
        static const ydk::Enum::YLeaf Y_3gppgeran;
        static const ydk::Enum::YLeaf Y_3gpputran;
        static const ydk::Enum::YLeaf Y_3gppeutran;
        static const ydk::Enum::YLeaf Y_3gpp2ehrpd;
        static const ydk::Enum::YLeaf Y_3gpp2hrpd;
        static const ydk::Enum::YLeaf Y_3gpp21rtt;
        static const ydk::Enum::YLeaf Y_3gpp2umb;

};

class EncapOpt : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf greipv4;
        static const ydk::Enum::YLeaf greipv6;
        static const ydk::Enum::YLeaf mgreipv4;
        static const ydk::Enum::YLeaf mgreipv6;

};


}
}

#endif /* _CISCO_IOS_XR_IP_MOBILEIP_CFG_ */

