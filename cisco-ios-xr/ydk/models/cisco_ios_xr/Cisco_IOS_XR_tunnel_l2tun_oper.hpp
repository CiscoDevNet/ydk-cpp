#ifndef _CISCO_IOS_XR_TUNNEL_L2TUN_OPER_
#define _CISCO_IOS_XR_TUNNEL_L2TUN_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_tunnel_l2tun_oper {

class L2tp : public ydk::Entity
{
    public:
        L2tp();
        ~L2tp();

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

        class Nodes; //type: L2tp::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes> nodes;
        
}; // L2tp


class L2tp::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

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

        class Node; //type: L2tp::Nodes::Node

        ydk::YList node;
        
}; // L2tp::Nodes


class L2tp::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

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

        ydk::YLeaf node_name; //type: string
        class Counters; //type: L2tp::Nodes::Node::Counters
        class TunnelConfigurations; //type: L2tp::Nodes::Node::TunnelConfigurations
        class CounterHistFail; //type: L2tp::Nodes::Node::CounterHistFail
        class Classes; //type: L2tp::Nodes::Node::Classes
        class Tunnels; //type: L2tp::Nodes::Node::Tunnels
        class Sessions; //type: L2tp::Nodes::Node::Sessions
        class Session; //type: L2tp::Nodes::Node::Session
        class Internal; //type: L2tp::Nodes::Node::Internal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Counters> counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::TunnelConfigurations> tunnel_configurations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::CounterHistFail> counter_hist_fail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Classes> classes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Tunnels> tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Sessions> sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Internal> internal;
        
}; // L2tp::Nodes::Node


class L2tp::Nodes::Node::Counters : public ydk::Entity
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

        class Control; //type: L2tp::Nodes::Node::Counters::Control

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Counters::Control> control;
        
}; // L2tp::Nodes::Node::Counters


class L2tp::Nodes::Node::Counters::Control : public ydk::Entity
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

        class TunnelXr; //type: L2tp::Nodes::Node::Counters::Control::TunnelXr
        class Tunnels; //type: L2tp::Nodes::Node::Counters::Control::Tunnels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Counters::Control::TunnelXr> tunnel_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Counters::Control::Tunnels> tunnels;
        
}; // L2tp::Nodes::Node::Counters::Control


class L2tp::Nodes::Node::Counters::Control::TunnelXr : public ydk::Entity
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

        class Authentication; //type: L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication
        class Global; //type: L2tp::Nodes::Node::Counters::Control::TunnelXr::Global

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Counters::Control::TunnelXr::Global> global;
        
}; // L2tp::Nodes::Node::Counters::Control::TunnelXr


class L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication : public ydk::Entity
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

        class NonceAvp; //type: L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::NonceAvp
        class CommonDigest; //type: L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::CommonDigest
        class PrimaryDigest; //type: L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::PrimaryDigest
        class SecondaryDigest; //type: L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::SecondaryDigest
        class IntegrityCheck; //type: L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::IntegrityCheck
        class LocalSecret; //type: L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::LocalSecret
        class ChallengeAvp; //type: L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::ChallengeAvp
        class ChallengeReponse; //type: L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::ChallengeReponse
        class OverallStatistics; //type: L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::OverallStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::NonceAvp> nonce_avp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::CommonDigest> common_digest;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::PrimaryDigest> primary_digest;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::SecondaryDigest> secondary_digest;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::IntegrityCheck> integrity_check;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::LocalSecret> local_secret;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::ChallengeAvp> challenge_avp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::ChallengeReponse> challenge_reponse;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::OverallStatistics> overall_statistics;
        
}; // L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication


class L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::NonceAvp : public ydk::Entity
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

}; // L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::NonceAvp


class L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::CommonDigest : public ydk::Entity
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

}; // L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::CommonDigest


class L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::PrimaryDigest : public ydk::Entity
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

}; // L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::PrimaryDigest


class L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::SecondaryDigest : public ydk::Entity
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

}; // L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::SecondaryDigest


class L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::IntegrityCheck : public ydk::Entity
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

}; // L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::IntegrityCheck


class L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::LocalSecret : public ydk::Entity
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

}; // L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::LocalSecret


class L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::ChallengeAvp : public ydk::Entity
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

}; // L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::ChallengeAvp


class L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::ChallengeReponse : public ydk::Entity
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

}; // L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::ChallengeReponse


class L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::OverallStatistics : public ydk::Entity
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

}; // L2tp::Nodes::Node::Counters::Control::TunnelXr::Authentication::OverallStatistics


class L2tp::Nodes::Node::Counters::Control::TunnelXr::Global : public ydk::Entity
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
        class Transmit; //type: L2tp::Nodes::Node::Counters::Control::TunnelXr::Global::Transmit
        class Retransmit; //type: L2tp::Nodes::Node::Counters::Control::TunnelXr::Global::Retransmit
        class Received; //type: L2tp::Nodes::Node::Counters::Control::TunnelXr::Global::Received
        class Drop; //type: L2tp::Nodes::Node::Counters::Control::TunnelXr::Global::Drop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Counters::Control::TunnelXr::Global::Transmit> transmit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Counters::Control::TunnelXr::Global::Retransmit> retransmit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Counters::Control::TunnelXr::Global::Received> received;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Counters::Control::TunnelXr::Global::Drop> drop;
        
}; // L2tp::Nodes::Node::Counters::Control::TunnelXr::Global


class L2tp::Nodes::Node::Counters::Control::TunnelXr::Global::Transmit : public ydk::Entity
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

}; // L2tp::Nodes::Node::Counters::Control::TunnelXr::Global::Transmit


class L2tp::Nodes::Node::Counters::Control::TunnelXr::Global::Retransmit : public ydk::Entity
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

}; // L2tp::Nodes::Node::Counters::Control::TunnelXr::Global::Retransmit


class L2tp::Nodes::Node::Counters::Control::TunnelXr::Global::Received : public ydk::Entity
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

}; // L2tp::Nodes::Node::Counters::Control::TunnelXr::Global::Received


class L2tp::Nodes::Node::Counters::Control::TunnelXr::Global::Drop : public ydk::Entity
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

}; // L2tp::Nodes::Node::Counters::Control::TunnelXr::Global::Drop


class L2tp::Nodes::Node::Counters::Control::Tunnels : public ydk::Entity
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

        class Tunnel; //type: L2tp::Nodes::Node::Counters::Control::Tunnels::Tunnel

        ydk::YList tunnel;
        
}; // L2tp::Nodes::Node::Counters::Control::Tunnels


class L2tp::Nodes::Node::Counters::Control::Tunnels::Tunnel : public ydk::Entity
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

        ydk::YLeaf tunnel_id; //type: uint32
        class Brief; //type: L2tp::Nodes::Node::Counters::Control::Tunnels::Tunnel::Brief
        class Global; //type: L2tp::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Counters::Control::Tunnels::Tunnel::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global> global;
        
}; // L2tp::Nodes::Node::Counters::Control::Tunnels::Tunnel


class L2tp::Nodes::Node::Counters::Control::Tunnels::Tunnel::Brief : public ydk::Entity
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

}; // L2tp::Nodes::Node::Counters::Control::Tunnels::Tunnel::Brief


class L2tp::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global : public ydk::Entity
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
        class Transmit; //type: L2tp::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Transmit
        class Retransmit; //type: L2tp::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Retransmit
        class Received; //type: L2tp::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Received
        class Drop; //type: L2tp::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Drop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Transmit> transmit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Retransmit> retransmit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Received> received;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Drop> drop;
        
}; // L2tp::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global


class L2tp::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Transmit : public ydk::Entity
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

}; // L2tp::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Transmit


class L2tp::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Retransmit : public ydk::Entity
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

}; // L2tp::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Retransmit


class L2tp::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Received : public ydk::Entity
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

}; // L2tp::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Received


class L2tp::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Drop : public ydk::Entity
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

}; // L2tp::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Drop


class L2tp::Nodes::Node::TunnelConfigurations : public ydk::Entity
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

        class TunnelConfiguration; //type: L2tp::Nodes::Node::TunnelConfigurations::TunnelConfiguration

        ydk::YList tunnel_configuration;
        
}; // L2tp::Nodes::Node::TunnelConfigurations


class L2tp::Nodes::Node::TunnelConfigurations::TunnelConfiguration : public ydk::Entity
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

        ydk::YLeaf local_tunnel_id; //type: uint32
        ydk::YLeaf remote_tunnel_id; //type: uint32
        class L2tpClass; //type: L2tp::Nodes::Node::TunnelConfigurations::TunnelConfiguration::L2tpClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::TunnelConfigurations::TunnelConfiguration::L2tpClass> l2tp_class;
        
}; // L2tp::Nodes::Node::TunnelConfigurations::TunnelConfiguration


class L2tp::Nodes::Node::TunnelConfigurations::TunnelConfiguration::L2tpClass : public ydk::Entity
{
    public:
        L2tpClass();
        ~L2tpClass();

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

}; // L2tp::Nodes::Node::TunnelConfigurations::TunnelConfiguration::L2tpClass


class L2tp::Nodes::Node::CounterHistFail : public ydk::Entity
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

        ydk::YLeaf sess_down_tmout; //type: uint32
        ydk::YLeaf tx_counters; //type: string
        ydk::YLeaf rx_counters; //type: string
        class PktTimeout; //type: L2tp::Nodes::Node::CounterHistFail::PktTimeout

        ydk::YList pkt_timeout;
        
}; // L2tp::Nodes::Node::CounterHistFail


class L2tp::Nodes::Node::CounterHistFail::PktTimeout : public ydk::Entity
{
    public:
        PktTimeout();
        ~PktTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // L2tp::Nodes::Node::CounterHistFail::PktTimeout


class L2tp::Nodes::Node::Classes : public ydk::Entity
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

        class Class; //type: L2tp::Nodes::Node::Classes::Class

        ydk::YList class_;
        
}; // L2tp::Nodes::Node::Classes


class L2tp::Nodes::Node::Classes::Class : public ydk::Entity
{
    public:
        Class();
        ~Class();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

}; // L2tp::Nodes::Node::Classes::Class


class L2tp::Nodes::Node::Tunnels : public ydk::Entity
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

        class Tunnel; //type: L2tp::Nodes::Node::Tunnels::Tunnel

        ydk::YList tunnel;
        
}; // L2tp::Nodes::Node::Tunnels


class L2tp::Nodes::Node::Tunnels::Tunnel : public ydk::Entity
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

        ydk::YLeaf local_tunnel_id; //type: uint32
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
        class RetransmitTime; //type: L2tp::Nodes::Node::Tunnels::Tunnel::RetransmitTime

        ydk::YList retransmit_time;
        
}; // L2tp::Nodes::Node::Tunnels::Tunnel


class L2tp::Nodes::Node::Tunnels::Tunnel::RetransmitTime : public ydk::Entity
{
    public:
        RetransmitTime();
        ~RetransmitTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // L2tp::Nodes::Node::Tunnels::Tunnel::RetransmitTime


class L2tp::Nodes::Node::Sessions : public ydk::Entity
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

        class Session; //type: L2tp::Nodes::Node::Sessions::Session

        ydk::YList session;
        
}; // L2tp::Nodes::Node::Sessions


class L2tp::Nodes::Node::Sessions::Session : public ydk::Entity
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

        ydk::YLeaf local_tunnel_id; //type: uint32
        ydk::YLeaf local_session_id; //type: uint32
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
        class SessionApplicationData; //type: L2tp::Nodes::Node::Sessions::Session::SessionApplicationData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Sessions::Session::SessionApplicationData> session_application_data;
        
}; // L2tp::Nodes::Node::Sessions::Session


class L2tp::Nodes::Node::Sessions::Session::SessionApplicationData : public ydk::Entity
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
        class Xconnect; //type: L2tp::Nodes::Node::Sessions::Session::SessionApplicationData::Xconnect
        class Vpdn; //type: L2tp::Nodes::Node::Sessions::Session::SessionApplicationData::Vpdn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Sessions::Session::SessionApplicationData::Xconnect> xconnect;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Sessions::Session::SessionApplicationData::Vpdn> vpdn;
        
}; // L2tp::Nodes::Node::Sessions::Session::SessionApplicationData


class L2tp::Nodes::Node::Sessions::Session::SessionApplicationData::Xconnect : public ydk::Entity
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

}; // L2tp::Nodes::Node::Sessions::Session::SessionApplicationData::Xconnect


class L2tp::Nodes::Node::Sessions::Session::SessionApplicationData::Vpdn : public ydk::Entity
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

}; // L2tp::Nodes::Node::Sessions::Session::SessionApplicationData::Vpdn


class L2tp::Nodes::Node::Session : public ydk::Entity
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

        class Unavailable; //type: L2tp::Nodes::Node::Session::Unavailable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Session::Unavailable> unavailable;
        
}; // L2tp::Nodes::Node::Session


class L2tp::Nodes::Node::Session::Unavailable : public ydk::Entity
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

        ydk::YLeaf sessions_on_hold; //type: uint32

}; // L2tp::Nodes::Node::Session::Unavailable


class L2tp::Nodes::Node::Internal : public ydk::Entity
{
    public:
        Internal();
        ~Internal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_last_clear; //type: uint32
        class InternalStats; //type: L2tp::Nodes::Node::Internal::InternalStats
        class InternalStatsLastClear; //type: L2tp::Nodes::Node::Internal::InternalStatsLastClear

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Internal::InternalStats> internal_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tp::Nodes::Node::Internal::InternalStatsLastClear> internal_stats_last_clear;
        
}; // L2tp::Nodes::Node::Internal


class L2tp::Nodes::Node::Internal::InternalStats : public ydk::Entity
{
    public:
        InternalStats();
        ~InternalStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2tp_sh_l2x_num_tunnels; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_sessions; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_rx_high_water_mark; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_ave_msg_process_usecs; //type: uint64
        ydk::YLeaf l2tp_sh_l2x_num_rx_msgs; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_tx_msgs; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_tx_err_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_tx_conn_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_reordered_msgs; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_max_reorder_deviation; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_ooo_msgs; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_rx_path_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_rx_path_data_pkt_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_rx_queue_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_rx_ooo_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_buffered_msgs; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_mutex_block; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_bad_len_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_bad_avp_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_missing_cc_id_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_missing_sess_id_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_mismatch_cc_id_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_unknown_cc_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_unknown_sess_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_linear_id_search; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_linear_id_search_fail; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_netio_pkt_rx; //type: uint32
        ydk::YLeaf l2tp_sh_l2tun_ave_msg_process_usecs; //type: uint64
        ydk::YLeaf l2tp_sh_l2tun_num_rx_msgs; //type: uint32
        ydk::YLeaf l2tp_sh_l2tun_num_tx_msgs; //type: uint32
        ydk::YLeaf l2tp_l2tun_socket_ens_send_error_cnt; //type: uint32
        ydk::YLeaf l2tp_l2tun_socket_session_accept; //type: uint64
        ydk::YLeaf l2tp_l2tun_socket_session_destroy; //type: uint64
        ydk::YLeaf l2tp_l2tun_socket_session_connect; //type: uint64
        ydk::YLeaf l2tp_l2tun_socket_session_connect_continue; //type: uint64
        ydk::YLeaf l2tp_l2tun_session_connecting; //type: uint64
        ydk::YLeaf l2tp_l2tun_session_connected; //type: uint64
        ydk::YLeaf l2tp_l2tun_session_disconnected; //type: uint64
        ydk::YLeaf l2tp_l2tun_session_incoming; //type: uint64
        ydk::YLeaf l2tp_l2tun_session_updated; //type: uint64
        ydk::YLeaf l2tp_l2tun_session_circuit_status; //type: uint64
        ydk::YLeaf l2x_lpts_pa_stats_setup_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_destroy_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_alloc_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_alloc_fail_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_init_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_init_fail_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_free_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_pulse_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_pulse_fail_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_bind_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_bind_fail_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_bind_batch_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_bind_batch_fail_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_bind_time; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_expire_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_replay_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_replay_batch_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_replay_time; //type: uint32

}; // L2tp::Nodes::Node::Internal::InternalStats


class L2tp::Nodes::Node::Internal::InternalStatsLastClear : public ydk::Entity
{
    public:
        InternalStatsLastClear();
        ~InternalStatsLastClear();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2tp_sh_l2x_num_tunnels; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_sessions; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_rx_high_water_mark; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_ave_msg_process_usecs; //type: uint64
        ydk::YLeaf l2tp_sh_l2x_num_rx_msgs; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_tx_msgs; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_tx_err_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_tx_conn_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_reordered_msgs; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_max_reorder_deviation; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_ooo_msgs; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_rx_path_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_rx_path_data_pkt_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_rx_queue_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_rx_ooo_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_buffered_msgs; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_mutex_block; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_bad_len_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_bad_avp_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_missing_cc_id_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_missing_sess_id_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_mismatch_cc_id_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_unknown_cc_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_unknown_sess_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_linear_id_search; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_linear_id_search_fail; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_netio_pkt_rx; //type: uint32
        ydk::YLeaf l2tp_sh_l2tun_ave_msg_process_usecs; //type: uint64
        ydk::YLeaf l2tp_sh_l2tun_num_rx_msgs; //type: uint32
        ydk::YLeaf l2tp_sh_l2tun_num_tx_msgs; //type: uint32
        ydk::YLeaf l2tp_l2tun_socket_ens_send_error_cnt; //type: uint32
        ydk::YLeaf l2tp_l2tun_socket_session_accept; //type: uint64
        ydk::YLeaf l2tp_l2tun_socket_session_destroy; //type: uint64
        ydk::YLeaf l2tp_l2tun_socket_session_connect; //type: uint64
        ydk::YLeaf l2tp_l2tun_socket_session_connect_continue; //type: uint64
        ydk::YLeaf l2tp_l2tun_session_connecting; //type: uint64
        ydk::YLeaf l2tp_l2tun_session_connected; //type: uint64
        ydk::YLeaf l2tp_l2tun_session_disconnected; //type: uint64
        ydk::YLeaf l2tp_l2tun_session_incoming; //type: uint64
        ydk::YLeaf l2tp_l2tun_session_updated; //type: uint64
        ydk::YLeaf l2tp_l2tun_session_circuit_status; //type: uint64
        ydk::YLeaf l2x_lpts_pa_stats_setup_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_destroy_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_alloc_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_alloc_fail_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_init_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_init_fail_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_free_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_pulse_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_pulse_fail_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_bind_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_bind_fail_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_bind_batch_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_bind_batch_fail_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_bind_time; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_expire_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_replay_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_replay_batch_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_replay_time; //type: uint32

}; // L2tp::Nodes::Node::Internal::InternalStatsLastClear

class L2tpv2 : public ydk::Entity
{
    public:
        L2tpv2();
        ~L2tpv2();

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

        class Nodes; //type: L2tpv2::Nodes

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes> nodes;
        
}; // L2tpv2


class L2tpv2::Nodes : public ydk::Entity
{
    public:
        Nodes();
        ~Nodes();

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

        class Node; //type: L2tpv2::Nodes::Node

        ydk::YList node;
        
}; // L2tpv2::Nodes


class L2tpv2::Nodes::Node : public ydk::Entity
{
    public:
        Node();
        ~Node();

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

        ydk::YLeaf node_name; //type: string
        class Counters; //type: L2tpv2::Nodes::Node::Counters
        class Statistics; //type: L2tpv2::Nodes::Node::Statistics
        class Tunnel; //type: L2tpv2::Nodes::Node::Tunnel
        class TunnelConfigurations; //type: L2tpv2::Nodes::Node::TunnelConfigurations
        class CounterHistFail; //type: L2tpv2::Nodes::Node::CounterHistFail
        class Classes; //type: L2tpv2::Nodes::Node::Classes
        class Tunnels; //type: L2tpv2::Nodes::Node::Tunnels
        class Sessions; //type: L2tpv2::Nodes::Node::Sessions
        class Session; //type: L2tpv2::Nodes::Node::Session
        class Internal; //type: L2tpv2::Nodes::Node::Internal

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Counters> counters;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Statistics> statistics;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Tunnel> tunnel;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::TunnelConfigurations> tunnel_configurations;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::CounterHistFail> counter_hist_fail;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Classes> classes;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Tunnels> tunnels;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Sessions> sessions;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Session> session;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Internal> internal;
        
}; // L2tpv2::Nodes::Node


class L2tpv2::Nodes::Node::Counters : public ydk::Entity
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

        class Forwarding; //type: L2tpv2::Nodes::Node::Counters::Forwarding
        class Control; //type: L2tpv2::Nodes::Node::Counters::Control

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Counters::Forwarding> forwarding;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Counters::Control> control;
        
}; // L2tpv2::Nodes::Node::Counters


class L2tpv2::Nodes::Node::Counters::Forwarding : public ydk::Entity
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

        class Sessions; //type: L2tpv2::Nodes::Node::Counters::Forwarding::Sessions

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Counters::Forwarding::Sessions> sessions;
        
}; // L2tpv2::Nodes::Node::Counters::Forwarding


class L2tpv2::Nodes::Node::Counters::Forwarding::Sessions : public ydk::Entity
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

        class Session; //type: L2tpv2::Nodes::Node::Counters::Forwarding::Sessions::Session

        ydk::YList session;
        
}; // L2tpv2::Nodes::Node::Counters::Forwarding::Sessions


class L2tpv2::Nodes::Node::Counters::Forwarding::Sessions::Session : public ydk::Entity
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

        ydk::YLeaf tunnel_id; //type: uint32
        ydk::YLeaf session_id; //type: uint32
        ydk::YLeaf remote_session_id; //type: uint32
        ydk::YLeaf in_packets; //type: uint64
        ydk::YLeaf out_packets; //type: uint64
        ydk::YLeaf in_bytes; //type: uint64
        ydk::YLeaf out_bytes; //type: uint64

}; // L2tpv2::Nodes::Node::Counters::Forwarding::Sessions::Session


class L2tpv2::Nodes::Node::Counters::Control : public ydk::Entity
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

        class TunnelXr; //type: L2tpv2::Nodes::Node::Counters::Control::TunnelXr
        class Tunnels; //type: L2tpv2::Nodes::Node::Counters::Control::Tunnels

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Counters::Control::TunnelXr> tunnel_xr;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Counters::Control::Tunnels> tunnels;
        
}; // L2tpv2::Nodes::Node::Counters::Control


class L2tpv2::Nodes::Node::Counters::Control::TunnelXr : public ydk::Entity
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

        class Authentication; //type: L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication
        class Global; //type: L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Global

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication> authentication;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Global> global;
        
}; // L2tpv2::Nodes::Node::Counters::Control::TunnelXr


class L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication : public ydk::Entity
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

        class NonceAvp; //type: L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::NonceAvp
        class CommonDigest; //type: L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::CommonDigest
        class PrimaryDigest; //type: L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::PrimaryDigest
        class SecondaryDigest; //type: L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::SecondaryDigest
        class IntegrityCheck; //type: L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::IntegrityCheck
        class LocalSecret; //type: L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::LocalSecret
        class ChallengeAvp; //type: L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::ChallengeAvp
        class ChallengeReponse; //type: L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::ChallengeReponse
        class OverallStatistics; //type: L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::OverallStatistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::NonceAvp> nonce_avp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::CommonDigest> common_digest;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::PrimaryDigest> primary_digest;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::SecondaryDigest> secondary_digest;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::IntegrityCheck> integrity_check;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::LocalSecret> local_secret;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::ChallengeAvp> challenge_avp;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::ChallengeReponse> challenge_reponse;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::OverallStatistics> overall_statistics;
        
}; // L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication


class L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::NonceAvp : public ydk::Entity
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

}; // L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::NonceAvp


class L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::CommonDigest : public ydk::Entity
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

}; // L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::CommonDigest


class L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::PrimaryDigest : public ydk::Entity
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

}; // L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::PrimaryDigest


class L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::SecondaryDigest : public ydk::Entity
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

}; // L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::SecondaryDigest


class L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::IntegrityCheck : public ydk::Entity
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

}; // L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::IntegrityCheck


class L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::LocalSecret : public ydk::Entity
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

}; // L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::LocalSecret


class L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::ChallengeAvp : public ydk::Entity
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

}; // L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::ChallengeAvp


class L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::ChallengeReponse : public ydk::Entity
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

}; // L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::ChallengeReponse


class L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::OverallStatistics : public ydk::Entity
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

}; // L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Authentication::OverallStatistics


class L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Global : public ydk::Entity
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
        class Transmit; //type: L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Global::Transmit
        class Retransmit; //type: L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Global::Retransmit
        class Received; //type: L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Global::Received
        class Drop; //type: L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Global::Drop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Global::Transmit> transmit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Global::Retransmit> retransmit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Global::Received> received;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Global::Drop> drop;
        
}; // L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Global


class L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Global::Transmit : public ydk::Entity
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

}; // L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Global::Transmit


class L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Global::Retransmit : public ydk::Entity
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

}; // L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Global::Retransmit


class L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Global::Received : public ydk::Entity
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

}; // L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Global::Received


class L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Global::Drop : public ydk::Entity
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

}; // L2tpv2::Nodes::Node::Counters::Control::TunnelXr::Global::Drop


class L2tpv2::Nodes::Node::Counters::Control::Tunnels : public ydk::Entity
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

        class Tunnel; //type: L2tpv2::Nodes::Node::Counters::Control::Tunnels::Tunnel

        ydk::YList tunnel;
        
}; // L2tpv2::Nodes::Node::Counters::Control::Tunnels


class L2tpv2::Nodes::Node::Counters::Control::Tunnels::Tunnel : public ydk::Entity
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

        ydk::YLeaf tunnel_id; //type: uint32
        class Brief; //type: L2tpv2::Nodes::Node::Counters::Control::Tunnels::Tunnel::Brief
        class Global; //type: L2tpv2::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Counters::Control::Tunnels::Tunnel::Brief> brief;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global> global;
        
}; // L2tpv2::Nodes::Node::Counters::Control::Tunnels::Tunnel


class L2tpv2::Nodes::Node::Counters::Control::Tunnels::Tunnel::Brief : public ydk::Entity
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

}; // L2tpv2::Nodes::Node::Counters::Control::Tunnels::Tunnel::Brief


class L2tpv2::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global : public ydk::Entity
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
        class Transmit; //type: L2tpv2::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Transmit
        class Retransmit; //type: L2tpv2::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Retransmit
        class Received; //type: L2tpv2::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Received
        class Drop; //type: L2tpv2::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Drop

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Transmit> transmit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Retransmit> retransmit;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Received> received;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Drop> drop;
        
}; // L2tpv2::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global


class L2tpv2::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Transmit : public ydk::Entity
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

}; // L2tpv2::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Transmit


class L2tpv2::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Retransmit : public ydk::Entity
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

}; // L2tpv2::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Retransmit


class L2tpv2::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Received : public ydk::Entity
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

}; // L2tpv2::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Received


class L2tpv2::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Drop : public ydk::Entity
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

}; // L2tpv2::Nodes::Node::Counters::Control::Tunnels::Tunnel::Global::Drop


class L2tpv2::Nodes::Node::Statistics : public ydk::Entity
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

}; // L2tpv2::Nodes::Node::Statistics


class L2tpv2::Nodes::Node::Tunnel : public ydk::Entity
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

        class Accounting; //type: L2tpv2::Nodes::Node::Tunnel::Accounting

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Tunnel::Accounting> accounting;
        
}; // L2tpv2::Nodes::Node::Tunnel


class L2tpv2::Nodes::Node::Tunnel::Accounting : public ydk::Entity
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

        class Statistics; //type: L2tpv2::Nodes::Node::Tunnel::Accounting::Statistics

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Tunnel::Accounting::Statistics> statistics;
        
}; // L2tpv2::Nodes::Node::Tunnel::Accounting


class L2tpv2::Nodes::Node::Tunnel::Accounting::Statistics : public ydk::Entity
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

}; // L2tpv2::Nodes::Node::Tunnel::Accounting::Statistics


class L2tpv2::Nodes::Node::TunnelConfigurations : public ydk::Entity
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

        class TunnelConfiguration; //type: L2tpv2::Nodes::Node::TunnelConfigurations::TunnelConfiguration

        ydk::YList tunnel_configuration;
        
}; // L2tpv2::Nodes::Node::TunnelConfigurations


class L2tpv2::Nodes::Node::TunnelConfigurations::TunnelConfiguration : public ydk::Entity
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

        ydk::YLeaf local_tunnel_id; //type: uint32
        ydk::YLeaf remote_tunnel_id; //type: uint32
        class L2tpClass; //type: L2tpv2::Nodes::Node::TunnelConfigurations::TunnelConfiguration::L2tpClass

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::TunnelConfigurations::TunnelConfiguration::L2tpClass> l2tp_class;
        
}; // L2tpv2::Nodes::Node::TunnelConfigurations::TunnelConfiguration


class L2tpv2::Nodes::Node::TunnelConfigurations::TunnelConfiguration::L2tpClass : public ydk::Entity
{
    public:
        L2tpClass();
        ~L2tpClass();

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

}; // L2tpv2::Nodes::Node::TunnelConfigurations::TunnelConfiguration::L2tpClass


class L2tpv2::Nodes::Node::CounterHistFail : public ydk::Entity
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

        ydk::YLeaf sess_down_tmout; //type: uint32
        ydk::YLeaf tx_counters; //type: string
        ydk::YLeaf rx_counters; //type: string
        class PktTimeout; //type: L2tpv2::Nodes::Node::CounterHistFail::PktTimeout

        ydk::YList pkt_timeout;
        
}; // L2tpv2::Nodes::Node::CounterHistFail


class L2tpv2::Nodes::Node::CounterHistFail::PktTimeout : public ydk::Entity
{
    public:
        PktTimeout();
        ~PktTimeout();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint32

}; // L2tpv2::Nodes::Node::CounterHistFail::PktTimeout


class L2tpv2::Nodes::Node::Classes : public ydk::Entity
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

        class Class; //type: L2tpv2::Nodes::Node::Classes::Class

        ydk::YList class_;
        
}; // L2tpv2::Nodes::Node::Classes


class L2tpv2::Nodes::Node::Classes::Class : public ydk::Entity
{
    public:
        Class();
        ~Class();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

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

}; // L2tpv2::Nodes::Node::Classes::Class


class L2tpv2::Nodes::Node::Tunnels : public ydk::Entity
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

        class Tunnel; //type: L2tpv2::Nodes::Node::Tunnels::Tunnel

        ydk::YList tunnel;
        
}; // L2tpv2::Nodes::Node::Tunnels


class L2tpv2::Nodes::Node::Tunnels::Tunnel : public ydk::Entity
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

        ydk::YLeaf local_tunnel_id; //type: uint32
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
        class RetransmitTime; //type: L2tpv2::Nodes::Node::Tunnels::Tunnel::RetransmitTime

        ydk::YList retransmit_time;
        
}; // L2tpv2::Nodes::Node::Tunnels::Tunnel


class L2tpv2::Nodes::Node::Tunnels::Tunnel::RetransmitTime : public ydk::Entity
{
    public:
        RetransmitTime();
        ~RetransmitTime();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf entry; //type: uint16

}; // L2tpv2::Nodes::Node::Tunnels::Tunnel::RetransmitTime


class L2tpv2::Nodes::Node::Sessions : public ydk::Entity
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

        class Session; //type: L2tpv2::Nodes::Node::Sessions::Session

        ydk::YList session;
        
}; // L2tpv2::Nodes::Node::Sessions


class L2tpv2::Nodes::Node::Sessions::Session : public ydk::Entity
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

        ydk::YLeaf local_tunnel_id; //type: uint32
        ydk::YLeaf local_session_id; //type: uint32
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
        class SessionApplicationData; //type: L2tpv2::Nodes::Node::Sessions::Session::SessionApplicationData

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Sessions::Session::SessionApplicationData> session_application_data;
        
}; // L2tpv2::Nodes::Node::Sessions::Session


class L2tpv2::Nodes::Node::Sessions::Session::SessionApplicationData : public ydk::Entity
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
        class Xconnect; //type: L2tpv2::Nodes::Node::Sessions::Session::SessionApplicationData::Xconnect
        class Vpdn; //type: L2tpv2::Nodes::Node::Sessions::Session::SessionApplicationData::Vpdn

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Sessions::Session::SessionApplicationData::Xconnect> xconnect;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Sessions::Session::SessionApplicationData::Vpdn> vpdn;
        
}; // L2tpv2::Nodes::Node::Sessions::Session::SessionApplicationData


class L2tpv2::Nodes::Node::Sessions::Session::SessionApplicationData::Xconnect : public ydk::Entity
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

}; // L2tpv2::Nodes::Node::Sessions::Session::SessionApplicationData::Xconnect


class L2tpv2::Nodes::Node::Sessions::Session::SessionApplicationData::Vpdn : public ydk::Entity
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

}; // L2tpv2::Nodes::Node::Sessions::Session::SessionApplicationData::Vpdn


class L2tpv2::Nodes::Node::Session : public ydk::Entity
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

        class Unavailable; //type: L2tpv2::Nodes::Node::Session::Unavailable

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Session::Unavailable> unavailable;
        
}; // L2tpv2::Nodes::Node::Session


class L2tpv2::Nodes::Node::Session::Unavailable : public ydk::Entity
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

        ydk::YLeaf sessions_on_hold; //type: uint32

}; // L2tpv2::Nodes::Node::Session::Unavailable


class L2tpv2::Nodes::Node::Internal : public ydk::Entity
{
    public:
        Internal();
        ~Internal();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf time_last_clear; //type: uint32
        class InternalStats; //type: L2tpv2::Nodes::Node::Internal::InternalStats
        class InternalStatsLastClear; //type: L2tpv2::Nodes::Node::Internal::InternalStatsLastClear

        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Internal::InternalStats> internal_stats;
        std::shared_ptr<cisco_ios_xr::Cisco_IOS_XR_tunnel_l2tun_oper::L2tpv2::Nodes::Node::Internal::InternalStatsLastClear> internal_stats_last_clear;
        
}; // L2tpv2::Nodes::Node::Internal


class L2tpv2::Nodes::Node::Internal::InternalStats : public ydk::Entity
{
    public:
        InternalStats();
        ~InternalStats();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2tp_sh_l2x_num_tunnels; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_sessions; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_rx_high_water_mark; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_ave_msg_process_usecs; //type: uint64
        ydk::YLeaf l2tp_sh_l2x_num_rx_msgs; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_tx_msgs; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_tx_err_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_tx_conn_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_reordered_msgs; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_max_reorder_deviation; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_ooo_msgs; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_rx_path_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_rx_path_data_pkt_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_rx_queue_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_rx_ooo_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_buffered_msgs; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_mutex_block; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_bad_len_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_bad_avp_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_missing_cc_id_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_missing_sess_id_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_mismatch_cc_id_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_unknown_cc_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_unknown_sess_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_linear_id_search; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_linear_id_search_fail; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_netio_pkt_rx; //type: uint32
        ydk::YLeaf l2tp_sh_l2tun_ave_msg_process_usecs; //type: uint64
        ydk::YLeaf l2tp_sh_l2tun_num_rx_msgs; //type: uint32
        ydk::YLeaf l2tp_sh_l2tun_num_tx_msgs; //type: uint32
        ydk::YLeaf l2tp_l2tun_socket_ens_send_error_cnt; //type: uint32
        ydk::YLeaf l2tp_l2tun_socket_session_accept; //type: uint64
        ydk::YLeaf l2tp_l2tun_socket_session_destroy; //type: uint64
        ydk::YLeaf l2tp_l2tun_socket_session_connect; //type: uint64
        ydk::YLeaf l2tp_l2tun_socket_session_connect_continue; //type: uint64
        ydk::YLeaf l2tp_l2tun_session_connecting; //type: uint64
        ydk::YLeaf l2tp_l2tun_session_connected; //type: uint64
        ydk::YLeaf l2tp_l2tun_session_disconnected; //type: uint64
        ydk::YLeaf l2tp_l2tun_session_incoming; //type: uint64
        ydk::YLeaf l2tp_l2tun_session_updated; //type: uint64
        ydk::YLeaf l2tp_l2tun_session_circuit_status; //type: uint64
        ydk::YLeaf l2x_lpts_pa_stats_setup_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_destroy_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_alloc_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_alloc_fail_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_init_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_init_fail_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_free_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_pulse_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_pulse_fail_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_bind_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_bind_fail_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_bind_batch_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_bind_batch_fail_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_bind_time; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_expire_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_replay_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_replay_batch_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_replay_time; //type: uint32

}; // L2tpv2::Nodes::Node::Internal::InternalStats


class L2tpv2::Nodes::Node::Internal::InternalStatsLastClear : public ydk::Entity
{
    public:
        InternalStatsLastClear();
        ~InternalStatsLastClear();

        bool has_data() const override;
        bool has_operation() const override;
        std::vector<std::pair<std::string, ydk::LeafData> > get_name_leaf_data() const override;
        std::string get_segment_path() const override;
        std::shared_ptr<ydk::Entity> get_child_by_name(const std::string & yang_name, const std::string & segment_path) override;
        void set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix) override;
        void set_filter(const std::string & value_path, ydk::YFilter yfliter) override;
        std::map<std::string, std::shared_ptr<ydk::Entity>> get_children() const override;
        bool has_leaf_or_child_of_name(const std::string & name) const override;

        ydk::YLeaf l2tp_sh_l2x_num_tunnels; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_sessions; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_rx_high_water_mark; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_ave_msg_process_usecs; //type: uint64
        ydk::YLeaf l2tp_sh_l2x_num_rx_msgs; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_tx_msgs; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_tx_err_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_tx_conn_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_reordered_msgs; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_max_reorder_deviation; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_ooo_msgs; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_rx_path_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_rx_path_data_pkt_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_rx_queue_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_rx_ooo_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_buffered_msgs; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_mutex_block; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_bad_len_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_bad_avp_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_missing_cc_id_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_missing_sess_id_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_mismatch_cc_id_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_unknown_cc_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_unknown_sess_drops; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_linear_id_search; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_linear_id_search_fail; //type: uint32
        ydk::YLeaf l2tp_sh_l2x_num_netio_pkt_rx; //type: uint32
        ydk::YLeaf l2tp_sh_l2tun_ave_msg_process_usecs; //type: uint64
        ydk::YLeaf l2tp_sh_l2tun_num_rx_msgs; //type: uint32
        ydk::YLeaf l2tp_sh_l2tun_num_tx_msgs; //type: uint32
        ydk::YLeaf l2tp_l2tun_socket_ens_send_error_cnt; //type: uint32
        ydk::YLeaf l2tp_l2tun_socket_session_accept; //type: uint64
        ydk::YLeaf l2tp_l2tun_socket_session_destroy; //type: uint64
        ydk::YLeaf l2tp_l2tun_socket_session_connect; //type: uint64
        ydk::YLeaf l2tp_l2tun_socket_session_connect_continue; //type: uint64
        ydk::YLeaf l2tp_l2tun_session_connecting; //type: uint64
        ydk::YLeaf l2tp_l2tun_session_connected; //type: uint64
        ydk::YLeaf l2tp_l2tun_session_disconnected; //type: uint64
        ydk::YLeaf l2tp_l2tun_session_incoming; //type: uint64
        ydk::YLeaf l2tp_l2tun_session_updated; //type: uint64
        ydk::YLeaf l2tp_l2tun_session_circuit_status; //type: uint64
        ydk::YLeaf l2x_lpts_pa_stats_setup_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_destroy_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_alloc_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_alloc_fail_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_init_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_init_fail_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_free_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_pulse_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_pulse_fail_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_bind_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_bind_fail_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_bind_batch_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_bind_batch_fail_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_bind_time; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_expire_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_replay_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_replay_batch_cnt; //type: uint32
        ydk::YLeaf l2x_lpts_pa_stats_replay_time; //type: uint32

}; // L2tpv2::Nodes::Node::Internal::InternalStatsLastClear

class DigestHash : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf md5;
        static const ydk::Enum::YLeaf sha1;

};


}
}

#endif /* _CISCO_IOS_XR_TUNNEL_L2TUN_OPER_ */

