#ifndef _CISCO_IOS_XR_IP_MOBILEIP_CFG_
#define _CISCO_IOS_XR_IP_MOBILEIP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ip_mobileip_cfg {

class MobileIp : public Entity
{
    public:
        MobileIp();
        ~MobileIp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;
        std::shared_ptr<Entity> clone_ptr() const override;
        augment_capabilities_function get_augment_capabilities_function() const override;
        std::string get_bundle_yang_models_location() const override;
        std::string get_bundle_name() const override;



        class Domains; //type: MobileIp::Domains
        class Lmas; //type: MobileIp::Lmas

        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Domains> domains;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas> lmas;


}; // MobileIp


class MobileIp::Domains : public Entity
{
    public:
        Domains();
        ~Domains();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Domain; //type: MobileIp::Domains::Domain

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Domains::Domain> > domain;


}; // MobileIp::Domains


class MobileIp::Domains::Domain : public Entity
{
    public:
        Domain();
        ~Domain();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf domain_name; //type: string
        YLeaf enable; //type: empty

        class Mags; //type: MobileIp::Domains::Domain::Mags
        class Nais; //type: MobileIp::Domains::Domain::Nais
        class AuthenticateOption; //type: MobileIp::Domains::Domain::AuthenticateOption
        class Lmas; //type: MobileIp::Domains::Domain::Lmas

        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Domains::Domain::AuthenticateOption> authenticate_option;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Domains::Domain::Lmas> lmas;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Domains::Domain::Mags> mags;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Domains::Domain::Nais> nais;


}; // MobileIp::Domains::Domain


class MobileIp::Domains::Domain::Mags : public Entity
{
    public:
        Mags();
        ~Mags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Mag; //type: MobileIp::Domains::Domain::Mags::Mag

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Domains::Domain::Mags::Mag> > mag;


}; // MobileIp::Domains::Domain::Mags


class MobileIp::Domains::Domain::Mags::Mag : public Entity
{
    public:
        Mag();
        ~Mag();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mag_name; //type: string



}; // MobileIp::Domains::Domain::Mags::Mag


class MobileIp::Domains::Domain::Nais : public Entity
{
    public:
        Nais();
        ~Nais();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Nai; //type: MobileIp::Domains::Domain::Nais::Nai

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Domains::Domain::Nais::Nai> > nai;


}; // MobileIp::Domains::Domain::Nais


class MobileIp::Domains::Domain::Nais::Nai : public Entity
{
    public:
        Nai();
        ~Nai();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf nai_name; //type: string
        YLeaf lma; //type: string
        YLeaf apn; //type: string
        YLeaf customer; //type: string
        YLeaf service; //type: ServiceTypeEnum
        YLeaf network; //type: string



}; // MobileIp::Domains::Domain::Nais::Nai


class MobileIp::Domains::Domain::AuthenticateOption : public Entity
{
    public:
        AuthenticateOption();
        ~AuthenticateOption();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf spi; //type: string
        YLeaf key; //type: string



}; // MobileIp::Domains::Domain::AuthenticateOption


class MobileIp::Domains::Domain::Lmas : public Entity
{
    public:
        Lmas();
        ~Lmas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Lma; //type: MobileIp::Domains::Domain::Lmas::Lma

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Domains::Domain::Lmas::Lma> > lma;


}; // MobileIp::Domains::Domain::Lmas


class MobileIp::Domains::Domain::Lmas::Lma : public Entity
{
    public:
        Lma();
        ~Lma();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lma_name; //type: string



}; // MobileIp::Domains::Domain::Lmas::Lma


class MobileIp::Lmas : public Entity
{
    public:
        Lmas();
        ~Lmas();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Lma; //type: MobileIp::Lmas::Lma

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma> > lma;


}; // MobileIp::Lmas


class MobileIp::Lmas::Lma : public Entity
{
    public:
        Lma();
        ~Lma();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lma_name; //type: string
        YLeaf domain_name; //type: string
        YLeaf generate; //type: empty
        YLeaf mobile_route_ad; //type: uint32
        YLeaf ani; //type: empty
        YLeaf multipath; //type: empty
        YLeaf dynamic; //type: empty
        YLeaf enforce; //type: empty
        YLeaf default_profile; //type: string
        YLeaf interface; //type: string
        YLeaf mobile_map; //type: string
        YLeaf pgw_subs_cont; //type: empty

        class BindingRevocationAttributes; //type: MobileIp::Lmas::Lma::BindingRevocationAttributes
        class RatAttributes; //type: MobileIp::Lmas::Lma::RatAttributes
        class HeartBeatAttributes; //type: MobileIp::Lmas::Lma::HeartBeatAttributes
        class Lmaipv6Addresses; //type: MobileIp::Lmas::Lma::Lmaipv6Addresses
        class Hnp; //type: MobileIp::Lmas::Lma::Hnp
        class Redistribute; //type: MobileIp::Lmas::Lma::Redistribute
        class Dscp; //type: MobileIp::Lmas::Lma::Dscp
        class Lmaipv4Addresses; //type: MobileIp::Lmas::Lma::Lmaipv4Addresses
        class Roles; //type: MobileIp::Lmas::Lma::Roles
        class BindingAttributes; //type: MobileIp::Lmas::Lma::BindingAttributes
        class Aaa; //type: MobileIp::Lmas::Lma::Aaa
        class Mags; //type: MobileIp::Lmas::Lma::Mags
        class TunnelAttributes; //type: MobileIp::Lmas::Lma::TunnelAttributes
        class Services; //type: MobileIp::Lmas::Lma::Services
        class ReplayProtection; //type: MobileIp::Lmas::Lma::ReplayProtection
        class Networks; //type: MobileIp::Lmas::Lma::Networks

        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Aaa> aaa;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::BindingAttributes> binding_attributes;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::BindingRevocationAttributes> binding_revocation_attributes;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Dscp> dscp;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::HeartBeatAttributes> heart_beat_attributes;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Hnp> hnp;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Lmaipv4Addresses> lmaipv4_addresses;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Lmaipv6Addresses> lmaipv6_addresses;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Mags> mags;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks> networks;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::RatAttributes> rat_attributes;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Redistribute> redistribute;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::ReplayProtection> replay_protection;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Roles> roles;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services> services;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::TunnelAttributes> tunnel_attributes;


}; // MobileIp::Lmas::Lma


class MobileIp::Lmas::Lma::BindingRevocationAttributes : public Entity
{
    public:
        BindingRevocationAttributes();
        ~BindingRevocationAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf retry; //type: uint32

        class Delay; //type: MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay

        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay> delay;


}; // MobileIp::Lmas::Lma::BindingRevocationAttributes


class MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay : public Entity
{
    public:
        Delay();
        ~Delay();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf minimum; //type: uint32
        YLeaf maximum; //type: uint32



}; // MobileIp::Lmas::Lma::BindingRevocationAttributes::Delay


class MobileIp::Lmas::Lma::RatAttributes : public Entity
{
    public:
        RatAttributes();
        ~RatAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lma_rat; //type: LmaRatEnum
        YLeaf priority_value; //type: uint32



}; // MobileIp::Lmas::Lma::RatAttributes


class MobileIp::Lmas::Lma::HeartBeatAttributes : public Entity
{
    public:
        HeartBeatAttributes();
        ~HeartBeatAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval; //type: uint32
        YLeaf retries; //type: uint32
        YLeaf timeout; //type: uint32



}; // MobileIp::Lmas::Lma::HeartBeatAttributes


class MobileIp::Lmas::Lma::Lmaipv6Addresses : public Entity
{
    public:
        Lmaipv6Addresses();
        ~Lmaipv6Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Lmaipv6Address; //type: MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address> > lmaipv6_address;


}; // MobileIp::Lmas::Lma::Lmaipv6Addresses


class MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address : public Entity
{
    public:
        Lmaipv6Address();
        ~Lmaipv6Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // MobileIp::Lmas::Lma::Lmaipv6Addresses::Lmaipv6Address


class MobileIp::Lmas::Lma::Hnp : public Entity
{
    public:
        Hnp();
        ~Hnp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf maximum; //type: uint32



}; // MobileIp::Lmas::Lma::Hnp


class MobileIp::Lmas::Lma::Redistribute : public Entity
{
    public:
        Redistribute();
        ~Redistribute();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf redist_type; //type: int32
        YLeaf redist_sub_type; //type: int32



}; // MobileIp::Lmas::Lma::Redistribute


class MobileIp::Lmas::Lma::Dscp : public Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf force; //type: int32



}; // MobileIp::Lmas::Lma::Dscp


class MobileIp::Lmas::Lma::Lmaipv4Addresses : public Entity
{
    public:
        Lmaipv4Addresses();
        ~Lmaipv4Addresses();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Lmaipv4Address; //type: MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address> > lmaipv4_address;


}; // MobileIp::Lmas::Lma::Lmaipv4Addresses


class MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address : public Entity
{
    public:
        Lmaipv4Address();
        ~Lmaipv4Address();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf address; //type: string



}; // MobileIp::Lmas::Lma::Lmaipv4Addresses::Lmaipv4Address


class MobileIp::Lmas::Lma::Roles : public Entity
{
    public:
        Roles();
        ~Roles();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Role; //type: MobileIp::Lmas::Lma::Roles::Role

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Roles::Role> > role;


}; // MobileIp::Lmas::Lma::Roles


class MobileIp::Lmas::Lma::Roles::Role : public Entity
{
    public:
        Role();
        ~Role();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lma_role; //type: LmaRoleEnum



}; // MobileIp::Lmas::Lma::Roles::Role


class MobileIp::Lmas::Lma::BindingAttributes : public Entity
{
    public:
        BindingAttributes();
        ~BindingAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf refresh_time; //type: uint32
        YLeaf delete_wait_interval; //type: uint32
        YLeaf create_wait_interval; //type: uint32
        YLeaf max_life_time; //type: uint32
        YLeaf maximum; //type: uint32



}; // MobileIp::Lmas::Lma::BindingAttributes


class MobileIp::Lmas::Lma::Aaa : public Entity
{
    public:
        Aaa();
        ~Aaa();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf enable; //type: int32
        YLeaf interim_interval; //type: int32



}; // MobileIp::Lmas::Lma::Aaa


class MobileIp::Lmas::Lma::Mags : public Entity
{
    public:
        Mags();
        ~Mags();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Mag; //type: MobileIp::Lmas::Lma::Mags::Mag

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Mags::Mag> > mag;


}; // MobileIp::Lmas::Lma::Mags


class MobileIp::Lmas::Lma::Mags::Mag : public Entity
{
    public:
        Mag();
        ~Mag();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mag_name; //type: string
        YLeaf domain_name; //type: string
        YLeaf encap_option; //type: EncapOptEnum
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string
        YLeaf tunnel; //type: string

        class AuthenticateOption; //type: MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption
        class Dscp; //type: MobileIp::Lmas::Lma::Mags::Mag::Dscp

        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption> authenticate_option;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Mags::Mag::Dscp> dscp;


}; // MobileIp::Lmas::Lma::Mags::Mag


class MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption : public Entity
{
    public:
        AuthenticateOption();
        ~AuthenticateOption();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf spi; //type: string
        YLeaf key; //type: string



}; // MobileIp::Lmas::Lma::Mags::Mag::AuthenticateOption


class MobileIp::Lmas::Lma::Mags::Mag::Dscp : public Entity
{
    public:
        Dscp();
        ~Dscp();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf value_; //type: uint32
        YLeaf force; //type: int32



}; // MobileIp::Lmas::Lma::Mags::Mag::Dscp


class MobileIp::Lmas::Lma::TunnelAttributes : public Entity
{
    public:
        TunnelAttributes();
        ~TunnelAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf mtu; //type: uint32
        YLeaf acl; //type: string



}; // MobileIp::Lmas::Lma::TunnelAttributes


class MobileIp::Lmas::Lma::Services : public Entity
{
    public:
        Services();
        ~Services();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Service; //type: MobileIp::Lmas::Lma::Services::Service

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service> > service;


}; // MobileIp::Lmas::Lma::Services


class MobileIp::Lmas::Lma::Services::Service : public Entity
{
    public:
        Service();
        ~Service();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lma_service; //type: LmaServiceEnum
        YLeaf ignore; //type: empty
        YLeaf mnp_customer; //type: uint32
        YLeaf mnp_ipv4_lmn; //type: uint32
        YLeaf mnp_ipv6_lmn; //type: uint32
        YLeaf mnp_lmn; //type: uint32
        YLeaf mnp_ipv4_customer; //type: uint32
        YLeaf mnp_ipv6_customer; //type: uint32

        class Customers; //type: MobileIp::Lmas::Lma::Services::Service::Customers

        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers> customers;


}; // MobileIp::Lmas::Lma::Services::Service


class MobileIp::Lmas::Lma::Services::Service::Customers : public Entity
{
    public:
        Customers();
        ~Customers();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Customer; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer> > customer;


}; // MobileIp::Lmas::Lma::Services::Service::Customers


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer : public Entity
{
    public:
        Customer();
        ~Customer();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf customer_name; //type: string
        YLeaf vrf_name; //type: string
        YLeaf mnp_customer; //type: uint32
        YLeaf mnp_ipv4_lmn; //type: uint32
        YLeaf mnp_ipv6_lmn; //type: uint32
        YLeaf mnp_lmn; //type: uint32
        YLeaf mnp_ipv4_customer; //type: uint32
        YLeaf mnp_ipv6_customer; //type: uint32
        YLeaf mobile_route_ad; //type: uint32
        YLeaf bandwidth_aggregate; //type: int32

        class AuthenticateOption; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption
        class HeartBeatAttributes; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes
        class Transports; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports
        class NetworkAttributes; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes
        class GreKey; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey
        class BindingAttributes; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes

        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption> authenticate_option;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes> binding_attributes;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey> gre_key;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes> heart_beat_attributes;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes> network_attributes;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports> transports;


}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption : public Entity
{
    public:
        AuthenticateOption();
        ~AuthenticateOption();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf spi; //type: string
        YLeaf key; //type: string



}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::AuthenticateOption


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes : public Entity
{
    public:
        HeartBeatAttributes();
        ~HeartBeatAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf interval; //type: uint32
        YLeaf retries; //type: uint32
        YLeaf timeout; //type: uint32



}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::HeartBeatAttributes


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports : public Entity
{
    public:
        Transports();
        ~Transports();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Transport; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport> > transport;


}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport : public Entity
{
    public:
        Transport();
        ~Transport();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf vrf_name; //type: string
        YLeaf ipv4_address; //type: string
        YLeaf ipv6_address; //type: string



}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::Transports::Transport


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes : public Entity
{
    public:
        NetworkAttributes();
        ~NetworkAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf unauthorize; //type: empty

        class Authorizes; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes

        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes> authorizes;


}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes : public Entity
{
    public:
        Authorizes();
        ~Authorizes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Authorize; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize> > authorize;


}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize : public Entity
{
    public:
        Authorize();
        ~Authorize();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf name; //type: string

        class PoolAttributes; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes

        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes> pool_attributes;


}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes : public Entity
{
    public:
        PoolAttributes();
        ~PoolAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MobileNode; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode
        class MobileNetwork; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork

        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork> mobile_network;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode> mobile_node;


}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode : public Entity
{
    public:
        MobileNode();
        ~MobileNode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4Pool; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool
        class Ipv6Pool; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool

        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool> ipv4_pool;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool> ipv6_pool;


}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool : public Entity
{
    public:
        Ipv4Pool();
        ~Ipv4Pool();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_address; //type: string
        YLeaf pool_prefix; //type: uint32



}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv4Pool


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool : public Entity
{
    public:
        Ipv6Pool();
        ~Ipv6Pool();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_address; //type: string
        YLeaf pool_prefix; //type: uint32



}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNode::Ipv6Pool


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork : public Entity
{
    public:
        MobileNetwork();
        ~MobileNetwork();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Mripv4Pools; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools
        class Mripv6Pools; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools

        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools> mripv4_pools;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools> mripv6_pools;


}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools : public Entity
{
    public:
        Mripv4Pools();
        ~Mripv4Pools();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Mripv4Pool; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool> > mripv4_pool;


}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool : public Entity
{
    public:
        Mripv4Pool();
        ~Mripv4Pool();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_address; //type: string
        YLeaf pool_prefix; //type: uint32
        YLeaf network_prefix; //type: uint32



}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools : public Entity
{
    public:
        Mripv6Pools();
        ~Mripv6Pools();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Mripv6Pool; //type: MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool> > mripv6_pool;


}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool : public Entity
{
    public:
        Mripv6Pool();
        ~Mripv6Pool();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_address; //type: string
        YLeaf pool_prefix; //type: uint32
        YLeaf network_prefix; //type: uint32



}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::NetworkAttributes::Authorizes::Authorize::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey : public Entity
{
    public:
        GreKey();
        ~GreKey();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf gre_key_type; //type: int32
        YLeaf gre_key_value; //type: int32



}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::GreKey


class MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes : public Entity
{
    public:
        BindingAttributes();
        ~BindingAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf max_life_time; //type: uint32



}; // MobileIp::Lmas::Lma::Services::Service::Customers::Customer::BindingAttributes


class MobileIp::Lmas::Lma::ReplayProtection : public Entity
{
    public:
        ReplayProtection();
        ~ReplayProtection();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf validity_window; //type: uint32
        YLeaf ignore; //type: int32



}; // MobileIp::Lmas::Lma::ReplayProtection


class MobileIp::Lmas::Lma::Networks : public Entity
{
    public:
        Networks();
        ~Networks();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Network; //type: MobileIp::Lmas::Lma::Networks::Network

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks::Network> > network;


}; // MobileIp::Lmas::Lma::Networks


class MobileIp::Lmas::Lma::Networks::Network : public Entity
{
    public:
        Network();
        ~Network();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf lma_network; //type: string

        class PoolAttributes; //type: MobileIp::Lmas::Lma::Networks::Network::PoolAttributes

        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks::Network::PoolAttributes> pool_attributes;


}; // MobileIp::Lmas::Lma::Networks::Network


class MobileIp::Lmas::Lma::Networks::Network::PoolAttributes : public Entity
{
    public:
        PoolAttributes();
        ~PoolAttributes();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class MobileNode; //type: MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode
        class MobileNetwork; //type: MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork

        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork> mobile_network;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode> mobile_node;


}; // MobileIp::Lmas::Lma::Networks::Network::PoolAttributes


class MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode : public Entity
{
    public:
        MobileNode();
        ~MobileNode();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Ipv4Pool; //type: MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool
        class Ipv6Pool; //type: MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool

        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool> ipv4_pool;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool> ipv6_pool;


}; // MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode


class MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool : public Entity
{
    public:
        Ipv4Pool();
        ~Ipv4Pool();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_address; //type: string
        YLeaf pool_prefix; //type: uint32



}; // MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv4Pool


class MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool : public Entity
{
    public:
        Ipv6Pool();
        ~Ipv6Pool();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_address; //type: string
        YLeaf pool_prefix; //type: uint32



}; // MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNode::Ipv6Pool


class MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork : public Entity
{
    public:
        MobileNetwork();
        ~MobileNetwork();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Mripv6Pools; //type: MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools
        class Mripv4Pools; //type: MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools

        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools> mripv4_pools;
        std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools> mripv6_pools;


}; // MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork


class MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools : public Entity
{
    public:
        Mripv6Pools();
        ~Mripv6Pools();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Mripv6Pool; //type: MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool> > mripv6_pool;


}; // MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools


class MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool : public Entity
{
    public:
        Mripv6Pool();
        ~Mripv6Pool();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_address; //type: string
        YLeaf pool_prefix; //type: uint32
        YLeaf network_prefix; //type: uint32



}; // MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv6Pools::Mripv6Pool


class MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools : public Entity
{
    public:
        Mripv4Pools();
        ~Mripv4Pools();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;



        class Mripv4Pool; //type: MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool

        std::vector<std::shared_ptr<Cisco_IOS_XR_ip_mobileip_cfg::MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool> > mripv4_pool;


}; // MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools


class MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool : public Entity
{
    public:
        Mripv4Pool();
        ~Mripv4Pool();

        bool has_data() const override;
        bool has_operation() const override;
        EntityPath get_entity_path(Entity* parent) const override;
        std::string get_segment_path() const override;
        std::shared_ptr<Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, std::string value) override;
        std::map<std::string, std::shared_ptr<Entity>> & get_children() override;


        YLeaf start_address; //type: string
        YLeaf pool_prefix; //type: uint32
        YLeaf network_prefix; //type: uint32



}; // MobileIp::Lmas::Lma::Networks::Network::PoolAttributes::MobileNetwork::Mripv4Pools::Mripv4Pool

class LmaRatEnum : public Enum
{
    public:
        static const Enum::YLeaf virtual_;
        static const Enum::YLeaf ppp;
        static const Enum::YLeaf ethernet;
        static const Enum::YLeaf wlan;
        static const Enum::YLeaf wi_max;
        static const Enum::YLeaf Y_3gppgeran;
        static const Enum::YLeaf Y_3gpputran;
        static const Enum::YLeaf Y_3gppeutran;
        static const Enum::YLeaf Y_3gpp2ehrpd;
        static const Enum::YLeaf Y_3gpp2hrpd;
        static const Enum::YLeaf Y_3gpp21rtt;
        static const Enum::YLeaf Y_3gpp2umb;

};

class ServiceTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf dual;

};

class LmaServiceEnum : public Enum
{
    public:
        static const Enum::YLeaf service_mll;

};

class EncapOptEnum : public Enum
{
    public:
        static const Enum::YLeaf greipv4;
        static const Enum::YLeaf greipv6;
        static const Enum::YLeaf mgreipv4;
        static const Enum::YLeaf mgreipv6;

};

class LmaRoleEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_3gma;

};


}
}

#endif /* _CISCO_IOS_XR_IP_MOBILEIP_CFG_ */

