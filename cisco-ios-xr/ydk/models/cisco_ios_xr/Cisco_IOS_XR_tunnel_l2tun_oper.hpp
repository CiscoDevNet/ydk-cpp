#ifndef _CISCO_IOS_XR_TUNNEL_L2TUN_OPER_
#define _CISCO_IOS_XR_TUNNEL_L2TUN_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_tunnel_l2tun_oper {

class L2Tp : public ydk::Entity
{
    public:
        L2Tp();
        ~L2Tp();

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

        class Counters; //type: L2Tp::Counters
        class TunnelConfigurations; //type: L2Tp::TunnelConfigurations
        class CounterHistFail; //type: L2Tp::CounterHistFail
        class Classes; //type: L2Tp::Classes
        class Tunnels; //type: L2Tp::Tunnels
        class Sessions; //type: L2Tp::Sessions
        class Session; //type: L2Tp::Session

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Classes> classes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::CounterHistFail> counter_hist_fail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters> counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Sessions> sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::TunnelConfigurations> tunnel_configurations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Tunnels> tunnels;
        
}; // L2Tp


class L2Tp::Classes : public ydk::Entity
{
    public:
        Classes();
        ~Classes();

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

        class Class_; //type: L2Tp::Classes::Class_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Classes::Class_> > class_;
        
}; // L2Tp::Classes


class L2Tp::Classes::Class_ : public ydk::Entity
{
    public:
        Class_();
        ~Class_();

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

        ydk::YLeaf class_name; //type: string
        ydk::YLeaf ip_tos; //type: uint8
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf receive_window_size; //type: uint16
        ydk::YLeaf class_name_xr; //type: string
        ydk::YLeaf digest_hash; //type: DigestHash
        ydk::YLeaf password; //type: string
        ydk::YLeaf encoded_password; //type: string
        ydk::YLeaf host_name; //type: string
        ydk::YLeaf accounting_method_list; //type: string
        ydk::YLeaf hello_timeout; //type: uint32
        ydk::YLeaf setup_timeout; //type: uint32
        ydk::YLeaf retransmit_minimum_timeout; //type: uint32
        ydk::YLeaf retransmit_maximum_timeout; //type: uint32
        ydk::YLeaf initial_retransmit_minimum_timeout; //type: uint32
        ydk::YLeaf initial_retransmit_maximum_timeout; //type: uint32
        ydk::YLeaf timeout_no_user; //type: uint32
        ydk::YLeaf retransmit_retries; //type: uint32
        ydk::YLeaf initial_retransmit_retries; //type: uint32
        ydk::YLeaf is_authentication_enabled; //type: boolean
        ydk::YLeaf is_hidden; //type: boolean
        ydk::YLeaf is_digest_enabled; //type: boolean
        ydk::YLeaf is_digest_check_enabled; //type: boolean
        ydk::YLeaf is_congestion_control_enabled; //type: boolean
        ydk::YLeaf is_peer_address_checked; //type: boolean

}; // L2Tp::Classes::Class_


class L2Tp::CounterHistFail : public ydk::Entity
{
    public:
        CounterHistFail();
        ~CounterHistFail();

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

        ydk::YLeaf sess_down_tmout; //type: uint32
        ydk::YLeaf tx_counters; //type: string
        ydk::YLeaf rx_counters; //type: string
        ydk::YLeafList pkt_timeout; //type: list of  uint32

}; // L2Tp::CounterHistFail


class L2Tp::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

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

        class Control; //type: L2Tp::Counters::Control

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control> control;
        
}; // L2Tp::Counters


class L2Tp::Counters::Control : public ydk::Entity
{
    public:
        Control();
        ~Control();

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

        class TunnelXr; //type: L2Tp::Counters::Control::TunnelXr
        class Tunnels; //type: L2Tp::Counters::Control::Tunnels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr> tunnel_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::Tunnels> tunnels;
        
}; // L2Tp::Counters::Control


class L2Tp::Counters::Control::TunnelXr : public ydk::Entity
{
    public:
        TunnelXr();
        ~TunnelXr();

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

        class Authentication; //type: L2Tp::Counters::Control::TunnelXr::Authentication
        class Global; //type: L2Tp::Counters::Control::TunnelXr::Global

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Global> global;
        
}; // L2Tp::Counters::Control::TunnelXr


class L2Tp::Counters::Control::TunnelXr::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

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

        class NonceAvp; //type: L2Tp::Counters::Control::TunnelXr::Authentication::NonceAvp
        class CommonDigest; //type: L2Tp::Counters::Control::TunnelXr::Authentication::CommonDigest
        class PrimaryDigest; //type: L2Tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest
        class SecondaryDigest; //type: L2Tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest
        class IntegrityCheck; //type: L2Tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck
        class LocalSecret; //type: L2Tp::Counters::Control::TunnelXr::Authentication::LocalSecret
        class ChallengeAvp; //type: L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp
        class ChallengeReponse; //type: L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse
        class OverallStatistics; //type: L2Tp::Counters::Control::TunnelXr::Authentication::OverallStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp> challenge_avp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse> challenge_reponse;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Authentication::CommonDigest> common_digest;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck> integrity_check;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Authentication::LocalSecret> local_secret;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Authentication::NonceAvp> nonce_avp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Authentication::OverallStatistics> overall_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest> primary_digest;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest> secondary_digest;
        
}; // L2Tp::Counters::Control::TunnelXr::Authentication


class L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp : public ydk::Entity
{
    public:
        ChallengeAvp();
        ~ChallengeAvp();

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

        ydk::YLeaf validate; //type: uint32
        ydk::YLeaf bad_hash; //type: uint32
        ydk::YLeaf bad_length; //type: uint32
        ydk::YLeaf ignored; //type: uint32
        ydk::YLeaf missing; //type: uint32
        ydk::YLeaf passed; //type: uint32
        ydk::YLeaf failed; //type: uint32
        ydk::YLeaf skipped; //type: uint32
        ydk::YLeaf generate_response_failures; //type: uint32
        ydk::YLeaf unexpected; //type: uint32
        ydk::YLeaf unexpected_zlb; //type: uint32

}; // L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeAvp


class L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse : public ydk::Entity
{
    public:
        ChallengeReponse();
        ~ChallengeReponse();

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

        ydk::YLeaf validate; //type: uint32
        ydk::YLeaf bad_hash; //type: uint32
        ydk::YLeaf bad_length; //type: uint32
        ydk::YLeaf ignored; //type: uint32
        ydk::YLeaf missing; //type: uint32
        ydk::YLeaf passed; //type: uint32
        ydk::YLeaf failed; //type: uint32
        ydk::YLeaf skipped; //type: uint32
        ydk::YLeaf generate_response_failures; //type: uint32
        ydk::YLeaf unexpected; //type: uint32
        ydk::YLeaf unexpected_zlb; //type: uint32

}; // L2Tp::Counters::Control::TunnelXr::Authentication::ChallengeReponse


class L2Tp::Counters::Control::TunnelXr::Authentication::CommonDigest : public ydk::Entity
{
    public:
        CommonDigest();
        ~CommonDigest();

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

        ydk::YLeaf validate; //type: uint32
        ydk::YLeaf bad_hash; //type: uint32
        ydk::YLeaf bad_length; //type: uint32
        ydk::YLeaf ignored; //type: uint32
        ydk::YLeaf missing; //type: uint32
        ydk::YLeaf passed; //type: uint32
        ydk::YLeaf failed; //type: uint32
        ydk::YLeaf skipped; //type: uint32
        ydk::YLeaf generate_response_failures; //type: uint32
        ydk::YLeaf unexpected; //type: uint32
        ydk::YLeaf unexpected_zlb; //type: uint32

}; // L2Tp::Counters::Control::TunnelXr::Authentication::CommonDigest


class L2Tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck : public ydk::Entity
{
    public:
        IntegrityCheck();
        ~IntegrityCheck();

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

        ydk::YLeaf validate; //type: uint32
        ydk::YLeaf bad_hash; //type: uint32
        ydk::YLeaf bad_length; //type: uint32
        ydk::YLeaf ignored; //type: uint32
        ydk::YLeaf missing; //type: uint32
        ydk::YLeaf passed; //type: uint32
        ydk::YLeaf failed; //type: uint32
        ydk::YLeaf skipped; //type: uint32
        ydk::YLeaf generate_response_failures; //type: uint32
        ydk::YLeaf unexpected; //type: uint32
        ydk::YLeaf unexpected_zlb; //type: uint32

}; // L2Tp::Counters::Control::TunnelXr::Authentication::IntegrityCheck


class L2Tp::Counters::Control::TunnelXr::Authentication::LocalSecret : public ydk::Entity
{
    public:
        LocalSecret();
        ~LocalSecret();

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

        ydk::YLeaf validate; //type: uint32
        ydk::YLeaf bad_hash; //type: uint32
        ydk::YLeaf bad_length; //type: uint32
        ydk::YLeaf ignored; //type: uint32
        ydk::YLeaf missing; //type: uint32
        ydk::YLeaf passed; //type: uint32
        ydk::YLeaf failed; //type: uint32
        ydk::YLeaf skipped; //type: uint32
        ydk::YLeaf generate_response_failures; //type: uint32
        ydk::YLeaf unexpected; //type: uint32
        ydk::YLeaf unexpected_zlb; //type: uint32

}; // L2Tp::Counters::Control::TunnelXr::Authentication::LocalSecret


class L2Tp::Counters::Control::TunnelXr::Authentication::NonceAvp : public ydk::Entity
{
    public:
        NonceAvp();
        ~NonceAvp();

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

        ydk::YLeaf validate; //type: uint32
        ydk::YLeaf bad_hash; //type: uint32
        ydk::YLeaf bad_length; //type: uint32
        ydk::YLeaf ignored; //type: uint32
        ydk::YLeaf missing; //type: uint32
        ydk::YLeaf passed; //type: uint32
        ydk::YLeaf failed; //type: uint32
        ydk::YLeaf skipped; //type: uint32
        ydk::YLeaf generate_response_failures; //type: uint32
        ydk::YLeaf unexpected; //type: uint32
        ydk::YLeaf unexpected_zlb; //type: uint32

}; // L2Tp::Counters::Control::TunnelXr::Authentication::NonceAvp


class L2Tp::Counters::Control::TunnelXr::Authentication::OverallStatistics : public ydk::Entity
{
    public:
        OverallStatistics();
        ~OverallStatistics();

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

        ydk::YLeaf validate; //type: uint32
        ydk::YLeaf bad_hash; //type: uint32
        ydk::YLeaf bad_length; //type: uint32
        ydk::YLeaf ignored; //type: uint32
        ydk::YLeaf missing; //type: uint32
        ydk::YLeaf passed; //type: uint32
        ydk::YLeaf failed; //type: uint32
        ydk::YLeaf skipped; //type: uint32
        ydk::YLeaf generate_response_failures; //type: uint32
        ydk::YLeaf unexpected; //type: uint32
        ydk::YLeaf unexpected_zlb; //type: uint32

}; // L2Tp::Counters::Control::TunnelXr::Authentication::OverallStatistics


class L2Tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest : public ydk::Entity
{
    public:
        PrimaryDigest();
        ~PrimaryDigest();

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

        ydk::YLeaf validate; //type: uint32
        ydk::YLeaf bad_hash; //type: uint32
        ydk::YLeaf bad_length; //type: uint32
        ydk::YLeaf ignored; //type: uint32
        ydk::YLeaf missing; //type: uint32
        ydk::YLeaf passed; //type: uint32
        ydk::YLeaf failed; //type: uint32
        ydk::YLeaf skipped; //type: uint32
        ydk::YLeaf generate_response_failures; //type: uint32
        ydk::YLeaf unexpected; //type: uint32
        ydk::YLeaf unexpected_zlb; //type: uint32

}; // L2Tp::Counters::Control::TunnelXr::Authentication::PrimaryDigest


class L2Tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest : public ydk::Entity
{
    public:
        SecondaryDigest();
        ~SecondaryDigest();

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

        ydk::YLeaf validate; //type: uint32
        ydk::YLeaf bad_hash; //type: uint32
        ydk::YLeaf bad_length; //type: uint32
        ydk::YLeaf ignored; //type: uint32
        ydk::YLeaf missing; //type: uint32
        ydk::YLeaf passed; //type: uint32
        ydk::YLeaf failed; //type: uint32
        ydk::YLeaf skipped; //type: uint32
        ydk::YLeaf generate_response_failures; //type: uint32
        ydk::YLeaf unexpected; //type: uint32
        ydk::YLeaf unexpected_zlb; //type: uint32

}; // L2Tp::Counters::Control::TunnelXr::Authentication::SecondaryDigest


class L2Tp::Counters::Control::TunnelXr::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

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

        ydk::YLeaf total_transmit; //type: uint32
        ydk::YLeaf total_retransmit; //type: uint32
        ydk::YLeaf total_received; //type: uint32
        ydk::YLeaf total_drop; //type: uint32
        class Transmit; //type: L2Tp::Counters::Control::TunnelXr::Global::Transmit
        class Retransmit; //type: L2Tp::Counters::Control::TunnelXr::Global::Retransmit
        class Received; //type: L2Tp::Counters::Control::TunnelXr::Global::Received
        class Drop; //type: L2Tp::Counters::Control::TunnelXr::Global::Drop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Global::Drop> drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Global::Received> received;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Global::Retransmit> retransmit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::TunnelXr::Global::Transmit> transmit;
        
}; // L2Tp::Counters::Control::TunnelXr::Global


class L2Tp::Counters::Control::TunnelXr::Global::Drop : public ydk::Entity
{
    public:
        Drop();
        ~Drop();

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

        ydk::YLeaf unknown_packets; //type: uint32
        ydk::YLeaf zero_length_body_packets; //type: uint32
        ydk::YLeaf start_control_connection_requests; //type: uint32
        ydk::YLeaf start_control_connection_replies; //type: uint32
        ydk::YLeaf start_control_connection_notifications; //type: uint32
        ydk::YLeaf stop_control_connection_notifications; //type: uint32
        ydk::YLeaf hello_packets; //type: uint32
        ydk::YLeaf outgoing_call_requests; //type: uint32
        ydk::YLeaf outgoing_call_replies; //type: uint32
        ydk::YLeaf outgoing_call_connected_packets; //type: uint32
        ydk::YLeaf incoming_call_requests; //type: uint32
        ydk::YLeaf incoming_call_replies; //type: uint32
        ydk::YLeaf incoming_call_connected_packets; //type: uint32
        ydk::YLeaf call_disconnect_notify_packets; //type: uint32
        ydk::YLeaf wan_error_notify_packets; //type: uint32
        ydk::YLeaf set_link_info_packets; //type: uint32
        ydk::YLeaf service_relay_requests; //type: uint32
        ydk::YLeaf service_relay_replies; //type: uint32
        ydk::YLeaf acknowledgement_packets; //type: uint32

}; // L2Tp::Counters::Control::TunnelXr::Global::Drop


class L2Tp::Counters::Control::TunnelXr::Global::Received : public ydk::Entity
{
    public:
        Received();
        ~Received();

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

        ydk::YLeaf unknown_packets; //type: uint32
        ydk::YLeaf zero_length_body_packets; //type: uint32
        ydk::YLeaf start_control_connection_requests; //type: uint32
        ydk::YLeaf start_control_connection_replies; //type: uint32
        ydk::YLeaf start_control_connection_notifications; //type: uint32
        ydk::YLeaf stop_control_connection_notifications; //type: uint32
        ydk::YLeaf hello_packets; //type: uint32
        ydk::YLeaf outgoing_call_requests; //type: uint32
        ydk::YLeaf outgoing_call_replies; //type: uint32
        ydk::YLeaf outgoing_call_connected_packets; //type: uint32
        ydk::YLeaf incoming_call_requests; //type: uint32
        ydk::YLeaf incoming_call_replies; //type: uint32
        ydk::YLeaf incoming_call_connected_packets; //type: uint32
        ydk::YLeaf call_disconnect_notify_packets; //type: uint32
        ydk::YLeaf wan_error_notify_packets; //type: uint32
        ydk::YLeaf set_link_info_packets; //type: uint32
        ydk::YLeaf service_relay_requests; //type: uint32
        ydk::YLeaf service_relay_replies; //type: uint32
        ydk::YLeaf acknowledgement_packets; //type: uint32

}; // L2Tp::Counters::Control::TunnelXr::Global::Received


class L2Tp::Counters::Control::TunnelXr::Global::Retransmit : public ydk::Entity
{
    public:
        Retransmit();
        ~Retransmit();

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

        ydk::YLeaf unknown_packets; //type: uint32
        ydk::YLeaf zero_length_body_packets; //type: uint32
        ydk::YLeaf start_control_connection_requests; //type: uint32
        ydk::YLeaf start_control_connection_replies; //type: uint32
        ydk::YLeaf start_control_connection_notifications; //type: uint32
        ydk::YLeaf stop_control_connection_notifications; //type: uint32
        ydk::YLeaf hello_packets; //type: uint32
        ydk::YLeaf outgoing_call_requests; //type: uint32
        ydk::YLeaf outgoing_call_replies; //type: uint32
        ydk::YLeaf outgoing_call_connected_packets; //type: uint32
        ydk::YLeaf incoming_call_requests; //type: uint32
        ydk::YLeaf incoming_call_replies; //type: uint32
        ydk::YLeaf incoming_call_connected_packets; //type: uint32
        ydk::YLeaf call_disconnect_notify_packets; //type: uint32
        ydk::YLeaf wan_error_notify_packets; //type: uint32
        ydk::YLeaf set_link_info_packets; //type: uint32
        ydk::YLeaf service_relay_requests; //type: uint32
        ydk::YLeaf service_relay_replies; //type: uint32
        ydk::YLeaf acknowledgement_packets; //type: uint32

}; // L2Tp::Counters::Control::TunnelXr::Global::Retransmit


class L2Tp::Counters::Control::TunnelXr::Global::Transmit : public ydk::Entity
{
    public:
        Transmit();
        ~Transmit();

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

        ydk::YLeaf unknown_packets; //type: uint32
        ydk::YLeaf zero_length_body_packets; //type: uint32
        ydk::YLeaf start_control_connection_requests; //type: uint32
        ydk::YLeaf start_control_connection_replies; //type: uint32
        ydk::YLeaf start_control_connection_notifications; //type: uint32
        ydk::YLeaf stop_control_connection_notifications; //type: uint32
        ydk::YLeaf hello_packets; //type: uint32
        ydk::YLeaf outgoing_call_requests; //type: uint32
        ydk::YLeaf outgoing_call_replies; //type: uint32
        ydk::YLeaf outgoing_call_connected_packets; //type: uint32
        ydk::YLeaf incoming_call_requests; //type: uint32
        ydk::YLeaf incoming_call_replies; //type: uint32
        ydk::YLeaf incoming_call_connected_packets; //type: uint32
        ydk::YLeaf call_disconnect_notify_packets; //type: uint32
        ydk::YLeaf wan_error_notify_packets; //type: uint32
        ydk::YLeaf set_link_info_packets; //type: uint32
        ydk::YLeaf service_relay_requests; //type: uint32
        ydk::YLeaf service_relay_replies; //type: uint32
        ydk::YLeaf acknowledgement_packets; //type: uint32

}; // L2Tp::Counters::Control::TunnelXr::Global::Transmit


class L2Tp::Counters::Control::Tunnels : public ydk::Entity
{
    public:
        Tunnels();
        ~Tunnels();

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

        class Tunnel; //type: L2Tp::Counters::Control::Tunnels::Tunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::Tunnels::Tunnel> > tunnel;
        
}; // L2Tp::Counters::Control::Tunnels


class L2Tp::Counters::Control::Tunnels::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

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

        ydk::YLeaf tunnel_id; //type: int32
        class Brief; //type: L2Tp::Counters::Control::Tunnels::Tunnel::Brief
        class Global; //type: L2Tp::Counters::Control::Tunnels::Tunnel::Global

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::Tunnels::Tunnel::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::Tunnels::Tunnel::Global> global;
        
}; // L2Tp::Counters::Control::Tunnels::Tunnel


class L2Tp::Counters::Control::Tunnels::Tunnel::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_tunnel_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string

}; // L2Tp::Counters::Control::Tunnels::Tunnel::Brief


class L2Tp::Counters::Control::Tunnels::Tunnel::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_transmit; //type: uint32
        ydk::YLeaf total_retransmit; //type: uint32
        ydk::YLeaf total_received; //type: uint32
        ydk::YLeaf total_drop; //type: uint32
        class Transmit; //type: L2Tp::Counters::Control::Tunnels::Tunnel::Global::Transmit
        class Retransmit; //type: L2Tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit
        class Received; //type: L2Tp::Counters::Control::Tunnels::Tunnel::Global::Received
        class Drop; //type: L2Tp::Counters::Control::Tunnels::Tunnel::Global::Drop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::Tunnels::Tunnel::Global::Drop> drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::Tunnels::Tunnel::Global::Received> received;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit> retransmit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Counters::Control::Tunnels::Tunnel::Global::Transmit> transmit;
        
}; // L2Tp::Counters::Control::Tunnels::Tunnel::Global


class L2Tp::Counters::Control::Tunnels::Tunnel::Global::Drop : public ydk::Entity
{
    public:
        Drop();
        ~Drop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unknown_packets; //type: uint32
        ydk::YLeaf zero_length_body_packets; //type: uint32
        ydk::YLeaf start_control_connection_requests; //type: uint32
        ydk::YLeaf start_control_connection_replies; //type: uint32
        ydk::YLeaf start_control_connection_notifications; //type: uint32
        ydk::YLeaf stop_control_connection_notifications; //type: uint32
        ydk::YLeaf hello_packets; //type: uint32
        ydk::YLeaf outgoing_call_requests; //type: uint32
        ydk::YLeaf outgoing_call_replies; //type: uint32
        ydk::YLeaf outgoing_call_connected_packets; //type: uint32
        ydk::YLeaf incoming_call_requests; //type: uint32
        ydk::YLeaf incoming_call_replies; //type: uint32
        ydk::YLeaf incoming_call_connected_packets; //type: uint32
        ydk::YLeaf call_disconnect_notify_packets; //type: uint32
        ydk::YLeaf wan_error_notify_packets; //type: uint32
        ydk::YLeaf set_link_info_packets; //type: uint32
        ydk::YLeaf service_relay_requests; //type: uint32
        ydk::YLeaf service_relay_replies; //type: uint32
        ydk::YLeaf acknowledgement_packets; //type: uint32

}; // L2Tp::Counters::Control::Tunnels::Tunnel::Global::Drop


class L2Tp::Counters::Control::Tunnels::Tunnel::Global::Received : public ydk::Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unknown_packets; //type: uint32
        ydk::YLeaf zero_length_body_packets; //type: uint32
        ydk::YLeaf start_control_connection_requests; //type: uint32
        ydk::YLeaf start_control_connection_replies; //type: uint32
        ydk::YLeaf start_control_connection_notifications; //type: uint32
        ydk::YLeaf stop_control_connection_notifications; //type: uint32
        ydk::YLeaf hello_packets; //type: uint32
        ydk::YLeaf outgoing_call_requests; //type: uint32
        ydk::YLeaf outgoing_call_replies; //type: uint32
        ydk::YLeaf outgoing_call_connected_packets; //type: uint32
        ydk::YLeaf incoming_call_requests; //type: uint32
        ydk::YLeaf incoming_call_replies; //type: uint32
        ydk::YLeaf incoming_call_connected_packets; //type: uint32
        ydk::YLeaf call_disconnect_notify_packets; //type: uint32
        ydk::YLeaf wan_error_notify_packets; //type: uint32
        ydk::YLeaf set_link_info_packets; //type: uint32
        ydk::YLeaf service_relay_requests; //type: uint32
        ydk::YLeaf service_relay_replies; //type: uint32
        ydk::YLeaf acknowledgement_packets; //type: uint32

}; // L2Tp::Counters::Control::Tunnels::Tunnel::Global::Received


class L2Tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit : public ydk::Entity
{
    public:
        Retransmit();
        ~Retransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unknown_packets; //type: uint32
        ydk::YLeaf zero_length_body_packets; //type: uint32
        ydk::YLeaf start_control_connection_requests; //type: uint32
        ydk::YLeaf start_control_connection_replies; //type: uint32
        ydk::YLeaf start_control_connection_notifications; //type: uint32
        ydk::YLeaf stop_control_connection_notifications; //type: uint32
        ydk::YLeaf hello_packets; //type: uint32
        ydk::YLeaf outgoing_call_requests; //type: uint32
        ydk::YLeaf outgoing_call_replies; //type: uint32
        ydk::YLeaf outgoing_call_connected_packets; //type: uint32
        ydk::YLeaf incoming_call_requests; //type: uint32
        ydk::YLeaf incoming_call_replies; //type: uint32
        ydk::YLeaf incoming_call_connected_packets; //type: uint32
        ydk::YLeaf call_disconnect_notify_packets; //type: uint32
        ydk::YLeaf wan_error_notify_packets; //type: uint32
        ydk::YLeaf set_link_info_packets; //type: uint32
        ydk::YLeaf service_relay_requests; //type: uint32
        ydk::YLeaf service_relay_replies; //type: uint32
        ydk::YLeaf acknowledgement_packets; //type: uint32

}; // L2Tp::Counters::Control::Tunnels::Tunnel::Global::Retransmit


class L2Tp::Counters::Control::Tunnels::Tunnel::Global::Transmit : public ydk::Entity
{
    public:
        Transmit();
        ~Transmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unknown_packets; //type: uint32
        ydk::YLeaf zero_length_body_packets; //type: uint32
        ydk::YLeaf start_control_connection_requests; //type: uint32
        ydk::YLeaf start_control_connection_replies; //type: uint32
        ydk::YLeaf start_control_connection_notifications; //type: uint32
        ydk::YLeaf stop_control_connection_notifications; //type: uint32
        ydk::YLeaf hello_packets; //type: uint32
        ydk::YLeaf outgoing_call_requests; //type: uint32
        ydk::YLeaf outgoing_call_replies; //type: uint32
        ydk::YLeaf outgoing_call_connected_packets; //type: uint32
        ydk::YLeaf incoming_call_requests; //type: uint32
        ydk::YLeaf incoming_call_replies; //type: uint32
        ydk::YLeaf incoming_call_connected_packets; //type: uint32
        ydk::YLeaf call_disconnect_notify_packets; //type: uint32
        ydk::YLeaf wan_error_notify_packets; //type: uint32
        ydk::YLeaf set_link_info_packets; //type: uint32
        ydk::YLeaf service_relay_requests; //type: uint32
        ydk::YLeaf service_relay_replies; //type: uint32
        ydk::YLeaf acknowledgement_packets; //type: uint32

}; // L2Tp::Counters::Control::Tunnels::Tunnel::Global::Transmit


class L2Tp::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        class Unavailable; //type: L2Tp::Session::Unavailable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Session::Unavailable> unavailable;
        
}; // L2Tp::Session


class L2Tp::Session::Unavailable : public ydk::Entity
{
    public:
        Unavailable();
        ~Unavailable();

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

        ydk::YLeaf sessions_on_hold; //type: uint32

}; // L2Tp::Session::Unavailable


class L2Tp::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

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

        class Session; //type: L2Tp::Sessions::Session

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Sessions::Session> > session;
        
}; // L2Tp::Sessions


class L2Tp::Sessions::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        ydk::YLeaf local_tunnel_id; //type: int32
        ydk::YLeaf local_session_id; //type: int32
        ydk::YLeaf local_ip_address; //type: string
        ydk::YLeaf remote_ip_address; //type: string
        ydk::YLeaf l2tp_sh_sess_udp_lport; //type: uint16
        ydk::YLeaf l2tp_sh_sess_udp_rport; //type: uint16
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf remote_tunnel_id; //type: uint32
        ydk::YLeaf call_serial_number; //type: uint32
        ydk::YLeaf local_tunnel_name; //type: string
        ydk::YLeaf remote_tunnel_name; //type: string
        ydk::YLeaf remote_session_id; //type: uint32
        ydk::YLeaf l2tp_sh_sess_tie_breaker_enabled; //type: uint8
        ydk::YLeaf l2tp_sh_sess_tie_breaker; //type: uint64
        ydk::YLeaf is_session_manual; //type: boolean
        ydk::YLeaf is_session_up; //type: boolean
        ydk::YLeaf is_udp_checksum_enabled; //type: boolean
        ydk::YLeaf is_sequencing_on; //type: boolean
        ydk::YLeaf is_session_state_established; //type: boolean
        ydk::YLeaf is_session_locally_initiated; //type: boolean
        ydk::YLeaf is_conditional_debug_enabled; //type: boolean
        ydk::YLeaf unique_id; //type: uint32
        ydk::YLeaf interface_name; //type: string
        class SessionApplicationData; //type: L2Tp::Sessions::Session::SessionApplicationData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Sessions::Session::SessionApplicationData> session_application_data;
        
}; // L2Tp::Sessions::Session


class L2Tp::Sessions::Session::SessionApplicationData : public ydk::Entity
{
    public:
        SessionApplicationData();
        ~SessionApplicationData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2tp_sh_sess_app_type; //type: uint32
        class Xconnect; //type: L2Tp::Sessions::Session::SessionApplicationData::Xconnect
        class Vpdn; //type: L2Tp::Sessions::Session::SessionApplicationData::Vpdn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Sessions::Session::SessionApplicationData::Vpdn> vpdn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Sessions::Session::SessionApplicationData::Xconnect> xconnect;
        
}; // L2Tp::Sessions::Session::SessionApplicationData


class L2Tp::Sessions::Session::SessionApplicationData::Vpdn : public ydk::Entity
{
    public:
        Vpdn();
        ~Vpdn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf username; //type: string
        ydk::YLeaf interface_name; //type: string

}; // L2Tp::Sessions::Session::SessionApplicationData::Vpdn


class L2Tp::Sessions::Session::SessionApplicationData::Xconnect : public ydk::Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf circuit_name; //type: string
        ydk::YLeaf sessionvc_id; //type: uint32
        ydk::YLeaf is_circuit_state_up; //type: boolean
        ydk::YLeaf is_local_circuit_state_up; //type: boolean
        ydk::YLeaf is_remote_circuit_state_up; //type: boolean
        ydk::YLeaf ipv6_protocol_tunneling; //type: boolean

}; // L2Tp::Sessions::Session::SessionApplicationData::Xconnect


class L2Tp::TunnelConfigurations : public ydk::Entity
{
    public:
        TunnelConfigurations();
        ~TunnelConfigurations();

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

        class TunnelConfiguration; //type: L2Tp::TunnelConfigurations::TunnelConfiguration

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::TunnelConfigurations::TunnelConfiguration> > tunnel_configuration;
        
}; // L2Tp::TunnelConfigurations


class L2Tp::TunnelConfigurations::TunnelConfiguration : public ydk::Entity
{
    public:
        TunnelConfiguration();
        ~TunnelConfiguration();

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

        ydk::YLeaf local_tunnel_id; //type: int32
        ydk::YLeaf remote_tunnel_id; //type: uint32
        class L2TpClass; //type: L2Tp::TunnelConfigurations::TunnelConfiguration::L2TpClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::TunnelConfigurations::TunnelConfiguration::L2TpClass> l2tp_class;
        
}; // L2Tp::TunnelConfigurations::TunnelConfiguration


class L2Tp::TunnelConfigurations::TunnelConfiguration::L2TpClass : public ydk::Entity
{
    public:
        L2TpClass();
        ~L2TpClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_tos; //type: uint8
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf receive_window_size; //type: uint16
        ydk::YLeaf class_name_xr; //type: string
        ydk::YLeaf digest_hash; //type: DigestHash
        ydk::YLeaf password; //type: string
        ydk::YLeaf encoded_password; //type: string
        ydk::YLeaf host_name; //type: string
        ydk::YLeaf accounting_method_list; //type: string
        ydk::YLeaf hello_timeout; //type: uint32
        ydk::YLeaf setup_timeout; //type: uint32
        ydk::YLeaf retransmit_minimum_timeout; //type: uint32
        ydk::YLeaf retransmit_maximum_timeout; //type: uint32
        ydk::YLeaf initial_retransmit_minimum_timeout; //type: uint32
        ydk::YLeaf initial_retransmit_maximum_timeout; //type: uint32
        ydk::YLeaf timeout_no_user; //type: uint32
        ydk::YLeaf retransmit_retries; //type: uint32
        ydk::YLeaf initial_retransmit_retries; //type: uint32
        ydk::YLeaf is_authentication_enabled; //type: boolean
        ydk::YLeaf is_hidden; //type: boolean
        ydk::YLeaf is_digest_enabled; //type: boolean
        ydk::YLeaf is_digest_check_enabled; //type: boolean
        ydk::YLeaf is_congestion_control_enabled; //type: boolean
        ydk::YLeaf is_peer_address_checked; //type: boolean

}; // L2Tp::TunnelConfigurations::TunnelConfiguration::L2TpClass


class L2Tp::Tunnels : public ydk::Entity
{
    public:
        Tunnels();
        ~Tunnels();

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

        class Tunnel; //type: L2Tp::Tunnels::Tunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tp::Tunnels::Tunnel> > tunnel;
        
}; // L2Tp::Tunnels


class L2Tp::Tunnels::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

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

        ydk::YLeaf local_tunnel_id; //type: int32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf local_port; //type: uint16
        ydk::YLeaf remote_port; //type: uint16
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf is_pmtu_enabled; //type: boolean
        ydk::YLeaf remote_tunnel_id; //type: uint32
        ydk::YLeaf local_tunnel_name; //type: string
        ydk::YLeaf remote_tunnel_name; //type: string
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf active_sessions; //type: uint32
        ydk::YLeaf sequence_ns; //type: uint16
        ydk::YLeaf sequence_nr; //type: uint16
        ydk::YLeaf local_window_size; //type: uint16
        ydk::YLeaf remote_window_size; //type: uint16
        ydk::YLeaf retransmission_time; //type: uint16
        ydk::YLeaf maximum_retransmission_time; //type: uint16
        ydk::YLeaf unsent_queue_size; //type: uint16
        ydk::YLeaf unsent_maximum_queue_size; //type: uint16
        ydk::YLeaf resend_queue_size; //type: uint16
        ydk::YLeaf resend_maximum_queue_size; //type: uint16
        ydk::YLeaf order_queue_size; //type: uint16
        ydk::YLeaf packet_queue_check; //type: uint16
        ydk::YLeaf digest_secrets; //type: uint16
        ydk::YLeaf resends; //type: uint32
        ydk::YLeaf zero_length_body_acknowledgement_sent; //type: uint32
        ydk::YLeaf total_out_of_order_drop_packets; //type: uint32
        ydk::YLeaf total_out_of_order_reorder_packets; //type: uint32
        ydk::YLeaf total_peer_authentication_failures; //type: uint32
        ydk::YLeaf is_tunnel_up; //type: boolean
        ydk::YLeaf is_congestion_control_enabled; //type: boolean
        ydk::YLeafList retransmit_time; //type: list of  uint16

}; // L2Tp::Tunnels::Tunnel

class L2Tpv2 : public ydk::Entity
{
    public:
        L2Tpv2();
        ~L2Tpv2();

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

        class Counters; //type: L2Tpv2::Counters
        class Statistics; //type: L2Tpv2::Statistics
        class Tunnel; //type: L2Tpv2::Tunnel
        class TunnelConfigurations; //type: L2Tpv2::TunnelConfigurations
        class CounterHistFail; //type: L2Tpv2::CounterHistFail
        class Classes; //type: L2Tpv2::Classes
        class Tunnels; //type: L2Tpv2::Tunnels
        class Sessions; //type: L2Tpv2::Sessions
        class Session; //type: L2Tpv2::Session

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Classes> classes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::CounterHistFail> counter_hist_fail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters> counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Sessions> sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Tunnel> tunnel;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::TunnelConfigurations> tunnel_configurations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Tunnels> tunnels;
        
}; // L2Tpv2


class L2Tpv2::Classes : public ydk::Entity
{
    public:
        Classes();
        ~Classes();

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

        class Class_; //type: L2Tpv2::Classes::Class_

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Classes::Class_> > class_;
        
}; // L2Tpv2::Classes


class L2Tpv2::Classes::Class_ : public ydk::Entity
{
    public:
        Class_();
        ~Class_();

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

        ydk::YLeaf class_name; //type: string
        ydk::YLeaf ip_tos; //type: uint8
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf receive_window_size; //type: uint16
        ydk::YLeaf class_name_xr; //type: string
        ydk::YLeaf digest_hash; //type: DigestHash
        ydk::YLeaf password; //type: string
        ydk::YLeaf encoded_password; //type: string
        ydk::YLeaf host_name; //type: string
        ydk::YLeaf accounting_method_list; //type: string
        ydk::YLeaf hello_timeout; //type: uint32
        ydk::YLeaf setup_timeout; //type: uint32
        ydk::YLeaf retransmit_minimum_timeout; //type: uint32
        ydk::YLeaf retransmit_maximum_timeout; //type: uint32
        ydk::YLeaf initial_retransmit_minimum_timeout; //type: uint32
        ydk::YLeaf initial_retransmit_maximum_timeout; //type: uint32
        ydk::YLeaf timeout_no_user; //type: uint32
        ydk::YLeaf retransmit_retries; //type: uint32
        ydk::YLeaf initial_retransmit_retries; //type: uint32
        ydk::YLeaf is_authentication_enabled; //type: boolean
        ydk::YLeaf is_hidden; //type: boolean
        ydk::YLeaf is_digest_enabled; //type: boolean
        ydk::YLeaf is_digest_check_enabled; //type: boolean
        ydk::YLeaf is_congestion_control_enabled; //type: boolean
        ydk::YLeaf is_peer_address_checked; //type: boolean

}; // L2Tpv2::Classes::Class_


class L2Tpv2::CounterHistFail : public ydk::Entity
{
    public:
        CounterHistFail();
        ~CounterHistFail();

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

        ydk::YLeaf sess_down_tmout; //type: uint32
        ydk::YLeaf tx_counters; //type: string
        ydk::YLeaf rx_counters; //type: string
        ydk::YLeafList pkt_timeout; //type: list of  uint32

}; // L2Tpv2::CounterHistFail


class L2Tpv2::Counters : public ydk::Entity
{
    public:
        Counters();
        ~Counters();

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

        class Forwarding; //type: L2Tpv2::Counters::Forwarding
        class Control; //type: L2Tpv2::Counters::Control

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control> control;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Forwarding> forwarding;
        
}; // L2Tpv2::Counters


class L2Tpv2::Counters::Control : public ydk::Entity
{
    public:
        Control();
        ~Control();

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

        class TunnelXr; //type: L2Tpv2::Counters::Control::TunnelXr
        class Tunnels; //type: L2Tpv2::Counters::Control::Tunnels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr> tunnel_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::Tunnels> tunnels;
        
}; // L2Tpv2::Counters::Control


class L2Tpv2::Counters::Control::TunnelXr : public ydk::Entity
{
    public:
        TunnelXr();
        ~TunnelXr();

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

        class Authentication; //type: L2Tpv2::Counters::Control::TunnelXr::Authentication
        class Global; //type: L2Tpv2::Counters::Control::TunnelXr::Global

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Global> global;
        
}; // L2Tpv2::Counters::Control::TunnelXr


class L2Tpv2::Counters::Control::TunnelXr::Authentication : public ydk::Entity
{
    public:
        Authentication();
        ~Authentication();

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

        class NonceAvp; //type: L2Tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp
        class CommonDigest; //type: L2Tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest
        class PrimaryDigest; //type: L2Tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest
        class SecondaryDigest; //type: L2Tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest
        class IntegrityCheck; //type: L2Tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck
        class LocalSecret; //type: L2Tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret
        class ChallengeAvp; //type: L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp
        class ChallengeReponse; //type: L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse
        class OverallStatistics; //type: L2Tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp> challenge_avp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse> challenge_reponse;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest> common_digest;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck> integrity_check;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret> local_secret;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp> nonce_avp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics> overall_statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest> primary_digest;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest> secondary_digest;
        
}; // L2Tpv2::Counters::Control::TunnelXr::Authentication


class L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp : public ydk::Entity
{
    public:
        ChallengeAvp();
        ~ChallengeAvp();

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

        ydk::YLeaf validate; //type: uint32
        ydk::YLeaf bad_hash; //type: uint32
        ydk::YLeaf bad_length; //type: uint32
        ydk::YLeaf ignored; //type: uint32
        ydk::YLeaf missing; //type: uint32
        ydk::YLeaf passed; //type: uint32
        ydk::YLeaf failed; //type: uint32
        ydk::YLeaf skipped; //type: uint32
        ydk::YLeaf generate_response_failures; //type: uint32
        ydk::YLeaf unexpected; //type: uint32
        ydk::YLeaf unexpected_zlb; //type: uint32

}; // L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeAvp


class L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse : public ydk::Entity
{
    public:
        ChallengeReponse();
        ~ChallengeReponse();

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

        ydk::YLeaf validate; //type: uint32
        ydk::YLeaf bad_hash; //type: uint32
        ydk::YLeaf bad_length; //type: uint32
        ydk::YLeaf ignored; //type: uint32
        ydk::YLeaf missing; //type: uint32
        ydk::YLeaf passed; //type: uint32
        ydk::YLeaf failed; //type: uint32
        ydk::YLeaf skipped; //type: uint32
        ydk::YLeaf generate_response_failures; //type: uint32
        ydk::YLeaf unexpected; //type: uint32
        ydk::YLeaf unexpected_zlb; //type: uint32

}; // L2Tpv2::Counters::Control::TunnelXr::Authentication::ChallengeReponse


class L2Tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest : public ydk::Entity
{
    public:
        CommonDigest();
        ~CommonDigest();

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

        ydk::YLeaf validate; //type: uint32
        ydk::YLeaf bad_hash; //type: uint32
        ydk::YLeaf bad_length; //type: uint32
        ydk::YLeaf ignored; //type: uint32
        ydk::YLeaf missing; //type: uint32
        ydk::YLeaf passed; //type: uint32
        ydk::YLeaf failed; //type: uint32
        ydk::YLeaf skipped; //type: uint32
        ydk::YLeaf generate_response_failures; //type: uint32
        ydk::YLeaf unexpected; //type: uint32
        ydk::YLeaf unexpected_zlb; //type: uint32

}; // L2Tpv2::Counters::Control::TunnelXr::Authentication::CommonDigest


class L2Tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck : public ydk::Entity
{
    public:
        IntegrityCheck();
        ~IntegrityCheck();

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

        ydk::YLeaf validate; //type: uint32
        ydk::YLeaf bad_hash; //type: uint32
        ydk::YLeaf bad_length; //type: uint32
        ydk::YLeaf ignored; //type: uint32
        ydk::YLeaf missing; //type: uint32
        ydk::YLeaf passed; //type: uint32
        ydk::YLeaf failed; //type: uint32
        ydk::YLeaf skipped; //type: uint32
        ydk::YLeaf generate_response_failures; //type: uint32
        ydk::YLeaf unexpected; //type: uint32
        ydk::YLeaf unexpected_zlb; //type: uint32

}; // L2Tpv2::Counters::Control::TunnelXr::Authentication::IntegrityCheck


class L2Tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret : public ydk::Entity
{
    public:
        LocalSecret();
        ~LocalSecret();

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

        ydk::YLeaf validate; //type: uint32
        ydk::YLeaf bad_hash; //type: uint32
        ydk::YLeaf bad_length; //type: uint32
        ydk::YLeaf ignored; //type: uint32
        ydk::YLeaf missing; //type: uint32
        ydk::YLeaf passed; //type: uint32
        ydk::YLeaf failed; //type: uint32
        ydk::YLeaf skipped; //type: uint32
        ydk::YLeaf generate_response_failures; //type: uint32
        ydk::YLeaf unexpected; //type: uint32
        ydk::YLeaf unexpected_zlb; //type: uint32

}; // L2Tpv2::Counters::Control::TunnelXr::Authentication::LocalSecret


class L2Tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp : public ydk::Entity
{
    public:
        NonceAvp();
        ~NonceAvp();

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

        ydk::YLeaf validate; //type: uint32
        ydk::YLeaf bad_hash; //type: uint32
        ydk::YLeaf bad_length; //type: uint32
        ydk::YLeaf ignored; //type: uint32
        ydk::YLeaf missing; //type: uint32
        ydk::YLeaf passed; //type: uint32
        ydk::YLeaf failed; //type: uint32
        ydk::YLeaf skipped; //type: uint32
        ydk::YLeaf generate_response_failures; //type: uint32
        ydk::YLeaf unexpected; //type: uint32
        ydk::YLeaf unexpected_zlb; //type: uint32

}; // L2Tpv2::Counters::Control::TunnelXr::Authentication::NonceAvp


class L2Tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics : public ydk::Entity
{
    public:
        OverallStatistics();
        ~OverallStatistics();

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

        ydk::YLeaf validate; //type: uint32
        ydk::YLeaf bad_hash; //type: uint32
        ydk::YLeaf bad_length; //type: uint32
        ydk::YLeaf ignored; //type: uint32
        ydk::YLeaf missing; //type: uint32
        ydk::YLeaf passed; //type: uint32
        ydk::YLeaf failed; //type: uint32
        ydk::YLeaf skipped; //type: uint32
        ydk::YLeaf generate_response_failures; //type: uint32
        ydk::YLeaf unexpected; //type: uint32
        ydk::YLeaf unexpected_zlb; //type: uint32

}; // L2Tpv2::Counters::Control::TunnelXr::Authentication::OverallStatistics


class L2Tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest : public ydk::Entity
{
    public:
        PrimaryDigest();
        ~PrimaryDigest();

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

        ydk::YLeaf validate; //type: uint32
        ydk::YLeaf bad_hash; //type: uint32
        ydk::YLeaf bad_length; //type: uint32
        ydk::YLeaf ignored; //type: uint32
        ydk::YLeaf missing; //type: uint32
        ydk::YLeaf passed; //type: uint32
        ydk::YLeaf failed; //type: uint32
        ydk::YLeaf skipped; //type: uint32
        ydk::YLeaf generate_response_failures; //type: uint32
        ydk::YLeaf unexpected; //type: uint32
        ydk::YLeaf unexpected_zlb; //type: uint32

}; // L2Tpv2::Counters::Control::TunnelXr::Authentication::PrimaryDigest


class L2Tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest : public ydk::Entity
{
    public:
        SecondaryDigest();
        ~SecondaryDigest();

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

        ydk::YLeaf validate; //type: uint32
        ydk::YLeaf bad_hash; //type: uint32
        ydk::YLeaf bad_length; //type: uint32
        ydk::YLeaf ignored; //type: uint32
        ydk::YLeaf missing; //type: uint32
        ydk::YLeaf passed; //type: uint32
        ydk::YLeaf failed; //type: uint32
        ydk::YLeaf skipped; //type: uint32
        ydk::YLeaf generate_response_failures; //type: uint32
        ydk::YLeaf unexpected; //type: uint32
        ydk::YLeaf unexpected_zlb; //type: uint32

}; // L2Tpv2::Counters::Control::TunnelXr::Authentication::SecondaryDigest


class L2Tpv2::Counters::Control::TunnelXr::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

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

        ydk::YLeaf total_transmit; //type: uint32
        ydk::YLeaf total_retransmit; //type: uint32
        ydk::YLeaf total_received; //type: uint32
        ydk::YLeaf total_drop; //type: uint32
        class Transmit; //type: L2Tpv2::Counters::Control::TunnelXr::Global::Transmit
        class Retransmit; //type: L2Tpv2::Counters::Control::TunnelXr::Global::Retransmit
        class Received; //type: L2Tpv2::Counters::Control::TunnelXr::Global::Received
        class Drop; //type: L2Tpv2::Counters::Control::TunnelXr::Global::Drop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Global::Drop> drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Global::Received> received;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Global::Retransmit> retransmit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::TunnelXr::Global::Transmit> transmit;
        
}; // L2Tpv2::Counters::Control::TunnelXr::Global


class L2Tpv2::Counters::Control::TunnelXr::Global::Drop : public ydk::Entity
{
    public:
        Drop();
        ~Drop();

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

        ydk::YLeaf unknown_packets; //type: uint32
        ydk::YLeaf zero_length_body_packets; //type: uint32
        ydk::YLeaf start_control_connection_requests; //type: uint32
        ydk::YLeaf start_control_connection_replies; //type: uint32
        ydk::YLeaf start_control_connection_notifications; //type: uint32
        ydk::YLeaf stop_control_connection_notifications; //type: uint32
        ydk::YLeaf hello_packets; //type: uint32
        ydk::YLeaf outgoing_call_requests; //type: uint32
        ydk::YLeaf outgoing_call_replies; //type: uint32
        ydk::YLeaf outgoing_call_connected_packets; //type: uint32
        ydk::YLeaf incoming_call_requests; //type: uint32
        ydk::YLeaf incoming_call_replies; //type: uint32
        ydk::YLeaf incoming_call_connected_packets; //type: uint32
        ydk::YLeaf call_disconnect_notify_packets; //type: uint32
        ydk::YLeaf wan_error_notify_packets; //type: uint32
        ydk::YLeaf set_link_info_packets; //type: uint32
        ydk::YLeaf service_relay_requests; //type: uint32
        ydk::YLeaf service_relay_replies; //type: uint32
        ydk::YLeaf acknowledgement_packets; //type: uint32

}; // L2Tpv2::Counters::Control::TunnelXr::Global::Drop


class L2Tpv2::Counters::Control::TunnelXr::Global::Received : public ydk::Entity
{
    public:
        Received();
        ~Received();

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

        ydk::YLeaf unknown_packets; //type: uint32
        ydk::YLeaf zero_length_body_packets; //type: uint32
        ydk::YLeaf start_control_connection_requests; //type: uint32
        ydk::YLeaf start_control_connection_replies; //type: uint32
        ydk::YLeaf start_control_connection_notifications; //type: uint32
        ydk::YLeaf stop_control_connection_notifications; //type: uint32
        ydk::YLeaf hello_packets; //type: uint32
        ydk::YLeaf outgoing_call_requests; //type: uint32
        ydk::YLeaf outgoing_call_replies; //type: uint32
        ydk::YLeaf outgoing_call_connected_packets; //type: uint32
        ydk::YLeaf incoming_call_requests; //type: uint32
        ydk::YLeaf incoming_call_replies; //type: uint32
        ydk::YLeaf incoming_call_connected_packets; //type: uint32
        ydk::YLeaf call_disconnect_notify_packets; //type: uint32
        ydk::YLeaf wan_error_notify_packets; //type: uint32
        ydk::YLeaf set_link_info_packets; //type: uint32
        ydk::YLeaf service_relay_requests; //type: uint32
        ydk::YLeaf service_relay_replies; //type: uint32
        ydk::YLeaf acknowledgement_packets; //type: uint32

}; // L2Tpv2::Counters::Control::TunnelXr::Global::Received


class L2Tpv2::Counters::Control::TunnelXr::Global::Retransmit : public ydk::Entity
{
    public:
        Retransmit();
        ~Retransmit();

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

        ydk::YLeaf unknown_packets; //type: uint32
        ydk::YLeaf zero_length_body_packets; //type: uint32
        ydk::YLeaf start_control_connection_requests; //type: uint32
        ydk::YLeaf start_control_connection_replies; //type: uint32
        ydk::YLeaf start_control_connection_notifications; //type: uint32
        ydk::YLeaf stop_control_connection_notifications; //type: uint32
        ydk::YLeaf hello_packets; //type: uint32
        ydk::YLeaf outgoing_call_requests; //type: uint32
        ydk::YLeaf outgoing_call_replies; //type: uint32
        ydk::YLeaf outgoing_call_connected_packets; //type: uint32
        ydk::YLeaf incoming_call_requests; //type: uint32
        ydk::YLeaf incoming_call_replies; //type: uint32
        ydk::YLeaf incoming_call_connected_packets; //type: uint32
        ydk::YLeaf call_disconnect_notify_packets; //type: uint32
        ydk::YLeaf wan_error_notify_packets; //type: uint32
        ydk::YLeaf set_link_info_packets; //type: uint32
        ydk::YLeaf service_relay_requests; //type: uint32
        ydk::YLeaf service_relay_replies; //type: uint32
        ydk::YLeaf acknowledgement_packets; //type: uint32

}; // L2Tpv2::Counters::Control::TunnelXr::Global::Retransmit


class L2Tpv2::Counters::Control::TunnelXr::Global::Transmit : public ydk::Entity
{
    public:
        Transmit();
        ~Transmit();

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

        ydk::YLeaf unknown_packets; //type: uint32
        ydk::YLeaf zero_length_body_packets; //type: uint32
        ydk::YLeaf start_control_connection_requests; //type: uint32
        ydk::YLeaf start_control_connection_replies; //type: uint32
        ydk::YLeaf start_control_connection_notifications; //type: uint32
        ydk::YLeaf stop_control_connection_notifications; //type: uint32
        ydk::YLeaf hello_packets; //type: uint32
        ydk::YLeaf outgoing_call_requests; //type: uint32
        ydk::YLeaf outgoing_call_replies; //type: uint32
        ydk::YLeaf outgoing_call_connected_packets; //type: uint32
        ydk::YLeaf incoming_call_requests; //type: uint32
        ydk::YLeaf incoming_call_replies; //type: uint32
        ydk::YLeaf incoming_call_connected_packets; //type: uint32
        ydk::YLeaf call_disconnect_notify_packets; //type: uint32
        ydk::YLeaf wan_error_notify_packets; //type: uint32
        ydk::YLeaf set_link_info_packets; //type: uint32
        ydk::YLeaf service_relay_requests; //type: uint32
        ydk::YLeaf service_relay_replies; //type: uint32
        ydk::YLeaf acknowledgement_packets; //type: uint32

}; // L2Tpv2::Counters::Control::TunnelXr::Global::Transmit


class L2Tpv2::Counters::Control::Tunnels : public ydk::Entity
{
    public:
        Tunnels();
        ~Tunnels();

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

        class Tunnel; //type: L2Tpv2::Counters::Control::Tunnels::Tunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::Tunnels::Tunnel> > tunnel;
        
}; // L2Tpv2::Counters::Control::Tunnels


class L2Tpv2::Counters::Control::Tunnels::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

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

        ydk::YLeaf tunnel_id; //type: int32
        class Brief; //type: L2Tpv2::Counters::Control::Tunnels::Tunnel::Brief
        class Global; //type: L2Tpv2::Counters::Control::Tunnels::Tunnel::Global

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::Tunnels::Tunnel::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::Tunnels::Tunnel::Global> global;
        
}; // L2Tpv2::Counters::Control::Tunnels::Tunnel


class L2Tpv2::Counters::Control::Tunnels::Tunnel::Brief : public ydk::Entity
{
    public:
        Brief();
        ~Brief();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf remote_tunnel_id; //type: uint32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string

}; // L2Tpv2::Counters::Control::Tunnels::Tunnel::Brief


class L2Tpv2::Counters::Control::Tunnels::Tunnel::Global : public ydk::Entity
{
    public:
        Global();
        ~Global();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf total_transmit; //type: uint32
        ydk::YLeaf total_retransmit; //type: uint32
        ydk::YLeaf total_received; //type: uint32
        ydk::YLeaf total_drop; //type: uint32
        class Transmit; //type: L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit
        class Retransmit; //type: L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit
        class Received; //type: L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Received
        class Drop; //type: L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop> drop;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Received> received;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit> retransmit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit> transmit;
        
}; // L2Tpv2::Counters::Control::Tunnels::Tunnel::Global


class L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop : public ydk::Entity
{
    public:
        Drop();
        ~Drop();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unknown_packets; //type: uint32
        ydk::YLeaf zero_length_body_packets; //type: uint32
        ydk::YLeaf start_control_connection_requests; //type: uint32
        ydk::YLeaf start_control_connection_replies; //type: uint32
        ydk::YLeaf start_control_connection_notifications; //type: uint32
        ydk::YLeaf stop_control_connection_notifications; //type: uint32
        ydk::YLeaf hello_packets; //type: uint32
        ydk::YLeaf outgoing_call_requests; //type: uint32
        ydk::YLeaf outgoing_call_replies; //type: uint32
        ydk::YLeaf outgoing_call_connected_packets; //type: uint32
        ydk::YLeaf incoming_call_requests; //type: uint32
        ydk::YLeaf incoming_call_replies; //type: uint32
        ydk::YLeaf incoming_call_connected_packets; //type: uint32
        ydk::YLeaf call_disconnect_notify_packets; //type: uint32
        ydk::YLeaf wan_error_notify_packets; //type: uint32
        ydk::YLeaf set_link_info_packets; //type: uint32
        ydk::YLeaf service_relay_requests; //type: uint32
        ydk::YLeaf service_relay_replies; //type: uint32
        ydk::YLeaf acknowledgement_packets; //type: uint32

}; // L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Drop


class L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Received : public ydk::Entity
{
    public:
        Received();
        ~Received();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unknown_packets; //type: uint32
        ydk::YLeaf zero_length_body_packets; //type: uint32
        ydk::YLeaf start_control_connection_requests; //type: uint32
        ydk::YLeaf start_control_connection_replies; //type: uint32
        ydk::YLeaf start_control_connection_notifications; //type: uint32
        ydk::YLeaf stop_control_connection_notifications; //type: uint32
        ydk::YLeaf hello_packets; //type: uint32
        ydk::YLeaf outgoing_call_requests; //type: uint32
        ydk::YLeaf outgoing_call_replies; //type: uint32
        ydk::YLeaf outgoing_call_connected_packets; //type: uint32
        ydk::YLeaf incoming_call_requests; //type: uint32
        ydk::YLeaf incoming_call_replies; //type: uint32
        ydk::YLeaf incoming_call_connected_packets; //type: uint32
        ydk::YLeaf call_disconnect_notify_packets; //type: uint32
        ydk::YLeaf wan_error_notify_packets; //type: uint32
        ydk::YLeaf set_link_info_packets; //type: uint32
        ydk::YLeaf service_relay_requests; //type: uint32
        ydk::YLeaf service_relay_replies; //type: uint32
        ydk::YLeaf acknowledgement_packets; //type: uint32

}; // L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Received


class L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit : public ydk::Entity
{
    public:
        Retransmit();
        ~Retransmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unknown_packets; //type: uint32
        ydk::YLeaf zero_length_body_packets; //type: uint32
        ydk::YLeaf start_control_connection_requests; //type: uint32
        ydk::YLeaf start_control_connection_replies; //type: uint32
        ydk::YLeaf start_control_connection_notifications; //type: uint32
        ydk::YLeaf stop_control_connection_notifications; //type: uint32
        ydk::YLeaf hello_packets; //type: uint32
        ydk::YLeaf outgoing_call_requests; //type: uint32
        ydk::YLeaf outgoing_call_replies; //type: uint32
        ydk::YLeaf outgoing_call_connected_packets; //type: uint32
        ydk::YLeaf incoming_call_requests; //type: uint32
        ydk::YLeaf incoming_call_replies; //type: uint32
        ydk::YLeaf incoming_call_connected_packets; //type: uint32
        ydk::YLeaf call_disconnect_notify_packets; //type: uint32
        ydk::YLeaf wan_error_notify_packets; //type: uint32
        ydk::YLeaf set_link_info_packets; //type: uint32
        ydk::YLeaf service_relay_requests; //type: uint32
        ydk::YLeaf service_relay_replies; //type: uint32
        ydk::YLeaf acknowledgement_packets; //type: uint32

}; // L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Retransmit


class L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit : public ydk::Entity
{
    public:
        Transmit();
        ~Transmit();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf unknown_packets; //type: uint32
        ydk::YLeaf zero_length_body_packets; //type: uint32
        ydk::YLeaf start_control_connection_requests; //type: uint32
        ydk::YLeaf start_control_connection_replies; //type: uint32
        ydk::YLeaf start_control_connection_notifications; //type: uint32
        ydk::YLeaf stop_control_connection_notifications; //type: uint32
        ydk::YLeaf hello_packets; //type: uint32
        ydk::YLeaf outgoing_call_requests; //type: uint32
        ydk::YLeaf outgoing_call_replies; //type: uint32
        ydk::YLeaf outgoing_call_connected_packets; //type: uint32
        ydk::YLeaf incoming_call_requests; //type: uint32
        ydk::YLeaf incoming_call_replies; //type: uint32
        ydk::YLeaf incoming_call_connected_packets; //type: uint32
        ydk::YLeaf call_disconnect_notify_packets; //type: uint32
        ydk::YLeaf wan_error_notify_packets; //type: uint32
        ydk::YLeaf set_link_info_packets; //type: uint32
        ydk::YLeaf service_relay_requests; //type: uint32
        ydk::YLeaf service_relay_replies; //type: uint32
        ydk::YLeaf acknowledgement_packets; //type: uint32

}; // L2Tpv2::Counters::Control::Tunnels::Tunnel::Global::Transmit


class L2Tpv2::Counters::Forwarding : public ydk::Entity
{
    public:
        Forwarding();
        ~Forwarding();

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

        class Sessions; //type: L2Tpv2::Counters::Forwarding::Sessions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Forwarding::Sessions> sessions;
        
}; // L2Tpv2::Counters::Forwarding


class L2Tpv2::Counters::Forwarding::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

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

        class Session; //type: L2Tpv2::Counters::Forwarding::Sessions::Session

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Counters::Forwarding::Sessions::Session> > session;
        
}; // L2Tpv2::Counters::Forwarding::Sessions


class L2Tpv2::Counters::Forwarding::Sessions::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        ydk::YLeaf tunnel_id; //type: int32
        ydk::YLeaf session_id; //type: int32
        ydk::YLeaf remote_session_id; //type: uint32
        ydk::YLeaf in_packets; //type: uint64
        ydk::YLeaf out_packets; //type: uint64
        ydk::YLeaf in_bytes; //type: uint64
        ydk::YLeaf out_bytes; //type: uint64

}; // L2Tpv2::Counters::Forwarding::Sessions::Session


class L2Tpv2::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        class Unavailable; //type: L2Tpv2::Session::Unavailable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Session::Unavailable> unavailable;
        
}; // L2Tpv2::Session


class L2Tpv2::Session::Unavailable : public ydk::Entity
{
    public:
        Unavailable();
        ~Unavailable();

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

        ydk::YLeaf sessions_on_hold; //type: uint32

}; // L2Tpv2::Session::Unavailable


class L2Tpv2::Sessions : public ydk::Entity
{
    public:
        Sessions();
        ~Sessions();

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

        class Session; //type: L2Tpv2::Sessions::Session

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Sessions::Session> > session;
        
}; // L2Tpv2::Sessions


class L2Tpv2::Sessions::Session : public ydk::Entity
{
    public:
        Session();
        ~Session();

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

        ydk::YLeaf local_tunnel_id; //type: int32
        ydk::YLeaf local_session_id; //type: int32
        ydk::YLeaf local_ip_address; //type: string
        ydk::YLeaf remote_ip_address; //type: string
        ydk::YLeaf l2tp_sh_sess_udp_lport; //type: uint16
        ydk::YLeaf l2tp_sh_sess_udp_rport; //type: uint16
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf remote_tunnel_id; //type: uint32
        ydk::YLeaf call_serial_number; //type: uint32
        ydk::YLeaf local_tunnel_name; //type: string
        ydk::YLeaf remote_tunnel_name; //type: string
        ydk::YLeaf remote_session_id; //type: uint32
        ydk::YLeaf l2tp_sh_sess_tie_breaker_enabled; //type: uint8
        ydk::YLeaf l2tp_sh_sess_tie_breaker; //type: uint64
        ydk::YLeaf is_session_manual; //type: boolean
        ydk::YLeaf is_session_up; //type: boolean
        ydk::YLeaf is_udp_checksum_enabled; //type: boolean
        ydk::YLeaf is_sequencing_on; //type: boolean
        ydk::YLeaf is_session_state_established; //type: boolean
        ydk::YLeaf is_session_locally_initiated; //type: boolean
        ydk::YLeaf is_conditional_debug_enabled; //type: boolean
        ydk::YLeaf unique_id; //type: uint32
        ydk::YLeaf interface_name; //type: string
        class SessionApplicationData; //type: L2Tpv2::Sessions::Session::SessionApplicationData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Sessions::Session::SessionApplicationData> session_application_data;
        
}; // L2Tpv2::Sessions::Session


class L2Tpv2::Sessions::Session::SessionApplicationData : public ydk::Entity
{
    public:
        SessionApplicationData();
        ~SessionApplicationData();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2tp_sh_sess_app_type; //type: uint32
        class Xconnect; //type: L2Tpv2::Sessions::Session::SessionApplicationData::Xconnect
        class Vpdn; //type: L2Tpv2::Sessions::Session::SessionApplicationData::Vpdn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Sessions::Session::SessionApplicationData::Vpdn> vpdn;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Sessions::Session::SessionApplicationData::Xconnect> xconnect;
        
}; // L2Tpv2::Sessions::Session::SessionApplicationData


class L2Tpv2::Sessions::Session::SessionApplicationData::Vpdn : public ydk::Entity
{
    public:
        Vpdn();
        ~Vpdn();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf username; //type: string
        ydk::YLeaf interface_name; //type: string

}; // L2Tpv2::Sessions::Session::SessionApplicationData::Vpdn


class L2Tpv2::Sessions::Session::SessionApplicationData::Xconnect : public ydk::Entity
{
    public:
        Xconnect();
        ~Xconnect();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf circuit_name; //type: string
        ydk::YLeaf sessionvc_id; //type: uint32
        ydk::YLeaf is_circuit_state_up; //type: boolean
        ydk::YLeaf is_local_circuit_state_up; //type: boolean
        ydk::YLeaf is_remote_circuit_state_up; //type: boolean
        ydk::YLeaf ipv6_protocol_tunneling; //type: boolean

}; // L2Tpv2::Sessions::Session::SessionApplicationData::Xconnect


class L2Tpv2::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

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

        ydk::YLeaf tunnels; //type: uint32
        ydk::YLeaf sessions; //type: uint32
        ydk::YLeaf sent_packets; //type: uint32
        ydk::YLeaf received_packets; //type: uint32
        ydk::YLeaf average_packet_processing_time; //type: uint32
        ydk::YLeaf received_out_of_order_packets; //type: uint32
        ydk::YLeaf reorder_packets; //type: uint32
        ydk::YLeaf reorder_deviation_packets; //type: uint32
        ydk::YLeaf incoming_dropped_packets; //type: uint32
        ydk::YLeaf buffered_packets; //type: uint32
        ydk::YLeaf netio_packets; //type: uint32

}; // L2Tpv2::Statistics


class L2Tpv2::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

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

        class Accounting; //type: L2Tpv2::Tunnel::Accounting

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Tunnel::Accounting> accounting;
        
}; // L2Tpv2::Tunnel


class L2Tpv2::Tunnel::Accounting : public ydk::Entity
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
        std::string get_absolute_path() const override;

        class Statistics; //type: L2Tpv2::Tunnel::Accounting::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Tunnel::Accounting::Statistics> statistics;
        
}; // L2Tpv2::Tunnel::Accounting


class L2Tpv2::Tunnel::Accounting::Statistics : public ydk::Entity
{
    public:
        Statistics();
        ~Statistics();

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

        ydk::YLeaf records_sent_successfully; //type: uint64
        ydk::YLeaf start; //type: uint64
        ydk::YLeaf stop; //type: uint64
        ydk::YLeaf reject; //type: uint64
        ydk::YLeaf transport_failures; //type: uint64
        ydk::YLeaf positive_acknowledgement; //type: uint64
        ydk::YLeaf negative_acknowledgement; //type: uint64
        ydk::YLeaf records_checkpointed; //type: uint64
        ydk::YLeaf records_failed_to_checkpoint; //type: uint64
        ydk::YLeaf records_sent_from_queue; //type: uint64
        ydk::YLeaf memory_failures; //type: uint32
        ydk::YLeaf current_size; //type: uint32
        ydk::YLeaf records_recovered_from_checkpoint; //type: uint32
        ydk::YLeaf records_fail_to_recover; //type: uint32
        ydk::YLeaf queue_statistics_size; //type: int32

}; // L2Tpv2::Tunnel::Accounting::Statistics


class L2Tpv2::TunnelConfigurations : public ydk::Entity
{
    public:
        TunnelConfigurations();
        ~TunnelConfigurations();

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

        class TunnelConfiguration; //type: L2Tpv2::TunnelConfigurations::TunnelConfiguration

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::TunnelConfigurations::TunnelConfiguration> > tunnel_configuration;
        
}; // L2Tpv2::TunnelConfigurations


class L2Tpv2::TunnelConfigurations::TunnelConfiguration : public ydk::Entity
{
    public:
        TunnelConfiguration();
        ~TunnelConfiguration();

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

        ydk::YLeaf local_tunnel_id; //type: int32
        ydk::YLeaf remote_tunnel_id; //type: uint32
        class L2TpClass; //type: L2Tpv2::TunnelConfigurations::TunnelConfiguration::L2TpClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::TunnelConfigurations::TunnelConfiguration::L2TpClass> l2tp_class;
        
}; // L2Tpv2::TunnelConfigurations::TunnelConfiguration


class L2Tpv2::TunnelConfigurations::TunnelConfiguration::L2TpClass : public ydk::Entity
{
    public:
        L2TpClass();
        ~L2TpClass();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf ip_tos; //type: uint8
        ydk::YLeaf vrf_name; //type: string
        ydk::YLeaf receive_window_size; //type: uint16
        ydk::YLeaf class_name_xr; //type: string
        ydk::YLeaf digest_hash; //type: DigestHash
        ydk::YLeaf password; //type: string
        ydk::YLeaf encoded_password; //type: string
        ydk::YLeaf host_name; //type: string
        ydk::YLeaf accounting_method_list; //type: string
        ydk::YLeaf hello_timeout; //type: uint32
        ydk::YLeaf setup_timeout; //type: uint32
        ydk::YLeaf retransmit_minimum_timeout; //type: uint32
        ydk::YLeaf retransmit_maximum_timeout; //type: uint32
        ydk::YLeaf initial_retransmit_minimum_timeout; //type: uint32
        ydk::YLeaf initial_retransmit_maximum_timeout; //type: uint32
        ydk::YLeaf timeout_no_user; //type: uint32
        ydk::YLeaf retransmit_retries; //type: uint32
        ydk::YLeaf initial_retransmit_retries; //type: uint32
        ydk::YLeaf is_authentication_enabled; //type: boolean
        ydk::YLeaf is_hidden; //type: boolean
        ydk::YLeaf is_digest_enabled; //type: boolean
        ydk::YLeaf is_digest_check_enabled; //type: boolean
        ydk::YLeaf is_congestion_control_enabled; //type: boolean
        ydk::YLeaf is_peer_address_checked; //type: boolean

}; // L2Tpv2::TunnelConfigurations::TunnelConfiguration::L2TpClass


class L2Tpv2::Tunnels : public ydk::Entity
{
    public:
        Tunnels();
        ~Tunnels();

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

        class Tunnel; //type: L2Tpv2::Tunnels::Tunnel

        std::vector<std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2Tpv2::Tunnels::Tunnel> > tunnel;
        
}; // L2Tpv2::Tunnels


class L2Tpv2::Tunnels::Tunnel : public ydk::Entity
{
    public:
        Tunnel();
        ~Tunnel();

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

        ydk::YLeaf local_tunnel_id; //type: int32
        ydk::YLeaf local_address; //type: string
        ydk::YLeaf remote_address; //type: string
        ydk::YLeaf local_port; //type: uint16
        ydk::YLeaf remote_port; //type: uint16
        ydk::YLeaf protocol; //type: uint8
        ydk::YLeaf is_pmtu_enabled; //type: boolean
        ydk::YLeaf remote_tunnel_id; //type: uint32
        ydk::YLeaf local_tunnel_name; //type: string
        ydk::YLeaf remote_tunnel_name; //type: string
        ydk::YLeaf class_name; //type: string
        ydk::YLeaf active_sessions; //type: uint32
        ydk::YLeaf sequence_ns; //type: uint16
        ydk::YLeaf sequence_nr; //type: uint16
        ydk::YLeaf local_window_size; //type: uint16
        ydk::YLeaf remote_window_size; //type: uint16
        ydk::YLeaf retransmission_time; //type: uint16
        ydk::YLeaf maximum_retransmission_time; //type: uint16
        ydk::YLeaf unsent_queue_size; //type: uint16
        ydk::YLeaf unsent_maximum_queue_size; //type: uint16
        ydk::YLeaf resend_queue_size; //type: uint16
        ydk::YLeaf resend_maximum_queue_size; //type: uint16
        ydk::YLeaf order_queue_size; //type: uint16
        ydk::YLeaf packet_queue_check; //type: uint16
        ydk::YLeaf digest_secrets; //type: uint16
        ydk::YLeaf resends; //type: uint32
        ydk::YLeaf zero_length_body_acknowledgement_sent; //type: uint32
        ydk::YLeaf total_out_of_order_drop_packets; //type: uint32
        ydk::YLeaf total_out_of_order_reorder_packets; //type: uint32
        ydk::YLeaf total_peer_authentication_failures; //type: uint32
        ydk::YLeaf is_tunnel_up; //type: boolean
        ydk::YLeaf is_congestion_control_enabled; //type: boolean
        ydk::YLeafList retransmit_time; //type: list of  uint16

}; // L2Tpv2::Tunnels::Tunnel

class DigestHash : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha1;

};


}
}

#endif /* _CISCO_IOS_XR_TUNNEL_L2TUN_OPER_ */

